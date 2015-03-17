#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
	int ans = 1;
	for(int i = 1; i <= r; i++) {
		ans *= n-r+i;
		ans /= i;
	}
	return ans;
}

int main()
{
	int n, r;
	while(cin >> n >> r) cout << nCr(n, min(r, n-r)) << endl;

	return 0;
}
