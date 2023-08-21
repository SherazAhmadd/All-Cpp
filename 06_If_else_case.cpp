#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<age<<endl;
    cin>>age;
    if ((age>18)&&(age>1))
    {
        cout<<"you can come here"<<endl;
    }
   else  if(age==18)
    {
        cout<<"you can come with pass"<<endl;
    }
    else if(age<18)
    {
        cout<<"you can't come"<<endl;
    }
    else if(age<1) 
    {
        cout<<"pehly peda tu hoja"<<endl;
    }
    // switch cases
    switch (age)
    {
    case 18:
       cout<<"you can come with pass(switch) "<<endl;
        break;
        case 20:
       cout<<"you can come(switch) "<<endl;
        break;
        case 8:
       cout<<"you can't come(switch) "<<endl;
        break;
    default:
      cout<<"you did'nt even put those 3 nums(switch) "<<endl;
        break;
    }

return 0;
}