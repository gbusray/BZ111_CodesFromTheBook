//
//  main.c
//  page230
//
//  Created by Gevher Büşra Yetişen on 24.12.2022.
//

#include <stdio.h>

int main(void) {
    int a[5];
    int i,toplam;
    double ortalama;
    
    printf("Bes tam sayi giriniz:\n");
    for (i=0; i<5; i++)
        scanf("%d",&a[i]);
    toplam=0;
    for (i=0; i<5; i++)
        toplam=toplam+a[i];
    ortalama= toplam/5.0;
    printf("Ortalama=%5.2f\n",ortalama);
    return 0;
}
