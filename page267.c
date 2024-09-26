//
//  main.c
//  page267
//
//  Created by Gevher Büşra Yetişen on 15.01.2023.
//

#include <stdio.h>

int main(void) {
    char cumle[] = "Merhaba Dunya";
    int say = 0;
    int i;
    for (i=0; cumle[i] != '\0'; i++)
        say++;
    printf("%s %d karakter icerir.\n",cumle,say);
    return 0;
}
