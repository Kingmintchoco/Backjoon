#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    long long ret, answer = 0;
    for(int i = 0; i < 3; ++i){
        cin >> ret;
        answer += ret;
    }

    cout << answer << '\n';
}