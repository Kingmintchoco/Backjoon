#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

struct Node{
    int idx;
    int val;

    Node(int a, int b){
        idx = a;
        val = b;
    }
};

int n, l, a[5000004];
deque <Node> dq;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> l;

    for(int i = 0; i < n; ++i){
        int now;
        cin >> now;

        // 현재 값보다 값이 클 때 제거
        while(dq.size() && dq.back().val > now) dq.pop_back();

        dq.push_back(Node(i, now));

        // L(슬라이딩 윈도우의 크기)을 벗어날 때
        if(dq.front().idx <= (i - l)) dq.pop_front();

        cout << dq.front().val << " ";
    }
}