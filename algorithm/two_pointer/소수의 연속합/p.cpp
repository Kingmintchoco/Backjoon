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

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << 0 << "\n";
        return 0;
    }

    int val = 2;
    while(1){
        if(val > n) break;

        if(isPrime(val) != -1){
            v.push_back(val);
        }

        val++;
    }

    int l = 0, r = 0, sum = v[l], cnt = 0;
    while(l <= r && r < v.size()){        
        if(sum >= n){
            if(sum == n) cnt++;
            sum -= v[l++];
        }else{
            sum += v[++r];
        }
    }

    cout << cnt << "\n";
}