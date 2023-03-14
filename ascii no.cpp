// print ascii code of the given character
 #include <iostream>
using namespace std;
int main() 
{
    char ch; 
	cout << "\n\n Print code (ASCII code / Unicode code etc.) of a  given character:\n";
	cout << "-----------------------------------------------------------------------\n";
 	cout << " Input a character: ";
	    cin >> ch;	
	
  cout <<" The ASCII value of "<<ch<<" is: " <<(int)ch << endl; 
  cout <<" The character for the ASCII value "<<(int)ch <<" is: "<<(char)((int)ch) << endl<< endl; 
  return 0;
}
