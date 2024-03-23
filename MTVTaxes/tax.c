#include <stdio.h>
#include <string.h>

int main(){

    FILE *fptr;

    fptr = fopen("mtv.txt", "r");
    char myString[100];
    fgets(myString, 100, fptr);
    printf("%s", myString);  
    
    char type;
    float age;
    int engine,regis,price;

    printf("Welcome to The Mtv Calculator\n\n");

    printf("Please Select Your Car Type:");
    printf("\nA.) Car \nB.) Motorcycle \nC.) Minibus \nD.) Bus \nE.) Panelvan, Motor Caravan \nF.) Truck, Pickup Truck, Tow Truck \nE.) Fully Electric Cars\n");
    scanf("%c",&type);

    printf("Please Enter Vehicle Age:");
    printf("\n1-3 / 4-6 / 7-11 / 12-15 / 16-17+\n");
    scanf("%f",&age);

    if (type == 'e' || type == 'E'){
        printf("Please Enter Kilowatt(kW) Range:");
        printf("\n0-70 / 71-85 / 86-105 / 106-120 / 121-150 / 151-180 /\n181-210 / 211-240 / 240-241+\n");
        scanf("%d",&engine);
    }else{
        printf("Please Enter Engine Displacement:");
        printf("\n0-1300 / 1301-1600 / 1601-1800 / 1801-2000 / 2001-2500 /\n2501-3000 / 3001-3500 / 3501-4000 / 4000-4001+\n");
        scanf("%d",&engine);
    }

    printf("First registration date of the vehicle:");
    printf("\n1.) Before 2018 \n2.) After 2018\n");
    scanf("%d",&regis);

    if (regis == 2){
        printf("Vehicle value excluding Kdv:");
        if (engine <= 1300){
            printf("\n180.600Tl- / 180.600-316.400Tl / 316.400Tl+\n");
            scanf("%d",&price);
        } else if (engine > 1300 || engine <= 1600){
            printf("\n180.600Tl- / 180.600-316.400Tl / 316.400Tl+\n");
            scanf("%d",&price);
        } else if (engine > 1600 || engine <= 1800){
            printf("\n452.800Tl- / 452.800Tl+\n");
            scanf("%d",&price);
        } else if (engine > 1800 || engine <= 2000){
            printf("\n452.800Tl- / 452.800Tl+\n");
            scanf("%d",&price);
        } else if (engine > 2000 || engine <= 2500){
            printf("\n565.500Tl- / 565.500Tl+\n");
            scanf("%d",&price);
        } else if (engine > 2500 || engine <= 3000){
            printf("\n1.131.800Tl- / 1.131.800+\n");
            scanf("%d",&price);
        } else if (engine > 3000 || engine <= 3500){
            printf("\n1.131.800Tl- / 1.131.800+\n");
            scanf("%d",&price);
        } else if (engine > 3500 || engine <= 4000){
            printf("\n1.811.800Tl- / 1.811.800+\n");
            scanf("%d",&price);
        } else if (engine > 4000){
            printf("\n2.151.400Tl- / 2.151.400+\n");
            scanf("%d",&price);
        }
    }

    switch (type){
        case 'a':
        case 'A':
        if (age <= 3){
            if (engine <= 1300){
                /* code */
            } else if (engine > 1300 || engine <= 1600){
                /* code */
            } else if (engine > 1600 || engine <= 1800){
                
            } else if (engine > 1800 || engine <= 2000){
                /* code */
            } else if (engine > 2000 || engine <= 2500){
                /* code */
            } else if (engine > 2500 || engine <= 3000){
                /* code */
            } else if (engine > 3000 || engine <= 3500){
                /* code */
            } else if (engine > 3500 || engine <= 4000){
                /* code */
            } else if (engine > 4000){
                /* code */
            }
        } else if (age > 3 || age <= 6){
            /* code */
        } else if (age > 6 || age <= 11){
            
        } else if (age > 11 || age <= 15){
            /* code */
        } else if (age > 15){
            /* code */
        }
        break;
    default:
        break;
    }
    

    fclose(fptr);
    return 0;
}

// https://hepiyi.com.tr/blog/mtv-nedir-mtv-hesaplama-nasil-yapilir

// Sude ile evleneceğim - 29.02.2024 -