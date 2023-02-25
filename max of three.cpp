//Finding the max of three numbers

#include <iostream>
using namespace std;
double maximum(double x, double y, double z);
int main(int argc, char** argv) {
    double num1,num2,num3;
    cout<<"Three numbers:";
   cin>>num1>>num2>>num3;
  cout<<"The maximum is :"<<maximum(num1,num2,num3);
return 0;
}
double maximum(double x, double y, double z){
    double max=x;
    if(y>max)   max=y;
    if(z>max)   max=z;
    return max;
}
void sqr(void){
	int no;
	cout<<"Enter anumber"<<endl;
	cin>>no;
	cout<<"square of a number is "<<no*no;
}
