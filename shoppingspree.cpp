
#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("shopin.txt","r",stdin);
  freopen("shopout.txt","w",stdout);
  int n,k,mincost;
  vector<int> costs;
  cin >> n >> k;
  for(int i = 0; i<n; i++){
    int x;
    cin >> x;
    costs.push_back(x);
  }
  mincost=0;
  if(k==0){
    for(int i=1;i<n;i+=2) mincost+=costs[i];
  }
  else if(k==n/2){
    for(int i=0;i<k;i++) mincost+=costs[i];
  }
  else{
    for(int i = 0; i <k; i++){
      mincost += costs[i];
    }
    for(int j = k+1; j <=(n-k-1);j+=2){
      mincost+=costs[j];
    }
  }

  
  cout << mincost;
  return 0;
}
