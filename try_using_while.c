//
//  main.c
//  try using while
//
//  Created by Gevher Büşra Yetişen on 8.12.2022.
//

#include <stdio.h>

int main(void) {
    int number;
    printf("Please enter a number -> \n");
    scanf("%d" ,&number);
    while (number<=25) {
        number=number+3;
        printf("%d\n",number);

    }
    return 0;
}
