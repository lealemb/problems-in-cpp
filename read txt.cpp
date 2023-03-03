/* Write a user-defined function in C++ to read the content from 
a text file OUT.TXT, count and display the number 
of alphabets present in it
*/

#include<fstream>
#include <iostream>
using namespace std;
void alphabets();

int main() {
  void alphabets();

  return 0;
}
void alphabets()
{
	ifstream fin;
	fin.open("out.txt");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(isalpha(ch))
			count++;
	}
	cout<<"Number of alphabets in file are "<<count;
	fin.close();
}
