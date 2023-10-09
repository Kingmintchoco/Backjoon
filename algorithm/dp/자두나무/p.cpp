#include <iostream>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int t, w, tt;
vector <int> tree;
int dp[1000][1000];

int solution(vector <int> tree, int w){
    int answer = 0;

    for(int i = 0; i < tree.size(); ++i){
        
    }

    return answer;
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> t >> w;
    while(t--){
        cin >> tt;
        tree.push_back(tt);
    }

    int ans = solution(tree, w);
    cout << ans << "\n";
}