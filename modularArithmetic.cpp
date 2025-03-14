#include <bits/stdc++.h>
using namespace std;

int main(){
  /* suponha que vc quer pegar um numero x no intervalo [0, N - 1] e 
   * somar/subtrair y que também esta no msm intervalo, mas de forma que
   * continue nesse msm intervalo. Facilitando: se a adição der um numero
   * maior que o intervalo, queremos q ele "warpe", de a volta, e msm
   * coisa se ele for mt pequeno.
   * Um exemplo melhor é: ta num array de tamanho 10 e na posicao 6, e
   * quer andar 4 casas, logo pararia na posicao [10], porem n pode, pq
   * o array so vai até o [9], entao vc quer q pare na casa [0], e nao
   * acesse um elemento fora do range.
   *
   * adição: (x + y) mod N
   * ex: (6 + 4) mod 10 => 10 mod 10 = 0, afinal o resto de 10/10 é 0
   *
   * subtração: (x - y + N) mod N
   * aq o + N eh apenas p evitar de trabalhar c resto de numero negativo
   * 
   * com isso podemos por exemplo, acessar um elemento anterior do 
   * vetor[0] que seria o vetor[N-1], e o vetor posterior de vetor[N-1] 
   * seria o vetor[0].
   */

  int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}

  // quero printar o elemento anterior a vetor[0] que seria o 9.

  cout << vetor[(0 - 1 + N) % N] << "\n";
}
