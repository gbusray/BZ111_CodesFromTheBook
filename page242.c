//
//  main.c
//  page242
//
//  Created by Gevher Büşra Yetişen on 25.12.2022.
//

#include <stdio.h>

void max(int a[], int n);

int main(void){
    int k[5];
    int i;
    printf("Bes tam sayi giriniz:\n");
    for (i=0; i<5; ++i)
        scanf("%d",&k[i]);
    max(k,5);
    return (0);
}

void max(int a[], int n){
    int i,m;
    m=a[0];
    for (i=1; i<n; ++i)
        if (a[i]>m)
            m=a[i];
    printf("Dizinin max degeri: %d\n",m);
        }
