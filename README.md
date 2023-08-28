# C-and-C-plus-plus-Codes
### Stack basics:
* Find the nearest smaller numbers on left side in an array (NSL)
  
```
 vector<int> small_to_left(vector<int> &A)
{
    int n= A.size();
    vector<int> ans(n,-1);
    stack<int> st;
    
    for(int i=0;i<n;i++)
    {
        while(!st.empty())
        {
            if(st.top()< A[i])
            {
                ans[i]=st.top();
                break;
            }
            else st.pop();   // keep deleting
        }
        st.push(A[i]);   
    }
    return ans;
}
```

* Find the nearest smaller numbers on right side in an array (NSR)

```
vector<int> small_to_right(vector<int> &A)
{
    int n= A.size();
    vector<int> ans(n,-1);
    stack<int> st;
    
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty())
        {
            if(st.top()< A[i])  
            {
                ans[i]=st.top();
                break;
            }
            else st.pop();   // keep deleting
        }
        st.push(A[i]);  
    }
    return ans;
}
```

* Find the nearest greater numbers on right side in an array (NGR)

```
vector<int> big_to_right(vector<int> const &input)
{
    int n = input.size();
    vector<int> result(n, -1);
 
    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty())
        {
            // pop elements that aren't greater than the current element
            if (s.top() > input[i]) {
                result[i] = s.top();
                break;
            }
            else {
                s.pop();
            }
        }
        s.push(input[i]);
    }
 
    return result;
}
```

* Find the nearest greater numbers on left side in an array (NGL)
* same question as above just traverse from left 2 right insread of right to left

```
vector<int> big_to_left(vector<int> const &input)
{
    int n = input.size();
    vector<int> result(n, -1);
 
    stack<int> s;

    for (int i = 0; i <n ; i--)
    {

        while (!s.empty())
        {
            // pop elements that aren't greater than the current element
            if (s.top() > input[i]) {
                result[i] = s.top();
                break;
            }
            else {
                s.pop();
            }
        }
        s.push(input[i]);
    }
    return result;
}
```
