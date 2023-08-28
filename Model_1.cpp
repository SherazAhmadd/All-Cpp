#include <iostream>
#include <cmath>
using namespace std;
int a, b;
class simplecalculator
{
public:
    void functions()
    {
        cout << "the addition is: " << a + b << endl;
        cout << "the substruction is: " << a - b << endl;
        cout << "the division is: " << a / b << endl;
        cout << "the multiplication is: " << a * b << endl;
    }
    friend simplecalculator setdata();
};
simplecalculator setdata()
{
    cout << "enter first value: " << endl;
    cin >> a;
    cout << "enter second value: " << endl;
    cin >> b;
}
class scientificcalculator : protected simplecalculator
{
public:
    void scientific()
    {
        cout << "the hypsin value of a: " << sinh(a) << "\nthe hypsin value of b: " << sinh(b) << endl;
        cout << "the hypcos value of a: " << cosh(a) << "\nthe hypcos value of b: " << cosh(b) << endl;
        cout << "the square root of a is: " << sqrt(a) << endl;
        cout << "the square root of b is: " << sqrt(b) << endl;
        cout << "the log of a is:" << log(a) << "\nlog of b is: " << log(b) << endl;
    }
};
class hybridcalc : public scientificcalculator
{
public:
    hybridcalc()
    {
        setdata();
        functions();
        scientific();
    }
};
int main()
{
    hybridcalc result;

    return 0;
}