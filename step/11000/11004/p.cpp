#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, k;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> k;
    vector <int> v(n, 0);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(auto vv : v) cout << vv << " ";
    cout << "\n";

    cout << v[k - 1] << "\n";
}