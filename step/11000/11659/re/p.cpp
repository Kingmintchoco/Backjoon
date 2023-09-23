#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, a, b, tmp, res=0;
vector <int> ori, sum;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        res += tmp;
        ori.push_back(tmp);
        sum.push_back(res);
    }

    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        if(a < b){
            res = sum[b-1] - sum[a-1-1];
        }else{
            res = sum[a-1] - sum[b-1-1];
        }

        cout << res << "\n";
    }
}