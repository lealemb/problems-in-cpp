/* Write a C++ program, which initializes a string variable to the content 
"Time is a great teacher but unfortunately 
it kills all its pupils. Berlioz" and outputs the string to the disk file OUT.TXT. 
you have to include all the header files if required.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream fout;
	fout.open("OUT.TXT");
	char str[300]="Time is a great teacher but unfortunnately it kills all its puplis.Berlioz";
	fout<<str;
	fout.close();
	return 0;
	
}
