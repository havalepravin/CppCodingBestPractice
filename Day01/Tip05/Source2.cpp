class Circle {

public:
	Circle(unsigned r) : m_r(r) , m_area(-1.0){}
public:
	int GetR() const { return m_r; }
	void SetR(unsigned r) 
	{
		if (m_r != r)
		{
			m_r = r;
			m_area = -1;
		}
	}
public:
	double GetArea() const
	{
		if (m_area < 0)
			m_area = 3.14* m_r* m_r;
		return m_area;
	}
private:
	unsigned m_r;
	mutable double m_area; //It is cache variable
};

int main()
{
	Circle a(1);
	int r = a.GetR();
	double area = a.GetArea();

	const Circle b(2);
	r = b.GetR();
	area = b.GetArea();
}

/*
Implement logical constness with  mutable.
Ensure that primary which mark identify of an object are not declared as mutable.
*/