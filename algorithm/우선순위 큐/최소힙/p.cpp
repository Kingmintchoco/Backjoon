#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int main(){
    freopen("p.txt", "rt", stdin);

    long long n, x;
    cin >> n;

    priority_queue <int, vector <int>, greater <int> > pq;
    while(n--){
        cin >> x;
        if(x == 0){
            if(!pq.empty()){
                cout << pq.top() << "\n"; pq.pop();
            }else cout << 0 << "\n";
        }else{
            pq.push(x);
        }
    }
}