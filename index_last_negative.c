#include <stdio.h>
#include "index_last_negative.h"
int index_last_negative(int *arr, int size){
    int i = size;
    for(i; i >= 0; i--){
        if(arr[i] < 0){
            return i;
        }
    }
}
