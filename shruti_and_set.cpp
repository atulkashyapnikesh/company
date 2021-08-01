#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<int> s;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		s.insert(x);
	}
	int k;
	cin>>k;
	set<int>:: iterator i,j;
	for(i=s.begin();i!=s.end();i++){
		for(j=i;j!=s.end();j++){
			if(i==j)
				continue;
			int diff = abs(*i-*j);
			s.insert(diff); 
		}
     
	}
    k=k-1;
   int retur=0;
   int m=s.size();
   k=(m-k)-1;
   int idx=0;
      for(auto x:s){
      	if(idx == k){
      	   retur = int(x);
      	   break;
      	}
      	idx++;

      }

 
	cout<<retur<<endl;
	// for(i=s.begin();i!=s.end();i++){
	// 	cout<<*i<<" ";

	}
