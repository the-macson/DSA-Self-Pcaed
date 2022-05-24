// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        int table[256];
        table[0] = 0;
        for (int i = 0; i < 256; i++){
            table[i] = (i&1) + table[i/2];
        }
        int res = 0;
        for (int i = 1; i < n; i++){
            int j = i;
            int count = table[j & 0xff];
            j = j >> 8;
            count = count + table[j & 0xff];
            j = j >> 8;
            count = count + table[j & 0xff];
            j = j >> 8;
            count = count + table[j & 0xff];
            res = res + count;
        }
        return res;
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends