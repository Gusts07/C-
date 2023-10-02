#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

void calcKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
    (*v_kw) = v_sal / 1000;
    (*v_rs) = (*v_kw) * q_kw;
    (*v_dsc) = (*v_rs) * 0.85;
}

int main(int argc, char *argv[]){
setlocale(LC_ALL, "portuguese");
float v_sal, qtde_kw, val_kw, val_reais, val_desc; 
printf("insira o valor do salario minimo:\n");
scanf("%f", &v_sal);
printf("insira a quantidade de KW gastos:\n");
scanf("%f", &qtde_kw);

calcKW(v_sal, qtde_kw, &val_kw, &val_reais, &val_desc);

printf("Valor de 1 KW (R$): %.2f.\n", val_kw);
printf("Valor a ser pago pela residência (R$): %.2f.\n", val_reais);
printf("Valor com desconto: %.2f.\n", val_desc);
}
