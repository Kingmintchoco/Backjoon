#include <iostream>

using namespace std;

const int button[3] = {300, 60, 10};
int ans[3];

int main(){
    freopen("p.txt", "rt", stdin);

    int t; cin >> t;

    int ret = t;
    for(int i = 0; i < 3; ++i){
        if(ret < button[i]) continue;

        ans[i] = ret / button[i];
        ret %= button[i];
    }

    if(ret != 0) cout << -1 << "\n";
    else {
        for(int i = 0; i < 3; ++i) cout << ans[i] << " ";
        cout << "\n";
    }
}