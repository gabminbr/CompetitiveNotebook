#include <bits/stdc++.h>
using namespace std;
#define MAX_REGIOES 10000

int main(){
  struct ponto {
    int X;
    int Y;
  };

  struct {
    ponto p1;
    ponto p2;
  } retangulos[MAX_REGIOES];
  
  int N, X, Y, U, V;
  int teste = 1;
  cin >> N;

  while(N > 0){
    for(int i = 0; i < N; i++){
      cin >> X >> Y >> U >> V;
      retangulos[i].p1.X = X;
      retangulos[i].p1.Y = Y;
      retangulos[i].p2.X = U;
      retangulos[i].p2.Y = V;
      }

    retangulos[N].p1.X = retangulos[0].p1.X;
    retangulos[N].p1.Y = retangulos[0].p1.Y;
    retangulos[N].p2.X = retangulos[0].p2.X;
    retangulos[N].p2.Y = retangulos[0].p2.Y;
    bool tem_inter = true;

    for(int i = 1; i < N; i++){
      retangulos[N].p1.X = max(retangulos[N].p1.X, retangulos[i].p1.X);
      retangulos[N].p1.Y = min(retangulos[N].p1.Y, retangulos[i].p1.Y);

      if(retangulos[N].p1.X > retangulos[N].p2.X || retangulos[N].p1.Y < retangulos[N].p2.Y){
        tem_inter = false;
        break;
      }
      
      retangulos[N].p2.X = min(retangulos[N].p2.X, retangulos[i].p2.X);
      retangulos[N].p2.Y = max(retangulos[N].p2.Y, retangulos[i].p2.Y);

      if(retangulos[N].p2.X < retangulos[N].p1.X || retangulos[N].p2.Y > retangulos[N].p1.Y){
        tem_inter = false;
        break;
      }
    }
    
    cout << "Teste " << teste << "\n";
    if(tem_inter){
     cout << retangulos[N].p1.X << " ";
     cout << retangulos[N].p1.Y << " ";
     cout << retangulos[N].p2.X << " ";
     cout << retangulos[N].p2.Y << "\n\n";
    } else {
      cout << "nenhum\n\n";
    }
    teste++;
    cin >> N;
  }
}
