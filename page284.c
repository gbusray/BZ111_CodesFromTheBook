//
//  main.c
//  page284
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str2[30], str1[30];
    int i,uzunluk;
    printf("Bir dizgi giriniz:\n");
    gets(str1);
    uzunluk=strlen(str1);
    for (i=0; i<uzunluk; ++i)
        strncpy(&str2[i],&str1[uzunluk-i-1],1);
    printf("%s\n",str2);
        return 0;
}
