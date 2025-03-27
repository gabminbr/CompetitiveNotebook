#include <bits/stdc++.h>
using namespace std;
#define MAX_ALUNOS 100000

int main(){
  int N;
  cin >> N;
  int alunos[MAX_ALUNOS];
  int nao_repet = 0;

  for(int i = 0; i < N; i++){
    int aluno;
    cin >> aluno;
    alunos[i] = aluno;
  }

  sort(alunos, alunos + N);
  
  for(int i = 0; i < N - 1; i++){
    if(alunos[i] != alunos[i + 1]){
      nao_repet++;
    }
  }
 
  nao_repet++;
  cout << nao_repet << "\n";
  return 0;
}
