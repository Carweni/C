#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double encontra_zero_da_maquina (void){
    double zero = 1.0;

    while(1.0 + zero > 1.0){
        zero /= 2;
    }

    return zero;
}

int main (void){
    setlocale(LC_ALL, "Portuguese");
    printf("A precisão do computador em relação ao zero da máquina é de %e.", encontra_zero_da_maquina()*2);
    // Eu testei no meu notebook e no de uma amiga minha. No meu, o resultado foi de 1,084202e-019. No dela, foi de 2,220446e-016.

    return 0;
}
