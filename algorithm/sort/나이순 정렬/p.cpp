#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool cmp(const pair <int, string> &a, const pair <int, string> &b){
    return a.first < b.first;
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n, age;
    string name;
    vector <pair <int, string> > dic;

    cin >> n;
    while(n--){
        cin >> age >> name;
        dic.push_back(make_pair(age, name));
    }

    stable_sort(dic.begin(), dic.end(), cmp);

    for(auto info : dic) cout << info.first << " " << info.second << "\n";
}