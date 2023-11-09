#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(const pair <int, int> &a, const pair <int, int> &b){
    return a.second < b.second;
}

int main(){
    freopen("cmp.txt", "rt", stdin);
    
    int n, s, t;
    cin >> n;

    vector <pair <int, int> > a, b;
    while(n--){
        cin >> s >> t;
        a.push_back(make_pair(s, t));
        b.push_back(make_pair(s, t));
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), cmp);

    cout << "=== a sort ===\n";
    for(auto aa : a) cout << aa.first << "->" << aa.second << "\n";

    cout << "=== b sort ===\n";
    for(auto bb : b) cout << bb.first << "->" << bb.second << "\n";
}