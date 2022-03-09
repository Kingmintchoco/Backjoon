#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int N;
    cin >> N;

    string str;
    for(int i = 0; i < N; ++i){
        cin >> str;

        stack <char> s;
        for(int j = 0; j < str.size(); ++j){
            if(s.empty() || str[j] == '(') s.push('(');
            else if(s.top() == '(') s.pop();
        }

        if(s.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}