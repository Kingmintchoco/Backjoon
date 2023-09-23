#include <iostream>
#include <algorithm>
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

    vector <pair <int, int> > a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    int max_ = 0;

    for(int i = 0; i < n; ++i){
        if(max_ < a[i].second - i) max_ = a[i].second - i;
    }

    cout << max_ + 1 << "\n";
}