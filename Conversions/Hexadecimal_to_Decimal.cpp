#include <bits/stdc++.h>
using namespace std;

int btd(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int htd(string n){
    int ans =0;
    int x=1;

    int s= n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += x*(n[i]-'A' + 10);
        }
        x *=16;
    }
    return ans;

}

int32_t main()
{
    string n;
    cin >> n;

    cout << htd(n) << endl;
}