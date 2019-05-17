#include <assert.h>
#include <cstdio>

// f is some important function, we want it to be called 
// at the begining of the program
// If f fails, at returns false, in that case the control should exit application.

bool f() 
{
	printf("From f");
	return true; // It's assumed here that everything is ok so far.
}

int main()
{
	assert(f());
}