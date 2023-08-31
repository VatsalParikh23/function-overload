#include <iostream>
using namespace std;
int sum(int num1,int num2)
{
	return num1+num2;
}
double sum(double num1,int num2)
{
	return num1+num2;
}
double sum(int num1,double num2)
{
	return num1+num2;
}
double sum(double num1,double num2)
{
	return num1+num2;
}
int sum(int num1,int num2,int num3)
{
	return num1+num2+num3;
}
double sum(int num1,int num2,double num3)
{
	return num1+num2+num3;
}
double sum(int num1,double num2,int num3)
{
	return num1+num2+num3;
}
double sum(double num1,int num2,int num3)
{
	return num1+num2+num3;
}
double sum(double num1,double num2,int num3)
{
	return num1+num2+num3;
}
double sum(double num1,int num2,double num3)
{
	return num1+num2+num3;
}
double sum(int num1,double num2,double num3)
{
	return num1+num2+num3;
}
double sum(double num1,double num2,double num3)
{
	return num1+num2+num3;
}
main(){
	cout<<sum(1,2)<<endl;
	cout<<sum(1.5,2)<<endl;
	cout<<sum(1,2.5)<<endl;
	cout<<sum(1.6,2.7)<<endl;
	cout<<sum(1.6,2.7,1)<<endl;
	cout<<sum(1.5,2,1)<<endl;
	cout<<sum(1,2,1)<<endl;
	cout<<sum(1,2,1.5)<<endl;
}

