#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p2.txt", "rt", stdin);

    int s, p;
    cin >> s >> p;

    string str;
    cin >> str;

    int a, c, g, t;
    cin >> a >> c >> g >> t;

    int l = 0, cnt = 0;
    while(l <= s){
        int r = l + p;
        if(r > str.size()) break;

        int ca = a, cc = c, cg = g, ct = t;
        for(int i = l; i < r; ++i){
            if(str[i] == 'A') {
                ca--; 
                continue;
            }else if(str[i] == 'C'){
                cc--;
                continue;
            }else if(str[i] == 'G'){
                cg--;
                continue;
            }else if(str[i] == 'T'){
                ct--;
                continue;
            }
        }

        l++;

        if(ca > 0 || cc > 0 || cg > 0 || ct > 0) continue;
        else cnt++;
    }

    cout << cnt << "\n";
}