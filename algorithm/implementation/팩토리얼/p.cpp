#include <iostream>
#include <algorithm>

using namespace std;

long long factorial(long long number){
    if(number <= 1) return 1;
    return number * factorial(number - 1);
}

int main(){
    long long n;
    cin >> n;

    long long ans = factorial(n);
    cout << ans << "\n";
}