#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, k;
    cin >> n >> k;

    vector <int> scores(n);
    for(int i = 0; i < n; ++i){
        cin >> scores[i];
    }

    sort(scores.begin(), scores.end(), greater <int>());

    cout << scores[k - 1] << "\n";
}