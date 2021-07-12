#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
	int init[2], finl[2], t;
	cin >> t;
	while(t--){
		cin >> init[0] >> init[1] >> finl[0] >> finl[1];
		if(init[0]==finl[0]||init[1]==finl[1]){
			cout << abs(init[0]-finl[0] + init[1]-finl[1]) << endl;
		}
		else {
			cout << abs(init[0]-finl[0] + init[1]-finl[1]) + 2 << endl;
		}
	}
	return 0;
}


