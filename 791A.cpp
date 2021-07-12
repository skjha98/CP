#include <iostream>

using namespace std;
int main(){
	int b, l, i=0;
	cin >> l;
	cin >> b;
	while(l<=b){
		b*=2;
		l*=3;
		i++;
	}
	cout << i;
	return 0;
}