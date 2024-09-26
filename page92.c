//
//  main.c
//  page92
//
//  Created by Gevher Büşra Yetişen on 7.12.2022.
//

#include <stdio.h>

int main(void) {
    int sayi;
    printf("Bir sayi giriniz-> ");
    scanf("%d",&sayi);
    /*sayinin yediye bolumunden arta kalan sifir ise sayi yediye bolunur. */
    if(sayi%7==0)
        printf("%d yedi sayisina bolunur.\n",sayi);
    else
        printf("%d yedi sayisina bolunmez.\n",sayi);
    return 0;
}
