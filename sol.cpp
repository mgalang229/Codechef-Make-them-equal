#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// if we try some sample cases, it can be observed that the answer is always 
		// equal to the difference of the maximum and minimum elements
		int mn = *min_element(a.begin(), a.end());
		int mx = *max_element(a.begin(), a.end());
		cout << mx - mn << '\n';
	}
	return 0;
}
