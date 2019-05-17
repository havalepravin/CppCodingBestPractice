class Integer {

public:
	Integer(int i) : m_i(i) {}
public:
	int GetI() const { return m_i; }
public:
	Integer& operator++() { //prefix ++
		++m_i;
		return *this;
	}

	Integer operator++(int) { //postfix ++
		Integer Temp(*this);
		m_i++;
		return Temp;
	}

private:
	int m_i;
};

int main() 
{
	Integer a(1), b(0);
	b = ++a;
	b = a++;
}
/*
Pefer prefix 	form of increament or decreament operator
wherever possible. If you dony need original value.
*/