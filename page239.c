//
//  main.c
//  page239
//
//  Created by Gevher Büşra Yetişen on 24.12.2022.
//

#include <stdio.h>

void bul(int a){
    if (a%2==0)
        printf("%2d cift sayidir\n",a);
    else
        printf("%2d tek sayidir\n",a);
}

int main(void) {
    int k[5];
    int i;
    printf("5 tam sayi giriniz\n");
    for (i=0; i<5; ++i)
        scanf("%d",&k[i]);
    for (i=0; i<5; ++i)
        bul(k[i]);
    return 0;
}
