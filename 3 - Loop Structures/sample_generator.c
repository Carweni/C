#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

typedef struct {
    int num[100];
} Sample;

int main(void) {
    char op, esc = 'Y';
    int ini, r, n, i, popSize, e, randSize, start, end, sampleSize, a = 0, x, t, q, b = 0, j;
    Sample samples[100];
    setlocale(LC_ALL, "C");

    printf("Population generation menu:\n\n");
    printf("A - Arithmetic progression.\n");
    printf("B - Random number generation in a range.\n");
    printf("C - Manual input.\n\n");
    printf("Enter the corresponding letter of your choice: ");
    scanf(" %c", &op);

    switch (toupper(op)) {
        case 'A': {
            printf("Enter the start value: ");
            scanf("%d", &ini);
            printf("Enter the common difference (step): ");
            scanf("%d", &r);
            printf("Enter the number of elements in the population: ");
            scanf("%d", &n);

            int *v = (int*) malloc(n * sizeof(int));
            v[0] = ini;
            printf("%d ", v[0]);

            for (i = 1; i < n; i++) {
                v[i] = v[i - 1] + r;
                printf("%d ", v[i]);
            }

            a = 0;
            do {
                setbuf(stdin, NULL);
                printf("\nDo you want to extract a sample without replacement (Y/N)? ");
                scanf(" %c", &esc);
                esc = toupper(esc);

                if (esc == 'Y') {
                    do {
                        printf("Enter the desired sample size: ");
                        scanf("%d", &sampleSize);
                    } while (sampleSize > n || sampleSize < 0);

                    int *vx = (int*) malloc(sampleSize * sizeof(int));

                    srand(time(NULL));
                    t = 0;
                    b = 0;
                    for (i = 0; i < sampleSize; i++) {
                        x = rand() % n;
                        vx[b++] = x;
                        q = 1;

                        for (j = 0; j < t; j++) {
                            if (x == vx[j]) {
                                b--;
                                q = 0;
                                break;
                            }
                        }

                        if (q == 1) {
                            t++;
                            samples[a].num[i] = v[x];
                            printf("%d ", samples[a].num[i]);
                        }
                    }

                    free(vx);
                }

            } while (esc == 'Y');

            free(v);
            break;
        }

        case 'B': {
            printf("Enter the size of the population: ");
            scanf("%d", &randSize);
            printf("Enter the start of the range: ");
            scanf("%d", &start);
            printf("Enter the end of the range: ");
            scanf("%d", &end);

            int *randv = (int*) malloc(randSize * sizeof(int));

            srand(time(NULL));
            for (n = 0; n < randSize; n++) {
                randv[n] = start + rand() % (end - start + 1);
                printf("%d ", randv[n]);
            }

            a = 0;
            do {
                setbuf(stdin, NULL);
                printf("\nDo you want to extract a sample (Y/N)? ");
                scanf(" %c", &esc);
                esc = toupper(esc);

                if (esc == 'Y') {
                    do {
                        printf("Enter the desired sample size: ");
                        scanf("%d", &sampleSize);
                    } while (sampleSize > randSize || sampleSize < 0);

                    int *vx = (int*) malloc(sampleSize * sizeof(int));

                    srand(time(NULL));
                    t = 0;
                    b = 0;
                    for (i = 0; i < sampleSize; i++) {
                        x = rand() % randSize;
                        vx[b++] = x;
                        q = 1;

                        for (j = 0; j < t; j++) {
                            if (x == vx[j]) {
                                b--;
                                q = 0;
                                break;
                            }
                        }

                        if (q == 1) {
                            t++;
                            samples[a].num[i] = randv[x];
                            printf("%d ", samples[a].num[i]);
                        }
                    }

                    free(vx);
                }

            } while (esc == 'Y');

            free(randv);
            break;
        }

        case 'C': {
            printf("Enter the size of the population: ");
            scanf("%d", &popSize);

            int *v1 = (int*) malloc(popSize * sizeof(int));

            printf("Enter the population elements: ");
            for (e = 0; e < popSize; e++) {
                scanf("%d", &v1[e]);
            }

            for (i = 0; i < popSize; i++) {
                printf("%d ", v1[i]);
            }

            a = 0;
            do {
                setbuf(stdin, NULL);
                printf("\nDo you want to extract a sample (Y/N)? ");
                scanf(" %c", &esc);
                esc = toupper(esc);

                if (esc == 'Y') {
                    do {
                        printf("Enter the desired sample size: ");
                        scanf("%d", &sampleSize);
                    } while (sampleSize > popSize || sampleSize < 0);

                    int *vx = (int*) malloc(sampleSize * sizeof(int));

                    srand(time(NULL));
                    t = 0;
                    b = 0;
                    for (i = 0; i < sampleSize; i++) {
                        x = rand() % popSize;
                        vx[b++] = x;
                        q = 1;

                        for (j = 0; j < t; j++) {
                            if (x == vx[j]) {
                                b--;
                                q = 0;
                                break;
                            }
                        }

                        if (q == 1) {
                            t++;
                            samples[a].num[i] = v1[x];
                            printf("%d ", samples[a].num[i]);
                        }
                    }

                    free(vx);
                }

            } while (esc == 'Y');

            free(v1);
            break;
        }

        default:
            printf("Invalid option.\n");
            break;
    }

    return 0;
}
