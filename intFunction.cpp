#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double circleMeasurements(int x,int type)
{
	const double radii = 3.14159;
	double result;

	if(type==0)
	{
		result = pow(x,2)*radii;
	}
	if(type==1)
	{
		result = 2*radii*x;
	}

	return result;
}

int main()
{
	int x,type;

	cout<<"Enter an x value: ";
	cin>>x;
	cout<<"Enter a type: ";
	cin>>type;
	
	if(type==0)
		cout<<setprecision(2)<<fixed<<"Your area is: "<<circleMeasurements(x,type);
	if(type==1)
		cout<<setprecision(2)<<fixed<<"Your circumference is: "<<circleMeasurements(x,type);

	cout<<endl;


	return 0;
}