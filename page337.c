//
//  main.c
//  page337
//
//  Created by Gevher Büşra Yetişen on 22.02.2023
//

#include <stdio.h>

int main(void) {
    int mt1,mt2,final,donemNotu;
    char ad[30];
    FILE *dosyaOku;
    dosyaOku=fopen("ogrenci.txt", "r");
    while (fscanf(dosyaOku, "%s %d %d %d\n",ad,&mt1,&mt2,&final)!=EOF)
    {
        donemNotu= (mt1 * 0.25)+(mt2 * 0.25)+ (final*0.5);
        printf("%s Donem Sonu Notu %d\n",ad,donemNotu);
    }
    fclose(dosyaOku);
    return 0;
}

