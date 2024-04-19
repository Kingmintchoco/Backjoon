#include <iostream>
#include <algorithm>

using namespace std;

// recursive
int cnt1 = 0;
int fib(int n){
    if(n == 1 || n == 2) {
        cnt1++;
        return 1;
    } else return (fib(n - 1) + fib(n - 2));
}

// dp
int cnt2 = 0, fibo[50];

int fibonacci(int n){
    fibo[1] = fibo[2] = 1;
    for(int i = 3; i <= n; ++i){
        cnt2++;
        fibo[i] = fibo[i - 1] + fibo[i + 1];
    }
    return fibo[n];
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    fib(n);
    fibonacci(n);

    cout << cnt1 << " " << cnt2 << "\n";
}