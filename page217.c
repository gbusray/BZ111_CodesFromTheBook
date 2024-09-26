//
//  main.c
//  page217
//
//  Created by Gevher Büşra Yetişen on 20.12.2022.
//

#include <stdio.h>

void exchange(int *a,int *b){
    int temporary;
    temporary=*a;
    *a=*b;
    *b=temporary;
}


int main(void) {
    int x,y,z;
    printf("Write three number: \n");
    scanf("%d%d%d",&x,&y,&z);
    printf("First values: %d %d %d \n",x,y,z);
    
    if(x>y) exchange(&x,&y);
    if(x>z) exchange(&x,&z);
    if(y>z) exchange(&y,&z);
    
    printf("Lined values: %d %d %d\n",x,y,z);
    return 0;
}
