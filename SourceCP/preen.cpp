#include <bits/stdc++.h>
using namespace std;
#define T 5

int main(){
  int par[T];
  int impar[T];
  int numero;
  int par_ind = 0;
  int impar_ind = 0;
  for(int i = 0; i < 15; i++){
    cin >> numero;
    if(numero % 2 == 0){
      par[par_ind] = numero;
      par_ind++;
      if(par_ind == 5){
        for(int i = 0; i < T; i++){
          cout << "par[" << i << "] = " << par[i] << "\n";
        }
        par_ind = 0;
      }
    } else {
      impar[impar_ind] = numero;
      impar_ind++;
      if(impar_ind == 5){
        for(int i = 0; i < T; i++){
          cout << "impar[" << i << "] = " << impar[i] << "\n";
        }
        impar_ind = 0;
      }
    }
  }

  for(int i = 0; i < impar_ind; i++){
    cout << "impar[" << i << "] = " << impar[i] << "\n";
  }

  for(int i = 0; i < par_ind; i++){
    cout << "par[" << i << "] = " << par[i] << "\n";
  }
}
