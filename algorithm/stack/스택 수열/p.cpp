#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main(){
    freopen("p2.txt", "rt", stdin);

    int n, m;
    vector <int> v;
    stack <int> stk;

    cin >> n;
    while(n--){
        cin >> m;
        v.push_back(m);
    }

    vector <char> ans;
    int cur = 1, pos = 0;
    while(1){
        if(cur > v.size()) break;

        if(!stk.empty()){
            if(stk.top() == v[pos]){
                pos++;
                ans.push_back('-');
                stk.pop();
            }else{
                ans.push_back('+');;
                stk.push(cur++);
            }
        }else{
            ans.push_back('+');
            stk.push(cur++);
        }
    }

    while(1){
        if(pos >= v.size()) break;

        if(stk.top() == v[pos]){
            pos++;
            ans.push_back('-');
            stk.pop();
            continue;
        }

        pos++;
    }

    if(stk.empty()){
        for(auto a : ans) cout << a << "\n";
    }else cout << "NO\n";
}