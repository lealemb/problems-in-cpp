/*  C++ Program to Swap two numbers using call by value  */
#include<iostream>
using namespace std;

void swap(int, int);
int main()
{
	int a,b;
	cout<<"Enter Value of a :";
	cin>>a;
	cout<<"Enter value of b :";
	cin>>b;
	cout<<"\nBefore swapping, value of a:"<<a<<endl;
	cout<<"\nBefore swapping, value of b:"<<b<<endl;
	
	swap(a,b);
	cout<<"\noutside Function after swapping, value of a :"<<a<<endl;
	cout<<"\noutside Function after swapping, value of b :"<<b<<endl;


	
}

void swap(int a, int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nInside Function after swapping, value of a :"<<a<<endl;
	cout<<"\nInside Function after swapping, value of b :"<<b<<endl;

}
