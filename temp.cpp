#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m=0,n=0;
	    cin>>m>>n;
	    string a;
	    cin>>a;
	   cout<<endl;
	   for(int i=0;i<n;i++)
	   {
	       string b=a;//('0',m);
	       for(int j=0;j<m;j++)
	       {
	           if(a[j]=='1')
	            b[j]='1';
	           else
	           {
	           if(j==0)
	           {
	             if(a[j+1]=='1')
	                b[j]='1';
	           }
	           else if (j==(m-1))
	            {
	                if(a[j-1]=='1')
	                    b[j]='1';
	            }
	           else
	        {
	            //cout<<'1'+'1'<<"xx"<<'1'+'0'<<"xx"<<'0'+'0';
	            if(a[j-1]+a[j+1]-'0'=='1')
	                b[j]='1';
	        }
	           }
	       }
	       a=b;
	   }
	   cout<<a;
	}
	return 0;
}