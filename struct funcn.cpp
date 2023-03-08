//structure and function
#include <iostream>
using namespace std;

struct person{
	char name[40];
	int age;
	float salary;
	
};

void displayData(person);


int main(int argc, char** argv)
 {
 	person p;
 	cout<<"Enter Full name: "<<endl;
 	cin.get(p.name,40);
 	cout<<"Enter age: "<<endl;
 	cin>>p.age;
 	cout<<"Enter salary: "<<endl;
 	cin>>p.salary;
 	
 	displayData(p);
 	
	return 0;
}

void displayData(person p){
	cout<<"Display all information: "<<endl;
	cout<<"Name: "<<p.name<<endl;
	cout<<"age: "<<p.age<<endl;
	cout<<"salary: "<<p.salary;
}

