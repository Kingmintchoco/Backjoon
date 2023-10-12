#include <iostream>
#include <algorithm>

using namespace std;

const int coin[4] = {25, 10, 5, 1};

int main(){
    freopen("p.txt", "rt", stdin);

    int t, n; 
    cin >> t;
    while(t--){
        cin >> n;

        int ret = n;
        for(int i = 0; i < 4; ++i){
            if(ret < coin[i]) {
                cout << 0 << " ";
                continue;
            }

            cout << ret / coin[i] << " ";
            ret %= coin[i];
        }

        cout << "\n";
    }

}