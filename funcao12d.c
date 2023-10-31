#include<stdio.h>

void imprimir(int matriz[61][10]){
    for(int i = 0; i < 61; i++){
        for(int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void somarColunas(int matriz[61][10]){
    //primeiro zerar linha 61
    for(int j = 0; j < 10; j++){
            matriz[60][j] = 0;
    }
        //somar cada coluna
        for(int j = 0; j < 10; j++){
            for(int i = 0; i < 60; i++){
                matriz[60][j] += matriz[i][j];
            }
        }
    }
int main(){

    int matriz[61][10];

    for(int i = 0; i < 61; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = i * 10 + j;
        }
    }
    somarColunas(matriz);
    imprimir(matriz);
}