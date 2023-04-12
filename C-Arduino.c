#include <windows.h>
#include <stdio.h>
#include "serialcom.h"

int main(){
    printf("hosgeldiniz! ilerlemek icin enter a basin\n");
    getchar();
    printf("AD = BEYZA\nSOYAD = ACAR\nNUMARA = 200104004065");
    getchar();
    printf("\nLUTFEN CASE SECINIZ\nMENU:\ncase 1 = ledi ac\ncase 2 = ledi kapat\ncase 3 = ledi 3 defa ac kapat\ncase 4 = alinan sayinin karesini hesapla\ncase 5 = alinan stringin karakter sayisini bul");
    getchar();
    printf("\ncikmak isterseniz lutfen 0 a basiniz.");

    int sayi;

    while(1){
        char secim[1]; //kutuphanede serial write fonksiyonu char dizisi alıyor, sanirim cok secenek konabilsin diye yapilmis o yuzden char yapamadım char dizisini bir elemanli yaptim
        printf("\ncase i seciniz..:");
        scanf("%s", &secim);

        if(secim[0]=='0'){
            return -1;
        }
        else if(secim[0]=='1' || secim[0]=='2' || secim[0]=='3'){
            serial_Write(secim);
        }
        else if(secim[0]=='4'){
            serial_Write(secim);
            char sayi[100];
            printf("\nlutfen sayiyiy giriniz..:");
            scanf("%s", &sayi);
            serial_Write(sayi);
            printf("%s*%s=", sayi,sayi);
            serial_Read();
        }
    }
    return 0;
}
