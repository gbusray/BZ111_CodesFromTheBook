//
//  main.c
//  page214
//
//  Created by Gevher Büşra Yetişen on 20.12.2022.
//

#include <stdio.h>

void function (int *a){
    *a=8;
    printf("Fonksiyon icinde %d\n",*a);
}

int main(void) {
    int s=1;
    printf("Fonksiyon cagrilmadan once %d \n",s);
    function(&s);
    printf("Fonksiyon cagrildiktan sonra %d \n",s);
    return 0;
}
