#include <iostream>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    vector <int> a(n, 0);
    vector <int> s(n, 0);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 1; i < n; ++i){
        int pos = i;
        int val = a[i];
        
        for(int j = i - 1; j >= 0; --j){
            if(a[j] < a[i]){
                pos = j + 1;
                break;
            }

            if(j == 0) pos = 0;
        }

        for(int j = i; j > pos; --j) a[j] = a[j - 1];

        a[pos] = val;
    }

    s[0] = a[0];

    for(int i = 1; i < n; ++i) s[i] = s[i - 1] + a[i];

    int sum = 0;

    for(int i = 0; i < n; ++i) sum += s[i];

    cout << sum << "\n";
}