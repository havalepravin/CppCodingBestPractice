class Rectangle {

public:
	Rectangle(double width, double height) :
		m_width(width), m_height(height), m_area(m_width * m_height) {}


private:
	//double m_area; //wrong way
	double m_width;  
	double m_height;
	double m_area; //Right way
};

int main()
{
	Rectangle r(3.0, 4.0);
}
/*
Must initialize class data member in the same order as they appeared in the declaration.

In case you want to initialize data members in a particular order then declare them in that order.
*/