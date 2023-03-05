/* C++ Program to Swap two numbers using call by address  */
#include <iostream>
using namespace std;
void swap(int*, int*);

int main(){
	int a,b;
	cout<<"Enter  value of A :";
	cin>>a;
	cout<<"Enter value of B :";
	cin>>b;
	cout<<"\nBefore swapping, value of A :"<<a<<endl;
	cout<<"\nBefore swapping, value of B :"<<b<<endl;
	swap(&a,&b);
	cout<<"Outside function after swapping, value of A :"<<a<<endl;
	cout<<"Outside function after swapping, value of  :"<<b<<endl;

}

void swap(int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	cout<<"Inside function after swapping, value of : \n\tA ="<<*a<<"\tB ="<<*b<<"\n";
	
}
