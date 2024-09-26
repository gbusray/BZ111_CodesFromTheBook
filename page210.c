//
//  main.c
//  page210
//
//  Created by Gevher Büşra Yetişen on 15.12.2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *px, *py;
    int x=3, y=4;
    px=&x;
    py=&y;
    *py=5;
    printf("%d\n",*px);
}
