#include <iostream>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, ans=0;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        int tmp; scanf("%1d", &tmp);
        ans += tmp;
    }

    cout << ans << "\n";
}