/*Create a union containing 6 strings: name, home_address, hostel_address, city, 
state and zip. Write a C program to display your present address. */

#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100]; 
    char city[50];
    char state[50];
    char zip[10];
};

int main() 
{
    union Address addr;

    // Assigning present address details one by one (only last assigned will hold)
    strcpy(addr.name,"Tarun Mittal"); 
    printf("Name : %s\n", addr.name); 

    strcpy(addr.hostel_address, "Bidholi boys hostel UPES"); 
    printf("Hostel Address: %s\n", addr.hostel_address); 

    strcpy(addr.city, "Dehradun");
    printf("City: %s\n", addr.city);

    strcpy(addr.state, "Uttrakhand");
    printf("State: %s\n", addr.state);

    strcpy(addr.zip, "248007");
    printf("Zip: %s\n", addr.zip);

    // Because of union nature, only the last assigned field ('zip') holds valid data now,
    // so if you want to display full present address together, use struct instead.
    // For demonstration, this shows overwriting effect.

    return 0;
}
