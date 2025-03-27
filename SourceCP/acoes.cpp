#include <bits/stdc++.h>
using namespace std;

int dividir_patrimonio(int N, int K){
  if (N <= K){
    return 1;
  }
  int a = N / 2;
  int b = N - a;
  return dividir_patrimonio(a, K) + dividir_patrimonio(b, K);
}

int main(){
  int N, K;
  cin >> N >> K;

  while(N > 0 && K > 0){
    cout << dividir_patrimonio(N, K) << "\n";
    cin >> N >> K;
  }
  return 0;
}
