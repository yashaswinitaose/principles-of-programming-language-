#include<iostream>
using namespace std;

int sum(int a ,int b)
{
	int s = a ^ b;
	int carry = a&b;
	if (carry==0)
	return s;
	else 
	return sum(s, carry<<1);
}

int main()
{
	int a,b;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	int add = sum(a,b);
	cout<<"the addition is :"<<add;
}


