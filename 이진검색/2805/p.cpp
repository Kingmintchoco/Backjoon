#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long n, m, num;
vector <long long> trees;

long long add(vector <long long> v){
    long long sum = 0;
    for(int i = 0; i < v.size(); ++i){
        sum += v[i];
    }
    return sum;
}

vector <long long> sub(vector <long long> v, long long n){
    for(int i = 0; i < v.size(); ++i){
        if(v[i] < n) v[i] = 0;
        else v[i] -= n;
    }

    return v;
}

int main(){
    // cin 속도 초과 방지
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        cin >> num;
        trees.push_back(num);
    }
    sort(trees.begin(), trees.end());

    vector <long long> temp;
    bool isSame = false;
    long long mid = (0 + trees.size())/2;
    long long height = trees[mid];
    while(isSame != true){
        temp = sub(trees, height);
        long long sum = add(temp);
        if(sum == m) isSame = true;
        else if(sum > m) height++;  // 기준값보다 더 많이 깎았을 경우 -> 절단기의 높이를 높여 덜 깎아야 함
        else if(sum < m) height--;  // 기준값보다 더 적게 깎았을 경우 -> 절단기의 높이를 낮혀 더 깎아야 함
    }

    printf("%d\n", height);
}