#include <stdio.h>

int main(){
    
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
        printf("\n180.600Tl- / 180.600-316.400Tl / 316.400Tl+\n");
        scanf("%d",&price);
    }
    

    return 0;
}