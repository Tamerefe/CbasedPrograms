#include <stdio.h>
#include <string.h>

struct car{
    int price,year,km,horse,engine;
    char brand[10],model[10],package[15],color[10],fuel[10];
};

char* dot(int nmb);

int main(){

    printf("Welcome the SuTaMotors\n");

    struct car bmw116d = {1827000,2022,25060,116,1499,"BMW","116","M Sport","Gray","Diesel"};
    struct car taycan = {8225000,2022,3435,598,460,"Porsche","Taycan","GTS","White","Electric"};
    struct car mustang = {15750000,2020,47980,770,5199,"Ford","Mustang","Shelby GT 500","Black","Gasoline"};
    struct car audi = {6495000,2021,38532,476,350,"Audi","E-Tron GT","GT Quattro","Brown","Electric"};

    printf("\nBrand : %s \nModel: %s \nSeries: %s \nYear: %d \nPrice: %s \nColor: %s \nFuel: %s \nKilometer: %dkm \nHorsepower: %dhp Engine: %dcc",\
    bmw116d.brand,bmw116d.model,bmw116d.package,bmw116d.year,dot(bmw116d.price),bmw116d.color,bmw116d.fuel,bmw116d.km,bmw116d.horse,bmw116d.engine);
    printf("\n-");
    printf("\nBrand : %s \nModel: %s \nSeries: %s \nYear: %d \nPrice: %s \nColor: %s \nFuel: %s \nKilometer: %dkm \nHorsepower: %dhp Engine: %dkW",\
    taycan.brand,taycan.model,taycan.package,taycan.year,dot(taycan.price),taycan.color,taycan.fuel,taycan.km,taycan.horse,taycan.engine);
    printf("\n-");
    printf("\nBrand : %s \nModel: %s \nSeries: %s \nYear: %d \nPrice: %s \nColor: %s \nFuel: %s \nKilometer: %dkm \nHorsepower: %dhp Engine: %dcc",\
    mustang.brand,mustang.model,mustang.package,mustang.year,dot(mustang.price),mustang.color,mustang.fuel,mustang.km,mustang.horse,mustang.engine);
    printf("\n-");
    printf("\nBrand : %s \nModel: %s \nSeries: %s \nYear: %d \nPrice: %s \nColor: %s \nFuel: %s \nKilometer: %dkm \nHorsepower: %dhp Engine: %dkW",\
    audi.brand,audi.model,audi.package,audi.year,dot(audi.price),audi.color,audi.fuel,audi.km,audi.horse,audi.engine);

    return 0;
}

char* dot(int nmb){

    int num[4];

    num[0] = nmb/1000;
    num[1] = nmb%1000;
    num[2] = nmb/1000%1000;
    num[3] = num[0]/1000;

    static char newW[16];
    
    if(num[3]==0){
        sprintf(newW, "%d.%03d TL",num[2],num[1]);
    } else{
        sprintf(newW, "%d.%03d.%03d TL",num[3],num[2],num[1]);
    }
    
    return newW;
}