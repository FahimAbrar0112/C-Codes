#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];

int fibo(int n)   // 0 1 1 2 3 5 8 
{   
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1 ) return dp[n] ;

    return dp[n]= fibo(n-1) + fibo(n-2) ;
}


int main(void)
{   
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;

    cout<<fibo(n)<<endl;

    return 0;
}