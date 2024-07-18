#include <stdio.h>

int main() {
    int oyRaqami;
    printf("Oyni son ko'rinishida kiriting: ");
    scanf("%d", &oyRaqami);

    FILE *fayl = fopen("Yil.txt", "w");
    if (fayl == NULL) {
        printf("Fayl ochishda xatolik yuz berdi\n");
        return 1;
    }

    switch (oyRaqami) {
        case 1: fprintf(fayl, "Yanvar oyida 31 kun bor\n"); break;
        case 2: fprintf(fayl, "Fevral oyida 28 yoki 29 kun bor\n"); break;
        case 3: fprintf(fayl, "Mart oyida 31 kun bor\n"); break;
        case 4: fprintf(fayl, "Aprel oyida 30 kun bor\n"); break;
        case 5: fprintf(fayl, "May oyida 31 kun bor\n"); break;
        case 6: fprintf(fayl, "Iyun oyida 30 kun bor\n"); break;
        case 7: fprintf(fayl, "Iyul oyida 31 kun bor\n"); break;
        case 8: fprintf(fayl, "Avgust oyida 31 kun bor\n"); break;
        case 9: fprintf(fayl, "Sentabr oyida 30 kun bor\n"); break;
        case 10: fprintf(fayl, "Oktabr oyida 31 kun bor\n"); break;
        case 11: fprintf(fayl, "Noyabr oyida 30 kun bor\n"); break;
        case 12: fprintf(fayl, "Dekabr oyida 31 kun bor\n"); break;
        default: fprintf(fayl, "Notog'ri oy raqami kiritildi\n"); break;
    }

    fclose(fayl);
    printf("Ma'lumot Yil nomli faylga yozildi.\n");

    return 0;
}
