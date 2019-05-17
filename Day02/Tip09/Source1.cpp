#include <crtdbg.h>
#include <exception>

void app_terminate() {
	_CrtDumpMemoryLeaks();
	abort();
}

class X{

public:

	X() : m_ptr(new char) {}
	~X() {
		delete m_ptr;
		throw std::exception();
	}

private:
	char *m_ptr;
};

int main()
{
	std::set_terminate(app_terminate);
	X *p = new X[5];
	delete[]p;
}
/*
You should never write exception from destructor or deallocation function.
*/