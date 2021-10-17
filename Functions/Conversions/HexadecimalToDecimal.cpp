#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n)
{
    int dec = 0;
    int power = 1;

    int length = n.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            dec += power * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            dec += power * (n[i] - 'A' + 10);
        }
        power *= 16;
    }
    return dec;
}

int main()
{
    string n;

    cout << "Enter n: ";
    cin >> n;

    cout << hexadecimalToDecimal(n);

    return 0;
}