#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
const double pi = acos(-1);
FILE *fp,*gp;
int cnt =0,ans=0;
//cout << setprecision(11) << fixed;
int main(){
    
     gp = popen("gnuplot -persist", "w"); 
      fprintf(gp,"plot (1/sqrt(2*pi))*exp(-(x*x)/2)\n ");
}
