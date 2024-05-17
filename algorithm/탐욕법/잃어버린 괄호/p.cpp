#include <iostream>
#include <string>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    string str;
    cin >> str;

    str += '@';

    int idx = 0, ans = 0;
    string ret = "";
    bool isNegative = false;
    while(idx < str.size()){
        if(str[idx] == '+' || str[idx] == '-' || str[idx] == '@'){
            if(isNegative) ans -= stoi(ret);
            else ans += stoi(ret);

            ret = "";
            if(str[idx] == '-') isNegative = true;
            if(str[idx] == '@') break;
        }else ret += str[idx];
        idx++;
    }

    cout << ans << "\n";
}