class Shape {
public:
	virtual ~Shape() {}
};

class Rectangle : public Shape{};

class Line : public Shape {};


int main()
{
	Line l;
	Shape *pshape = &l; //up casting works implicitly

	//Down casting without explicit cast throws error.
	Line *pl = static_cast<Line*>(pshape);

	Rectangle *prect = static_cast<Rectangle*>(pshape);

	Line *pl2 = dynamic_cast<Line*>(pshape);

	Rectangle *prect2 = dynamic_cast<Rectangle*>(pshape);
}