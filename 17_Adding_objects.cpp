#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void display()
    {
        cout<<"your complex num is: "<<a<<"+"<<b<<"i"<<endl;
    }
    // friend function declaration
    friend complex sumcomplex(complex o1,complex o2);
};
// friend funtion definition 
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setdata((o1.a+o2.a),o1.b+o2.b);
    return o3;
}
int main()
{
    complex o1,o2,sum;
    o1.setdata(2,3);
    o1.display();
    o2.setdata(5,7);
    o2.display();
    sum = sumcomplex(o1,o2);
    sum.display();
    return 0;


}