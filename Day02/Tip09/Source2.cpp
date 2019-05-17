#include <crtdbg.h>
#include <exception>

class X{

public:
	X() {
		throw std::exception();
	}
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
While insatantiating object dynamically, if constructor fails to execute 
then the memory allocated to object is released automatically.
*/