//Charges 
/*
There are N subatomic particles lined up in a row. There are two types: protons and electrons. Protons have a positive charge and are represented by 1, while electrons have a negative charge and are represented by 0.

Our current understanding of physics gives us a way to predict how the particles will be spaced out, if we know their charges. Two adjacent particles will be separated by 1 unit if they have opposite charges, and 2 units if they have the same charge.

When Chef is not in the kitchen, he is doing physics experiments on subatomic particles. He is testing the hypothesis by having N particles in a row, and he will change the charge of a particle K times. In the i-the update, he will change the charge of the Qi-th particle. After each update, find the distance between the first and last particle.

Note: Each update is persistent for further updates.

Input

The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains three lines of input.
The first line contains two integers N, K.
The second line contains a string S of length N, where Si represents the initial charge on i-th particle.
The third line contains K integers Q1,Q2,…,QK, the positions of the changed particles.

Output

For each test case, output K
lines, where the i-th line contains the answer after the updates Q1,…,Qi have been made.

Constraints
1≤T≤5
1≤N,K≤105
S contains only 0 and 1 characters.
1≤Qi≤N
The sum of K over all testcases is at most 2⋅105

Subtasks

Subtask #1 (100 points): original constraints

Sample Input

1
3 3
010
2 1 3

Sample Output

4
3
2

Explanation

Update 1: After reversing the parity of particle 2 , the new configuration is 000. Since all the particles have a similar charge, each is separated from the previous by a distance of 2 units. So the location of particle 3 is 2+2=4 units from the first particle.

Update 2: After reversing the parity of particle 1,the new configuration is 100. Here, the charges of particles 1 and 2 differ, so they are separated by 1 unit. The charges of particles 2 and 3 agree, so they are separated by 2 units. So, the location of particle 3 is 1+2=3 units from the first particle.

Update 3: After reversing the charge of particle 3, the new configuration is 101. Here, particles 1 and 2 are separated by 1 unit and particles 2 and 3 are separated by 1 unit. So the location of particle 3 is 1+1=2 units from the first particle.
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
  int N,K,ans=0,i,q;
  string s;
  cin>>N>>K;
  cin>>s;
  for(i=0;i<N-1;i++){
    if(s[i]==s[i+1]){
      ans+=2;
    }else{
      ans+=1;
    }
  }
  for (i = 0; i < K; ++i){
    cin>>q;
    --q;
    if(s[q]=='0'){s[q]='1';}
    else{s[q]='0';}
    if(q>0 && s[q-1]==s[q]){
      ans+=1;
    }
    if(q>0 && s[q-1]!=s[q]){
      ans-=1;
    }
    if(q<N-1 && s[q]==s[q+1]){
      ans+=1;
    }
    if(q<N-1 && s[q]!=s[q+1]){
      ans-=1;
    }
    cout<<ans<<'\n';
  }
}
int main(){
        fastIO();
	int testcase;
	cin>>testcase;
          loop(i,0,testcase,1){
    	          runTestcase();
          }
          return 0;
}