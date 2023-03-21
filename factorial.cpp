/* a program to print a numbers like
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
*/

#include <iostream>
int main()
{
	using namespace std;
	int j,number;
	cout << "Enter number" << "\n";
	cin >> number;
	int fact = 1;
	for (j=1;j<=number;j++){
 		fact = fact*j;
	}
	cout << fact << "\n";
	return 0;
}
