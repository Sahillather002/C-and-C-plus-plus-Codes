//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long>nsl(n,-1),nsr(n,n);
        stack<long long>st;
        //nsl
        for(int i=0;i<n;i++){
            while(!st.empty()){
                if(arr[st.top()]<arr[i]){
                    nsl[i]=st.top();
                    break;
                }
                else st.pop();
            }
            st.push(i);
        }
        st=stack<long long>();
        
        //nsr
        for(int i=n-1;i>=0;i--){
            while(!st.empty()){
                if(arr[st.top()]<arr[i]){
                    nsr[i]=st.top();
                    break;
                }
                else st.pop();
            }
            st.push(i);
        }
        
        long long ans=0;
        for(int i=0;i<n;i++){
            //cout<<nsr[i]<<" "<<nsl[i]<<" "<<arr[i]<<endl;
            ans=max(ans,arr[i]*(abs(nsr[i]-nsl[i])-1));
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends
