#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, cnt=0;
vector <int> v;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(), v.end());

    int k = 0, i, j;
    while(k < n){
        i = 0;
        j = n - 1;

        while(i < j){
            if(v[i] + v[j] == v[k]){
                if(i != k && j != k){
                    cnt++;
                    break;
                }else if(i == k) i++;
                else if(j == k) j--;
            }else if(v[i] + v[j] < v[k]) i++;
            else j--;
        }

        k++;
    }

    cout << cnt << "\n";
}