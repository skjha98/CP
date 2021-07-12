#include <iostream>
using namespace std;
int solve(int arr[], int n){
	int max=0, min=n, step=0, l=0, r=n-1;
	for(int i=0; i<n; i++){
		if(arr[max]<arr[i]) max=i;
		if(arr[min]>arr[i]) min=i;
	}
	if(n-max-1>min-0){
		step = (r-min>min-l)?min-l+1:n-min;
		step += (r-max>max-l)?max-l+1:n-max;
	}else{
		step = (r-max>max-0)?max-l+1:n-max;
		
		step += (r-min>min-0)?min-l+1:n-min;
	}
	return step;
}
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		cout << solve(arr,n) << '\n';
	}
	return 0;
}