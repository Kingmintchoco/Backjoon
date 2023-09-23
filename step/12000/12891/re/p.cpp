#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, b[100], ch[100], res=0, cnt=0;
char c;
string str;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> c;
        str.push_back(c);
        b[c - 'A'] = -1;
    }

    for(int i = 0; i < 100; ++i){
        if(b[i] == -1){
            cin >> b[i];
        }
    }

    int s = 0, e = 0;
    while(1){
        // init
        res = 0;
        fill(ch, ch + 100, 0);

        e = s + m;
        if(e >= n) break;

        for(int i = s; i < e; ++i){
            ch[str[i] - 'A']++;
        }

        for(int i = 0; i < 100; ++i){
            if(ch[i] >= b[i] && b[i]) res++;
        }

        if(res == 4) cnt++;

        s++;
    }

    cout << cnt << "\n";
}