#include <stdio.h>

#define TOTAL 12
#define HOUR 9
#define CORP 6

struct bot{
  char corp[TOTAL][CORP];
  int date[HOUR][HOUR];
  float price[HOUR][HOUR];
};

int main() {

  FILE *file;
  file = fopen("graph.txt", "r");

  struct bot allstocks;

  printf("Please Select The Stocks You Want to Trade\n\n");

  for (int i = 0; i < TOTAL; i++){
    fscanf(file,"%s",allstocks.corp[i]);
    for (int k = 0; k < HOUR; k++){
      fscanf(file,"%d %f",&allstocks.date[k],&allstocks.price[k]);
    }
  }

  for (int l = 0; l < TOTAL; l++){
    printf(" %d. %s %f %d\n",l+1,allstocks.corp[l],allstocks.price[l],allstocks.date[l]);
  }
  
  return 0;
}