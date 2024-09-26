//
//  main.c
//  page181
//
//  Created by Gevher Büşra Yetişen on 9.12.2022.
//

#include <stdio.h>

char tip(void);

int main(void) {
    printf("Sayinin tipi %c\n",tip());
    return 0;
}

char tip(void){
    float c;
    printf("Bir reel sayi giriniz:\n");
    scanf("%f",&c);
    if (c<0)
        return ('n');
      else
        if (c>0)
            return ('p');
         else
            return ('s');
    
}
