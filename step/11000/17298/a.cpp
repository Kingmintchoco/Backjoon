#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    vector <int> a(n, 0);
    vector <int> ans(n, 0);

    for(int i = 0; i < n; ++i) cin >> a[i];

    stack <int> stk;
    stk.push(0);
    for(int i = 1; i < n; ++i){
        while(!stk.empty() && a[stk.top()] < a[i]){
            ans[stk.top()] = a[i];
            stk.pop();
        }

        stk.push(i);
    }
    
    while(!stk.empty()){
        ans[stk.top()] = -1;
        stk.pop();
    }

    for(int i = 0; i < n; ++i) cout << ans[i] << " ";
}