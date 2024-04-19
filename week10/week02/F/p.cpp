#include <iostream>
#include <algorithm>

using namespace std;

int n, m, k, pos, l = 1, r, answer = 0;

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n >> m >> k;

    while(k--){
        cin >> pos;

        r = l + m - 1;  // l: 바구니의 왼쪽 좌표, m: 바구니의 너비, r: 바구니의 오른쪽 좌표

        if(pos >= l && pos <= r){   // 바구니 범위에 사과가 떨어질 때
            continue;
        }else{
            if(pos < l){
                answer += (l - pos);
                l = pos;
            }else{
                l += (pos - r);
                answer += (pos - r);
            }
        }
    }

    cout << answer << "\n";
}