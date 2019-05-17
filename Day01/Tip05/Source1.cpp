class Circle {

public:
	Circle(unsigned r) : m_r(r) {}
public:
	int GetR() { return m_r; }
private:
	unsigned m_r;
};

int main()
{
	Circle a(1);
	int r = a.GetR();

	const Circle b(2);
	r = b.GetR();//ERROR
}

/*
Const variable can not invoke Non-const method.	

Try to make it your member function const.
When to make function const?
:- As per as possible that your function will not be modified.

Use Const proacivtively.
a const member function can be invoked by both const and non-const objects.
Non-const on cotrary can be invoked only by non-const objects.
Hense if a member function is not making any changes state of the object
(as GetR in above case) Then define such function as being a const member function.

*/