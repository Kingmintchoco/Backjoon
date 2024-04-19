#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int schedule[101];

int main(){
    freopen("p.txt", "rt", stdin);

    int a, b, c, l, r, answer = 0;

    cin >> a >> b >> c;
    for(int i = 0; i < 3; ++i){
        cin >> l >> r;
        for(int j = l; j < r; ++j) schedule[j]++;
    }

    for(int i = 0; i < 100; ++i){
        if(schedule[i] == 1){
            answer += a;
        }else if(schedule[i] == 2){
            answer += (2 * b);
        }else if(schedule[i] == 3){
            answer += (3 * c);
        }
    }

    cout << answer << "\n";
}