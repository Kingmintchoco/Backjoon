#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, s, len = 2147000000;

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n >> s;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        if(v[i] >= s) len = 1;
    }

    int l = 0, r = 0, sum = v[l];
    while(l <= r && r < n){
        if(sum >= s){
            len = min(len, r - l + 1);
            sum -= v[l++];
        }else{
            sum += v[++r];
        }
    }

    if(len == 2147000000) cout << 0 << "\n";
    else cout << len << "\n";
}