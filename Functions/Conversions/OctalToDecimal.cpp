#include <bits/stdc++.h>
using namespace std;

int octalToDecimal(int n)
{
    int dec = 0;
    int power = 1;
    while (n > 0)
    {
        int r = n % 10;
        dec = dec + r * power;
        power *= 8;
        n = n / 10;
    }

    return dec;
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << octalToDecimal(n);

    return 0;
}