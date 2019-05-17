#include <cstring>
#include <string>

using namespace std;
class Person
{
public:
	Person(string name);
	~Person();
public:
	string GetName() ;
private:
	string m_name;

};

Person::Person(string name): m_name(name){}

Person :: ~Person(){}

string Person::GetName()  { return m_name; }

int main()
{
	Person p("jack");
	string s= p.GetName();
	s = "jill";
}

/*
Dont expose internal information from an Object.
*/