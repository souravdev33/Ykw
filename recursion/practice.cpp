#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int sourav(int n) {
    if(n==0) return 0;
    else{
        return n+sourav(n-1);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++) {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    int n;
    cin>>n;
    int res=sourav(n);
    cout<<res<<endl;
    // sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}