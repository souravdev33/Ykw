#include <iostream>
using namespace std;

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}


int binaryToDecimal(int ones) {
    int result = 0;
    for (int i = 0; i < ones; i++) {
        result = (result << 1) | 1;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        
        int onesCount = countOnes(N);
        int result = binaryToDecimal(onesCount);
        
        cout << result << endl;
    }
    return 0;
}
