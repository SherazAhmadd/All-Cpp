#include <iostream>
using namespace std;
class employee
{
   public:
    string name;
    int id;
    int salary = 5000;
    void getdata()
    {
        cout << "enter the id : " << endl;
        cin >> id;
        cin.ignore();
        cout << "enter the name: " << endl;
        getline(cin,name);
       
    }
};
class programmer : protected employee
{
public:
    string speciality;
    void setdata()
    {
        cout << "enter the speciality of programmer " << endl;
        cin >> speciality;
    }
    void inherit()
    {
        if (speciality.empty())
        {
            cout << "enter something" << endl;
        }
        else
        {
           getdata();
        }
    }
    void display()
    {
        cout<<"congratulations Mr/Mrs "<<name<<" with the id "<<id<<" has confirmed your job here ";
    }
};
int main()
{
    programmer p;
    // p.getdata();
    p.setdata();
    p.inherit();
    p.display();
    return 0;
}