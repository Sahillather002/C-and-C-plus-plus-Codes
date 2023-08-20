//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>v(n,-1);
       stack<int>st;
	// storing nearest greater element index to left of that current element
       for(int i=0;i<n;i++){
           while(!st.empty()){
               if(price[st.top()]>price[i]){
                   v[i]=st.top();
                   break;
               }
               else{
                   st.pop();
               }
           }
           st.push(i);
       }
       vector<int>ans(n,-1);
       ans[0]=1;
       for(int i=1;i<n;i++){
           if(v[i]==-1){
               ans[i]=i+1;
           }
           else{
               ans[i]=abs(v[i]-i);
           }
       }
       return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
