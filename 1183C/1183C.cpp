#include <bits/stdc++.h>
#define lli long long
using namespace std;


int main() {

	int t;
	cin >> t;
	while(t--)
	{
		lli k, n, a, b;
		cin >> k >> n >> a >> b;
		k -= n * a;

		if (k > 0)
		{
			cout << n << endl;
		}
		else
		{
			k = -k;
			++k;
			lli s = a - b;
			lli p = (k + s - 1) / s;
			if (p > n) {
				cout << -1 << '\n';
			} else {
				cout << n - p << '\n';
			}
		}
	}

	return 0;
}
