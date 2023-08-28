#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    void display()
    {
        cout<<"the base class variable value is : "<<a<<endl;
        
    }
};
class derived : public base
{
    public:
    int b;
    void display()
    {
        cout<<"the derived class variable value is : "<<b<<endl;
    }
};
int main()
{
    base obj_base;
    derived obj_derived;
    base  *base_ptr=&obj_derived;
    derived *derived_ptr;
    derived_ptr = &obj_derived;
    derived_ptr->a=55;
    derived_ptr->b=20;;
    derived_ptr->display();
return 0;
}