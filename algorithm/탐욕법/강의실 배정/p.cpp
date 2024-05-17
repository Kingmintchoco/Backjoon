#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

bool cmp(const pair <int, int> &a, const pair <int, int> &b){
    return a.second < b.second;
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n, s, t;
    vector < pair <int, int> > schedule;

    cin >> n;
    while(n--){
        cin >> s >> t;
        schedule.push_back(make_pair(s, t));
    }

    sort(schedule.begin(), schedule.end(), cmp);

    priority_queue < int, vector <int>, greater <int> > pq;
    pq.push(schedule[0].second);
    for(int i = 1; i < schedule.size(); ++i){
        if(schedule[i].first < pq.top()){
            pq.push(schedule[i].second);
        }else{
            pq.pop();
            pq.push(schedule[i].second);
        }
    }

    cout << pq.size() << "\n";
}