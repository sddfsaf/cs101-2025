#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int n =7;
    int l;
    printf("請輸入要的樂透份數：");
    scanf("%d", &l);
    int cout[n]; 
    FILE* fp;
    fp = fopen("lotto.txt", "w");
    
    fprintf(fp, "========= lotto649 =========\n");
    srand(1);
    for (int i =1; i <=l; i++){
        for ( int k =0;k <n; k++){
            
            cout[k] = rand() %69 + 1;
                for ( int j =0;j <k; j++){
                    if (cout[k] == cout[j]){
                        k--;
                        break;
                    }
                }
                
        }
        fprintf(fp, "[%d]: ", i);
        for(int a =0; a <n; a++){
            fprintf(fp, "%02d ", cout[a]);
        }
        fprintf(fp, "\n");
    }
    if ( l < 5){
        for (int i = l+1; i <=5; i++){
            fprintf(fp, "[%d]:", i);
            for (int i =0; i <n; i++){
                fprintf(fp, " __");
            }
            fprintf(fp, "\n");
        }
    }
    fprintf(fp, "========= csie@CGU =========\n");

    fclose (fp);
    return 0;
}

