#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
  int t;
	cin >> t;
	while(t--){
	    int n, x, sol=0;
	    double sum=0.0,avg=0.0;
	    cin >> n >> x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	     for (int i=n-1; i>=0; i--) {
            sum += arr[i];
            avg = sum/(double(n-i));
            if (avg >= x){
               ++sol;
            }
            else{
              break;
            }
        }
        cout << sol << endl;
	}
