#include <iostream>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m = -2147000000, a, total=0;
double score;
vector <double> v;

int main(){
    init();
    freopen("p2.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a;
        total += a;

        if(m <= a) m = a;
    }

    score = (double) total / m * 100 / n;
    cout << score << "\n";
}