#include <iostream>
#include <vector>

using namespace std;

vector <int> is_prime(1e5, true);

void precompute() {
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i<1e5; i++){
        if(is_prime[i]){
            for(int itr = 2*i; itr<1e5; itr+=i){
                is_prime[itr]=false;
            }
        }
    }
}

int main() {
    precompute();
    int t, n, k, sum = 0, count = 0;
    cin >> t;
    while(t--){
        sum = 0;
        count=0;
        int tmp =0;
        cin >> n;
        cin >> k;
        for(int i=0; i<n; i++){
            cin >> tmp;
            if(is_prime[tmp]){
                
                count++;
                if(count%k==0){
                    sum+=tmp;
                }
            }
        }
        cout << sum << "\n";
    }
}