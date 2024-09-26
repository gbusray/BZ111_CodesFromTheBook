//
//  main.c
//  page182
//
//  Created by Gevher Büşra Yetişen on 9.12.2022.
//

#include <stdio.h>

int topla(int a);

int main(void) {
    int x, sonuc;
    printf("Bir tam sayi giriniz-> ");
    scanf("%d",&x);
    sonuc=topla(x);
    printf("Toplam=%d\n",sonuc);
    return 0;
}

int topla(int a){
    int i,s;
    s=0;
    for (i=1; i<=a; i++)
        s=s+i;
    return (s);
}
