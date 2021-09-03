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

int dtb(int n){
    int x =1;
    int ans =0;
    while(x<=n){
        x*=2;
    }
    x /=2;

    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /=2;
        ans = ans *10 + lastDigit;
    }
    return ans;
}
int32_t main()
{
    int n;
    cin >> n;

    cout << dtb(n) << endl;
}