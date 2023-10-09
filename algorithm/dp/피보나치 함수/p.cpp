#include <iostream>

using namespace std;

int a[50], b[50];

int main(){
    int t, n;
    cin >> t;

    a[0] = 1, a[1] = 0;     // 0의 출력 횟수를 담은 dp
    b[0] = 0, b[1] = 1;     // 1의 출력 횟수를 담은 dp
     
    for(int i = 2; i <= 40; ++i){
        a[i] = a[i - 2] + a[i - 1];
        b[i] = b[i - 2] + b[i - 1];
    }

    while(t--){
        cin >> n;
        cout << a[n] << " " << b[n] << "\n";
    }
}