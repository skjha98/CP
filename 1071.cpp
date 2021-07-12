#include <iostream>
#define lli long long int
using namespace std;
int main(){
	lli t,y,x;
	cin >> t;
	while(t--){
		cin >> y >> x;
		if(x%2 == 1 && x>=y){
			cout << (x*x)-(y-1) << "\n";
		}else if(y%2 == 0 && y>=x){
			cout << (y*y)-(x-1) << "\n";
		}else if((x-1)%2 == 1 && x>=y){
			cout << (x-1)*(x-1)+y << "\n";
		}else if((y-1) == 0 && y>=x){
			cout << (y-1)*(y-1)+x << "\n";
		}
	}
	return 0;
}