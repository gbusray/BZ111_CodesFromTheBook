//
//  main.c
//  page282
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char dizgi1[100],dizgi2[100];
    printf("Birinci dizgiyi giriniz:\n");
    gets(dizgi1);
    printf("İkinci dizgiyi giriniz:\n");
    gets(dizgi2);
    if (strcmp(dizgi1, dizgi2) >0)
        printf("%s > %s\n",dizgi1,dizgi2);
        else
            if (strcmp(dizgi1, dizgi2)==0)
                printf("%s = %s\n",dizgi1,dizgi2);
                else
                    printf("%s > %s\n",dizgi2,dizgi1);
    return 0;
}
