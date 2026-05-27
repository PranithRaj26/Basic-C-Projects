//MOVIE TICKET PROGRAM

#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = false;

    if (isStudent){
        if (isSenior){
            printf("You get a student dicount of 10%\n");
            printf("You get a senior dicount of 20%\n");
            price *= 0.7;
        }
       else{
            printf("You get a student dicount of 10%\n");
            price *= 0.9;
       }
    }
    else{
        if (isSenior){
            printf("You get a senior dicount of 20%\n");
            price *= 0.8;
        }
    }
     

    printf("Price of a ticket is: $%.2f\n", price);

    return 0;
}