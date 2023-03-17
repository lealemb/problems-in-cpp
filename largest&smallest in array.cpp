//Find the largest and smallest elements of an array.
#include<iostream>
using namespace std;

int main()
{
    int a[] = {23,6,328,34,12,234,9,23,4,54};
    int largest = a[0];
    int smallest = a[0];

    for(int i=0;i<10;i++)
    {
        if(a[i]>largest)
            largest = a[i];
        if(a[i]<smallest)
            smallest = a[i];
    }
    cout << "Largest "<<largest<<"\nSmallest "<<smallest<<"\n";
    return 0;
}
