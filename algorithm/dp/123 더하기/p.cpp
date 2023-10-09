#include <iostream>
#include <algorithm>

using namespace std;

int dp[20];

int main(){
    int t, n;
    cin >> t;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= 11; ++i){
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }
    
    while(t--){
        cin >> n;
        cout << dp[n] << "\n";
    }
}