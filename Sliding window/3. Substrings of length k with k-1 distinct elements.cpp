//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string s, int k) {
        // code here
        int ans=0;
        int i=0,j=0;
        int n=s.size();
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                //cout<<mp.size();
                if(mp.size()==k-1)ans++;
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
