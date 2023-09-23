#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    freopen("p2.txt", "rt", stdin);

    int k, n;
    long long sum = 0;
    stack <int> stk;

    cin >> k;
    while(k--){
        cin >> n;

        if(n == 0){
            sum -= stk.top();
            stk.pop();
        }else{
            sum += n;
            stk.push(n);
        }
    }

    cout << sum << "\n";
}