//WEIGHT CONVERTER PROGRAM

#include <stdio.h>


int main() {
    
    int choice = 0;
    float pounds = 0.0f;
    float kg = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kg to Pounds\n");
    printf("2. Pounds to Kg\n");
    printf("Enter your choice (1 or 2):");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Enter the weight in Kg: ");
        scanf("%f", &kg);
            pounds = kg * 2.20462;
                printf("%.2f Kg is equal to %.3f pounds\n",kg, pounds);
    }
    else if(choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
            kg = pounds / 2.20462;
                printf("%.2f pounds is equal to %.3f kg\n",pounds, kg);

    }
    else{
        printf("Nig are you blind\n");
    }
    return 0;
}