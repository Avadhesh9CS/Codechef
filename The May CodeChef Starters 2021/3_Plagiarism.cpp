//Plagiarism
/*
You are an administrator of a popular quiz website. Every day, you hold a quiz on the website. There are N users (numbered 1 through N) and M admins (numbered N+1 through N+M). For each quiz, each user is allowed to attempt it at most once. Sometimes, admins attempt the quizzes for testing purposes too; an admin may attempt a quiz any number of times. On a certain day, the quiz was attempted K times. For each i (1≤i≤K), the i-th of these attempts was made by the person with number Li. Find all the users who attempted the quiz more than once, in order to disqualify them.

Input
    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.The first line of each test case contains three space-separated integers N, M and K. The second line contains K space-separated integers L1,L2,…,LK

Output
For each test case, print a single line containing an integer D
denoting the number of users who should be disqualified, followed by a space and D space-separated integers denoting their numbers in ascending order.

Constraints
1≤T≤10
0≤N,M≤105
1≤N+M,K≤105
1≤Li≤N+M
for each valid i

Example Input
3
1 1 1
1
1 1 2
1 1
5 5 10
2 5 2 5 2 4 10 10 10 10

Example Output
0
1 1
2 2 5

Explanation

Example case 1: Since there is only a single attempt during the whole day, there cannot be any user who made more than one attempt.

Example case 2: User 1 attempted the quiz twice.

Example case 3: Users 2 and 5 attempted the quiz multiple times. The admin with number 10 also attempted the quiz multiple times, but admins are allowed to do that.
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
  int M=getInt<int>();
  int K=getInt<int>();
  int arr[N]={0};
  int t,count=0;
  for(int i=0;i<K;i++){
    t=getInt<int>()-1;
    if(t<N){
      arr[t]++;
      if(arr[t]==2){
        count++;
      }
    }
  }
  cout<<count<<" ";
  for(int i=0;i<N;i++){
    if(arr[i]>1){
      cout<<i+1<<" ";
    }
  }
  cout<<'\n';
	
}
int main(){
          fastIO();
	ll testcase=getInt<ll>();
          loop(i,0,testcase,1){
    	          runTestcase();
          }
          return 0;
}