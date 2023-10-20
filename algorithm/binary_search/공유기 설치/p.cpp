#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, c, x;

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n >> c;
    vector <int> coordi(n);
    for(int i = 0; i < coordi.size(); ++i){
        cin >> coordi[i];
    }

    sort(coordi.begin(), coordi.end());

    if(c == 2){
        cout << coordi.back() - coordi[0] << "\n";
        return 0;
    }

    int answer = 0;
    int l = 0, r = coordi[n - 1] - coordi[0];   // l: 최소 거리, r: 최대 거리
    int mid = (l + r)/2;
    while(l <= r){
        mid = (l + r)/2;

        int cnt = 1;                            // 설치 개수
        int prev = coordi[0];                   // 최초 설치 위치
        
        for(int i = 1; i < n; ++i){
            if((coordi[i] - prev) >= mid){
                cnt++;
                prev = coordi[i];
            }
        }

        if(cnt >= c){                           // 총 설치 개수가 공유기의 수보다 많거나 같은 경우
            l = mid + 1;
            answer = (answer > mid) ? answer : mid;
        }else{                                  // 총 설치 개수가 공유기의 수보다 적은 경우
            r = mid - 1;
        }
    }

    cout << answer << "\n";
}