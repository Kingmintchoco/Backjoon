#include <iostream>
#include <string>

using namespace std;
 
int main() {
    string str, ret;
    cin >> str;
 
    int ans = 0;
    bool flag = false;
 
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == '-' || str[i] == '+' || i == str.size()) {
            if (flag){
                ans -= stoi(ret);
            }
            else{
                ans += stoi(ret);
            }

            ret = "";
        }else{
            ret += str[i];
        }
 
        if(str[i] == '-'){
            flag = true;
        }    
    }
    
    cout << ans;
}
