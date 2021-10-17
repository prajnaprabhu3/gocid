#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int num)
{
    int sum = 0;
    sum = num * (num + 1) / 2;
    return sum;
}
int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "The sum of first " << n << "numbers is: ";
    cout << sumOfNaturalNumbers(n);

    return 0;
}