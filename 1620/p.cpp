#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int n, m;
string s;
map <int, string> p;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> s;
        p.insert(make_pair(i, s));
    }

    string str;
    for(int i = 0; i < m; ++i){
        cin >> str;
        if(isdigit(str[0])){
            int num = stoi(str);
            cout << p.find(num)->second << "\n";
        }else{
            for(auto it = p.begin(); it != p.end(); ++it){
                if(it->second == str) cout << it->first << "\n";
            } 
        }
    }
}
