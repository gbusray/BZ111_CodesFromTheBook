//
//  main.c
//  page281_1
//
//  Created by Gevher Büşra Yetişen on 16.01.2023.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char dizgi1[30]="iyi gunler ";
    char dizgi2[30]="iyi misiniz?";
    printf("%d\n",strncmp(dizgi1, dizgi2, 3));
    printf("%d\n",strncmp(dizgi1, dizgi2, 5));
    return 0;
}
