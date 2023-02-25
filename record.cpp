/*pointer to array in structure  to record*/
#  
#include<iostream>
#include<string>
using namespace std;

struct person{
	string name;
	int age;
	double salary;
	
};
int main()
{
	person p1;
	cout<<"Enter person details :"<<endl;


		person *ptr = &p1;
		cout<<"enter a name"<<endl;
		cin>>ptr->name;
		cout<<"enter age"<<endl;
		cin>>ptr->age;
		cout<<"enter salary"<<endl;
		cin>>ptr->salary;
		
		cout<<"details of persons as follows"<<endl;
		cout<<"name"<<ptr->name<<endl;
		cout<<"age"<<ptr->age<<endl;
		cout<<"salary"<<ptr->salary<<endl;
		
		return 0;
		
	}
