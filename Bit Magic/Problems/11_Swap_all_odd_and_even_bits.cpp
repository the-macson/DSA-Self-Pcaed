// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
        // int mask1=0x55555555; //01010101
    	// int mask2=0xAAAAAAAA; //10101010
    	// int odd=(mask1 & n);
    	// int even=(mask2 & n);
    	
    	// odd<<=1; even>>=1;
    	
    	// return (odd|even) ;

        return ((0x55555555 & n) << 1|(0xAAAAAAAA & n) >> 1);
    	// Your code here
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends