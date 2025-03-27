#include <bits/stdc++.h>
using namespace std;
#define MAX_CHAR 100

int main(){
  int N;
  char used_char[MAX_CHAR];
  cin >> N;
  string word;
  cin >> word;

  for(int i = 0; i < N; i++){
    used_char[i] = tolower(word[i]);
  }
  
  bool found;
  bool is_pangram = true;
  for(int i = 97; i < 123; i++){
    found = false;
    for(int j = 0; j < N; j++){
      if((int)used_char[j] == i){
        found = true;
        break;
      }
    }
    if(!found){
      is_pangram = false;
      break;
    }
  }

  if(is_pangram){
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
