#include <iostream>

using namespace std;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    init();
    
    int n, arr[10000] = {0, };
    cin >> n;
    
    while(n--) {
        int num; cin >> num;
        arr[num - 1]++;
    }
    
    for(int i = 0; i < 10000; i++) {
        while(arr[i]--) {
            cout << i + 1 << '\n';
        }
    }
}