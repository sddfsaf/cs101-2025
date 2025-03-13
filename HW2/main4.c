#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Book {
    int id;
    char title[1000];
    int price;
} book_t;

void total_price(book_t bk[], int n){
    int sum = 0;
    for (int i=0; i<6; i++){
        sum+=bk[i].price;
    }
    printf("%d",sum);
    return;
}

void list_books(book_t bk){
    printf("book id = %d\n", bk.id);
    printf("book price = %d\n", bk.price);
    printf("book title = %s\n\n", bk.title);
}

int main()
{
    book_t bk[6];
    
    bk[0].id = 1;
    bk[0].price = 1000;
    strcpy(bk[0].title, "All the Light We Cannot See");

    bk[1].id = 2;
    bk[1].price = 300;
    strcpy(bk[1].title, "The 38 Letters from J.D. Rockefeller to his son");
    
    bk[2].id = 3;
    bk[2].price = 1000;
    strcpy(bk[2].title, "The Ballad of Songbirds and Snakes");
    
    bk[3].id = 4;
    bk[3].price = 550;
    strcpy(bk[3].title, "Killers of the Flower Moon");
    
    bk[4].id = 5;
    bk[4].price = 870;
    strcpy(bk[4].title, "Elon Musk");
    
    bk[5].id = 6;
    bk[5].price = 1344;
    strcpy(bk[5].title, "Milk and Honey 12-Month 2024");
    
    for( int i = 0; i < 6; i++){
        list_books( bk[i]);
    }
    total_price(bk,6);
    

    return 0;
}
