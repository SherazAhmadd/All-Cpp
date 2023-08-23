#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    // default constructor
     complex()
    {
        a=0;
        b=0;
    }
    // parameterized constructor
    complex(int x,int y)
    {
        a = x;
        b = y;
    }
   void display()
    {
        cout<<"your number is : "<<a<<"+"<<b<<" = "<<(a+b)<<endl;
    }
 
};
int main()
{
    int a,b;
    cout<<"enter a "<<endl;
    cin>>a;
    cout<<"enter b "<<endl;
    cin>>b;
    complex c(a,b),d(4,6);
    c.display();
    d.display();
    
return 0;
}