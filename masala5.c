#include <stdio.h>

int main() {
    FILE *fayl = fopen("Foydalanuvchi.txt", "w");
    if (fayl == NULL) {
        printf("Fayl ochishda xatolik yuz berdi\n");
        return 1;
    }

    fprintf(fayl, "Sattarov Akbar Baxtiyarovich\n");
    fprintf(fayl, "01.01.2001\n");

    fclose(fayl);
    printf("Ma'lumot Foydalanuvchi.txt faylga yozildi.\n");

    return 0;
}
