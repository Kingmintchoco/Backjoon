#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int mid = 0, avg = 0;
    vector <int> v(5);
    for(int i = 0; i < 5; ++i){
        cin >> v[i];
        avg += v[i];
    }

    avg /= 5;
    sort(v.begin(), v.end());
    mid = v[2];

    cout << avg << "\n" << mid << "\n";
}