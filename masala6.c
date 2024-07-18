#include <stdio.h>

int main() {
    int sonlar[5] = {5, 2, 1, 8, 5};
    int yigindi = 0;

    FILE *fayl = fopen("new.txt", "w");
    if (fayl == NULL) {
        printf("Fayl ochishda xatolik yuz berdi\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        yigindi += sonlar[i];
        fprintf(fayl, "%d", sonlar[i]);
        if (i < 4) fprintf(fayl, "+");
    }
    fprintf(fayl, "=%d\n", yigindi);

    fclose(fayl);
    printf("Ma'lumot new.txt faylga yozildi.\n");

    return 0;
}
