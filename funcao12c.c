#include<stdio.h>

void imprimir(int matriz[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    } 
}
void trocarLinha2Linha8(int matriz[10][10]){
    int aux;

    for(int j = 0; j < 10; j++){
        aux = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = aux; 
    }
}
void trocarColuna4Coluna10(int matriz[10][10]){
    int aux;

    for(int i = 0; i < 10; i++){
        aux = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = aux; 
    }
}
void trocarDiagonais(int matriz[10][10]){
    int aux;

    for(int i = 0; i < 10; i++){
        aux = matriz[i][i];
        matriz[i][i] = matriz[i][9-i];
        matriz[i][9-i] = aux;
        
    }
}
void trocarLinha5Coluna10(int matriz[10][10]){
    int aux;

    for(int i = 0; i < 10; i++){
        aux = matriz[4][i]; 
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = aux;  
    }
}


int main(){

    int matriz[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = i * 10 + j;
        }
    }
    imprimir(matriz);
    printf("%d\n");
    //trocarlinha2linha8(matriz);
    //trocarColuna4Coluna10(matriz);
    trocarDiagonais(matriz);
    //trocarLinha5Coluna10(matriz);

    imprimir(matriz);

}