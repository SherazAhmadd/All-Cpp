#include <iostream>
using namespace std;
struct teacher
{
    int age;
    string name;
    float salary;
} t1, t2;
union salary
    {
        int pkr;
        float pound;
        double usd;
    }m1;
enum menu {daalchawal,karahi,pitza,borgor};
int main()
{
    salary m1;
    teacher t1, t2;
    cout<<"enter the age of ali: "<<endl;
    cin >> t1.age;
    t1.name = "ali";
     cout<<"enter the salary of ali: "<<endl;
    cin >> t1.salary;
     cout<<"enter the age of anum: "<<endl;
    cin >> t2.age;
    t2.name = "anum";
     cout<<"enter the salary of anum: "<<endl;
    cin >> t2.salary;
    cout << "the age of teacher is: " << t1.age << endl;
    cout << "the name of teacher is: " << t1.name << endl;
    cout << "the salary of teacher is: " << t1.salary << endl;
    cout << "the age of teacher is: " << t2.age << endl;
    cout << "the name of teacher is: " << t2.name << endl;
    cout << "the salary of teacher is: " << t2.salary << endl;
    // now let's took an eye on union
    cout<<"enter in pkr: "<<endl;
    cin>>m1.pkr;
    cout<<"enter in pound: "<<endl;
    cin>>m1.pound;
    cout<<"enter in usd: "<<endl;
    cin>>m1.usd;
    cout<<"the salary in usd is: "<<m1.usd<<endl;
    cout<<"the salary in pound is: "<<m1.pound<<endl;
    /*basically in union it use just one variable and as it use 
 so also it display one variable and other one show garbage value*/

//  let take look on the enum
// enum is data type that contain 0,1,2,3,4
// and we assigns differet variables to these numbers
 menu e1 = daalchawal;
 menu e2 = karahi;
 menu e3 = pitza;
 menu e4 = borgor;
 if(e1==0)
 {
    cout<<"you have daalchawal: "<<endl;
 }
 else if(e2==1)
 {
    cout<<"you have kaarhi: "<<endl;
 }
 else if(e3==2)
 {
    cout<<"you have pitza: "<<endl;
 }
 else if(e4==3)
 {
    cout<<"you have borgor: "<<endl;
 }

    return 0;
}