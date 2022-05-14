#include <iostream>
#include <map>
#include <string>

using namespace std;

int n, m;
string s;
map <string, int> m1;
map <int, string> m2;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> s;
        m1[s] = i + 1;
        m2[i + 1] = s;
    }

    for(int i = 0; i < m; ++i){
        cin >> s;
        // if(atoi(s.c_str()) == 0) cout << m1[s] << "\n";
        if(!isdigit(s[0])) cout << m1[s] << "\n";
        else cout << m2[atoi(s.c_str())] << "\n";
    }

}