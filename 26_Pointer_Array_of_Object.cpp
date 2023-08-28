#include<iostream>
using namespace std;
class shopitem
{
    int item;
    float price;
    public:
    void input(int item,int price)
    // this is keyword is an pointer that assiggn value to same name variable 
    // this is an pointer keyword
{
   this->item = item;
    this->price = price;
}
   void output()
   {
    cout<<"the item no is: "<<item<<endl;
    cout<<"the price  is: "<<price<<endl;
   }
};
int main()
{
    int size=2;
    shopitem obj[size];
    shopitem*ptr = &obj[size];
    shopitem *ptrtemp = ptr;
    int p,q,i;
    
    for (i = 0; i < size; i++)
    {
        cout<<"enter the item name and price "<<i+1<<endl;
        cin>>p>>q;
        ptr->input(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"item no is: "<<i+1<<endl;
        ptrtemp->output();
        ptrtemp++;
    }
return 0;
}