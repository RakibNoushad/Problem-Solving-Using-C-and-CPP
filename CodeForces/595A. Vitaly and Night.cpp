#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pw(x,y) (int)pow(x,y)+0.5
#define ub(a,b)  upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b)  lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a)   sort(a.begin(),a.end())
#define w(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
bool isPrime(int n){if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)if(n%i==0) return false;
    return true;}
 
const int MX = 1e5 + 7 ;
const int INF = 1e9 + 7 ;
 
char x[200010],y[200010],z[1000010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    LLI t, n,k, i=0,mn=INF,m,pos=0,mx=0,dif,f=0,j,l=0,r, l2, r2;
    LLI  sum=0,maxSum, curSum;
    double one=0;
    int flat[110][10010];
    
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j++)
        {
            cin >> flat[i][j];
        }
    }
    sum=n*m;
    for(i=0;i<n;i++)
    {
        for(j=1;j<2*m;j+=2)
        {
            if(flat[i][j]==0 && flat[i][j-1]==0) sum--;
        }
    }
 
 cout << sum << endl;
        
return 0;
}