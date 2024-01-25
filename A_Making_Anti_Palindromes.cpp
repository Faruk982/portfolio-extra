// Faruk
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define SetBit(x, k) (x |= (1ll << k))
#define ClearBit(x, k) (x &= ~(1ll << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define CC(x) cout << "Case " << ++x << ": ";
#define pi pair<long long int, long long int>
const int N =2e5+10;
const int M = 998244353;

vector<ll> vg;
vector<ll> vk;
map<ll, ll> vis1;
map<ll, ll> vis2;
map<ll, ll> vis3;
map<ll, ll> vis;
unordered_map<ll, ll> depth;
vector<ll> g[N];
ll i, j, k, l, m, n, a, b, c, d, f, h, t, q, e, x, y, z, w;
 map<ll,ll>rightr,leftr,parr;

bool cmp(pair<long long int, long int> p1, pair<long long int, long int> p2)
{
    if (p1.first == p2.first)
    {
        return p1.second > p2.second;
    }
    else
        return p1.first < p2.first;
}
long long int binE(long long int a, long long int b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % M;
        }
        a = (a * a) % M;
        b >>= 1;
    }
    return res;
}
map<ll, ll> facc,crr;


#define pii pair<ll, ll>
ll ans;string ss;
void dfs(ll v)
{
    if(vis2[v])return;
    vis2[v]=1;
    if(leftr[v]==0&&rightr[v]==0)
    {
        ans=min(ans,crr[v]);
        return;
    }
    else if(ss[v-1]=='U')crr[v]++;
    if(leftr[v])
    {
        crr[leftr[v]]=crr[v];
        if(ss[v-1]=='R'){
            crr[leftr[v]]++;

        }  dfs(leftr[v]);
    }
    if(rightr[v])
    {
        crr[rightr[v]]=crr[v];
        if(ss[v-1]=='L'){
         crr[rightr[v]]++;
        }
        dfs(rightr[v]);
    }
    return;

}

map<char, int> cchar;
ll kfc(ll x,ll y)
{
    if(x%y==0)return x/y;
    else return (x/y+1);
}
vector<bool>isprime(N,true);
vector<ll>prime;
vector<ll>vdv[N];
ll mmf=1,mxf;
void dfs(ll ver,ll par){
  vis[ver]=1;
  for(ll child:g[ver]){
    if(vis[child]&&child!=par&&par){
     //  cout<<child<<" "<<par<<" "<<ver<<endl;
        mmf++;
    }
    if(vis[child])continue;
    dfs(child,ver);
  }
}
int main()
{

    vector<ll> pre;
    vector<pair<ll, ll>> v_pi;
//    isprime[0]=isprime[1]=false;
//    for(i=2;i<=N;i++)
//    {
//     if(isprime[i]){
//         prime.push_back(i);
//         for(j=2*i;j<=N;j+=i)isprime[j]=false;
//     }
//    }
//    for(i=1;i<=N;i++)
//    {
//     for(j=i;j<=N;j+=i)vdv[j].push_back(i);
//    }
// n=196560;
//  for(i=1;i<=n;i++){
//         if(n%i==0)vg.push_back(i);
//      }
//      cout<<vg.size()<<endl;
//      vg.clear();
 
    cin >> t;ll P,tt;
    while (t--)
    {
      cin>>n;
      vis.clear();
      string ssi;
      cin>>ssi;
      map<char,ll>vch,vss,vc;
      vector<char>vck;
      vector<pair<ll,char>>vcp;
      ll ans=-1;
      if(n%2==0)
      {
       i=0;j=n-1;
       ll sum=0;
       ll mo=0;l=0;
       while(i<j)
       {
        vc[ssi[i]]++;vc[ssi[j]]++;
          if(ssi[i]==ssi[j])
          {
              if(vch[ssi[i]]==0)
              {
                vck.push_back(ssi[i]);
              }
              l++;
              vch[ssi[i]]++;
              mo=max(mo,vch[ssi[i]]);
          }
          else{
               sum++;
             vss[ssi[i]]--;vss[ssi[j]]--;
          }
          i++;j--;
       }
       
       if(l%2!=0)l++;
       l/=2;
       mo=max(mo,l);
       for(auto x:ssi)
       {
        if(vc[x]>(n/2)){
            mo=-1;break;
        }
       }
    
       ans=mo;
      }
      cout<<ans<<endl;
     cchar.clear();
        pre.clear();crr.clear();
        leftr.clear();rightr.clear();
       parr.clear();
       vk.clear();vg.clear();
        v_pi.clear();
        vis.clear();
        // finer.clear();
        vk.clear();
        pre.clear();
        vg.clear();
        // vis.clear();
        // cntr.clear();
        vis2.clear();
        vis3.clear();
        vis1.clear();
        depth.clear();
    }
}