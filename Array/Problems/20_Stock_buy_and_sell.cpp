// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>>ans;
        int flag = false;
        int j = 0;
        vector<int>v;
        for(int i = 0; i < n-1; i++){
            if(A[i] < A[i+1] && flag == false){
                v.push_back(i);
                flag = true;
            }else if(A[i] > A[i+1] && flag == true){
                v.push_back(i);
                ans.push_back(v);
                v.clear();
                flag = false;
            }
        }
        if(flag == true){
            v.push_back(n-1);
            ans.push_back(v);
        }
        cout << ans.size() << endl;
        // print ans
        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < ans[i].size(); j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        return ans;
    }
};


int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}
