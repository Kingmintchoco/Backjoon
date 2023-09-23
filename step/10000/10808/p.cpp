#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector <int> v(26);

void init(){
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int main(){
    init();

    string s;
    cin >> s;

    for(char c : s){
        for(int i = 0; i < 26; ++i){
            if(i == c - 97) v[i]++;
        }
    }

    for(int i = 0; i < 26; ++i) cout << v[i] << " ";
}