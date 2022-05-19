#include <iostream>
#include <string>

using namespace std;

int n;
string p, l, r, s;
string yes = "DA", no = "NE";

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    freopen("p.txt", "rt", stdin);

    cin >> n >> p;

    int pos;
    pos = p.find('*');

    l = p.substr(0, pos);
    r = p.substr(pos + 1);

    while(n--){
        cin >> s;

        if(s.size() < l.size() + r.size()) cout << no << "\n";
        else {
            if(s.substr(0, l.size()) == l &&
                s.substr(s.size() - r.size()) == r) cout << yes << "\n";
            else cout << no << "\n";
        }
    }
}