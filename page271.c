//
//  main.c
//  page271
//
//  Created by Gevher Büşra Yetişen on 15.01.2023.
//

#include <stdio.h>

int main(void) {
    char cumle[]= "Hakan bugun 40 yasina girdi";
    char dizgi1[20];
    char dizgi2[20];
    int i;
    sscanf(cumle, " %s %s %d",dizgi1,dizgi2,&i);
    printf("%s --> %d \n" ,dizgi1,i);
    return 0;
}
