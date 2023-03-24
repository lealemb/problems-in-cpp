#include<iostream>
using namespace std;

void eo(int x)
{
    if (x%2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";
}

int main()
{
    eo(4);
    eo(5);
    return 0;
}
