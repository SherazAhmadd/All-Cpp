#include <iostream>
using namespace std;
class binary
{
private:
    string bin;

public:
    void getbin()
    {
        cout << "enter the binary numbers: " << endl;
        cin >> bin;
    }
    void check_bin()
    {
        for (int i = 0; i < bin.length(); i++)
        {
            if (bin[i] != '0' && bin[i] != '1')
            {
                cout << "your binary format is incorrect " << endl;
                return;
            }
        }
    }
    void compliment(void);
    void display(void);
};
void binary ::compliment(void)
{
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin[i] == '0')
        {
            bin[i] = '1';
        }
        else if (bin[i] == '1')
        {
            bin[i] = '0';
        }
    }
}
void binary ::display()
{

    cout << "the reserse binary format is: " << bin << endl;
}
int main()
{
    binary b;
    b.getbin();
    b.check_bin();
    b.compliment();
    b.display();
    return 0;
}