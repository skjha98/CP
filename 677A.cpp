#include <iostream>
using namespace std;
int main(){
	int n,h, temp, sum=0;
	cin >> n >> h;
	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp>h)	sum++;
		sum++;
	}
	cout << sum;
	return 0;
}