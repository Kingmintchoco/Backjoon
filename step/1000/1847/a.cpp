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
stack <int> stk;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    vector <int> a(n, 0);
    vector <char> res;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int tmp = 1;
    bool flag = true;

    for(int i = 0; i < a.size(); ++i){
        int now = a[i];

        if(now >= tmp){
            while(now >= tmp){
                stk.push(tmp++);
                res.push_back('+');
            }

            stk.pop();
            res.push_back('-');
        }else{
            int top = stk.top(); stk.pop();

            if(top > now){
                cout << "NO\n";
                flag = false;
                break;
            }else res.push_back('-');
        }
    }

    if(flag){
        for(int i = 0; i < res.size(); ++i) cout << res[i] << "\n";
    }
}