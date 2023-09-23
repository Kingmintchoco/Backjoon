#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum;
vector <int> v(9);

void init(){
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int main(){
    init();

    for(int i = 0; i < 9; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    do{
        sum = 0;
        for(int i = 0; i < 7; ++i) sum += v[i];
        if(sum == 100) break;
    }while(next_permutation(v.begin(), v.end()));

    for(int i = 0; i < 7; ++i) cout << v[i] << "\n";
}