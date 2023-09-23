#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

void mergeSort(int s, int e);
static vector <int> a, tmp;
static long result;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;
    
    a = vector <int> (n + 1, 0);
    tmp = vector <int> (n + 1, 0);

    for(int i = 1; i <= n; ++i) cin >> a[i];

    result = 0;
    mergeSort(1, n);
    cout << result << "\n";
}

void mergeSort(int s, int e){
    if(e - s < 1) return;

    int mid = s + (e - s)/2;
    mergeSort(s, mid);
    mergeSort(mid + 1, e);

    // copy
    for(int i = s; i <= e; ++i) tmp[i] = a[i];

    int k = s;
    int l = s, r = mid + 1;
    while(l <= mid && r <= e){
        if(tmp[l] <= tmp[r]){
            a[k++] = tmp[l++];
        }else {
            result += (r - k);
            a[k++] = tmp[r++];
        }
    }

    while(l <= mid) a[k++] = tmp[l++];
    while(r <= e) a[k++] = tmp[r++];
}