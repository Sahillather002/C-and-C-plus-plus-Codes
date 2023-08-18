//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        //  not sliding window
        int ans=0;
        int i=0,j=0;
        long long sum=0;
        unordered_map<int,int>mp;
        while(j<n){
            sum+=arr[j];
            if(sum==k){
                ans=max(ans,j-i+1);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=j;
            }
            if(mp.find(sum-k)!=mp.end()){
                ans=max(ans,j-mp[sum-k]);
            }
            j++;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
