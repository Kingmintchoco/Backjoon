#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k, t, ret = -10000004;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    freopen("p.txt", "rt", stdin);

    cin >> n >> k;
    vector <int> prefix(n);
    for(int i = 1; i <= n; ++i){
        cin >> t;
        prefix[i] = prefix[i - 1] + t;
    }

    for(int i = k; i < prefix.size(); ++i){
        ret = max(ret, prefix[i] - prefix[i - k]);
    }

    cout << ret << "\n";
}