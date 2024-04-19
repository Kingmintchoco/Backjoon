#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    string a, b;
    cin >> a;

    b = a;
    reverse(a.begin(), a.end());

    if(a.compare(b) == 0){
        cout << 1 << "\n";
    }else cout << 0 << "\n";
}