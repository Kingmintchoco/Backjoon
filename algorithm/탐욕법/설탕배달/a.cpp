#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    while(n >= 0){
        if(n % 5 == 0){
            ans += (n / 5);
            cout << ans << "\n";
            return 0;
        }

        n -= 3;
        ans++;
    }

    cout << -1 << "\n";
}