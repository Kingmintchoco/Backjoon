#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, m, ret;
    multiset <int> a, b;

    cin >> n >> m;
    while(n--){
        cin >> ret;
        a.insert(ret);
    }

    while(m--){
        cin >> ret;
        b.insert(ret);
    }

    multiset <int> ab(a.begin(), a.end());
    multiset <int> ba(b.begin(), b.end());  

    for(auto iter : b){
        auto it = ab.find(iter);
        if(it != ab.end()) ab.erase(it);
    }

    for(auto iter : a){
        auto it = ba.find(iter);
        if(it != ba.end()) ba.erase(it);
    }

    for(auto iter : ab) cout << iter << " ";
    cout << "\n";

    for(auto iter : ba) cout << iter << " ";
    cout << "\n"; 

    int answer = ab.size() + ba.size();
    cout << answer << "\n";
}