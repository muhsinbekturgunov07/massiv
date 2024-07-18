#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void saralash(int arr[], int n, int kamayish) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if ((kamayish && arr[i] < arr[j]) || (!kamayish && arr[i] > arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int N;
    printf("N ni kiriting: ");
    scanf("%d", &N);

    int arr[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        arr[i] = (rand() % 102) - 51;
    }

    FILE *juft_fayl = fopen("Juft.txt", "w");
    FILE *toq_fayl = fopen("Toq.txt", "w");
    FILE *musbat_fayl = fopen("Musbat.txt", "w");
    FILE *manfiy_fayl = fopen("Manfiy.txt", "w");

    int juft[N], toq[N], musbat[N], manfiy[N];
    int juft_soni = 0, toq_soni = 0, musbat_soni = 0, manfiy_soni = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) juft[juft_soni++] = arr[i];
        else toq[toq_soni++] = arr[i];
        if (arr[i] > 0) musbat[musbat_soni++] = arr[i];
        else if (arr[i] < 0) manfiy[manfiy_soni++] = arr[i];
    }
    saralash(juft, juft_soni, 0);
    saralash(toq, toq_soni, 1);
    saralash(musbat, musbat_soni, 1);
    saralash(manfiy, manfiy_soni, 0);
    for (int i = 0; i < juft_soni; i++) fprintf(juft_fayl, "%d ", juft[i]);
    for (int i = 0; i < toq_soni; i++) fprintf(toq_fayl, "%d ", toq[i]);
    for (int i = 0; i < musbat_soni; i++) fprintf(musbat_fayl, "%d ", musbat[i]);
    for (int i = 0; i < manfiy_soni; i++) fprintf(manfiy_fayl, "%d ", manfiy[i]);
    fclose(juft_fayl);
    fclose(toq_fayl);
    fclose(musbat_fayl);
    fclose(manfiy_fayl);

    printf("Ma'lumotlar fayllarga yozildi.\n");

    return 0;
}
