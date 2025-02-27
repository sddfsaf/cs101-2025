
#include <stdio.h>

int main()
{
    char a[] = "A4B1C3f3";
    int k = 8;
    
    for ( int i =0; i <k; i++){
        if (a[i+1] <60){
             for (int j =0; j < a[i+1]-48; j++){
                printf("%c",a[i]);
            }
        }
    }
    return 0;
}
