#include<iostream>
using namespace std;
int add(int a,int b)
{
	cout<<"\n"<<a+b;
}
int multiply(int a,int b)
{
	cout<<"\n"<<a*b;
}
int main()
{
	int x,y,result;
	cout<<"enter values for x:";
	cin>>x;
	cout<<"enter values for y:";
	cin>>y;
	add(x,y);
	multiply(x,y);
}
