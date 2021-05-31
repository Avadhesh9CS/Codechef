//Tom And Jerry 1
/*
There is a grid of size 105×105, covered completely in railway tracks. Tom is riding in a train, currently in cell (a,b), and Jerry is tied up in a different cell (c,d), unable to move. The train has no breaks. It shall move exactly K steps, and then its fuel will run out and it shall stop. In one step, the train must move to one of its neighboring cells, sharing a side. Tom can’t move without the train, as the grid is covered in tracks. Can Tom reach Jerry’s cell after exactly K steps?

Note: Tom can go back to the same cell multiple times.

Input
    The first line contains an integer T, the number of test cases. Then the test cases follow. Each test case contains a single line of input, five integers a,b,c,d,K.

Output
For each testcase, output in a single line "YES" if Tom can reach Jerry's cell in exactly K moves and "NO" if not.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤105
0≤a,b,c,d≤105
(a,b)≠(c,d)
1≤K≤2⋅105

Subtasks

Subtask #1 (100 points): original constraints

Sample Input

3
1 1 2 2 2
1 1 2 3 4
1 1 1 0 3

Sample Output

YES
NO
YES

Explanation

Test Case 1
: A possible sequence of moves is (1,1)→(1,2)→(2,2).

Test Case 2
: There is a possible sequence in 3 moves, but not in exactly 4 moves.

Test Case 3: A possible sequence of moves is (1,1)→(1,0)→(0,0)→(1,0).
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
  ll a=getInt<int>();
  ll b=getInt<int>();
  ll c=getInt<int>();
  ll d=getInt<int>();
  ll target=getInt<int>();
  ll ans=target-(abs(c-a)+abs(d-b));
  if(ans>=0 && ans%2==0){
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