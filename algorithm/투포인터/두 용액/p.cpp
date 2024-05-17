#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i = 0; i < v.size(); ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int val = 2147000000;
    int l = 0, r = v.size() - 1;
    pair <int, int> idx;
    while(l < r){
        int sum = v[l] + v[r];

        if(val > abs(sum)){
            val = abs(sum);
            idx = make_pair(v[l], v[r]);

            if(sum == 0) break;
        }

        if(sum < 0) l++;
        else r--;
    }

    cout << idx.first << " " << idx.second << "\n";
}