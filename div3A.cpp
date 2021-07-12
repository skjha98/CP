#include <iostream>
using namespace std;
int main(){
    int n,x,f, t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        if(n == 1 or n == 2) cout << 1;
        else{
            cout << (int)((int)(n/x)+1);
        }
    }
    
    return 0;
}