#include<iostream>
using namespace std;
class student 
{
    int roll_number;
    string name;
    public:
    void setdata()
    {
        cout<<"enter the roll no: "<<endl;
        cin>>roll_number;
        cin.ignore();
        cout<<"enter the name of student: "<<endl;
        getline(cin,name);
    }
    void display_data()
    {   
        cout<<"student roll no is: "<<roll_number<<endl;
        cout<<"student name is:  "<<name<<endl;
    }
};
class exam : public student 
{
    protected:
    float math;
    float com;
    public:
     void setmark()
     {
        cout<<"enter math marks: "<<endl;
        cin>>math;
        cout<<"enter com marks: "<<endl;
        cin>>com;
        }  
};
class result : public exam
{
    public:
    void display_result()
    {
        setdata();
        setmark();
        cout<<"your result in marks is "<<(math+com)/2<<"%"<<endl;
         display_data();
    }

};
int main()
{
    result sheryy;
    sheryy.display_result();
    
return 0;
}