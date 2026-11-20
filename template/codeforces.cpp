// @hhei48
// www.hadrian.cc

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb long double
#define ull unsigned long long
#define pi acos((lb)-1)
#define all(a) (a).begin(), (a).end()
#define dbg(v) cout << #v << ":_" << (v) << endl;
#define ump(x, y) unordered_map<x, y, cus>

const int inf=1e18;
const int INT_MX=9223372036854775807;
const int INT_MN=-9223372036854775807;
const int mod=1e9+7;
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};

// rm duplicate elements in a list
template<class T>void xdup(vector<T> &v){sort(all(v));v.erase(unique(all(v)), end(v));}

// hasing algo to prevent testcase hacking
struct cus{static uint64_t splitmix64(uint64_t x){
x+=0x9e3779b97f4a7c15;
x=(x^(x>>30))*0xbf58476d1ce4e5b9;
x=(x^(x>>27))*0x94d049bb133111eb;return x^(x>>31);}
size_t operator()(uint64_t x)const{
static const uint64_t fixrand=chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x+fixrand);}};

// fast power
int fpow(int a, int b){int res=1;
while(b>0){if(b&1) res*=a;a*=a;b>>=1;
}return res;}int fpowmod(int a, int b, int mod){int res=1;
while(b>0){if(b&1) res=((res%mod)*(a%mod))%mod;
a=((a%mod)*(a%mod))%mod;b>>=1;
}return res%mod;}

void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}

//LETS GET CODING
//ADD OIL AC!!!

void hhei48(){

	return;
}

/*

*/

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int tt=0; cin >> tt; while(tt--)

	hhei48();
    return 0;

}

/**********WA, TLE???***************
*array bounds, overflow, underflow *
*corner case (n=1? n=BRUH_HUGE_NUM)*
*redefine the problem              *
*do sth instead of nothing         *
*STAY ORGANIZED                    *
*WRITE STUFF DOWN                  *
*DON"T GET STUCK ON ONE APPROACH   *
***********************************/
