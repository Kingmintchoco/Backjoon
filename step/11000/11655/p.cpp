#include <iostream>
#include <string>

using namespace std;

string s;

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();

    // 문자열 공백 포함 입력
    getline(cin, s);

    for(int i = 0; i < s.size(); ++i){
        // 대문자
        if(s[i] >= 65 && s[i] < 97){
            if(s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }else if(s[i] >= 97 && s[i] <= 122){
            if(s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }  
    }

    for(int i = 0; i < s.size(); ++i){
        if(isalpha(s[i])){
            if(islower(s[i])){  // 소문자
                if(s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
                else s[i] = s[i] + 13;
            }else if(isupper(s[i])){    // 대문자
                if(s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
                else s[i] = s[i] + 13;
            }
        }

        cout << s[i];
    }
}