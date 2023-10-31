#include<stdio.h>
int diasNoMes(int mes){
    int diasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    return diasMes[mes - 1];
}
void calcularIdade(int diaNasc, int mesNasc, int anoNasc, int ano, int mes, int dia){
    int meses, dias, anos;
    if( dia >= diaNasc){
        dias = dia - diaNasc;
    }else{
        dias = dia + diasNoMes(mesNasc) - diaNasc;
        mes--;
    }
    if(mes > mesNasc){
        meses = mes - mesNasc;
    }else{
        meses = mes + 12 - mesNasc;
        ano--;
    }
   anos = ano - anoNasc;

   printf("Idade: %d anos, %d meses, %d dias.", ano, mes, dia);
}
int main(){

    int dia, mes, ano;
    int diaNasc, mesNasc, anoNasc;

    printf("Digite a data de nascimento: dd mm aa");
    scanf(" %d %d %d", &diaNasc, &mesNasc, &anoNasc);

    printf("Digite a data atual: dd mm aa");
    scanf(" %d %d %d", &dia, &mes, &ano);

    calcularIdade(diaNasc, mesNasc, anoNasc, dia, mes, ano);

    //chamar funcao
}