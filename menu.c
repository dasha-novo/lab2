#include <stdio.h>
#define MAX_SIZE 20
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"

int arr[20];

int main(){
    int funk;
    char c;
    scanf("%d", &funk);
    scanf("%c", &c);
    int size=0;
    for (size=0; 1; size++){
        scanf("%d", &arr[size]);
        scanf("%c", &c);
        if(c=='\n'){
            break;
        }
    }
    size++;


    int res;
    switch (funk){
        case 0:
            res = index_first_negative(arr, size);
            printf("%d\n", res);
            break;
        case 1:
            res = index_last_negative(arr, size);
            printf("%d\n", res);
            break;
        case 2:
            res = multi_between_negative(arr, size);
            printf("%d\n", res);
            break;
        case 3:
            res = multi_before_and_after_negative(arr, size);
            printf("%d\n", res);
            break;
        default:
            printf("Данные некорректны");
    }
    return 0;
}
