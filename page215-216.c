//
//  main.c
//  page215-216
//
//  Created by Gevher Büşra Yetişen on 20.12.2022.
//

#include <stdio.h>

void yer_degistir(int *a,int *b){
    int gecici;
    gecici=*a;
    *a=*b;
    *b=gecici;
}

int main(void) {
    int x,y;
    printf("Iki tam sayi giriniz:\n");
    scanf("%d%d",&x,&y);
    yer_degistir(&x, &y);
    printf("Degismis degerler %d %d\n",x,y);
    return 0;
}
