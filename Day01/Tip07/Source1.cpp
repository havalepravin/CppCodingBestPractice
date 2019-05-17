#include <iostream>

using namespace std;

class A 
{
public:
	A() {}
	~A() {}
public: 
	void Foo() {}

};

bool f() {/* Something has gone wrong hense*/ 
	return false;
}

int main()
{
	//A a; construct will get call
	if (f() == false)
	{
		cout << "There is an error in the program. Hence Cannot continue";
		return 0;
	}
	A a;
	a.Foo();

}

/*
This code has a drawback that we are defining object of A before if condition.
The defination would call constructor. Later if the condition goes true(i.e. returns false)
then we are existing the program. This waste initial processing solution is to define object A
where actually it is required.

*/