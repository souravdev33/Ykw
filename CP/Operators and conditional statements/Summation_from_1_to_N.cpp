#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
 
    long long sum = n * (n + 1) / 2;
    
    cout << sum << endl;
    return 0;
}
