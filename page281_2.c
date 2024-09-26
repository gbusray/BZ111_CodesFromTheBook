//
//  main.c
//  page281_2
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char dizgi1[13]="iyi gunler";
    char dizgi2[13]="gun";
    if (strstr(dizgi1, dizgi2) == '\0')
        printf("dizgi2 dizgi 1 icinde YOK\n");
        else
            printf("dizgi2 dizgi 1 icinde VAR\n");
    return 0;
}
