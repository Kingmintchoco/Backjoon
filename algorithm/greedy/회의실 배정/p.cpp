#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, s, e;
    vector <pair <int, int> > schedule;

    cin >> n;
    while(n--){
        cin >> s >> e;
        schedule.push_back(make_pair(e, s));
    }

    sort(schedule.begin(), schedule.end());

    int ans = 1, time = schedule[0].first;
    for(int i = 1; i < schedule.size(); ++i){
        if(time <= schedule[i].second){
            time = schedule[i].first;
            ans++;
        }
    }

    cout << ans << "\n";
}