#include <Windows.h>

class Shape {

public:
	virtual Draw() {
	
	}
};

int main()
{
	CHOOSEFONT cf; //It is POD plain old data
	memset(&cf, 0, sizeof(CHOOSEFONT)); //Good usage of memory function.

	Shape shape;
	memset(&shape, 0, sizeof(Shape)); // Bad usage of memory function. Here Vptr turns to zero which leads to lsot of the address.

}

/*
Use memory function with POD ONLY.
Dont use mem kind of functions with non POD data.
*/