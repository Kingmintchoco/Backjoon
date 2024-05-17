#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, s, t;
    vector <pair <int, int> > schedule;
    priority_queue <int, vector <int>, greater <int> > pq;          // min heap

    cin >> n;
    while(n--){
        cin >> s >> t;
        schedule.push_back(make_pair(s, t));
    }

    sort(schedule.begin(), schedule.end());
    
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