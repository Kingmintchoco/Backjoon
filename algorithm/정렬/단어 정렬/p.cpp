#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;

bool cmp(const string &str1, const string &str2){
    if(str1.size() == str2.size()) return str1 < str2;
    else return str1.size() < str2.size();
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    string str;
    vector <string> words;
    set <string> dup;

    cin >> n;
    while(n--){
        cin >> str;
        dup.insert(str);
    }

    for(auto iter : dup) words.push_back(iter);

    sort(words.begin(), words.end(), cmp);

    for(auto iter : words) cout << iter << "\n";
}