#include<iostream>
using namespace std;
int main()
{
int number=100;
	for(int number=100;number<1000;number++ )
	{
	int a=0;
	int b=0;
	int c=0;
	a=number%10;
	b=number/10%10;
	c=number/100;
	if(a*a*a+b*b*b+c*c*c==number)
	{cout<<"Narcissistic Number: "<<number<<endl;
		}        
	}
		system("pause");
	return 0;
}
