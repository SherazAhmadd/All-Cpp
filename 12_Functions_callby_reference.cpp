#include<iostream>
using namespace std;
int sum(int n1,int n2)
{   
    int c = n1+n2;
    return c;

}void swap(int* a,int *b)
{
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;

}
void swapRef(int &a,int &b)
{
    int temp=0;
    temp = a;
    a = b;
    b = temp;

}
int main()
{
    int num1=5,num2=4;
    cout<<"the sum of 5 and 4 is: "<<sum(num1,num2)<<endl;
    cout<<"the value of num1 is: "<<num1<<endl;
    cout<<"the value of num2 is: "<<num2<<endl;
//     //swaping the values by using the pointers
//     swap(&num1,&num2);
//   cout<<"the value of num1 by pointer is: "<<num1<<endl;
//   cout<<"the value of num2 by pointer is: "<<num2<<endl;
// comment because it reverse the swapping values again 

  //swapping by reference variable
  
  swapRef(num1,num2);
  cout<<"the value of num1 by reference  is: "<<num1<<endl;
  cout<<"the value of num2 by reference  is: "<<num2<<endl;


    
return 0;
}