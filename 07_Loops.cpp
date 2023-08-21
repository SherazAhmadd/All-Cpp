#include<iostream>
using namespace std;
int main()
{
    // for loop
  int i;
    for (i=1;i<=10;i++)
    {
        cout<<i;
    }
    cout<<endl;
    // while loop
    int j=1;
    while(j<10)
    {
        cout<<"i am doing my best now";
        j++;
        cout<<endl;
        
    }
    // do while loop (it executed at-least one time without checking condition)
    int k=1;
    do
    {
       cout<<"and i am the best"<<endl;
       k++;
    } while (k<10);
    
    
return 0;
}