#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

void mergeSort(vector <int> &a, int left, int right){
    if(right - left == 1) return;

    // divide
    int mid = (left + right)/2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);

    // copy
    vector <int> buf;
    for(int i = left; i < mid; ++i) buf.push_back(a[i]);
    for(int i = right - 1; i >= mid; --i) buf.push_back(a[i]);

    // merge
    int iLeft = 0;
    int iRight = (int) buf.size() - 1;
    for(int i = left; i < right; ++i){
        if(buf[iLeft] <= buf[iRight]) a[i] = buf[iLeft++];
        else a[i] = buf[iRight--];
    }
}

int n;

int main(){
    init();
    freopen("p.txt", "rt", stdin);
    
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    mergeSort(a, 0, n);
    for(auto aa : a) cout << aa << " ";
    cout << "\n";
}