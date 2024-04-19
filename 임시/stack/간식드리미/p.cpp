#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, cur = 1, pos;
    cin >> n;

    stack <int> stk;
    while(n--){
        cin >> pos;

        if(cur == pos) cur++;
        else stk.push(pos);

        while(!stk.empty() && stk.top() == cur){
            stk.pop(); 
            cur++;
        }
    }

    if(stk.empty()) cout << "Nice\n";
    else cout << "Sad\n";
}