#include <iostream>
using namespace std;

int main(){
  int N, ci, vi, qtd_retangulo, pares;
  cin >> N;

  while(N > 0){
    qtd_retangulo = 0;
    pares = 0;
    for(int i = 0; i < N; i++){
      cin >> ci >> vi;
      pares += vi / 2;
    }
    qtd_retangulo = pares / 2;
    cout << qtd_retangulo << "\n";
    cin >> N;
  }
}
