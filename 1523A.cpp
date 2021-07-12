#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		string a;
		string s(n,'0');
		cin >> a;
		for(int j=0; j<m; j++){
			for(int i=0; i<n; i++){
				if(a[i]=='0' && i!=0 && i!=n-1){
					s[i]=((a[i-1]-48)^(a[i+1]-48))+48;
				}else if(i==0 && a[i]=='0'){
					s[i]=a[i+1];
				}else if(i==n-1 && a[i]=='0'){
					s[i]=a[i-1];
				}else{
					s[i]=a[i];
				}
			}
			if(a==s)break;
			a=s;
		}
		cout << a << '\n';
	}
	return 0;
}