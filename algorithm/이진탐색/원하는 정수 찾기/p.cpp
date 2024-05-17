#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> v;

int solve(int val){
    int l = 0, r = v.size() - 1;
    int mid;
    while(l <= r){
        mid = (l + r)/2;

        if(v[mid] == val) return 1;

        if(v[mid] > val)
            r = mid - 1;
        else 
            l = mid + 1;
    }

    return 0;
}

int main(){
    freopen("p.txt", "rt", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, val;

    cin >> n;
    while(n--){
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    cin >> m;
    while(m--){
        cin >> val;
        cout << solve(val) << '\n';
    }
}