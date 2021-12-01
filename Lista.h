#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void){
Lista* l1 = =lst_cria();
l1 = lst_insere (l1,6);
l1 = lst_insere (l1,13);
l1 = lst_insere (l1,25);
l1 = lst_insere (l1,28);
l1 = lst_insere (l1,40);
lst_remove (l1,25);
l1 = lst_remove_rec (l1,40);
printf("LISTA 1 COM ELEMENTOS REMOVIDOS:\n\n");
lst_imprime(l1);
printf("_____________________\n\n);
printf("LISTA 1 INVERTIDA: \n\n");
lst_imprime_invertida_rec(l1);
printf("_____________________\n\n");
printf("NUMERO DE NOS EM L1 com info < que 22: %d\n", menores(l1,22));
printf("O COMPRIMENTO DA LISTA l1 eh: %d\n", comprimento(l1));
printf("SOMA DOS NOS DE l1: %d\n", soma(l1));
printf("NUMERO DE NOS DE l1 QUE SAO PRIMOS E: %d\n", primos(l1));
printf("_____________________\n\n");

Lista* l2 = lst_cria();
l2 = lst_insere(l2,28);
l2 = lst_insere(l2,130);
printf("LISTA 2:\n\n);
lst_imprime(l2);
printf("_____________________\n\n");

Lista* l3 = lst_conc(l1,l2);
printf("LISTA 3 COM RESULTADO DA CONCATENAÇÃO DE L2 NO FIM DE L1:\n\n);
lst_imprime(l3);
printf("_____________________\n\n");
printf("LISTA SEM O RESULTADO DE L1 SEM OS ELEMENTOS EM COMUM COM L2:\n\n);
l1 = lst_diferenca(l1,l2);
lst_imprime(l1);


lst_libera(l1);
lst_libera(l2);
lst_libera(l3);

system("PAUSE");
return 0;
