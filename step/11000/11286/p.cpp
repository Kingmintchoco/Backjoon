#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

struct compare{
    bool operator()(const int a, const int b){
        if(abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};

int n;
priority_queue <int, vector<int>, compare> pq;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        int tmp; cin >> tmp;

        if(!tmp){
            if(pq.empty()) {
                cout << 0 << "\n";
                continue;
            }
            cout << pq.top() << "\n"; pq.pop();
        }else{
            pq.push(tmp);
        }
    }
}