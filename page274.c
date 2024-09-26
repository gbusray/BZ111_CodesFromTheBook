//
//  main.c
//  page274
//
//  Created by Gevher Büşra Yetişen on 15.01.2023.
//

#include <stdio.h>

int main(void) {
    float benzin;
    float km;
    char benzin_km[80];
    printf("Kac kilometre yol gidildiğini ve kac litre benzin harcandigini giriniz ->\n");
    scanf("%f%f",&km,&benzin);
    sprintf(benzin_km,"km. de %5.3f lt. benzin yakiyor.",km/benzin);
    printf("%s \n",benzin_km);
    return 0;
}
