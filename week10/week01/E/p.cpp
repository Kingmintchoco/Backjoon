#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int alpha[26];

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    string name;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> name;
        alpha[name[0] - 'a']++;
    }

    bool flag = false;
    for(int i = 0; i < 26; ++i){
        if(alpha[i] >= 5) {
            flag = true;
            char c = i + 'a';
            cout << c;
        }
    }

    if(!flag) cout << "PREDAJA\n";
    else cout << "\n";
}