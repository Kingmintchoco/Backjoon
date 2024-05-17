#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    vector <int> ropes(n);
    for(int i = 0; i < n; ++i){
        cin >> ropes[i];
    }

    if(n == 1) {
        cout << ropes[0] << "\n";
        return 0;
    }

    sort(ropes.begin(), ropes.end());

    int ans = ropes.back(), cnt = 2;         // 로프 하나로 들 수 있는 최댓값
    while(1){
        if(cnt > ropes.size()) break;

        int w = ropes[ropes.size() - cnt] * cnt;    // cnt개에서 들 수 있는 최대 중량
        ans = max(ans, w);

        cnt++;
    }

    cout << ans << "\n";
}