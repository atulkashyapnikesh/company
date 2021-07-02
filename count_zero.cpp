#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;

	}
	return fact;
}
int check(int f){
	int d,c=0;
	while(f){
		d=f%10;
		if(d==0)
			c++;
		f=f/10;

	}
	return c;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int f=factorial(n);
		cout<<f<<" = ";
		int res=check(f);
		cout<<res<<endl;
	}
}