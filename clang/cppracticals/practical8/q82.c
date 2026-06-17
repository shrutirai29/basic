//Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
#include <stdio.h> 

struct Book{
    char title[50];
    char author[50];
    int price;
};

int main(){ 
    int i;
    struct Book b[3];

    printf("Enter the data of the book \n");
    for(i = 0; i < 3; i++){
        printf("Enter the title of the book: ");
        scanf("%s", &b[i].title);
        printf("Enter the author name: ");
        scanf("%s", &b[i].author);
        printf("Enter the price of the book: ");
        scanf("%d", &b[i].price);
        
    }

    for(i = 0; i < 3; i++){
        printf("\n%s, %s, %d \n", b[i].title, b[i].author, b[i].price);
    }

    struct Book mostExpensive;
    if(b[1].price >= b[2].price && b[1].price >= b[2].price){
        mostExpensive = b[1];
    }
    else if(b[2].price >= b[1].price && b[2].price >= b[3].price){
        mostExpensive = b[2];
    }
    else{
        mostExpensive = b[3];
    }

    struct Book lowestPriced;
    if(b[1].price <= b[2].price && b[1].price <= b[2].price){
        lowestPriced = b[1];
    }
    else if(b[2].price <= b[1].price && b[2].price <= b[3].price){
        lowestPriced = b[2];
    }
    else{
        lowestPriced = b[3];
    }
    
    printf("\nMost Expensive Book: \n");
    printf("Title: %s \n", mostExpensive.title);
    printf("Author: %s \n", mostExpensive.author);
    printf("Price: %d \n", mostExpensive.price);

    printf("\nLeast Expensive Book: \n");
    printf("Title: %s \n", lowestPriced.title);
    printf("Author: %s \n", lowestPriced.author);
    printf("Price: %d \n", lowestPriced.price);

    return 0;
}