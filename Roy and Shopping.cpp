#include <iostream>
#include <vector>

using namespace std;

vector <int> min_prime_fact(1e6, -1);
void precompute() {
    min_prime_fact[0] = 0;
    min_prime_fact[1] = 1;
    for(int i=2; i<1e6; i++){
        if(min_prime_fact[i]==-1){
            for(int itr = i; itr<1e6; itr+=i){
                if(min_prime_fact[itr]==-1) min_prime_fact[itr] = i;
            }
        }
    }
}

int main() {
    precompute();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << n - min_prime_fact[n] << "\n";
    }
    return 0;
}