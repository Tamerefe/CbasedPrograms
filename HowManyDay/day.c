#include <windows.h> // use to define SYSTEMTIME , GetLocalTime() and GetSystemTime()
#include <stdio.h>

enum Month{Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12};

int main(void) {

    //30-day month: April-4, June-6, September-8, November-11 /4
    //31-day month: January-1, March-3, May-5, July-7, August-9, October-10, December-12 /7
    //28-day month: February-2

    SYSTEMTIME t; // Declare SYSTEMTIME struct
    GetLocalTime(&t); // Fill out the struct so that it can be used

    enum Month thisMonth;

    int day,mont,year,btwYear,btwMonth = 0,btwDay,btwTotal = 0,btwLeap = 0;

    printf("Please Enter a Day: ");
    scanf("%d",&day);
    printf("Please Enter a Month (1-12): ");
    scanf("%d",&mont);
    printf("Please Enter a Year: ");
    scanf("%d",&year);

    if(t.wYear - year < 0){
        printf("You gave a date from the future!");
    } else{
        for (int i = year; i <= t.wYear; i++) {
            if(i % 4 == 0){
                if(i % 100 == 0){
                    if(i % 400 == 0){
                        btwLeap++;
                    }
                }else{
                    btwLeap++;
                }
            }         
        }
        if(t.wMonth - mont < 0){
            year++;
            btwYear = (t.wYear - year) * 365;
        } else{
            btwYear = (t.wYear - year) * 365;
        }
    }

    if(t.wDay - day < 0){
        btwDay = t.wDay - day;
        switch (t.wMonth){
        case 4: case 6: case 8: case 11:
            btwDay += 30;
            break;
        case 1: case 3: case 5: case 7: case 9: case 10: case 12:
            btwDay += 31;
            break;        
        case 2:
            btwDay += 28;
        default:
            break;
        }
    }else{
        btwDay = t.wDay - day;
    }

    if(t.wMonth - mont < 0){
        for (size_t i = mont+1; i <= 12; i++){
            switch (i){
            case 4: case 6: case 8: case 11:
                btwMonth += 30;
                break;
            case 1: case 3: case 5: case 7: case 9: case 10: case 12:
                btwMonth += 31;
                break;        
            case 2:
                btwMonth += 28;
            default:
                break;
            }
        }
        for (size_t i = 1; i < t.wMonth; i++){
            switch (i){
            case 4: case 6: case 8: case 11:
                btwMonth += 30;
                break;
            case 1: case 3: case 5: case 7: case 9: case 10: case 12:
                btwMonth += 31;
                break;        
            case 2:
                btwMonth += 28;
            default:
                break;
            }
        }
    }else{
        for (size_t i = mont; i < t.wMonth; i++){
            switch (i){
            case 4: case 6: case 8: case 11:
                btwMonth += 30;
                break;
            case 1: case 3: case 5: case 7: case 9: case 10: case 12:
                btwMonth += 31;
                break;        
            case 2:
                btwMonth += 28;
            default:
                break;
            }
        }
    }

    btwTotal = btwYear + btwMonth + btwDay + btwLeap + 1;
    printf("Result: %d days",btwTotal);
    
    return 0;
}