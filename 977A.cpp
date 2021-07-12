#include <iostream>
using namespace std;
int main(){
	long long int n;
	int k;
	cin >> n;
	cin >> k;
	while(k--){
		if(n%10==0)	n/=10;
		else	n-=1;
	}
	cout << n;
	return 0;
}