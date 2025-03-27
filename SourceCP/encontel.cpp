#include <bits/stdc++.h>
using namespace std;

int main(){
  int valores[8] = {50,51,52,53,54,55,56,57};
  string s;
  while(getline(cin, s)){
    for(int i = 0; i < s.length(); i++){
      if(s[i] >= 'A' && s[i] <= 'C'){
        s[i] = (char)valores[0];
      } else if(s[i] >= 'D' && s[i] <= 'F'){
        s[i] = (char)valores[1];
      } else if(s[i] >= 'G' && s[i] <= 'I'){
        s[i] = (char)valores[2];
      } else if(s[i] >= 'J' && s[i] <= 'L'){
        s[i] = (char)valores[3];
      } else if(s[i] >= 'M' && s[i] <= 'O'){
        s[i] = (char)valores[4];
      } else if(s[i] >= 'P' && s[i] <= 'S'){
        s[i] = (char)valores[5];
      } else if(s[i] >= 'T' && s[i] <= 'V'){
        s[i] = (char)valores[6];
      } else if(s[i] >= 'W' && s[i] <= 'Z'){
        s[i] = (char)valores[7];
      }
    }
    cout << s << "\n";
  }
}
