#include "extFunc.h"
#include <iostream>

using namespace std;

int main()
{
	int number;

	cout<<"Enter a number: ";
	cin>>number;

	if(isPrime(number)==false)
	{
		cout<<"Not a prime number";
	}
	else
	{
		cout<<"Prime number";
	}

	cout<<endl;

	return 0;
}