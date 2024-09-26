//
//  main.c
//  page278_1
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char d1[15]="iyi gunller";
    char d2[15];
    strcpy(d2, d1);
    printf("%s %d karakter icerir",d2,strlen(d2));
    strncpy(d2, "Hoscakal", 3);
    printf("\n%s %d karakter icerir",d2,strlen(d2));
    printf("\n%s %d karakter icerir\n",d1,strlen(d1));
    
    
    return 0;
}
