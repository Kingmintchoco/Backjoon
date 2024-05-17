#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    int n, m, len, sum = 0, cnt = 0, tmp = -2147000000;
    vector <int> lec;

    cin >> n >> m;
    while(n--){
        cin >> len;
        lec.push_back(len);

        sum += len;
        tmp = max(tmp, len);
    }

    int l = tmp, r = sum;
    int mid;
    while(l <= r){
        mid = (l + r)/2;

        sum = 0, cnt = 0;
        for(int i = 0; i < lec.size(); ++i){
            if(sum + lec[i] > mid){
                cnt++;
                sum = 0;
            }
            sum += lec[i];
        }

        if(sum != 0) 
            cnt++;

        if(cnt > m)
            l = mid + 1;
        else r = mid - 1;
    }

    cout << l << '\n';
}