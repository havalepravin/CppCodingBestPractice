#include <crtdbg.h>
#include <exception>

class X {

public:
	X() {
		m_pi = new int;
		throw std::exception();
	}
	~X() {
		delete m_pi;
		m_pi = nullptr;
	}

private:
	int *m_pi;
};

int main()
{
	try {
		X *ptr = new X; //Use dynamically created X object.
		delete ptr;
		ptr = nullptr;
	}
	catch (std::exception &e)
	{

	}
	_CrtDumpMemoryLeaks();


}
/*
Above memory leaks memory because allocation to m_pi was successful.
The object did not sustain in memory because the constructor of object 
failed to complete successfully, hense destructor for the object was not called.
And due to this the allocation done to m_pi was not released. This caused memory leakage.
*/