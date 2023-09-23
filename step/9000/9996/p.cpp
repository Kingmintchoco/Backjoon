#include <iostream>
#include <string>

using namespace std;

int t;
string s, a, b, c;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    
    freopen("p.txt", "rt", stdin);

    cin >> t;
    cin >> s;
    int pos = s.find('*');
    a = s.substr(0, pos);
    b = s.substr(pos + 1);


    while(t--){
        cin >> c;
        if(a.size() + b.size() > c.size()) cout << "NE\n";
        else{
            if(a == c.substr(0, a.size()) &&
                b == c.substr(c.size() - b.size())) cout << "DA\n";
            else cout << "NE\n";
        }
    }
}