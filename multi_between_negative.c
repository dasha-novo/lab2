#include <stdio.h>
#include "multi_between_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_between_negative(int *arr, int size){
    int start = index_first_negative(arr, size);
    int end = index_last_negative(arr, size);
    int multi1 = 1;
    int i = start;
    for(i; i<end; i++){
        multi1 *= arr[i];
    }
    return multi1;
}
