#include <stdio.h>

//574 - Total tax calculator

int main()
{
    double cotacao, imposto_1, produto, frete, despacho, import;
    scanf("%lf%lf%lf%lf", &cotacao, &imposto_1, &produto, &frete);
    
    double aliquota = imposto_1/100;
    double producao = cotacao * produto;
    double entrega = cotacao * frete;
    double total = producao + entrega;
    
    printf("%.2lf\n", cotacao);
    printf("%.2lf\n", producao);
    printf("%.2lf\n", entrega); 
    printf("%.2lf\n", total);

    if (produto >= 2500)despacho = 0;
     else despacho = entrega;
    
    if (produto < 2500) import = total * 0.6;
    else import = producao * 0.6;

    printf("%.2lf\n", import);
    
    double final = (producao + despacho + import) / (1 - aliquota);
    double imposto_2 = final * aliquota;

    printf("%.2lf\n", imposto_2);

    double totalimpostos = import + imposto_2;

    printf("%.2lf\n", totalimpostos);

    double totalapagar = totalimpostos + total;

    printf("%.2lf\n", totalapagar);
    printf("%s", despacho == 0 ? "Impostos calculados sem o frete\n" : "Impostos calculados com o frete\n")
   
    
    return 0;
}
