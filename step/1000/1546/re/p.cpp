#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int s, max = -1;
    int original[n];
    for(int i = 0; i < n; ++i){
        cin >> s;
        original[i] = s;

        if(max < original[i]) max = original[i];
    }

    float result;
    float scores[n];
    for(int i = 0; i < n; ++i){
        scores[i] = (float)original[i] / max * 100;
        result += scores[i];
    }

    cout << result/n << endl;
}