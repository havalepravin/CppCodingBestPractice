class Base {

public:
	Base() {
		f();
	}

public:
	void g() {
		f();
	}
	
public:
	virtual void f() {}
};

class Derived : public Base {

public:
	Derived() {
	
	}

	void f() {
	
	}
};

int main()
{
	Derived d;
	d.g();
}

/*
Never call virtual function form the constructor or destructor.
*/