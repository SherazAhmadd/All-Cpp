#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    int static count;

public:
    void setdata()
    {
        count++;
        cout << "enter employee id of " << count << endl;
        cin >> id;
            }
    void getdata()
    {
        cout << "the employee " << count << " id is " << id << endl;
    }
    int static countt()
    {
        cout<<"the value of count with the creating objects is "<<count<<endl;
        return count;
    }

};
// it must initialize outside the class 
//basicaly,it count how much variable created
int employee :: count;
int main()
{
    employee sheryy, bilal, ahsan;
    sheryy.setdata();
    sheryy.getdata();
    employee::countt();

    bilal.setdata();
    bilal.getdata();
    employee::countt();
 
    ahsan.setdata();
    ahsan.getdata();
    employee::countt();

    return 0;
}