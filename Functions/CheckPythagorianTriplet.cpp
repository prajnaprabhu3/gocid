#include <iostream>
using namespace std;

bool CheckPythagorianTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z)); //a is the largest
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b, c;

    cout << "Enter the values of the three numbers: ";
    cin >> a >> b >> c;

    if (CheckPythagorianTriplet(a, b, c))
    {
        cout << "Pythagorean triplet";
    }
    else
    {
        cout << "Not a Pythagorean triplet";
    }
    return 0;
}