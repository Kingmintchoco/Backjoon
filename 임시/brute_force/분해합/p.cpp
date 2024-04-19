#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000004];

int sumOfIndex(int num){
    int sum = 0;
    while(num > 0){
        int ret = num % 10;
        sum += ret;
        num /= 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int idx = 0;
    for(int i = 1; i <= n; ++i){
        dp[i] = i + sumOfIndex(i);
        if(dp[i] == n){
            idx = i;
            break;
        }
    }

    if(idx) cout << idx << "\n";
    else cout << 0 << "\n";
}