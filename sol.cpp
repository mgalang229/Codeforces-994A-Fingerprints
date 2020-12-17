#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int x[n], y[m];
	for(int i=0; i<n; ++i)
		cin >> x[i];
	for(int i=0; i<m; ++i)
		cin >> y[i];
	for(int i=0; i<n; ++i)
		for(int j=0; j<m; ++j)
			if(x[i]==y[j])
				cout << x[i] << " ";
	cout << "\n";
}
