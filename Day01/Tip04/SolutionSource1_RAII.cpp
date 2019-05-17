#include <memory>
#include <exception>
#include <crtdbg.h>

using namespace std;

class A
{
public:
	A() { throw exception(); }

};

class B {};

void f(shared_ptr<A> u, shared_ptr<B> v) {}

int main()
{
	try {
		shared_ptr<A> u(new A);
		shared_ptr<B> v(new B);
		f(u, v);
	}
	catch (const exception &e) {
	}
	_CrtDumpMemoryLeaks();
}
/*
When allocating a new resource, immediately pas it on to owning object.

Never allocate more that one resource in a single statement.
*/