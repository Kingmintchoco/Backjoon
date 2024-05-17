#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    long long s;
    cin >> s;

    long long l = 0, sum = 0;
    while(sum <= s){
        l++;            // 주어진 수를 만들기 위해 순서대로 더함(= 최대개수)
        sum += l;
        if(sum > s) break;
    }

    cout << (l - 1) << "\n";
}