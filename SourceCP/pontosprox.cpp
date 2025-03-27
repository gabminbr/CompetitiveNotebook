#include <bits/stdc++.h>
using namespace std;
#define MAX_PONTOS 1000

int main(){
  cout << fixed << setprecision(3);
  int N;
  double distancia, menor_dist;
  struct {
    int x;
    int y;
  } ponto[MAX_PONTOS];
  cin >> N;
  
  for(int i = 0; i < N; i++){
    cin >> ponto[i].x >> ponto[i].y;
  }
  menor_dist = 2829000.0;
  for(int i = 0; i < N - 1; i++){
    for (int j= 1 + i; j < N; j++){
      double x_range = ponto[i].x - ponto[j].x;
      double y_range = ponto[i].y - ponto[j].y;
      distancia = sqrt(pow(x_range, 2) + pow(y_range, 2));
      if(distancia < menor_dist){
        menor_dist = distancia;
      }
    }
  }

  cout << menor_dist << "\n";

  return 0;
}
