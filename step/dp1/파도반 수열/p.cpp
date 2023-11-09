#include <iostream>

using namespace std;

long long dp[104];

int main(){
    freopen("p.txt", "rt", stdin);

    int t, n;
    cin >> t;
    
    dp[1] = dp[2] = dp[3] = (long long) 1;
    for(int i = 4; i <= 100; ++i){
        dp[i] = dp[i - 3] + dp[i - 2];
    }

    while(t--){
        cin >> n;
        cout << dp[n] << "\n";
    }
}