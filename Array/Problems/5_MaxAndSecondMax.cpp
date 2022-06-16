// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max1 = INT_MIN, max2= INT_MIN;
        vector<int>ans;
        if(sizeOfArray == 1){
            ans.push_back(arr[0]);
            ans.push_back(-1);
            return ans;
        }else if(sizeOfArray == 2){
            ans.push_back(max(arr[0],arr[1]));
            ans.push_back(min(arr[0],arr[1]));
        }
        for(int i = 0;i < sizeOfArray; i++){
            if(max1 < arr[i]){
                max2 = max1;
                max1 = arr[i];
            }
            if(max2 < arr[i] && max1 > arr[i]){
                max2 = arr[i];
            }
        }
        ans.push_back(max1);
        ans.push_back(max2);
        return ans;
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends