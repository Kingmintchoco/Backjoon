#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v(9);

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    for(int i = 0; i < 9; ++i){
        cin >> v[i];
    }

    // sort
    sort(v.begin(), v.end());

    int sum = 0;
    do{
        sum = 0;
        for(int i = 0; i < 7; ++i) sum += v[i];
        if(sum == 100) break;
    }while(next_permutation(v.begin(), v.end()));

    for(int i = 0; i < 7; ++i) cout << v[i] << " ";
}