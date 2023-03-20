#include<iostream>
using namespace std;

int main()
{
    int x, *y;
    cout << "Enter a number\n";
    cin >> x;
    y = &x;
    cout << "Value of the address of pointer of "<< x << " is "<< &y<<"\n";
    return 0;
}
