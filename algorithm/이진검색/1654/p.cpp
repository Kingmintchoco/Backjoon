#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
vector <int> v;

int main(){
    scanf("%d %d", &k, &n);

    int tmp, max = 0;
    for(int i = 0; i < k; ++i){
        scanf("%d", &tmp);
        v.push_back(tmp);
        if(v[i] > max) max = v[i];
    }
    sort(v.begin(), v.end());

    int length = 0, low = 1, high = max;
    while(low <= high){
        int mid = (low + high)/2;

        int cnt = 0;
        for(int i = 0; i < k; ++i) cnt += (v[i]/mid);

        if(cnt >= n){
            low = mid + 1;
            if(length < mid) length = mid;
        }else high = mid - 1;
    }

    cout << length << "\n";
}