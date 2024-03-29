#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n, x;
    priority_queue <int> pq;

    cin >> n;
    while(n--){
        cin >> x;

        if(x == 0){
            if(pq.empty()) cout << "0\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }else{
            pq.push(x);
        }
    }
}