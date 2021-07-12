#include <iostream>
#include <vector>

using namespace std;

vector <int> is_prime(1e5, true);
vector <int> prime;

void precompute() {
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i<1e5; i++){
        if(is_prime[i]){
            for(int itr = 2*i; itr<1e5; itr+=i){
                is_prime[itr]=false;
            }
            prime.push_back(i);
        }
    }
}

int main() {
precompute();
    int t, weight=0, sum_possible=false;
    cin >> t;
    while(--t){
        cin >> weight;
        sum_possible=false;
        for(int i=0; prime[i]<weight; i++){
            if(is_prime[weight-prime[i]]){
                sum_possible=true;
                break;
            }
        }
        
        if(sum_possible==true) cout<<"Deepa\n";
        else cout << "Arjit\n";
    }
}