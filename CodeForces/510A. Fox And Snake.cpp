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
#define wl(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010],c[200010],d[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,mn=200,m,pos,mx=0,l,dif,f=0;
    LLI sum=0;
    cin >> n >> m;
    for(j=1;j<=n;j++)
    {
        if(j%2)
        {
            for(i=0;i<m;i++) cout << "#";
                cout << endl;
        }
        else
        {
            if(f%2)
            {
                cout << "#";
                for(i=1;i<m;i++) cout << ".";
                    cout << endl;
                f++;
            }
            else
            {
 
                for(i=1;i<m;i++) cout << ".";
                    cout << "#";
                    cout << endl; 
                    f++;
            }
        }
    }
 
return 0;
}