#include <iostream>

using namespace std;

const int coin[6] = {500, 100, 50, 10, 5, 1};

int main(){
    int n;
    cin >> n;

    int cnt = 0, ret = 1000 - n;
    for(int i = 0; i < 6; ++i){
        if(ret < coin[i]) continue;

        cnt += (ret / coin[i]);
        ret %= coin[i];
    }

    cout << cnt << "\n";
}