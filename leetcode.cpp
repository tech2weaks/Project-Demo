#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=0,y=1;
	int n = 5;
	if(n==1)cout<<x;
	else if(n==2) cout<<y;

	for(int i=3; i<=n; i++){
		int t = x+y;
		if(n == i)
			cout<<t;
		
		x = y;
		y = t;
	}
   
    
    return 0;

}