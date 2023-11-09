#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    vector <int> v(3);
    for(int i = 0; i < 3; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(auto iter : v) cout << iter << " ";
    cout << "\n";
}