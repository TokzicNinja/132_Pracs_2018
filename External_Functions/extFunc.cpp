#include "extFunc.h"

bool isPrime(int num)
{
	bool prime;
	prime = true;

	if(num==1||num==0)
	{
		return false;	
	}
	else
	{
		for (int i = 2; i <= num/2; i++)
		{
			if(num % i == 0)
			{
				prime = false;
				break;
			}
		}
	}

	return prime;
}