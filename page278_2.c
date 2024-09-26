//
//  main.c
//  page278_2
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char dizgi1[30]="iyi gunler ";
    char dizgi2[30]="Nasilsiniz?";
    strcat(dizgi1, dizgi2);
    printf("\ndizgi1: %s %d",dizgi1, strlen(dizgi1));
    printf("\ndizgi 2: %s\n",dizgi2);
    return 0;
}
