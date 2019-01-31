#include<iostream>
using namespace std;
int main()
{
	int x,y ;
	cout<<"enter the value of x :";
	cin>>x;
	cout<<"enter the value of y :";
	cin>>y;
	int s= (x+y)/(x-y);
	cout<<"the value is :"<<s;
	int t=(x+y)*(x-y);
	cout<<"the value is :"<<t;
	}
