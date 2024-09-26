//
//  main.c
//  page290
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int uzunluk(char*);

int main(void) {
    char* isimler[5]={"Ercil","Selbes","Tokdemir","Turhan"};
    char* uzunisim;
    int i,enfazla=0,boyut;
    for (i=0; i<4; ++i) {
        boyut=uzunluk(isimler[i]);
        printf("uzunluk %d\n",boyut);
        if(boyut>enfazla){
            enfazla=boyut;
            uzunisim=isimler[i];
        }
    }
    printf("En uzun isim = %s, boyut = %d\n",uzunisim,enfazla);}

int uzunluk(char *s){
    int n=0;
    for ( ; *s!='\0'; s++)
        n++;
    return (n);
}
