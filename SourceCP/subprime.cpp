#include <bits/stdc++.h>
using namespace std;

int main(){
  int bancos_reservas[20];
  int num_bancos, num_deb;
  cin >> num_bancos >> num_deb;
  while(num_bancos != 0 && num_deb != 0){
    bool eh_possivel = true;
    for(int i = 0; i < num_bancos; i++){
      bancos_reservas[i] = 0;
      cin >> bancos_reservas[i];
    }
    for(int i = 1; i <= num_bancos; i++){
      int banco_credor, banco_devedor, valor;
      cin >> banco_devedor >> banco_credor >> valor;
      bancos_reservas[banco_devedor - 1] -= valor;
      bancos_reservas[banco_credor - 1] += valor;
    }

    for(int i = 0; i < num_bancos; i++){
      if (bancos_reservas[i] < 0){
        eh_possivel = false;
      }
    }

    if(eh_possivel){
      cout << "S" << "\n";
    }
    else {
      cout << "N" << "\n";
    }
    cin >> num_bancos >> num_deb;
  }
}

