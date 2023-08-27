#include<iostream>
using namespace std;
class complex 
{
    int real,imaginary;
    public:
    void setdata(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    void getdata()
    {
        cout<<"The real part is: "<<real<<endl;
        cout<<"The imaginary part is: "<<imaginary<<endl;
    }
};
int main()
{
    complex *ptr= new complex;
    ptr ->setdata(2,4);
    ptr ->getdata();  


    
    
return 0;
}