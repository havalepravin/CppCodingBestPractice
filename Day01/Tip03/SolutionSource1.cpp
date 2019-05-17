#include <exception>

enum some_constants
{
	zero,
	one,
	two,
	three
};

void f(some_constants n)
{
	//Getting rid of the if condition.
	/* Do some processing*/
}


int main()
{
	int n = 1;
	f(n);
	f(3);
	f(three);
	f(7);
}


/*
Prefer to write a code that uses the complier to check for invariants(preconditions) during 
compilation instead of checking at runtime.

Statically (compile-time) checked code usally dosent incure runtime overhead.
*/