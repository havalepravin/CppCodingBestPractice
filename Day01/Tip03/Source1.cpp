#include <exception>

void f(unsigned int n);

int main()
{
	int n = 1;
	f(n);
	f(3);
	f(7);
}

void f(unsigned int n)
{
	if (n < 0 || n > 5)
		throw std::exception();
	/* Do some processing*/
}

/*
Problem : Exception is throwing at run time if value does not satisfy the condition.
*/