#include <iostream>
using namespace std;
int main(){
	int t, n, a[3][100];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<3;i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		cout << a[0][0] << " ";
		for(int i=0, j=1; j<n; j++){
			if(a[i%3][j-1]==a[i%3][j]){
				cout << a[++i%3][j] << " ";
			}else{
				cout << a[i%3][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

