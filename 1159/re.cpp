#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
string s;
vector <int> a(26);

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> s;
        a[s[0] - 'a']++; // 문자 - 97 = 해당 소문자의 순서
    }

    string answer = "";
    for(int i = 0; i < a.size(); ++i){
        if(a[i] >= 5) answer += i + 'a';
    }

    if(answer.empty()) cout << "PREDAJA";
    else cout << answer;
}