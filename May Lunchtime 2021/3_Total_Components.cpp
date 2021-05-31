//Total Components
/*
You are given all N−1 integers in the range [2,N]. In each step, you choose 2 distinct integers and if they share a common factor greater than 1, you combine them into the same group. You keep doing it until no further merging is possible.

Belonging to a group is an equivalence relation. So if integers a and b are in the same group and integers b and c are in the same group, then integers a and c are also said to be in the same group.Find the total number of groups formed in the end.

Input
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, a single integer N.

Output
For each test case, output in a single line the answer to the problem.

Constraints
1≤T≤2⋅105
2≤N≤107

Subtasks

Subtask #1 (30 points):
1≤T≤200
2≤N≤1000

Subtask #2 (70 points): original constraints

Sample Input

3
2
4
8

Sample Output

1
2
3

Explanation

Test Case 1: The final group is {2}.

Test Case 2: The final groups are {2,4}, and {3}.

Test Case 3: The final groups are {2,3,4,6,8}, {5}, and {7}.
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
  ll N,count=1,flag=0;
  N=getInt<int>();
  ll arr[N+1]={0};
  for(int i=2;i<=N;i++){
    for(int j=2*i;j<=N;j+=i){
      if(j==2*i && arr[j]!=0){
        arr[i]=arr[j];
        flag=1;
      }
      if(!flag)
        arr[j]=count;
      else
        arr[j]=arr[i];
    }
    flag=0;
    if(arr[i]==0){
        arr[i]=count;
        count++;
      }
  }
  --count;
  putInt(count,'\n');
}
int main(){
  fastIO();
  ll testcase=getInt<ll>();
  loop(i,0,testcase,1){
    runTestcase();
  }
  return 0;
}