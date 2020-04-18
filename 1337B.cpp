#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
 
int main() {
  int t;
	cin >> t;
	while(t--){
	    int h, n, m;
	    cin >> h >> n >> m;
	    while(h>20 && n>0){
	        h = floor(h/2) + 10;
	        n--;
	    }
	    h = h-(m*10);
	    if(h>0){
	        cout << "NO"<< endl;
	    }
	    else {
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
