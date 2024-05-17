#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(const pair <int, int> &a, const pair <int, int> &b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    vector <pair <int, int> > coordi;
    while(n--){
        int x, y;
        cin >> x >> y;
        coordi.push_back(make_pair(x, y));
    }

    sort(coordi.begin(), coordi.end(), cmp);

    for(auto pos : coordi) cout << pos.first << " " << pos.second << "\n";
}