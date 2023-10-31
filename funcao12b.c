#include<stdio.h>
#include<stdlib.h>

void totalGratuitas(int locacoes[500], int locacoesGratuitas[500]){
    for(int i = 0; i < 500; i++){
    locacoesGratuitas[i] = locacoes[1] /15;
    }
}
int main(){

    int locacoes[500], locacoesGratuitas[500];

    for(int i = 0; i < 500; i++){
        locacoes[i] = rand() % 100 + 1;

    }
    totalGratuitas(locacoes, locacoesGratuitas);
    
    for(int i = 0; i < 10; i++){
        printf("%d\n", &locacoesGratuitas[i]);
    }
}