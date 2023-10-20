#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, m;

    cin >> n;
    vector <int> cards(n);
    for(int i = 0; i < cards.size(); ++i){
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    cin >> m;
    vector <int> nums(m);
    for(int i = 0; i < nums.size(); ++i){
        cin >> nums[i];
    }

    for(int i = 0; i < nums.size(); ++i){
        int val = nums[i];

        bool has = false;
        int l = 0, r = cards.size() - 1;
        int mid = (l + r)/2;
        while(l <= r){
            mid = (l + r)/2;

            if(val == cards[mid]){
                has = true;
                break;
            }

            if(val > cards[mid]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }

        if(has) cout << 1 << " ";
        else cout << 0 << " ";
    }

    cout << "\n";
}