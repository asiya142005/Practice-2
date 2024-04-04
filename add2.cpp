#include<iostream>
using namespace std;
int addition(int a,int b)
{
	cout<<"\n"<<a+b;
}
int main()
{
	int x,y,result;
	cout<<"enter values for x:";
	cin>>x;
	cout<<"enter values for y:";
	cin>>y;
	addition(x,y);
}
