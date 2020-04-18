#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int len;
    cin >> len;
    long long int a = 0;
    vector <long long int> arr;
    while(len--){
        long long int x;
        cin >> x;
        arr.push_back(x+a);
        a = max(a,x+a);
        if(len==0){
            std::cout << arr.back() ;
        }
        else{
        std::cout << arr.back() << " ";
        }           
     } 
	return 0;
}
