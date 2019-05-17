#include <crtdbg.h>

#define RELEASE_PTR(ptr) delete ptr; ptr = nullptr;

template <class T>
inline void release_ptr(T *&ptr)
{
	delete ptr;
	ptr = nullptr;
}

int main()
{
	int *iptr = new int;
	*iptr = 5;
	//RELEASE_PTR(iptr); // Example of Code substitution
	*iptr = 10;
	release_ptr(iptr);
}

/*
Macros remains the only solutions:
-When substituion of code to be done.
-When dealing with multiple inclusion guards.
-Macro functions can not be debugged where as inline functions.
*/