#include <iostream>
#include <vector>

using namespace std;
 
int main(void)
{ 
	int N, K, idx;
	cin >> N >> K;
	vector<int> v(N);
	idx = K - 1;
 
	for (int i = 0; i < N; i++) v[i] = i + 1;
	cout << '<';
	while (v.size() != 1) {
		cout << v[idx] << ", ";
		v.erase(v.begin() + idx);
		idx = (idx + K - 1) % v.size();
	}
	cout << v[0] << '>';
 
	return 0;
}