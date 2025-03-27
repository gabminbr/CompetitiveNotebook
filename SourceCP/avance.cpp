#include <bits/stdc++.h>
using namespace std;

int main(){
  int T, op;
  cin >> T;
  string A, B;

  for(int i = 0; i < T; i++){
    cin >> A >> B;
    op = 0;

    for(int j = 0; j < A.length(); j++){
      if(B[j] < A[j]){
        op += B[j] - A[j] + 26;
      }  else {
        op += B[j] - A[j];
      }
    }
    cout << op << "\n";
  }

}
