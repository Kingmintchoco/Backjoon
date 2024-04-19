#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    string str;

    while(1){
        getline(cin, str);
        if(str == ".") break;

        stack <char> stk;
        for(int i = 0; i < str.size(); ++i){
            if(str[i] == '(' || str[i] == '[') stk.push(str[i]);
            else if(str[i] == ')'){
                if(stk.empty() || stk.top() == '['){
                    cout << "no\n";
                    break;
                }
                stk.pop();
            }else if(str[i] == ']'){
                if(stk.empty() || stk.top() == '('){
                    cout << "no\n";
                    break;
                }
                stk.pop();
            }else if(str[i] == '.'){
                if(stk.empty()) cout << "yes\n";
                else cout << "no\n";
            }
        }
    }
}