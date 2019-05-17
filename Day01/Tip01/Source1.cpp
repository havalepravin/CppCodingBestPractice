#include <stdio.h>
//#include <cstdio>
#include <string.h>
//#include <cstring>

int main()
{
	char op []= "Add";
	int a = 1, b = 2, c = 0;
	if (op == "Add")
	{
		c = a + b;
	}
	else if (op == "Sub")
	{
		c = a - b;
	}
}

/*
Above code compiles successfully without warningd when compiled with warning level 3.
However, when warining levels is changed to level 4 it emits 
'=='warning C4130: '==': logical operation on address of string constant

Thus, when complied at lower warning levles it is recommended to compile code with high warning level.

Also, in order to not to skip warnings it is also recommended to set Treat warning as Error setting to Yes.

Allow ensure the code is build with ZERO warnings.

*/

/*
SOLUTION:

int main()
{
char op []= "Add";
int a = 1, b = 2, c = 0;

if (strcmp (op, "Add") == 0)
{
c = a + b;
}
else if (strcmp (op, "Sub") == 0)
{
c = a - b;
}
}


*/