
#include <bits/stdc++.h>
using namespace std;
int main(){
  freopen("bookin.txt","r",stdin);
  freopen("bookout.txt","w",stdout);
  int n; string word;
  cin >> n;
  cin >> word;

  int whereq; // index of where ? is in string, from 0 to n-1
  for(int i = 0; i < n; i++){
      if (word[i]=='?'){
          whereq = i;
         break;
        }

  }
  if(whereq==0) word[0] = word[1]; //subtaskkkkkk--- if ? is first chr, change it to second character. otherwise, you change to the chr before. hope this works lol
  else word[whereq] = word[whereq-1];
  int score = 0;
  for (int i = 1; i < n; i++){
    if (word[i]==word[i-1]) score++;
  }
  cout << score;
    
}
//trans rights
