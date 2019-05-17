#include <cstdio>

void f(int a, int b, int c)
{
	printf("%d %d %d", a, b, c);

}

int main()
{
	int i = 1;
	f(i++, i++, i++);
	f(++i, ++i, ++i);
}
/*
Dont write code that depends in evaluation order.
Write simple clean code.
The prediction for f(++i, ++i, ++i); was 7, 6, 5 however it prints 
7, 7, 7. Such type of coding gimics leaves other developer in confusion.
*/