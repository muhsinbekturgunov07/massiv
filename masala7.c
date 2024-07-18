#include <stdio.h>

int main() {
    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    FILE *fayl = fopen("yigindi.txt", "w");
    if (fayl == NULL) {
        printf("Fayl ochishda xatolik yuz berdi\n");
        return 1;
    }
    if (N % 2 == 0) {
        for (int i = N; i >= 1; i--) {
            for (int j = 0; j < i; j++) {
                fprintf(fayl, "%d", i);
                if (j < i-1) fprintf(fayl, "+");
            }
            fprintf(fayl, "=%d\n", i*i);
        }
    } else {
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < i; j++) {
                fprintf(fayl, "%d", i);
                if (j < i-1) fprintf(fayl, "+");
            }
            fprintf(fayl, "=%d\n", i*i);
        }
    }

    fclose(fayl);
    printf("Ma'lumot yigindi.txt faylga yozildi.\n");

    return 0;
}
