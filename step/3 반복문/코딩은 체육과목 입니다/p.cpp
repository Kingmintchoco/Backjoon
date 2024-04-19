#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    cin >> n;

    string str = "";
    
    n = (n / 4);
    for(int i = 0; i < n; ++i) str += "long ";

    cout << str << "int\n";
}