//
//  main.c
//  page277
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char isim[30]="Onur Ahmet Uslu";
    char soyAd[10],ilkAd[10],ortaAd[10];
    strncpy(ilkAd,isim,4);
    ilkAd[4]='\0';
    strncpy(ortaAd, &isim[5], 5);
    ortaAd[4]='\0';
    strcpy(soyAd, &isim[11]);
    return 0;
}

