
// array of strings using
// pointers character array
#include <iostream>
using namespace std;

int main()
{
// Initialize array of pointer
const char* colour[4]
	= { "Blue", "Red", "Orange", "Yellow" };

// Printing Strings stored in 2D array
for (int i = 0; i < 4; i++)
  cout << colour[i] << "\n";

return 0;
}
