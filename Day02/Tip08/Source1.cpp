class A {

public :
	A() {
	}
	A(const A &a) {
	}

public:
	A& operator=(const A &a)
	{
		return *this;
	}
};

class B{

public:
	// Following constructor invokes default constructor of class A
	//for m_a object to construct. In all only one function is called.
	B(const A &obj) {
		m_a = obj;
	}

private:
	A m_a;
};

int main()
{
	A u;
	B v(u);
}
/*
Prefer initialization over assignment.
*/