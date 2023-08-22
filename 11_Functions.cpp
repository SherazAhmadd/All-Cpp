#include<iostream>
using namespace std;
int sum(int,int);
 int num1,num2;
 //default argument function

int bank(int currentmoney,float interest=1.08)
{
    return currentmoney*interest;
}


int main()
{
   
  cout<<"enter num 1: "<<endl;
  cin>>num1;
  cout<<"enter num 2: "<<endl;
  cin>>num2;
    int sum(int num1,int num2);
    cout<<"the sum of both num is: "<<sum(num1,num2)<<endl;
    //executing default argument function
    int money;
cout<<"enter your bank money "<<endl;
cin>>money;
cout<<"if you have "<<money<<"in your bank acc then you will received"<<bank(money)<<endl;
cout<<"and if you are premium bank acc and you have "<<money<<"you'll received "<<bank(money, 1.15);
// one more function has exist and this is incline function if we use we just saved the execution time
// it does'nt effect on output and it is not an good idea to use incline func with long code functions
return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
}



