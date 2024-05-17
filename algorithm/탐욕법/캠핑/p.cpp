#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int t = 1, l, p, v;
    while(1){
        cin >> l >> p >> v;

        if(l == 0 || p == 0 || v == 0)  break;

        int total = 0;

        total += (v / p) * l;
        total += min(v % p, l);

        cout << "Case " << t << ": " << total << "\n";
        t++;
    }
}