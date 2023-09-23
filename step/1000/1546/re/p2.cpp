#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, _max = -2147000000;
vector <int> a;
vector <double> b;
double avg;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> m;
        a.push_back(m);
        if(_max < m) _max = m;
    }

    for(int i = 0; i < a.size(); ++i){
        b.push_back((double) a[i]/_max * 100.0);
        avg += b[i];
    }

    avg = (double) avg/n;
    cout << avg << "\n";
}