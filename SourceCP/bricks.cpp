#include <bits/stdc++.h>
using namespace std;

int patterns(int n){
  if(n <= 2){
    return n;
  }
  return patterns(n - 1) + patterns(n - 2);
}

int main(){
  int N;
  cin >> N;

  while(N > 0){
    cout << patterns(N) << "\n";
    cin >> N;
  }

  return 0;
}
