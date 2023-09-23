#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, num, cnt=0;
vector <int> a;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    while(l < r){
        int sum = a[l] + a[r];
        
        if(sum < m){
            l++;
        }else if(sum > m){
            r--;
        }else{
            cnt++;
            r--;
        }
    }

    cout << cnt << "\n";
}