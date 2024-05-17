#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p2.txt", "rt", stdin);

    int n;
    cin >> n;

    vector <long long> roads(n - 1);  // 도로
    vector <long long> oils(n);   // 각 도시의 원유 가격

    for(int i = 0; i < roads.size(); ++i){
        cin >> roads[i];
    }

    for(int i = 0; i < oils.size(); ++i){
        cin >> oils[i];
    }

    int pos = 1;
    long long cost = oils[0], answer = cost * roads[0];
    while(pos < roads.size()){
        if(cost > oils[pos]) cost = oils[pos];
        answer += (cost * roads[pos]);
        pos++;
    }

    cout << answer << "\n";
}