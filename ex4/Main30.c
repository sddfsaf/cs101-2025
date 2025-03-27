#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* get_str_array(int n){
    return (char *) malloc (n* sizeof (char));
}

int main()
{
    int size = 8;
    char* ptr = get_str_array(size);
    
    strcpy(ptr, "IU12345");
    printf("%s\n",ptr);
    strcpy(ptr, "IU123456789ABCDEFG");
    printf("%s\n",ptr);
    free(ptr);
    ptr = NULL;
    

    return 0;
}
