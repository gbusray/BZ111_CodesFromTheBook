//
//  main.c
//  page94
//
//  Created by Gevher Büşra Yetişen on 7.12.2022.
//

#include <stdio.h>

int main(void) {
    float kenar1,kenar2,alan;
    char ch;
    printf("Seklinizi seciniz k/K(Kare) veya d/D(Dikdortgen):\n");
    scanf("%c",&ch);
    if (ch=='k'||ch=='K') {
        printf("Karenin kenarini giriniz: ");
        scanf("%f",&kenar1);
        alan=kenar1*kenar1;
        printf("Karenin alani %.2f dir\n",alan);
        
    } else {
            printf("Dikdortgenin kenarini giriniz: ");
            scanf("%f%f",&kenar1,&kenar2);
            alan=kenar1*kenar2;
            printf("Dikdortgenin alani %.2f dir\n",alan);
    }
    return 0;
}
