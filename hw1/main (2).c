

#include <stdio.h>

int main()
{
    char a[] ="Hello";
    int l =5;
    char turn;
    
    printf ("%s\n",a);
    for ( int i = 0; i < 5/2; i++){
        turn =a[i];
        a[i] =a[l-1-i];
        a[l-1-i] =turn;
    }
    printf ("%s",a);

    return 0;
}