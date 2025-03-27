#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  cin >> ws;
  int ident;
  string msg;

  for(int i = 0; i < N; i++){
    getline(cin, msg);
    for(ident = 0; ident < 3; ident++){
      if(ident == 0){
        for(int j = 0; j < msg.length(); j++){
          if(isalpha(msg[j])){
            msg[j] += 3;
          }
        }
      }
      else if(ident == 1){
        for(int j = 0; j < msg.length() / 2; j++){
          char aux = msg[j];
          msg[j] = msg[msg.length() - 1 - j];
          msg[msg.length() - 1 - j] = aux;
        }
      }
      else {
        for(int j = msg.length() / 2; j < msg.length(); j++){
          msg[j] -= 1;
        }
      }
    }
    cout << msg << "\n";
  }
  return 0;
}
