#include <stdio.h>
#include <string.h>

void newcars(char type,float age,int engine,int price);
void oldcars(char type,float age,int engine);

int main(){
    
    char type;
    float age;
    int engine,regis,price;

    printf("Welcome to The Mtv Calculator\n\n");

    printf("Please Select Your Car Type:");
    printf("\nA.) Car \nB.) Motorcycle \nE.) Fully Electric Cars\n");
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

    if(regis == 1){
        oldcars(type,age,engine);
    }else if (regis == 2){
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
        newcars(type,age,engine,price);
    }
    
    return 0;
}

// void newcars(char type,float age,int engine,int price){

// }

void oldcars(char type,float age,int engine){

    switch (type){
        case 'a':
        case 'A':
        if (age <= 3){
            if (engine <= 1300){
                printf("\nYour MTV: 3.359 TL");
            } else if (engine > 1300 || engine <= 1600){
                printf("\nYour MTV: 5.851 TL");
            } else if (engine > 1600 || engine <= 1800){
                printf("\nYour MTV: 10.342 TL");
            } else if (engine > 1800 || engine <= 2000){
                printf("\nYour MTV: 16.296 TL");
            } else if (engine > 2000 || engine <= 2500){
                printf("\nYour MTV: 24.439 TL");
            } else if (engine > 2500 || engine <= 3000){
                printf("\nYour MTV: 34.081 TL");
            } else if (engine > 3000 || engine <= 3500){
                printf("\nYour MTV: 51.903 TL");
            } else if (engine > 3500 || engine <= 4000){
                printf("\nYour MTV: 81.611 TL");
            } else if (engine > 4000){
                printf("\nYour MTV: 133.572 TL");
            }
        } else if (age > 3 || age <= 6){
            if (engine <= 1300){
                printf("\nYour MTV: 2.343 TL");
            } else if (engine > 1300 || engine <= 1600){
                printf("\nYour MTV: 4.387 TL");
            } else if (engine > 1600 || engine <= 1800){
                printf("\nYour MTV: 8.078 TL");
            } else if (engine > 1800 || engine <= 2000){
                printf("\nYour MTV: 12.546 TL");
            } else if (engine > 2000 || engine <= 2500){
                printf("\nYour MTV: 17.741 TL");
            } else if (engine > 2500 || engine <= 3000){
                printf("\nYour MTV: 29.646 TL");
            } else if (engine > 3000 || engine <= 3500){
                printf("\nYour MTV: 46.702 TL");
            } else if (engine > 3500 || engine <= 4000){
                printf("\nYour MTV: 70.470 TL");
            } else if (engine > 4000){
                printf("\nYour MTV: 100.164 TL");
            }
        } else if (age > 6 || age <= 11){
            if (engine <= 1300){
                printf("\nYour MTV: 1.308 TL");
            } else if (engine > 1300 || engine <= 1600){
                printf("\nYour MTV: 2.544 TL");
            } else if (engine > 1600 || engine <= 1800){
                printf("\nYour MTV: 4.758 TL");
            } else if (engine > 1800 || engine <= 2000){
                printf("\nYour MTV: 7.374 TL");
            } else if (engine > 2000 || engine <= 2500){
                printf("\nYour MTV: 11.085 TL");
            } else if (engine > 2500 || engine <= 3000){
                printf("\nYour MTV: 18.519 TL");
            } else if (engine > 3000 || engine <= 3500){
                printf("\nYour MTV: 28.129 TL");
            } else if (engine > 3500 || engine <= 4000){
                printf("\nYour MTV: 41.500 TL");
            } else if (engine > 4000){
                printf("\nYour MTV: 59.319 TL");
            }
        } else if (age > 11 || age <= 15){
            if (engine <= 1300){
                printf("\nYour MTV: 987 TL");
            } else if (engine > 1300 || engine <= 1600){
                printf("\nYour MTV: 1.798 TL");
            } else if (engine > 1600 || engine <= 1800){
                printf("\nYour MTV: 2.896 TL");
            } else if (engine > 1800 || engine <= 2000){
                printf("\nYour MTV: 4.387 TL");
            } else if (engine > 2000 || engine <= 2500){
                printf("\nYour MTV: 6.620 TL");
            } else if (engine > 2500 || engine <= 3000){
                printf("\nYour MTV: 9.956 TL");
            } else if (engine > 3000 || engine <= 3500){
                printf("\nYour MTV: 14.037 TL");
            } else if (engine > 3500 || engine <= 4000){
                printf("\nYour MTV: 18.519 TL");
            } else if (engine > 4000){
                printf("\nYour MTV: 26.654 TL");
            }
        } else if (age > 15){
            if (engine <= 1300){
                printf("\nYour MTV: 347 TL");
            } else if (engine > 1300 || engine <= 1600){
                printf("\nYour MTV: 690 TL");
            } else if (engine > 1600 || engine <= 1800){
                printf("\nYour MTV: 1.120 TL");
            } else if (engine > 1800 || engine <= 2000){
                printf("\nYour MTV: 1.728 TL");
            } else if (engine > 2000 || engine <= 2500){
                printf("\nYour MTV: 2.617 TL");
            } else if (engine > 2500 || engine <= 3000){
                printf("\nYour MTV: 3.654 TL");
            } else if (engine > 3000 || engine <= 3500){
                printf("\nYour MTV: 5.148 TL");
            } else if (engine > 3500 || engine <= 4000){
                printf("\nYour MTV: 7.374 TL");
            } else if (engine > 4000){
                printf("\nYour MTV: 10.342 TL");
            }
        }
        break;
    default:
        break;
    }

}

// https://hepiyi.com.tr/blog/mtv-nedir-mtv-hesaplama-nasil-yapilir

// Sude ile evleneceğim - 29.02.2024 -