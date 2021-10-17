#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int bin = 0;
    int x = 1;

    while (x <= n)
    {
        x *= 2;
    }
    x = x / 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n = n - lastDigit * x;
        x = x / 2;
        bin = bin * 10 + lastDigit;
    }

    return bin;
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << decimalToBinary(n);

    return 0;
}