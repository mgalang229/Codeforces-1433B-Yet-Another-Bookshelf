#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int cnt=0, flag=0;
		for(int i=0; i<n; ++i) {
			if(a[i]==1&&flag==0) {
				flag=1;
				continue;
			}
			if(a[i]==1&&flag==1) {
				int id=i-1;
				while(a[id]!=1&&id>0) {
					id--;
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}
