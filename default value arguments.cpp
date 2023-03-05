//default value for parameters or default value arguments

#include<iostream>
using namespace std;
void Add_Display(int x=10, int y=20, int z=30)
{
cout<< (x+y+z)<<endl;
}
void Mult_Dispaly(long int x,long int y=70,long int z=90)
{
cout<< (x*y*z)<<endl;
}
void MIN_Display(int x,int y,int z=4)
{
cout<< (x-y-z)<<endl;
}

int main()
{

int a=40, b=50, c=60;

Add_Display(a,b,c);   //will print 150 (ie 40+50+60)
Add_Display(a,b);   //will print 120 (ie 40+50+30)
Add_Display(a);   //will print 90 (ie 40+20+30)
Add_Display();    //will print 60 (ie 10+20+30)
Mult_Dispaly(a,b,c);   //will print 120000 (40*50*60)
Mult_Dispaly(a,b);   //will print 180000 (40*50*90)
Mult_Dispaly(b);   //will print 315000 (50*70*90)
MIN_Display(a,b,c);
MIN_Display(a,b);
MIN_Display(c,b,5);  //will print 5(60-50-5)
return 0;
}
