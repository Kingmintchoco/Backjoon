#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int cnt = 0;
vector <pair <int, int> > moves;

void hanoi(int n, int from, int by, int to){
    if(n == 1) {
        cnt++;
        moves.push_back(make_pair(from, to));
    }
    else{
        hanoi(n - 1, from, to, by);

        cnt++;
        moves.push_back(make_pair(from, to));

        hanoi(n - 1, by, from, to);
    }
}

int main(){
    int n;
    cin >> n;

    hanoi(n, 1, 2, 3);

    cout << cnt << "\n";
    for(auto move: moves) cout << move.first << " " << move.second << "\n";
}