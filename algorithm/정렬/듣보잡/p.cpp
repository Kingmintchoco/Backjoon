#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, m, cnt = 0;
    string name;
    vector <string> dic;
    map <string, int> dontsee;

    cin >> n >> m;
    while(n--){
        cin >> name;
        dontsee[name]++;
    }

    while(m--){
        cin >> name;
        if(dontsee.find(name) != dontsee.end()){
            cnt++;
            dic.push_back(name);
        }
    }

    sort(dic.begin(), dic.end());
    cout << cnt << "\n";
    for(auto info : dic) cout << info << "\n";
}