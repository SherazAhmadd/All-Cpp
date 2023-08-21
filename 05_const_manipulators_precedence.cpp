#include<iostream>
// setw library is iomanip
#include<iomanip>
using namespace std;
int main()
{
   const int a=50;
    cout<<"the value of a is: "<<a<<endl;
    // a = 23;
    cout<<"the value of a is: "<<a<<endl;

// manipulators
//endl is also a manipulator in iostream library
// setw() is manipulator for iomanip library
cout<<"--------------------------"<<endl;
int x=10,y=20,z=30;
cout<<"the value of x is: "<<x<<endl;
cout<<"the value of y is: "<<y<<endl;
cout<<"the value of z is: "<<z<<endl;
// by using manipulators
cout<<"the value of x is: "<<setw(4)<<x<<endl;
cout<<"the value of y is: "<<setw(3)<<y<<endl;
cout<<"the value of z is: "<<setw(2)<<z<<endl;
// expression with precedence
//first it goes with bodmas rule then goes with associativity (left to right)
cout<<"the expression value is: "<<((((x*y)+5)/a)-25);
return 0;
}