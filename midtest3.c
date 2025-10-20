#include <stdio.h>

int main() {
    char ulang;
    do {
        char no_paket[20];
        char kota[30];
        float berat;
        float biaya = 0;  
        int admin = 1000;
        int tarif_per_kg = 15000;

        printf("=== PROGRAM HITUNG BIAYA PENGIRIMAN PT. PAKET KILAT ===\n");
        printf("Masukkan nomor paket     : ");
        scanf("%19s", no_paket);   
        printf("Masukkan kota tujuan     : ");
        scanf("%29s", kota);
        printf("Masukkan berat paket (kg): ");
        scanf("%f", &berat);

        if (berat < 1) {
            
            biaya = admin + tarif_per_kg;
        } 
        else if (berat <= 20) {
            
            biaya = admin + (tarif_per_kg * berat);
        } 
        else if (berat <= 40) {
            
            float kelebihan = berat - 20;
            biaya = admin + (tarif_per_kg * 20) + (kelebihan * (tarif_per_kg + 500));
        } 
        else {
         
            float kelebihan = berat - 40;
            biaya = admin + (tarif_per_kg * 20) + (20 * (tarif_per_kg + 500)) + (kelebihan * (tarif_per_kg + 1000));
        }

        printf("\n--- LAPORAN PENGIRIMAN PAKET ---\n");
        printf("Nomor Paket   : %s\n", no_paket);
        printf("Tujuan Kota   : %s\n", kota);
        printf("Berat Paket   : %.2f kg\n", berat);
        printf("Ongkos Kirim  : Rp %.0f\n", biaya);
        printf("--------------------------------\n");

        printf("\nApakah ingin menghitung lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("\nTerima kasih telah menggunakan layanan PT. Paket Kilat!\n");
    return 0;
}
