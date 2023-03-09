// a programe to check a given string is palindrome or not
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[50];
	char s2[50];
	
	cout <<"Eneter a string :";
	cin.get(s1,50);
	int j=0;
	for(int i=strlen(s1)-1;i>=0;i--,j++)
	s2[j]=s1[i];
	s2[j]='\0';
	cout<<"original string :"<<s1<<endl;
	cout<<"Reversed string :"<<s2<<endl;
	if(strcmp(s1,s2)==0)
	cout<<"The string is palindrome!";
	else
	cout<<"The string is not palindrome!";
	return 0;
}
