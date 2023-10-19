#include <iostream>
#include <algorithm>

using namespace std;

int t, k, n;

int dp(int k, int n){
    if(n == 1) return 1;
    if(k == 0) return n;
    return (dp(k - 1, n) + dp(k, n - 1));
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> t;
    while(t--){
        cin >> k >> n;
        cout << dp(k, n) << "\n";
    }
}