/*This program gets a number up to 3 digits, calculates and prints the sum of these digits.*/

int main(void)
{
    int num, cent, dez, uni, soma;

    printf("Inform a number up to three digits: ");
    scanf("%d",&num);

    cent = num/100;
    dez = num%100/10;
    uni = num%10;
    soma = cent + dez + uni;

    printf("%d = %d + %d + %d = %d",num, cent, dez, uni, soma);

    return 0;
}
