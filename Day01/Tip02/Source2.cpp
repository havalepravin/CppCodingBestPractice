#include <cstring>

class Person
{

public:
	Person(char *pname);
	~Person();
public:
	char *GetName() const;
private:
	char *m_pname;

};

Person::Person(char *pname)
{
	size_t len = strlen(pname);
	m_pname = new char[len+1];
	strcpy_s(m_pname, len + 1, pname);
}

Person :: ~Person()
{
	delete m_pname;
	m_pname = nullptr;
}

char *Person::GetName() const { return m_pname; }

int main()
{
	Person p("jack");
	char *ptr = p.GetName();
	strcpy_s(ptr, 5, "Jill");
}

/*
Dont Expose internal information from an object.

SOLUTION 1: 
	class Person
{

public:
	Person(char *pname);
	~Person();
public:
	const char *GetName() const;
private:
	char *m_pname;

};

Person::Person(char *pname)
{
	size_t len = strlen(pname);
	m_pname = new char[len+1];
	strcpy_s(m_pname, len + 1, pname);
}

Person :: ~Person()
{
	delete m_pname;
	m_pname = nullptr;
}

const char *Person::GetName() const { return m_pname; }

int main()
{
	Person p("jack");
	char *ptr = const_cast<char*>(p.GetName());
	strcpy_s(ptr, 5, "Jill");
}

int main()
{
Person p("jack");
const char *ptr = p.GetName();
strcpy_s(ptr, 5, "Jill");//ERROR i.e why above solution
}
//Let GetName returns a pointer to constant char instead of plain char.
By specifing point to const char, the author of Person wants to convey that no change to internal state
is encouraged.
//

DrawBacks : 
 While creating object of class Perason P he can do casting of const.
	char *ptr = const_cast<char*>(p.GetName());
==============================================================================

SOLUTION 2:
	Encaptulation 
	
*/
