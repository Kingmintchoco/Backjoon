#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 반복문을 통해 3부터 8까지의 합 구하기
    int sum = 0;
    for(int i = 2; i < 8; ++i){
        sum += arr[i];
    }
    cout << sum << "\n";

    // 누적합을 통해 3부터 8까지의 합 구하기
    int psum[10] = {0, };
    psum[0] = arr[0];
    for(int i = 1; i < 10; ++i){
        psum[i] = psum[i - 1] + arr[i];
    }
    cout << psum[7] - psum[2 - 1] << "\n";
}