#include<bits/stdc++.h>
using namespace std;

// PRO - Promotion
// https://www.spoj.com/problems/PRO/

int main(){
	int n;cin>>n;
	multiset<int> ms;
	long long sum = 0;
	for (int i = 0; i < n; ++i)
	{

		int x;
		cin>>x;
		for (int i = 0; i < x; ++i)
		{
			int y;
			cin>>y;
			ms.insert(y);
		}
		sum+=(*(prev(ms.end()))-*(ms.begin()));
		ms.erase(ms.begin());
		ms.erase(prev(ms.end()));
	}
	cout<<sum<<endl;
	return 0;
}