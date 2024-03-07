#include <stdio.h>
#include <string.h>

struct car{
    int price,year,km,horse,engine;
    char brand[10],model[10],package[15],color[10],fuel[10];
};

int main(){

    printf("Welcome the SuTaMotors\n");

    struct car bmw116d = {1827000,2022,25060,116,1499,"BMW","116","M Sport","Gray","Diesel"};
    struct car taycan = {8225000,2022,3435,598,460,"Porsche","Taycan","GTS","White","Electric"};
    struct car mustang = {15750000,2020,47980,770,5199,"Ford","Mustang","Shelby GT 500","Black","Gasoline"};

    printf("\nBrand : %s \nModel: %s \nSeries: %s \nYear: %d \nPrice: %d Tl \nColor: %s \nFuel: %s \nKilometer: %dkm \nHorsepower: %dhp Engine: %dcc",\
    bmw116d.brand,bmw116d.model,bmw116d.package,bmw116d.year,bmw116d.price,bmw116d.color,bmw116d.fuel,bmw116d.km,bmw116d.horse,bmw116d.engine);
    printf("\n-\n");
    printf("\nBrand : %s \nModel: %s \nSeries: %s \nYear: %d \nPrice: %d Tl \nColor: %s \nFuel: %s \nKilometer: %dkm \nHorsepower: %dhp Engine: %dkW",\
    taycan.brand,taycan.model,taycan.package,taycan.year,taycan.price,taycan.color,taycan.fuel,taycan.km,taycan.horse,taycan.engine);
    printf("\n-\n");
    printf("\nBrand : %s \nModel: %s \nSeries: %s \nYear: %d \nPrice: %d Tl \nColor: %s \nFuel: %s \nKilometer: %dkm \nHorsepower: %dhp Engine: %dcc",\
    mustang.brand,mustang.model,mustang.package,mustang.year,mustang.price,mustang.color,mustang.fuel,mustang.km,mustang.horse,mustang.engine);

    return 0;
}