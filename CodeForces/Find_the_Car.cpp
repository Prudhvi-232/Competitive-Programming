#include <bits/stdc++.h>
using namespace std;

#define int long long

#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define line cout<<"\n"

#define full(x) x.begin(),x.end()
#define pb push_back
#define ppb pop_back

#define fori(i,a,n) for(int i=a;i<n;i++)
#define ford(i,n,a) for(int i=n-1;i>=a;i--)

#define cap(s) std::transform(s.begin(), s.end(), s.begin(), std::ptr_fun<int, int>(std::toupper))
#define small(s) std::transform(s.begin(), s.end(), s.begin(), std::ptr_fun<int, int>(std::tolower))

const int mod = 1e9 + 7;

int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}


void solsh()
{
	int n,k,q;
	cin>>n>>k>>q;
	
	int a[k+1], b[k+1]; 
	a[0]=0; b[0]=0;
	
	for(int i=1;i<=k;i++){
	    cin>>a[i];
	}
	for(int i=1;i<=k;i++){
	    cin>>b[i];
	}
	
	while(q--){
	    
	    int d;
	    cin>>d;
	    
	    if(d==0){cout<<0<<" "; continue;}
	    if(d==n){cout<<b[k]<<" "; continue;}

	    int ind = upper_bound(a,a+k+1,d) - a;
	    int ans = b[ind-1]; //time taken to the reach the stop just before distance d
	    
	    int dist = a[ind] - a[ind-1];
	    int time_taken = b[ind] - b[ind-1] ;
	    
	    // time_to_cover_unit_dist = time_taken/dist;
	    
	    int extra_dist_to_cover = d-a[ind-1];
	    int extra_time = (extra_dist_to_cover*time_taken)/(dist);
	    ans+=extra_time;
	    
	    cout<<ans<<" ";
	}
	line;

}
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		solsh();
	}
}