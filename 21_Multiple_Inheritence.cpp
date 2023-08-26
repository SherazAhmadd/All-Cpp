#include<iostream>
using namespace std;
class var1
{
    protected:
    int no1;
    public:
    void setno1()
    {
        cout<<"enter the no1: "<<endl;
        cin>>no1;
    }
};
class var2
{
    protected:
    int no2;
    public:
    void setno2()
    {
        cout<<"enter the no2: "<<endl;
        cin>>no2;
    }
};
class var3
{
    protected:
    int no3;
    public:
    void setno3()
    {
        cout<<"enter the no3: "<<endl;
        cin>>no3;
    }
};
class sum : public var1,public var2,public var3
{
   public:
    sum ()
   {
    setno1();
    setno2();
    setno3();
    cout<<"the sum of three numbers is: "<<no1+no2+no3<<endl;
   }
};  
int main()
{
    sum n;
    
return 0;
}