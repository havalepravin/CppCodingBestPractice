class InvalidAmounException {};

class Account {

public:
	Account(double initialdeposite) {
		if (initialdeposite < 0.0) {
			throw InvalidAmounException();
			//throw new InvalidAmounException(); //Dont go with dynamic exception
		}
		m_balance = initialdeposite;
	}

private:
	double m_balance;
};

int main()
{
	try 
	{
		Account a(-1000.00);		
	}
	//catch (InvalidAmounException e)
	//{
	//	
	//}
	catch (InvalidAmounException &e)
	{

	}
}
/*
Throw exception by value and catch by reference.

If you throw dynamically allocated exception oject then managinig release
of respective object becomes the resposibility.
*/
