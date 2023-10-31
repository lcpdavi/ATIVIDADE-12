#include<stdio.h>
 int escolherOpcao();
 void aVista(float totalCompra);
 void parcelarDuas(float totalCompra);
 void parcelarMaisdeTres(float totalCompra);
 
int main(){
    int opcaoEscolhida;
    float totalCompra;
    printf("Qual o total da compra:\n");
    scanf("%f", &totalCompra);

    opcaoEscolhida = escolherOpcao();

    switch(opcaoEscolhida){
        case 1:
            aVista(totalCompra);
            break;
        case 2:
            parcelarDuas(totalCompra);
            break;
        case 3:
            parcelarMaisdeTres(totalCompra);
            break;
    }
}

int escolherOpcao(){

    do{
        
    int opcao;
    printf("1 - A vista.\n");
    printf("2 - Parcelado em duas vezes.\n");
    printf("3 - Parcelado de tres a 10 vezes para compras acima de 100,00.\n");

    printf("Digite a opcao escolhida:\n");
    scanf("%d", &opcao);
    if(opcao < 1 || opcao > 10){
        printf("Opcao invalida\n");
    }
    }while(opcao < 1 || opcao > 10);
}
void aVista(float totalCompra){
    float desconto = (totalCompra * 0.10);
    float valorFinal = totalCompra - desconto;
    printf("Valor do desconto: R$%.2f", desconto);
    printf("Valor final da compra: R$%.2f", valorFinal);
}
void parcelarDuas(float totalCompra){
    float totalParcela = totalCompra / 2;

    printf("Valor total da compra R$%.2f", totalCompra);
    printf("Valor de cada parcela da compra R$%.2f", totalParcela);
}
void parcelarMaisdeTres(float totalCompra){
    int qtdParcelas;
    float valorFinalCompra, parcela, juros;

    if(totalCompra < 100){
        printf("Nao e possivel parcelar em valores abaixo de 100,00");
        return;
    }
    //solicitar a quantidade parcelas
    do{
        printf("Digite a quantidade de parcelas\n");
        scanf("%d", &qtdParcelas);
        if(qtdParcelas < 3 || qtdParcelas > 10){
            printf("Invalido, digite novamente\n");
        }
    }while(qtdParcelas < 3 || qtdParcelas > 10);

    juros = totalCompra * 0.03;
    valorFinalCompra = totalCompra + juros;
    parcela = valorFinalCompra/qtdParcelas;

    printf("Valor final da compra com juros: R$%.2f", valorFinalCompra);
    printf("Valor final dos juros: R$%.2f", juros);
    printf("Valor final de cada parcela: R$%.2f", parcela);
} 