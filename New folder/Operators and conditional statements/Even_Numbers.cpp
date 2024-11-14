#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll= long long;
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    if(n==1){
        cout<<-1<<endl;
    }
    for(ll i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }


    return 0;
}