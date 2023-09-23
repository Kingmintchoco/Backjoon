#include <iostream>

using namespace std;

int main(){
    // 0 ~ 41
    int arr[42] = {};
    
    int n;
    for(int i = 0; i < 10; ++i){
        cin >> n;
        
        for(int j = 0; j < 42; ++j){
            if(n % 42 == j) arr[j]++;
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < 42; ++i){
        if(arr[i] != 0) cnt++;
    }
    
    cout << cnt << "\n";
}