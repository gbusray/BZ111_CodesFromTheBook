//
//  main.c
//  page231
//
//  Created by Gevher Büşra Yetişen on 24.12.2022.
//

#include <stdio.h>

int main(void) {
    int a[30];
    int i=0, toplam=0;
    double ortalama;
    
    printf("Negatif degerle sonlanan tam sayilar giriniz\n");
    scanf("%d",&a[i]);
    while (a[i]>0) {
        toplam=toplam+a[i];
        ++i;
        scanf("%d",&a[i]);}
    ortalama=(double)toplam/i;
    printf("Ortalama=%5.2f\n",ortalama);
    return 0;
}
