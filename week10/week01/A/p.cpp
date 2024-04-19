#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    vector <int> v(9);
    for(int i = 0; i < 9; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    do{
        int sum = 0;
        for(int i = 0; i < 7; ++i){
            sum += v[i];
        }

        if(sum == 100){
            for(int i = 0; i < 7; ++i) cout << v[i] << "\n";
            break;
        }
    }while(next_permutation(v.begin(), v.end()));
}