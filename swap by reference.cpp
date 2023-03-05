/* call the function swap() by passing values by reference*/

#include<iostream>
using namespace std;
void swap(int&x, int&y)
{
int temp;
temp = x; /* save the value at address x */
x = y; /* put y into x */
y = temp; /* put x into y */
return;
}
int main ()
{
// local variable declaration:
int a = 100;
int b = 200;
cout<< "Before swap, value of a :" << a <<endl;
cout<< "Before swap, value of b :" << b <<endl;
/* calling a function to swap the values using variable reference.*/
swap(a, b);
cout<< "After swap, value of a :" << a <<endl;
cout<< "After swap, value of b :" << b <<endl;
return 0;
}
