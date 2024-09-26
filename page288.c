//
//  main.c
//  page288
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str1[70];
    int k,i;
    printf("Bir dizgi giriniz:\n");
    gets(str1);
    k=strlen(str1);
    for (i=0; i<=k; ++i)
        if(isalpha(str1[i]))
            printf("%c",str1[i]);
    return 0;
}
