

#include <stdio.h>

void bin_to_hex( char a[], int l){
    int t =0;
    int sum =0;
    
    for ( int i =0; i <l;i+=4){
        for ( int j =i; j<i+4; j++){
            if ( a[j] ==48){
                sum =t*2;
                t =sum;
            }else{
                sum =t*2+1;
                t =sum;
            }
        }
        if ( sum ==10){
            a[i] =65;
        }else if ( sum ==11){
            a[i] =66;
        }else if ( sum ==12){
            a[i] =67;
        }else if ( sum ==13){
            a[i] =68;
        }else if ( sum ==14){
            a[i] =69;
        }else if ( sum ==15){
            a[i] =70;
        }else{
            a[i] =sum+48;
        }
        sum =0;
        t =0;
    }
    for ( int i =1; i <l/4; i++){
        for ( int j =4; j <l; j+=4){
            a[i] =a[j];
        }
        a[i+1] =0;
    }
    printf("%s\n",a);
}


int main()
{
    int l =8;
    char a[] ="10001111";
    char b[] ="10001110";
    bin_to_hex(a,l);
    bin_to_hex(b,l);

    return 0;
}
