#include <iostream>
#include <algorithm>

using namespace std;

int dp[5004];

int main(){
    int n;
    cin >> n;

    dp[3] = 1;
    dp[5] = 1;

    for(int i = 6; i <= n; ++i){
        if(dp[i - 3]) dp[i] = dp[i - 3] + 1;
        if(dp[i - 5]) dp[i] = dp[i - 5] + 1;
    }

    if(!dp[n]) cout << -1 << "\n";
    else cout << dp[n] << "\n";
}