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
    freopen("p2.txt", "rt", stdin);

    int n, m;
    cin >> n >> m;

    vector <int> cards(n);
    for(int i = 0; i < n; ++i){
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end(), less<int>());

    int ans = -2147000000;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            for(int k = j + 1; k < n; ++k){
                int sum = cards[i] + cards[j] + cards[k];
                if(sum <= m) ans = max(ans, sum);
            }
        }
    }

    cout << ans << "\n";
}