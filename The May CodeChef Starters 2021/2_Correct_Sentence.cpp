//Correct Sentence 
/*
Chef knows about two languages spoken in Chefland, but he is not proficient in any of them. The first language contains lowercase English letters between 'a' and 'm' inclusive and the second language contains only uppercase English letters between 'N' and 'Z' inclusive.

Due to Chef's limited vocabulary, he sometimes mixes the languages when forming a sentence — each word of Chef's sentence contains only characters from one of the languages, but different words may come from different languages.

You are given a sentence as a sequence of K words S1,S2,…,SK

. Determine whether it could be a sentence formed by Chef, i.e. if it contains only the characters from the two given languages and each word contains only characters from a single language.
Input

    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains an integer K
followed by a space and K space-separated strings S1,S2,…,SK

Output

For each test case, print a single line containing the string "YES" if the given sentence can be formed by Chef or "NO" if it cannot.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
Constraints
    1≤T≤105
    1≤K≤10
   1≤|Si|≤100
for each valid i the sum of lengths of all the strings on the input does not exceed 10^5 each string contains only lowercase and uppercase English letters

Example Input
3
1 aN
2 ab NO
3 A N D

Example Output
NO
YES
NO

Explanation

Example case 1: A single word cannot contain characters from both languages.

Example case 2: This could be a sentence formed by Chef since each word contains only characters from a single language.

Example case 3: Letters 'A' and 'D' do not belong to either of the two languages.
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
int lcheck(char c){
  if(c>='a' && c<='m'){
      return 1;
    }else if(c>='N' && c<='Z'){
      return 2;
    }
  return 0;
}
bool wordOK(string s){
  if(lcheck(s[0])==0)
    return 0;
  for(int i=0;i<s.length()-1;i++){
    if(lcheck(s[i])!=lcheck(s[i+1])){
      return 0;
    }
  }
  return 1;
}
void runTestcase(){
 int K;
  cin>>K;
  string str[K];
  for(int i=0;i<K;i++){
    cin>>str[i];
  }
  for(int i=0;i<K;i++){
    if(!wordOK(str[i])){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";	
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