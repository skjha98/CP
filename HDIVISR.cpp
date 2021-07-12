#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=10; i>0; i--){
		if(n%i){
			continue;
		}
		cout << i;
		break;
	}
	return 0;
}
