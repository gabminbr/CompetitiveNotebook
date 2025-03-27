#include <bits/stdc++.h>
using namespace std;

int f91(int n){
  if(n >= 101){
    return n - 10;
  } else {
    return f91(f91(n + 11));
  }
}

int main(){
  int N;
  cin >> N;
  while(N > 0){
    cout << "f91(" << N << ") = " << f91(N) << "\n";
    cin >> N;
  }
  return 0;
}
