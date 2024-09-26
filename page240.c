//
//  main.c
//  page240
//
//  Created by Gevher Büşra Yetişen on 25.12.2022.
//

#include <stdio.h>

void f1(int b[], int n);

int main(void) {
    int i, a[]={1,2,3};
    f1(a, 3);
    printf("\n main fonksiyonu \n");
    for (i=0; i<3; i++)
        printf("%d\n",a[i]);
    return 0;
}

void f1(int b[], int n){
    int i;
    printf("f1 fonksiyonu \n");
    for (i=0; i<n; i++) {
        printf("%d\n",b[i]);
        b[i]=8;
    }
}
