#include <stdio.h>

int main() {
    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    FILE *fayl = fopen("sonlar.txt", "w");
    if (fayl == NULL) {
        printf("Fayl ochishda xatolik yuz berdi\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            fprintf(fayl, "%d ", i);
        }
    }
    fprintf(fayl, "\n");
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            fprintf(fayl, "%d ", i);
        }
    }

    fclose(fayl);
    printf("Ma'lumot sonlar.txt faylga yozildi.\n");

    return 0;
}
