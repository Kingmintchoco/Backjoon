#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(int n, vector <int> v){
    int start = 0, end = v.size() - 1;
    
    while(start <= end){
        int mid = (start + end)/2;

        if(v[mid] == n) return 1;
        else if(v[mid] > n) end = mid - 1;
        else start = mid + 1;
    }

    return 0;
}

int main(){
    freopen("p.txt", "rt", stdin);
    
    // cin 속도 초과 방지
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, m, tmp;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cin >> m;
    for(int i = 0; i < m; ++i){
        cin >> tmp;
        cout << binarySearch(tmp, a) << "\n";
    }
}