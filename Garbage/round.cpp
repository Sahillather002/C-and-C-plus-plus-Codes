#include<bits/stdc++.h>
using namespace std;
int main(){
    string value="123456789.2345";
    string final="";
    string back="";
    
    //finding .
    int n=value.size();
    int decimals=0;
    int nearest=0;
    int extras=0;
    for(int i=0;i<n;i++){
        if(value[i]=='.' || value[i]==','){
            extras++;
        }
        if(value[i]=='.'){
            for(int j=i+1;j<n;j++){
                decimals++;
                nearest=nearest*10+(value[j]-'0');
            }
            break;
        }
    }
    
    cout<<decimals<<endl;
    cout<<nearest<<endl;
    if(decimals>2){
        if()
    }
    else{
        
    }
    int start=n-decimals;
    if(decimals!=0)start-=1;
    if(start>3){
        for(int i=start-1;i>=start-3;i--){
            final+=value[i];
        }
        final+=",";
        int t=2;
        if(start-3<=2){
            final+=value[start-4];
            final+=value[start-5];
        }
        else
        for(int i=start-3;i>=0;i--){
            t--;
            final+=value[i];
            if(t==0){
                final+=",";
                t=2;
            }
        }
    }
    else final=value;
    reverse(final.begin(),final.end());
    cout<<final;
    
    return 0;
}
