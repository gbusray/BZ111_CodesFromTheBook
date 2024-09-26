//
//  main.c
//  page224
//
//  Created by Gevher Büşra Yetişen on 24.12.2022.
//

#include <stdio.h>

int main(void) {
    int not1, not2, not3;
    double s ;
    printf("3 adet not giriniz\n");
    scanf("%d%d%d",&not1,&not2,&not3);
    s=(not1+not2+not3)/3.0;
    printf("Toplam= %f",s);
    return 0;
}
