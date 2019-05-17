class A {};

//f is a legacy function and time tested function.
void f(A *pa)  {

}

int main()
{
	const A a;
	//f(&a);
	f(const_cast<A*> (&a));
}
/*
For eg F() is written many year back class 
*/