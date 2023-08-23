#include<iostream>
using namespace std;
class shama 
{
    private:
    string shoes_type[100];
    int price[100];
    public:
    int counter = 1;
    int items=0;
    void getdata()
    {
        cout<<"enter shoes type: "<< counter << endl;
        cin>>shoes_type[counter];
        cout<<"enter the price of shoe: "<<endl;
        cin>>price[counter];
        counter++;
    }
    void display()
    {
        for(int i=0;i<counter;i++)
        {
        cout<<"The "<<shoes_type[i]<< " price is:"<<price[i]<<endl; 
        }
    }
};
int main()
{
    shama shoe;
    cout<<"how many enteries you have to enter here? "<<endl;
    cin>>shoe.items;
    for(int i=0;i<shoe.items;i++)
    {
        shoe.getdata();
    }
    shoe.display();

return 0;
}