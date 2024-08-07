/* Este programa calcula a contribuição para o INSS da seguinte forma:
a) Para o salário bruto de até três salários mínimos, o desconto do INSS será de 8%.
b) Para o salário bruto acima de três salários mínimos, o desconto do INSS será de 10%.
c) Para as contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
Ele recebe como entrada o valor do salário mínimo e o valor do salário bruto, e então calcula o
INSS e o salário líquido restante. No final, ele informa esses valores.*/


int main(void)
{
    float salMin, salBru, inss, salLiq;

    printf("Informe o valor do salario minimo: R$ ");
    scanf("%f",&salMin);
    printf("Informe o valor de seu salario bruto: R$");
    scanf("%f",&salBru);

    if (salBru <= (3 * salMin))
    {
        inss = 0.08 * salBru;

        if (inss <= salMin)
        {
            printf("O valor do INSS eh de: R$ %.2f\n",inss);

            salLiq = salBru - inss;

            printf("O valor do seu salario liquido eh de R$ %.2f\n",salLiq);
        }
        else
        {
            printf("O valor do INSS eh de: R$ %.2f\n",salMin);

            salLiq = salBru - salMin;

            printf("O valor do salario liquido eh de R$ %.2f\n",salLiq);
        }
    }
    else
    {
        inss = 0.1*salBru;

        if (inss <= salMin)
        {
            printf("O valor do INSS eh de: R$ %.2f\n",inss);

            salLiq = salBru - inss;

            printf("O valor do salario liquido eh de R$ %.2f\n",salLiq);
        }
        else
        {
            printf("O valor do INSS eh de: R$ %.2f\n",salMin);

            salLiq = salBru - salMin;

            printf("O valor do salario liquido eh de R$ %.2f\n",salLiq);
        }
    }


    return 0;
}
