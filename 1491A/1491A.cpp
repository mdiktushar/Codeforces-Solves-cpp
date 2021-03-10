#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int n, q, a[N], cnt;
int main()
{
    cin>>n>>q;
	for(int i = 1; i <= n; ++i)
	{
    	cin>>a[i];
		cnt += a[i];
	}
	while(q--)
	{
		int opt, x;
		cin>>opt>>x;
		if(opt == 1)
		{
			if(a[x]) cnt--;
			else cnt++;
			a[x] = 1 - a[x];
		}
		else
		{
			if(cnt >= x) cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
	return 0;
}
