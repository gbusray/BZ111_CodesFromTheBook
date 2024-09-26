//
//  main.c
//  page229
//
//  Created by Gevher Büşra Yetişen on 24.12.2022.
//

#include <stdio.h>

int main(void){
    int a[100],i;
    
    for (i=0; i<100 ; ++i)
        a[i]=(i+1)*(i+1);
    printf("%-5d%5d\n",a[0],a[99]);
    printf("%-5d%5d\n",a[3],a[50]);
    return 0;
}
