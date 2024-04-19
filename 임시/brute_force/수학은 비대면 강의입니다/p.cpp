#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    for(int x = -999; x <= 999; ++x){
        for(int y = -999; y <= 999; ++y){
            int result1 = (a * x) + (b * y);
            int result2 = (d * x) + (e * y);

            if(result1 == c && result2 == f){
                cout << x << " " << y << "\n";
                return 0;
            }
        }
    }
}