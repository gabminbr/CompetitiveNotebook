#include <bits/stdc++.h>
using namespace std;
#define MAX_AMOSTRA 10000

int main(){
  int N, amostra, picos;
  cin >> N;
  int amostras[MAX_AMOSTRA];
  
  while(N > 0){
    picos = 0;
    for(int i = 0; i < N; i++){
      cin >> amostra;
      amostras[i] = amostra;
    }
    
    int proximo, anterior;
    for(int i = 0; i < N; i++){
      anterior = amostras[(i - 1 + N) % N];
      proximo = amostras[(i + 1) % N];

      if((amostras[i] > anterior && amostras[i] > proximo) || (amostras[i] < anterior && amostras[i] < proximo)){
        picos++;
      }
    }
    
    cout << picos << "\n";
    cin >> N;
  }

  return 0;
}
