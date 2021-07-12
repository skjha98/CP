#include <iostream>
#include <vector>
#define max 2e5

using namespace std;

vector<bool> min_prime(max, true);
vector<unsigned long long int> prime;

void precompute(){
	for(int i=2; i<max; i++){
		if(min_prime[i]){
			for(int itr=2*i; itr<max; itr+=i){
				min_prime[itr]=false;
			}
			prime.push_back(i);
		}
	}
}

int main(){
	precompute();
	unsigned long long int n, sum=0, i=0;
	cin >> n;
	for(i=0; prime[i]<=n; i++){
		if(i!=0){
				prime[i] = prime[i]+prime[i-1];
				//cout << prime[i] << "\n";
		}
	}
	cout << prime[i-1];
	return 0;
}
