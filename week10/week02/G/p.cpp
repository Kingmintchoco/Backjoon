#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int n, c, ret;
map <int, int> m1, m2;

bool cmp(const pair <int, int> a, const pair <int, int> b){
    if(a.first == b.first) return m2[a.second] < m2[b.second];
    return a.first > b.first;
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n >> c;
    for(int i = 0; i < n; ++i){
        cin >> ret;
        m1[ret]++;
        if(m2.find(ret) == m2.end()) m2[ret] = (i + 1);
    }

    vector <pair <int, int> > v;
    for(auto it : m1) v.push_back(make_pair(it.second, it.first));
    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v[i].first; ++j) cout << v[i].second << " ";
    }

    cout << "\n";
}