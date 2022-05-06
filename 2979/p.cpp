#include <iostream>
#include <vector>

using namespace std;

int a, b, c, f, t, p;
vector <int> cnt(104);

void init(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    cin >> a >> b >> c;
    for(int i = 0; i < 3; ++i){
        cin >> f >> t;
        for(int j = f; j < t; ++j) cnt[j]++;
    }

    for(int i = 0; i < 100; ++i){
        if(cnt[i]){
            if(cnt[i] == 1) p += a;
            else if(cnt[i] == 2) p += b * 2;
            else if(cnt[i] == 3) p += c * 3;
        }
    }

    cout << p << "\n";
}