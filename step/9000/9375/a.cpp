#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int t, n;
string a, b;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> t;
    while(t--){
        map <string, int> m;    
        
        cin >> n;

        for(int i = 0; i < n; ++i){
            cin >> a >> b;
            m[b]++;
        }

        // 경우의 수는 굉장히 많을 수 있기 때문에 long long
        long long ret = 1;
        for(auto c : m) ret *= ((long long)c.second + 1);
        ret--;
        cout << ret << "\n";
    }
}