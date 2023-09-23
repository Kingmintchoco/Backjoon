#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, cnt=0, sum=0, tmp;
vector <int> a;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    int s = 0, e = n - 1;
    while(s < e){
        if(a[s] + a[e] > m) e--;
        else if(a[s] + a[e] < m) s++;
        else {
            s++;
            e--;
            cnt++;
        }
    }

    cout << cnt << "\n";
}