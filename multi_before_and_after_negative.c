#include <stdio.h>
#include "multi_before_and_after_negative.h"
int multi_before_and_after_negative(int *arr, int size){
    int start = index_first_negative(arr, size);
    int end = index_last_negative(arr, size);
    int multi2 = 1;
    int i = 0;
    for(i; i<start; i++){
        multi2 *= arr[i];
    }
    int j = end;
    for(j; j<size; j++){
        multi2 *= arr[j];
    }
    return multi2;
}
