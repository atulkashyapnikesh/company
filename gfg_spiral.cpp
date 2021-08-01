

#include <bits/stdc++.h>
using namespace std;

int main()
{
	


	int n,m;
		cin>>n>>m;
		int a[n][m]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
	
	int i, k = 0, l = 0;


	while (k < m && l < n) {
		
		for (i = l; i < n; ++i) {
			cout << a[k][i] << " ";
		}
		k++;

		
		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << " ";
		}
		n--;

	
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << " ";
			}
			m--;
		}

		
		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
	cout<<endl;
	return 0;
}


