#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fayl = fopen("matn.txt", "r");
    if (fayl == NULL) {
        printf("Fayl ochishda xatolik yuz berdi\n");
        return 1;
    }

    int so_zlar_soni = 0, gaplar_soni = 0;
    char c;
    int so_zda = 0;

    while ((c = fgetc(fayl)) != EOF) {
        if (isspace(c)) {
            so_zda = 0;
        } else if (!so_zda) {
            so_zda = 1;
            so_zlar_soni++;
        }
        if (c == '.' || c == '!' || c == '?') {
            gaplar_soni++;
        }
    }

    fclose(fayl);

    printf("%d ta so'z %d ta gap\n", so_zlar_soni, gaplar_soni);

    return 0;
}
