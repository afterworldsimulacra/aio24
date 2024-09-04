
#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("javelin.txt","r",stdin);
    freopen("javelout.txt","w",stdout);

    int n, maxscore, clnumber;
    cin >> n;
    maxscore = -1;
    clnumber = 0;
    for(int i=0;i<n;i++){
        int d;
        cin >> d;
        if (d>maxscore) {
          maxscore = d;
          clnumber++;
        }
    }
    cout << clnumber;
    return 0;
  }
