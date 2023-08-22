#include<iostream>
using namespace std;
int main()
{
    int a = 12;
    int *b = &a;
    // & --> is reference operator
    cout<<"the address of a is: "<<&a<<endl;
    cout<<"the address of a is: "<<b<<endl;
    // * ---> show the value present at address
    cout<<"the value at address b is: "<<*b<<endl;
    // pointers to pointer
    int **c = &b;
    cout<<"the adress of pointer b is: "<<&b<<endl;
    cout<<"the adress of b is: "<<c<<endl;
    cout<<"the value at address c to b: "<<**c<<endl;
return 0;
}