#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int dec = 0;
    int power = 1;
    while (n > 0)
    {
        int r = n % 10;
        dec = dec + r * power;
        power *= 2;
        n = n / 10;
    }

    return dec;
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << binaryToDecimal(n);

    return 0;
}