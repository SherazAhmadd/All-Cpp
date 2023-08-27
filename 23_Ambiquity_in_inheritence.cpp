#include<iostream>
using namespace std;
class base1
{
    public:
    void greet()
    {
        cout<<"hey,what are you doing? "<<endl;
    }
};
class base2
{
    public:
    void greet()
    {
        cout<<"Assalam o alikum!kaisy hain ap? "<<endl;
    }
};
class derived : public base1,public base2
{
    public:
    void greet()
    {
        base1::greet();
        base2::greet();
      cout<<"hehe"<<endl;
    }
};
int main()
{
    derived d;
    d.greet();

    
return 0;
}