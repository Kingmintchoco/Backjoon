#include <iostream>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, cnt=1, sum=1;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;

    int s = 1, e = 1;
    while(e != n){
        if(sum == n){
            cnt++;
            e++;
            sum += e;
        }else if(sum > n){
            sum -= s;
            s++;
        }else{
            e++;
            sum += e;
        }
    }

    cout << cnt << "\n";
}