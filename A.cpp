#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,m=1,x=0;
	string str;
	cin >> t;
	vector<int> arr;
	for(int i=1; i<=t; i++){
		cin >> n >> k;
		cin >> str;
		for(int j=0; j<ceil(str.size()/2);j++){
			arr.push_back(str[j]-96);
			if(x==0 && str[j]<=str[j+1]){
				x=1;
				m*=(str[j]-96);
			}else{
				m*=(str[j]-96-1);
				x=j;
			}
			if(x!=0){
				m*=k;
			}
			
		}
		if(x!=0){
			for(int j=x; j<ceil(str.size()/2); j++){
				m*=str[j];
			}
		}
		cout << m;
	}
}