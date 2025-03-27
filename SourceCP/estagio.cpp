#include <bits/stdc++.h>
using namespace std;
const int MAX_ALUNOS = 1000;
int main()
{
  int i, maior_media, n;
  int turma=1;
  int melhores_turma[MAX_ALUNOS];
  struct
  {
    int codigo, media;
  } alunos[MAX_ALUNOS];
  // le numero de alunos da primeira turma
  cin >> n;
  while (n > 0)
    {
      // le dados dos alunos
      for (i = 0; i < n; i++)
         cin >> alunos[i].codigo >> alunos[i].media;
      // procura aluno de maior media
      maior_media = 0;
      for (i = 0; i < n; i++)
         if (alunos[i].media > maior_media)
             maior_media = alunos[i].media;
      // escreve resposta
      cout << "Turma " << turma++ << "\n";
      for(i = 0; i < n; i++){
        if(alunos[i].media == maior_media){
          cout << alunos[i].codigo;
          if(i != n - 1){
            cout << " ";
          } 
        }
      }
      cout << "\n";
      // le numero de alunos da proxima turma
      cin >> n;
    }
 return 0;
}

