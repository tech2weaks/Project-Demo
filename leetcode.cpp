#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int fact = 1;
    while(n)
        fact *= n--;

    cout<<"factorial = "<<fact;
    
    
    return 0;

}