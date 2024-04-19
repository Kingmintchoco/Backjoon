#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int alpha[26];

int main(){
    freopen("p.txt", "rt", stdin);

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        alpha[str[i] - 'a']++;
    }

    for(int i = 0; i < 26; ++i) cout << alpha[i] << " ";
    cout << "\n";
}