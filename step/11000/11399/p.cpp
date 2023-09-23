#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, tmp, psum[1004], total=0;
vector <int> v;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for(int i = 1; i <= n; ++i){
        psum[i] = psum[i - 1] + v[i - 1];
        total += psum[i];
    }

    cout << total << "\n";
}