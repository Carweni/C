//This algorithm calculates the weighted average of three given grades and weights.

int main(void)
{
    float gra1, gra2, gra3, wei1, wei2, wei3, media;

    printf("Inform the first grade: ");
    scanf("%f", &gra1);
    printf("Inform its weight: ");
    scanf("%f", &wei1);
    printf("Inform the second grade: ");
    scanf("%f", &gra2);
    printf("Inform its weight: ");
    scanf("%f", &wei2);
    printf("Inform the third grade: ");
    scanf("%f", &gra3);
    printf("Inform its weight: ");
    scanf("%f", &wei3);

    media = (gra1*wei1 + gra2*wei2 + gra3*wei3)/(wei1+wei2+wei3);

    printf("Weighted average: %.2f",media);

    return 0;
}
