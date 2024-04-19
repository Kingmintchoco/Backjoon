#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string pw;

// 모음 판별
bool isVowel(const char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}

// a, e, i, o, u 중 하나라도 포함할 것
bool case1(const string str){
    for(int i = 0; i < str.size(); ++i){
        if(isVowel(str[i])) return true;
    }
    return false;
}

// 모음이 3개, 자음이 3개 연달아서 올 수 없다.
bool case2(const string str){
    if(str.size() < 3) return true;

    for(int i = 0; i < str.size() - 2; ++i){
        int a = 0, b = 0, c = 0;

        if(isVowel(str[i])) a = 1;
        if(isVowel(str[i + 1])) b = 1;
        if(isVowel(str[i + 2])) c = 1;

        if(a == b && b == c) return false;
    }

    return true;
}

// 같은 글자가 연속으로 2번 나올 수 없다. 그러나 ee, oo는 가능하다.
bool case3(const string str){
    for(int i = 0; i < str.size() - 1; ++i){
        if(str[i] == str[i + 1]){
            if(str[i] == 'e' || str[i] == 'o') continue;
            else return false;
        }
    }

    return true;
}

int main(){
    freopen("p.txt", "rt", stdin);

    while(1){
        cin >> pw;

        if(pw == "end") break;

        if(!case1(pw)) {
            cout << "<" << pw << "> is not acceptable.\n";
            continue;
        }

        if(!case2(pw)){
            cout << "<" << pw << "> is not acceptable.\n";
            continue;
        }

        if(!case3(pw)){
            cout << "<" << pw << "> is not acceptable.\n";
            continue;
        }

        cout << "<" << pw << "> is acceptable.\n";
    }
}