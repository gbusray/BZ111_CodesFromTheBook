//
//  main.c
//  page285
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>
int main(void) {
    char dizgi1[20], dizgi2[20];
    int bayrak=1,i,uzunluk;
    printf("Bir dizgi giriniz:\n");
    gets(dizgi1);
    uzunluk=strlen(dizgi1);
    for (i=0; i<uzunluk; ++i)
        if (dizgi1[i] != dizgi1[strlen(dizgi1)-i-1])
            bayrak=0;
    if (bayrak==1)
        printf("%s palindromdur.\n",dizgi1);
        else
            printf("%s palindrom degildir.\n",dizgi1);
    return 0;
}
