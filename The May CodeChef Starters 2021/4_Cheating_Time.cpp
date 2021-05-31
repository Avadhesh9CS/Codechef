//Cheating Time
/*
Chef's college is conducting an online exam, where his camera will be monitored by one or more invigilators (supervisors). Once again, Chef failed to prepare for the exam on time and decided to google answers during it.

The exam starts at time 0 and ends at time F minutes. Chef needs a total of K minutes of googling during the exam in order to pass it. There are N invigilators (numbered 1 through N); for each valid i, the i-th invigilator monitors Chef's camera during the time interval starting at Si minutes since the start of the exam and ending at Ei minutes (where 0≤Si≤Ei≤F). He was resourceful enough to somehow get hold of these times and now he wants to know if he would be able to pass the exam if he googles the answers during the times when no one is looking at his camera.

Note: The time of googling need not be continuous and there can be multiple invigilators at some interval of time.

Input
    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.The first line of each test case contains three space-separated integers N, K and F.N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ei.

Output
For each test case, print a single line containing the string "YES" if it is possible to pass the exam or "NO" if it is impossible.
You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤105
1≤N≤105
1≤F≤109
0≤K≤F
0≤Si≤Ei≤F
for each valid i
the sum of N
over all test cases does not exceed 2⋅105

Example Input

3
1 10 10
0 10
2 2 10
0 5
7 10
2 2 100
0 5
5 10

Example Output

NO
YES
YES

Explanation

Example case 1: There is no point during the exam when Chef is not monitored, so he is unable to google even for a single second and will fail the exam.

Example case 2: Chef can google for 2 minutes (in the time interval [5,7], when he is not monitored) and hence will be able to pass the exam.

Example case 3: Chef can google for 2 minutes (in the time interval [10,12]) and hence will be able to pass the exam.
*/
#include "bits/stdc++.h"
#define fastIO() ios_base::sync_with_stdio(0);cout.tie(0);iostream::sync_with_stdio(0);cin.tie(0); 
#define ll long long int
#define pb emplace_back
#define mk make_pair
#define pa pair<ll,ll>
#define pii pair<int,int>
#define F first
#define S second
#define vi vector<int>
#define vli vector<ll>
#define vii vector<pii>
#define mi map<int,int>
#define mii map<pii,int>
#define max_value 4294967296
#define M_PI 3.14159265358979323846
#define mp make_pair
#define sz(x) (int)x.size()
#define loop(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rloop(i,a,b,c) for(ll i=a;i>b;i-=c)
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define modN %1000000007
const int mx = 1e5+10;
using namespace std;
char OutputAcc[20];

template<typename T> T getInt(){ 
          register char InputAcc = ',';
          T ret = 0, sign = 0; 
          while (InputAcc < '0' || InputAcc > '9'){
                    if(InputAcc == '-') sign = 1; 
                    InputAcc = getchar_unlocked(); 
                    } 
          while (InputAcc >= '0' && InputAcc <= '9'){
                    ret = (ret * 10 + (InputAcc - '0')); 
                    InputAcc = getchar_unlocked(); 
                    } 
          return (sign) ? -ret : ret;
          }
template<typename T> void putInt(T a, char end = ' '){
          if (a < 0){ 
                    putchar_unlocked('-'); 
                    a = -a; 
          } 
          if (a == 0){ 
                    putchar_unlocked('0'); 
          }else{ 
                    T i = 20; 
                    while (a){ 
                              OutputAcc[--i] = (char)(a % 10 + '0'); a /= 10; 
                    } 
                    while (i < 20) 
                              putchar_unlocked(OutputAcc[i++]); 
          }
          putchar_unlocked(end); 
}
ll c[mx],d[mx],cnt[mx];
char str[100005];
void getstring(){
	int i=1;
	str[0]='@';
 	register char ch=getchar_unlocked();
 	while(ch<'0')
 		ch=getchar_unlocked();
 	while(ch>='0'){
 		str[i++]=ch;
  		ch=getchar_unlocked();
 	}
}

void runTestcase(){
  int N=getInt<int>();
  int K=getInt<int>();
  int F=getInt<int>();
  vector<pair<int,int>> vec;
  int s,e;
  for(int i=0;i<N;i++){
    s=getInt<int>();
    e=getInt<int>();
    vec.pb(make_pair(s,e));
  }
  int sum=0,temp;
  sort(vec.begin(),vec.end());
  s=0,e=0;
  for (int i=0; i<N; i++){
    e=vec[i].first;
    temp=e-s;
    if(temp>0){
        sum+=temp;
      }
    s=max(s,vec[i].second);
    }
    temp=F-s;
    if(temp>0){
      sum+=temp;
    }
    if(sum>=K){
      cout<<"YES\n";
      return;
    }
    cout<<"NO\n";
}
int main(){
          fastIO();
	ll testcase=getInt<ll>();
          loop(i,0,testcase,1){
    	          runTestcase();
          }
          return 0;
}