#include <iostream>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    vector <int> a(n, 0);
    for(int i = 0; i < n; ++i) cin >> a[i];

    for(int i = 0; i < n - 1; ++i){
        for(int j = 0; j < n - i - 1; ++j){
            if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }

    for(int i = 0; i < n; ++i) cout << a[i] << "\n";
}