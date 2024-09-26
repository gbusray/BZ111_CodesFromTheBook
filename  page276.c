//
//  main.c
//  page276
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char dizgi1[13]="iyi gunler";
    char dizgi2[13];
    printf("Dizgi1: %s\n",dizgi1);
    printf("Dizgi2: %s\n",dizgi2);
    strcpy(dizgi2,dizgi1);
    printf("Dizgi1: %s\n",dizgi1);
    printf("Dizgi2: %s\n",dizgi2);
    return 0;
}

//string.h kütüphanesini eklemeyi unutma!!!
