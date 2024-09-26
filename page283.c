//
//  main.c
//  page283
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char st1[20]="Bilgisayar";
    char st2[20]="Merhaba", st3[20];
    int k;
    strcpy(st3, st1);
    printf("st1 dizgisi: %s\n",st1);
    printf("st2 dizgisi: %s\n",st2);
    printf("st3 dizgisi: %s\n",st3);
    strncpy(st3,st2,3);
    printf("st3 dizgisi: %s\n",st3);
    strncpy(st3, "12345678910111213141516", 12);
    st3[12]='\0';
    k=strlen(st3);
    printf("Son dizgide(%s) %d karakter var\n",st3,k);
    return 0;
}
