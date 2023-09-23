#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, a[1004], p[1004], cnt=0;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
        p[i] = (p[i] % m);
        if(!p[i]) ++cnt;
    }

    

    cout << cnt << "\n";
}