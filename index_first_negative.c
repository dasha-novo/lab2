#include <stdio.h>
#include "index_first_negative.h"
int index_first_negative(int *arr, int size){
    int i = 0;
    for(i; i<size; i++){
        if(arr[i] < 0){
            return i;
        }
    }
}
