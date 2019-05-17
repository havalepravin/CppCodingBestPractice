//We need to extract integer portion or a real number.

int main()
{
	float f = 1.2f;
	//int i = (int)f; //C style casting.
	int i = static_cast <int> (f);
}
/*
Use C++ style type casting.
*/