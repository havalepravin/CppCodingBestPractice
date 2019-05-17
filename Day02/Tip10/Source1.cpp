#include <cstdio>

class Base {

public:
	virtual void f(int x = 0) {
		printf("x = %d\n", x);
	}
};

class Derived : public Base {

public:
	void f(int x = 1) {
		printf("x = %d\n", x);
	}
};

int main()
{
	Derived d;
	d.f();
	Base *pbase = &d;
	pbase->f();
}
/*
While compliation it parse all classes and while function call it will decide the what default value 
should pass. As per above f() call for dervied class object it passes 1 as default value. 
for sceond time it is set as 0 for base class object at the time of complilation.
*/