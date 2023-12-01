#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int main(){
    freopen("p2.txt", "rt", stdin);

    long long n, m, ans = LLONG_MAX;
    cin >> n >> m;

    vector <long long> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long l = 0, r = 0;
    while(l <= r && l < n && r < n){
        long long ret = v[r] - v[l];

        if(ret < m){
            r++;
        }else{
            ans = min(ans, ret);
            l++;
        }
    }

    cout << ans << "\n";
}