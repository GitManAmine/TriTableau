#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}


int main() {
    int size = 0;

    printf("Taille du tableau : ");
    scanf_s("%d", &size);

    int *tableau = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Nombre : ");
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("{%d} ", tableau[i]);
    }

    qsort(tableau, size, sizeof(tableau[0]), compare);

    printf("\n----------------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("{%d} ", tableau[i]);
    }

    return 0;
}
