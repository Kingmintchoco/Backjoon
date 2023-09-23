/* chat gpt answer */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T, W;
    cin >> T >> W;

    int plums[T];
    for (int i = 0; i < T; ++i) {
        cin >> plums[i];
    }

    int dp[T + 1][3][W + 1] = {0};

    for (int t = 1; t <= T; ++t) {
        for (int w = 1; w <= W; ++w) {
            // 위치 1에서 자두가 떨어지는 경우
            dp[t][1][w] = max(dp[t - 1][1][w], dp[t - 1][2][w - 1]) + (plums[t - 1] == 1);

            // 위치 2에서 자두가 떨어지는 경우
            if (w > 1) {
                dp[t][2][w] = max(dp[t - 1][1][w - 1], dp[t - 1][2][w]) + (plums[t - 1] == 2);
            }
        }
    }

    int result = max(dp[T][1][W], dp[T][2][W]);
    cout << result << endl;

    return 0;
}