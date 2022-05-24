// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m == n){
            return -1;
        }
        int XOR = m ^ n;
        int lastSet = XOR & (~(XOR -1));
        int count = 1;
        while (lastSet > 0){
            if(lastSet & 1 == 1){
                break;
            }else{
                count++;
            }
            lastSet = lastSet >> 1;
        }
        
        return count;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends