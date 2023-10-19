#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector <int> v;

int isPrime(int num){
    if(num == 2) return num;

    int range = sqrt(num);
    for(int i = 2; i <= range; ++i){
        if(num % i == 0) return -1;
    }

    return num;
}

void fillEratos(int n){
    vector <bool> prime(n + 1, true);

    for(int i = 2; i * i <= n; ++i){
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; ++i) {
        if(prime[i]) v.push_back(i);
    }
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    if(n == 1){
        cout << 0 << "\n";
        return 0;
    }
    
    fillEratos(n);

    int l = 0, r = 0, sum = 0, cnt = 0;
    while(r <= v.size()){        
        if(sum >= n) {
            if(sum == n) cnt++;
            sum -= v[l++];
        }else sum += v[r++];
    }

    cout << cnt << "\n";
}