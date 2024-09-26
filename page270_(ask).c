//
//  main.c
//  page270
//
//  Created by Gevher Büşra Yetişen on 15.01.2023.
//

#include <stdio.h>

int main(void) {
    char dizgi[100];
    char *pt;
    int uz;
    printf("Dizgiyi giriniz: \n");
    pt = gets (dizgi);
    while (pt != NULL) {
        printf(" Dizgi %s\n",dizgi);
        printf("\n Dizgiyi giriniz: ");
        pt = gets (dizgi);
    }
    return 0;
}
