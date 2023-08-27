#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int x) : data1(x)
    {
        // data1 = x;
        cout << "the constructor of base 1 is called " << endl;
    }
    void printbase1()
    {
        cout << "the value of data1 is: " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int y) : data2(y)
    {
        // data2 = y;
        cout << "the constructor of base 2 is called " << endl;
    }
    void printbase2()
    {
        cout << "the value of data2 is: " << data2 << endl;
    }
};
// run constructor first base classes in firstly order then derived one 
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int x, int y, int a, int b) : base1(x), base2(y)
    {
        derived1 = a;
        derived2 = b;
    }
    void display()
    {
        printbase1();
        printbase2();
        cout<<"the value of derived1 is: "<<derived1<<endl;
        cout<<"the value of derived2 is: "<<derived2<<endl;
    }
};
int main()
{
    derived obj(10,25,3,4);
    obj.display();

    return 0;
}