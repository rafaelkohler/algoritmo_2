#include <iostream>

float salario(){
    float a = 0;
    printf("Favor informar o seu salario: ");
    scanf("%f", &a);
    return a;
}

float calcIR(double sal) {
    float resultsal = 0;
    if(sal <= 1903.98) {
        return resultsal = 0;
    } else if (resultsal <= 2826.65){
        resultsal = ((sal * 0.075) - 142.8);
        return resultsal;
    } else if (resultsal <= 3751.05) {
        resultsal = ((sal * 0.15) - 354.8);
        return resultsal;
    } else if (resultsal <= 4664.68) {
        resultsal = ((sal * 0.225) - 636.13);
        return resultsal;
    } else (resultsal >= 4664.68);
        resultsal = ((sal * 0.275) - 869.36);
        return resultsal;
}

int main() {
    int resp;
    do {
    float s = salario();
    float sal = calcIR(s);
    printf("\nO valor a ser pago de imposto eh: %.2f", sal);
    scanf("%f", &sal);
    
    printf("\nDeseja calcular outro valor?");
    printf("\nDigite 1 para continuar ou 2 para sair.");
    scanf("%i", &resp);
    } while (resp==1);
}
