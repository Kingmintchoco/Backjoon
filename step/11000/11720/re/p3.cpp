#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, vv, ans=0;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%1d", &vv);
        ans += vv;
    }

    cout << ans << "\n";
}