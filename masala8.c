

#include <stdio.h>
#include <stdbool.h>

bool tubmi(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    FILE *fayl = fopen("tublar.txt", "w");
    if (fayl == NULL) {
        printf("Fayl ochishda xatolik yuz berdi\n");
        return 1;
    }

    for (int i = 2; i <= N; i++) {
        if (tubmi(i)) {
            fprintf(fayl, "%d ", i);
        }
    }

    fclose(fayl);
    printf("Ma'lumot tublar.txt faylga yozildi.\n");

    return 0;
}
