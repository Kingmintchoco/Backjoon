#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;
    
    string str;
    cin >> str;

    int cnt = 1, tmp = 0;
    for(int i = 0; i < str.size(); ++i){
        if(str[i] == 'S') cnt++;
        else{
            tmp++;
            if(tmp == 2){
                tmp = 0;
                cnt++;
            }
        }
    }

    cout << min(cnt, n) << "\n";
}