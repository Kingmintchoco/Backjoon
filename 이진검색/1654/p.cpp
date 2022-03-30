#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
vector <int> v;

int main(){
    scanf("%d %d", &n, &k);

    int tmp;
    for(int i = 0; i < n; ++i){
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
}