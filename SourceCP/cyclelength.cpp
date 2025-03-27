#include <bits/stdc++.h>
using namespace std;

void cycle(int i, int &num_passos){
  num_passos++;
  if(i == 1){
    return;
  } else if(i % 2 != 0) {
    i = 3 * i + 1;
    cycle(i, num_passos);
  } else {
    cycle(i / 2, num_passos);
  }
}

int main(){
  int i, j;
  cin >> i >> j;
  int max = 0;
  for(int k = i; k <= j; k++){
    int qtd = 0;
    cycle(k, qtd);
    if(max < qtd){
      max = qtd;
    }
  }
  cout << i << " " << j << " " << max << "\n";
}
