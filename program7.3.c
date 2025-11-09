/*
Create a Book structure containing book_id, title, author name and price. Write a 
C program to pass a structure as a function argument and print the book details.
*/
#include <stdio.h>

struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

// Function prototype for the function to print the book details 
void displayBook(struct Book b);

int main() 
{
    struct Book b1;

    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);
    printf("Enter Title: ");
    scanf(" %[^\n]", b1.title);  // %d[^\n] is the format specifier to read string with spaces
    printf("Enter Author Name: ");
    scanf(" %[^\n]", b1.author);
    printf("Enter Price: ");
    scanf("%f", &b1.price);

    displayBook(b1);

    return 0;
}
// funtion to print the details 0f the book  
void displayBook(struct Book b) 
{
    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}
