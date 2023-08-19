// using multiple operators
#include<iostream>
using namespace std;
int main()
{
    // arithimetic operators 
    int a=5,b=4;
    // cout<<"enter the value: "<<endl;
    // cin>>b;
    cout<<"the sum of both is: "<<a+b<<endl;
    cout<<"the minus of both is: "<<a-b<<endl;
    cout<<"the divison of both is: "<<a/b<<endl;
    cout<<"the multiplication of both is: "<<a*b<<endl;
    cout<<"the percentage of both is: "<<a%b<<endl;
    cout<<"the increament of both is: "<<a++<<endl;
    cout<<"the decreament  of both is: "<<a--<<endl;
    cout<<"the incr before of both is: "<<++a<<endl;
    cout<<"the decr before of both is: "<<--a<<endl;
    cout<<"___________________________________";

    // comparison operators
   
    cout<<"the value of a is != to b "<<(a!=b)<<endl;
    cout<<"the value of a is < to b "<<(a<b)<<endl;
    cout<<"the value of a is > to b "<<(a>b)<<endl;
    cout<<"the value of a is <= to b "<<(a<=b)<<endl;
    cout<<"the value of a is >= to b "<<(a>=b)<<endl;
    cout<<"the value of a is == to b "<<(a==b)<<endl;
     cout<<"the value of a is = to b "<<(a=b)<<endl;
     cout<<"___________________________________";
    //logical operators
    cout<<"the value of (a=b)&&(a<b) is: "<<((a=b)&&(a<b))<<endl;
    cout<<"the value of (a=b)||(a<b) is: "<<((a=b)||(a<b))<<endl;
    

    return 0;
}