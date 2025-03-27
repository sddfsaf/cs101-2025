#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* get_int_array(int n){
    return (int *) malloc (n* sizeof (int));
}

int main()
{
    int size = 8;
    int* ptr = get_int_array(size);
    
    for (int i = 0; i < size; i++){
        ptr[i] = i;
    }
    for (int i = 0; i < size; i++){
        printf("ptr[%i] = %d\n", i,ptr[i]);
    }
    
    
    free(ptr);
    ptr = NULL;
    

    return 0;
}
