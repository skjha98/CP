#include <iostream>
using namespace std;
int main(){
	long long int n, i;
	cin >> n;
	if(n==1){
		cout << 1;
		return 0;
	}
	if(n>1 && n<4){
		cout << "NO SOLUTION";
		return 0;
	}
	for(i=2; i<=n; i+=2) cout << i << " ";
	for(i=1; i<=n; i+=2) cout << i << " ";
	return 0;
}