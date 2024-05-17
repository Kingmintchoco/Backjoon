#include <iostream>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p2.txt", "rt", stdin);

    int n, k, a, cnt = 0;
    vector <int> val;

    cin >> n >> k;
    while(n--){
        cin >> a;
        val.push_back(a);
    }

    for(int i = val.size() - 1; i >= 0; --i){
        if(k < val[i]) continue;

        cnt += k / val[i];
        k %= val[i];
    }

    cout << cnt << "\n";
}