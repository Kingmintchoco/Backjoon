#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

string str;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> str;

    vector <int> v(str.size(), 0);
    for(int i = 0; i < str.size(); ++i) v[i] = stoi(str.substr(i, 1));

    for(int i = 0; i < str.length(); ++i){
        int MAX = i;
        for(int j = i + 1; j < str.length(); ++j){
            if(v[j] > v[MAX]) MAX = j;
        }
        
        if(v[i] < v[MAX]) swap(v[i], v[MAX]);
    }

    for(int i = 0; i < v.size(); ++i) cout << v[i];
    cout << "\n";
}