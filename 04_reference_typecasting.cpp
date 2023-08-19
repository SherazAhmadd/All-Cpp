#include<iostream>
using namespace std;
int c=5;
int main()
{
    // accessing the global variables
    int a,b,c;
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum of a and b is: "<<c<<endl;  
    cout<<"the global c value is: "<<::c<<endl;  
    cout<<"__________________________"<<endl;
    // accessing the data types sizes
    float g = 3.14;
    double h =3.15;
    long double j = 3.16;
    cout<<"the size of float is:  "<<sizeof(g)<<endl;
    cout<<"the size of double is:  "<<sizeof(h)<<endl;
    cout<<"the size of long double is:  "<<sizeof(j)<<endl;
    // f means it takes float size 
    cout<<"the size of long double is:  "<<sizeof(3.16f)<<endl;
    cout<<"_______________________________"<<endl;
    //----------------typecasting---------
    int m = 50;
    float n = 50.55;
    cout<<"the value of m is: "<<m<<endl;
    cout<<"the value of n is: "<<n<<endl;
    // this is typecasting changing variables types 
    cout<<"the value of n is: "<<int(n)<<endl;
    cout<<"the sum of both in float is :"<<m+n<<endl;
    cout<<"the sum of both in int is :"<<int(m+n)<<endl;
    //-------------reference variables--------
    int variable = 50;
    // -->& is reference operator
    int &ref_variable = variable;
    cout<<"the variable value is: "<<variable<<endl;
    cout<<"the ref variable value is: "<<ref_variable<<endl;



return 0;

}