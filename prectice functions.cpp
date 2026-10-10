#include<iostream>
#include<conio.h>
#include<windows.h>
#include<String.h>
using namespace std;
void swap(int a,int b);
int main()
{

int a=10,b=20;
swap(a,b);
return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"a"<<a;
	cout<<"b"<<b;
}
