#include <bits/stdc++.h>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    cin >> n >> i;

    int x = (n & (1 << i)) != 0;

    if(x){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;

}
