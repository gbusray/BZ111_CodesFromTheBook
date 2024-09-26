//
//  main.c
//  page279
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char dizgi1[30]="iyi gunler ";
    char dizgi2[30]="Nasilsiniz?";
    printf("\ndizgi 1: %s",dizgi1);
    printf("\ndizgi 2: %s",dizgi2);
    strncat(dizgi1, dizgi2, 5);
    printf("\ndizgi 1: %s",dizgi1);
    printf("\ndizgi 2: %s\n",dizgi2);
    return 0;
}
