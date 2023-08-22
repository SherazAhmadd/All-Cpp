#include<iostream>
using namespace std;
int main()
{
    int marks[10];
    cout<<"enter the marks of 10 students: "<<endl;
    int i=1;
    while (i<10)
    {   
        cin>>marks[i];
        i++;
    }
    // pointers array
    int *p = marks;
    for (int i = 1; i < 10; i++)
    {
        cout<<"the value of students via address is "<<endl<<*(p++);
    }
    
          cout<<"the value of students via address is "<<endl<<marks<<endl;

          
  
    
return 0;
}