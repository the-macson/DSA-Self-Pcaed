// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    bool isLuckyNum(int n,int counter){
        if(counter > n){
            return 1;
        }
        if(n % counter == 0){
            return 0;
        }
        isLuckyNum(n - (n/counter),counter + 1);
    }
    bool isLucky(int n) {
        // code here
        return isLuckyNum(n,2);
    }

// { Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends