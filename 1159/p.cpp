#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
string s, a;
vector <int> v(26);

void init(){
    // ios sync
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // test
    freopen("p.txt", "rt", stdin);
}

int main(){
    init();

    cin >> N;

    for(int i = 0; i < N; ++i){
        if(!s.empty()) s.clear();
        cin >> s;
        v[s[0] - 'a']++;
    }

    for(int i = 0; i < 26; ++i) if(v[i] >= 5) a += i + 'a';

    if(a.size()) cout << a << "\n";
    else cout << "PREDAJA\n"; 
}