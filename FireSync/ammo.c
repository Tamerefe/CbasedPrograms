#include <stdio.h>

#define weapon 34

double balanced[weapon];

struct casE{
    char name[weapon][weapon];
    int price[weapon];
    int damage[weapon];
    float firerate[weapon];
    int magazine[weapon];
    int falloff[weapon];
    float range[weapon];
    float recoil[weapon];
};

void gamemenu();
void play();
void about(struct casE *ptr);

int main(){

    gamemenu();

    return 0;
}

void gamemenu(){

    struct casE ammo;

    int choise;

    do {
        printf("\nMenu");
        printf("\n--------");

        printf("\n 1. Play");
        printf("\n 2. Options");
        printf("\n 3. Help");
        printf("\n 4. About");
        printf("\n 5. Exit");

        printf("\n\nYour Choise : " );
        scanf("%d",&choise);

        switch (choise) {
            case 1:
                //play();
                break;
            case 2: case 3:
                // Options and Help
                printf("Options and Help not implemented yet.\n");
                break;
            case 4:
                about(&ammo);
                break;
            default:
                break;
        }
    } while (choise != 5);
    
}

void about(struct casE *ptr){

    FILE *fptr;

    fptr = fopen("case.txt","r");

    int i = 0;
    while (fscanf(fptr, "%s %d %d %f %d %d %f %f", ptr->name[i], &ptr->price[i], &ptr->damage[i],
                &ptr->firerate[i], &ptr->magazine[i], &ptr->falloff[i], &ptr->range[i], &ptr->recoil[i]) != EOF && i < weapon) {
        balanced[i] = ((ptr->damage[i] * ptr->firerate[i]) + (ptr->magazine[i] * ptr->range[i])) / (float)(ptr->falloff[i] + ptr->recoil[i]); 
        i++;
    }

    //Balance Score = ((Damage * Fire Rate) + Magazine Size) / Falloff + Recoil

    fclose(fptr);

    printf("|------------|--------|------|---------------|-------------|--------------|--------------|------|\n");
    printf("|Weapon Name |Price($)|Damage|Fire Rate (RPM)|Magazine Size|Damage Falloff|Accurate Range|Recoil|\n");
    printf("|------------|--------|------|---------------|-------------|--------------|--------------|------|\n");

    for (int j = 0; j < i; j++) {
        printf("|%-12s|%8d|%6d|%15.2f|%13d|%14d|%14.2f|%6.1f|%.3f|\n", ptr->name[j], ptr->price[j], ptr->damage[j],
               ptr->firerate[j], ptr->magazine[j], ptr->falloff[j],ptr->range[j],ptr->recoil[j],balanced[j]/100);
    }
    printf("|------------|--------|------|---------------|-------------|--------------|--------------|------|\n");


}

// void play(){

//     printf("Please select your weapon: ");


// }