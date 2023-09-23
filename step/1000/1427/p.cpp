#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

string str;
vector <int> v;

int cmp(const int a, const int b){
    return a > b;
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> str;
    for(int i = 0; i < str.size(); ++i){
        v.push_back(str[i] - '0');
    }

    sort(v.begin(), v.end(), cmp);

    for(auto vv : v) cout << vv;
}