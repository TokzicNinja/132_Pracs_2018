#include<iostream>

using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE],num,choice,result,accum=1;

	cout<<"Enter a number: ";
	cin>>num;
	cout<<"Enter a choice: ";
	cin>>choice;


	if(choice==1)
	{
		result = num - SIZE;

		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = result;
		}
	}
	if(choice==2)
	{
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = i - num;
		}
	}
	if(choice==3)
	{
		for (int i = 0; i < SIZE; ++i)
		{
			arr[i] = accum*7*num;
			accum+=1;
		}
	}


	for (int i = 0; i < SIZE; ++i)
	{
		if(i==SIZE)
			cout<<arr[i];
		else
			cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}