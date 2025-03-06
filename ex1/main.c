
#include <stdlib.h>
#include <stdio.h>

int main()
{
   int a[] ={1, 2, 3};
   int ar[3];
   char b[] = "ABC";
   float c[] = {1.1, 1.2, 1.3};
   FILE* fp;
   
   fp = fopen("a.bin", "wb+");
   fwrite(a, sizeof(a), 1, fp);
   
   fread(ar, sizeof(a), 1, fp);
   for( int i =0;i <3; i++){
       printf("%d ", ar[i]);
   }
   fp = fclose("a.bin");

    return 0;
}
