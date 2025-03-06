

#include <stdio.h>

int main()
{
   int a[] ={1, 2, 3};
   int ar[sizeof(a)];
   char b[] = "ABC";
   char br[sizeof(b)];
   float c[] = {1.1, 1.2, 1.3};
   float cr[sizeof(c)];
   FILE* fp;
   
   fp = fopen("a.bin", "wb+");
   fwrite(a, sizeof(a), 1, fp);
   fwrite(b, sizeof(b), 1, fp);
   fwrite(c, sizeof(c), 1, fp);
   
   fseek(fp, 0, SEEK_SET);
   fread(ar, sizeof(a), 1, fp);
   for( int i =0;i <3; i++){
       printf("%d ", ar[i]);
   }
   printf("\n");
   fread(br, sizeof(b), 1, fp);
   for( int i =0;i <3; i++){
       printf("%c ", br[i]);
   }
   printf("\n");
   fread(cr, sizeof(c), 1, fp);
   for( int i =0;i <3; i++){
       printf("%f ", cr[i]);
   }
   printf("\n");
   fclose(fp);

    return 0;
}
