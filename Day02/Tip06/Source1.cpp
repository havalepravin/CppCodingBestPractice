#include <assert.h>

//Written by framwork developer

class Base {

public:
	Base();
	

public:
	virtual void f() {}
	void g() {}
};

Base *g_pderived = nullptr;

Base:: Base()
{
	g_pderived = this;
}

int main()
{
	Base *pbase = g_pderived;
	assert(pbase != nullptr);
	pbase->f();
	delete pbase;
}
//-----------------------------------------

//Written by client developer - library based
class Dervied : public Base {

public:
	void f() {
	
	}

};

Dervied theDerived;

/*
Make use of assert to check validation.
*/