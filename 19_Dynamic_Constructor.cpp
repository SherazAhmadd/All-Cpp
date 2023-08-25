#include<iostream>
using namespace std;

class bank
{
private:
    int amount;
    int years;
    float interest;
    float profit;

public:
    // Default constructor
    bank() {}

    // Parameterized constructor
    bank(int a, int y, float r)
    {
        amount = a;
        years = y;
        interest = r;
        profit = amount;
        for (int j = 0; j < y; j++)
        {
            profit = profit * (1 + interest);
        }
    }
    bank(int a, int y, int r)
    {
        amount = a;
        years = y;
        interest = float(r)/100;
        profit = amount;
        for (int j = 0; j < y; j++)
        {
            profit = profit * (1 + interest);
        }
    }

    // Display the calculated profit
    void display()
    {
        cout << "Your amount after " << years << " years is " << profit << endl;
    }
};

int main()
{
    bank depo,depo1,depo2;
    int a, y;
    float r;
    int R;

    cout << "Enter amount, years, and interest rate: ";
    cin >> a >> y >> r;

    depo1= bank(a, y, r);
    depo1.display();


    cout << "Enter amount, years, and interest rate: ";
    cin >> a >> y >> R;
    depo2 = bank(a,y,R);
    depo2.display();
   

    return 0;
}
