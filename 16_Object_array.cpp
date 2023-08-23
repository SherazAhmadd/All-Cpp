#include<iostream>
using namespace std;
class employee
{
    int id,salary=5000;
    public:
  static int count;
  
    void setdata()
    {
        count++;
        cout<<"enter the employee "<<count<<" id: "<<endl;
        cin>>id;
    }
    void display();
};
int employee::count;
void employee :: display()
{
    cout<<"the employee "<<count<<" id is: "<<id<<"\n his salary is "<<salary<<endl;
}
int main()
{
    int e=0;
    cout<<"how you want employee of this company "<<endl;
    cin>>e;
    employee f[e];
    for (int i = 0; i < e; i++)
    {
        f[i].setdata();
        f[i].display();
    }
    
return 0;
}