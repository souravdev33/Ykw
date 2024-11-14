#include <iostream>
#include <vector>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void printFibonacci(int n) {
    if (n <= 0) return; 
    vector<int> fib(n + 1); 
    fib[0] = 0;
    if (n > 0) fib[1] = 1;

    cout << fib[0] << " ";
    if (n > 0) cout << fib[1] << " ";

    for (int i = 2; i <n; i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
        cout << fib[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    printFibonacci(n);

    return 0;
}
