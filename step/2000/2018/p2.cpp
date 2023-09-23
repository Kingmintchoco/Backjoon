#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, cnt=1, sum=1;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;

    int l = 1;
    int r = 2;
    while(r != n){
        if(sum == n){
            sum +=
            cnt++;
            r++;
        }else if(sum < n){
            sum += r;
            r++;
        }else if(sum > n){
            sum -= l;
            l++;
        }
    }

    cout << cnt << "\n";
}