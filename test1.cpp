#include <iostream>
#include <string>
using namespace std;
int countSubStrings(string s){
	int sum =0,x=0, y=0;
	for(int i=0; i<s.size(); i++){
		x=y=0;
		for( int j=i; j<s.size(); j++){
			if(s[j]<='Z')x++;
			if(s[j]>='a')y++;
			if(x==y)sum++;
		}
	}
	return sum;
}
int main(){
	string s;
	cin >> s;
	cout << countSubStrings(s);
}