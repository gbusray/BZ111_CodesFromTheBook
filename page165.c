//
//  main.c
//  page165
//
//  Created by Gevher Büşra Yetişen on 9.12.2022.
//

#include <stdio.h>

int f(int a);
int main(void) {
    int x,y;
    printf("Write a real number:");
    scanf("%d",&x);
    y=f(x);
    printf("y = %d",y);
    return 0;
}

int f(int a)
{
    int i,z;
    z=0;
    for (i=1; i<=a; ++i) {
        z=z+i;}
    return (z);
}
