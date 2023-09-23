#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, sum=0;
string str;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> str;
    for(int i = 0; i < str.size(); ++i){
        sum += (str[i] - '0');
    }

    cout << str << "\n";
}