#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int X)
{
    if (X <= 1)
        return false;
    if (X == 2)
        return true;
    if (X % 2 == 0)
        return false;

    int limit = sqrt(X);
    for (int i = 3; i <= limit; i += 2)
    {
        if (X % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int X;
    cin >> X;

    if (isPrime(X))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
