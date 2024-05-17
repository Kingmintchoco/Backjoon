#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> v;
int psum[300004];

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    int n, q, ret, l, r, answer;

    cin >> n >> q;
    for(int i = 0; i < n; ++i){
        cin >> ret;
        v.push_back(ret);
    }

    sort(v.begin(), v.end());   // 오름차순(비내림차순) 정렬

    for(int i = 1; i <= n; ++i){
        psum[i] = psum[i - 1] + v[i - 1];
    }

    while(q--){
        cin >> l >> r;
        answer = psum[r] - psum[l - 1];
        cout << answer << "\n";
    }
}