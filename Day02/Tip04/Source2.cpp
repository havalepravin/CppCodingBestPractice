class A {
public:
	A() : m_i(1), m_j(2) {}
public:
	void f() {}

private:
	int m_i;
	int m_j;
};

class B {

public:
	void g() 
	{
		m_d = 3.14;
	}

private:
	double m_d;
};

int main()
{
	A a;
	B *pb = nullptr;
	//pb = (B*)&a; //Invalid assignment
	pb = static_cast<B*>(&a); // C++ casting dosent allow when there is no relation in 2 classes
	pb->g();
}