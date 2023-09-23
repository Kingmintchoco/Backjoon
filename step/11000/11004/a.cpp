#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

void quickSort(vector <int> &a, int s, int e, int k);
int partition(vector <int> &a, int s, int e);
void swap(vector <int> &a, int i, int j);

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    int n, k;
    cin >> n >> k;
    vector <int> a(n, 0);
    for(int i = 0; i < n; ++i) cin >> a[i];
    quickSort(a, 0, n - 1, k - 1);
    cout << a[k - 1] << "\n";
}

void quickSort(vector <int> &a, int s, int e, int k){
    int pivot = partition(a, s, e);

    if(pivot == k) return;
    else if(k < pivot) quickSort(a, s, pivot - 1, k);
    else quickSort(a, pivot + 1, e, k);
}

int partition(vector <int> &a, int s, int e){
    if(s + 1 == e){
        if(a[s] > a[e]) swap(a, s, e);

        return e;
    }

    int m = (s + e)/2;

    // 중앙값을 1번째 요소로 이동
    swap(a, s, m);

    int pivot = a[s];
    int i = s + 1, j = e;
    while(i <= j){
        while(pivot < a[j] && j > 0) j--;

        while(pivot > a[i] && i < a.size() - 1) i++;

        if(i <= j) swap(a, i++, j--);
    }

    a[s] = a[j];
    a[j] = pivot;
    return j;
}

void swap(vector <int> &a, int i, int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}