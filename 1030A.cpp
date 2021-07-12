#include <iostream>
using namespace std;
int main(){
	int n, temp;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp){
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
	return 0;
}