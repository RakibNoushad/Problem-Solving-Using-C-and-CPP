#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b)  upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b)  lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a)   sort(a.begin(),a.end())
#define wl(t)    cin >> t; while(t--)
#define fr(t)  cin >> t; for(i=0;i<t;i++)
 
char x[200010],y[200010],z[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,f=0,mn,m,dif=0,pos,mx,l;
    LLI sum =0;
 
    wl(t)
    {
        mx=0,f=0;
        cin >> n;
        vi v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
 
        }
        srt(v);
        j=v[0];
        for(i=1;i<n;i++)
        {
            if(j!=v[i])
            {
                j=v[i];
                f++;
            }
        }
        cout << f+1 << endl;
    }

return 0;
}