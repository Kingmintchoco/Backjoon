#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int add(vector <int> v){
    int sum = 0;
    for(int i = 0; i < v.size(); ++i){
        sum += v[i];
    }
    return sum;
}

void sub(vector <int> v, int n){
    for(int i = 0; i < v.size(); ++i){
        v[i] -= n;
    }
}

int main(){
    // cin 속도 초과 방지
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector <int> trees(n);
    for(int i = 0; i < n; ++i){
        cin >> trees[i];
    }
    sort(trees.begin(), trees.end());

    int mid = (0 + trees.size())/2;

}