#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);
    
    long long n, k, ans;
    cin >> n >> k;

    long long l = 1, r = k, mid;
    while(l <= r){
        mid = (l + r)/2;

        long long count = 0;
        for(int i = 1; i <= n; ++i)
            count += min(mid / i, n);
        
        if(count < k)
            l = mid + 1;
        else{
            ans = mid;
            r = mid - 1;
        }
    }

    cout << ans << '\n';
}