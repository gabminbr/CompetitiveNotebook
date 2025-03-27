#include <bits/stdc++.h>
using namespace std;
#define MAX_AERO 100

int main(){
  int A, V;
  cin >> A >> V;
  int teste = 1;

  while(A != 0 && V != 0){
    int X, Y;
    int aeroportos[MAX_AERO] = {0};

    for(int i = 0; i < V; i++){
      cin >> X >> Y;
      aeroportos[X - 1]++;
      aeroportos[Y - 1]++;
    }

    int maior = 0;
    int qtd_maior = 0;
    for(int i = 0; i < A; i++){
      if(aeroportos[i] > maior){
        maior = aeroportos[i];
        qtd_maior = 0;
      }
      if (aeroportos[i] == maior){
        qtd_maior++;
      }
    }
   
    cout << "Teste " << teste << "\n";

    for(int i = 0; i < A; i++){
      if(aeroportos[i] == maior && qtd_maior > 1){
        cout << i + 1 << " ";
        qtd_maior--;
      } else if(aeroportos[i] == maior && qtd_maior == 1){
        cout << i + 1 << "\n\n";
        qtd_maior--;
      }
    }
  
    teste++;
    cin >> A >> V;
  }
  return 0;
}
