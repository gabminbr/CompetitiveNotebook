#include <bits/stdc++.h>
using namespace std;

int main(){
  string sent;
  getline(cin, sent);
  int contador = 0;

  for(int i = 0; i < sent.length(); i++){
    if(sent[i] >= 65 && sent[i] <= 90){
      if(contador % 2 != 0){
        sent[i] += 32;
      }
      contador++;
    } else if (sent[i] >= 97 && sent[i] <= 122){
      if(contador % 2 == 0){
        sent[i] -= 32;
      } 
      contador++;
    }
  }

  cout << sent << "\n";
  return 0;
}
