#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n;
vector <int> a;

void mergeSort(vector <int> &a, int s, int e){
    if (e - s == 1) return;

    int mid = (s + e)/2;
    mergeSort(a, s, mid);
    mergeSort(a, mid, e);

    vector <int> buf;
    for(int i = s; i < mid; ++i) buf.push_back(a[i]);
    for(int i = e - 1; i >= mid; --i) buf.push_back(a[i]);

    int l = 0;
    int r = (int) buf.size() - 1;
    for(int i = s; i < e; ++i){
        if(buf[l]  <= buf[r]) a[i] = buf[l++];
        else a[i] = buf[r--];
    }
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }

    mergeSort(a, 0, a.size());
    for(auto aa : a) cout << aa << "\n";
}