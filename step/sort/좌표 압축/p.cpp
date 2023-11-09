#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    vector <long long> v(n);
    vector <long long> ans(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
        ans[i] = v[i];
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());   // 중복 제거

    for(int i = 0; i < n; ++i){
        auto it = lower_bound(v.begin(), v.end(), ans[i]);
        cout << it - v.begin() << " ";
    }
    
    cout << "\n";
}