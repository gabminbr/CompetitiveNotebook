#include <bits/stdc++.h>
using namespace std;

int fat(int N){
  if(N <= 1){
    return 1;
  }
  return N * fat(N - 1);
}
int main(){
  int A;
  cin >> A;

  cout << fat(A) << "\n";
}
