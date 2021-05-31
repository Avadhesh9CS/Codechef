//Lazy Chef 
/*
Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m∗x units of time. But there is always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to complete the work.

Input:
    First line will contain T, number of testcases. Then the testcases follow.Each testcase contains a single line of input, three integers x,m,d

Output:
For each testcase, output in a single line answer to the problem.
Constraints
    1≤T≤10^4
    1≤x,m≤10
    0≤d<100

Sample Input:

3
1 1 0
1 3 1
2 2 3

Sample Output:

1
2
4

Explanation:

TestCase 1
: Chef takes 1∗1=1 unit of time which is equal to the upper bound(1+0=1 unit) to do the work.

TestCase 2
: Chef takes min(1∗3,1+1)=min(3,2)=2 units of time to do the work.

TestCase 3
: Chef takes 2∗2=4 units of time which is less than the upper bound(2+3=5 units) to do the work. 
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
    int x=getInt<int>();
    int m=getInt<int>();
    int d=getInt<int>();
    int ans=min(x*m,x+d);
    putInt(ans,'\n');
}
int main(){
        fastIO();
	ll testcase=getInt<ll>();
          loop(i,0,testcase,1){
    	          runTestcase();
          }
          return 0;
}