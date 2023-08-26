//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans=-1;
    unordered_map<char,int>mp;
    int i=0,j=0;
    int n=s.size();
    while(j<n){
        mp[s[j]]++;
        if(mp.size()<k)j++;
        else if(mp.size()==k){
            ans=max(ans,j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
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
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends


# Little shorter code

```
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>mp;
    int ans=-1;
    int i=0,j=0,n=s.size();
    while(j<n){
        mp[s[j]]++;
        if(mp.size()==k){
            ans=max(ans,j-i+1);
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
        }
        j++;
    }
    return ans;
    }
};

```
