#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, a[1004];
void swap(int &a, int &b);
void bubbleSort(int a[], int size);

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];

    bubbleSort(a, n);
    for(int i = 0; i < n; ++i) cout << a[i] << "\n";
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void bubbleSort(int a[], int size){
    for(int i = 1; i < size; ++i){
        for(int j = 0; j < i; ++j){
            if(a[j] >= a[i]) swap(a[i], a[j]);
        }
    }
}