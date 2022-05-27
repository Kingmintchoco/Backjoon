#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int t, n, cnt;
string a, b;
vector <string> c;
set <string> d;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    freopen("p.txt", "rt", stdin);

    cin >> t;

    while(t--){
        // 초기화
        cin >> n;
        cnt = 0;
        c.clear(); d.clear();

        for(int i = 0; i < n; ++i){
            cin >> a >> b;
            c.push_back(a); d.insert(b);
        }

        cnt = c.size() * d.size() - 1;
        cout << cnt << "\n";
    }

}