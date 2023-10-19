#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, x, arr[100004];

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cin >> x;

    sort(arr, arr + n);

    int l = 0, r = n - 1, cnt = 0;
    while(l < r){
        int sum = arr[l] + arr[r];
        if(sum >= x){
            if(sum == x) cnt++;
            r--;
        }else{
            l++;
        }
    }

    cout << cnt << "\n";
}