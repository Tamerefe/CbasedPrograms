#include <stdio.h>
#include <unistd.h>

#define TOTAL 12
#define HOUR 16
#define CORP 6

struct bot {
    char corp[TOTAL][CORP];
    char date[TOTAL][HOUR][CORP];
    float price[TOTAL][HOUR];
    float exch[TOTAL][HOUR];
};

int main() {

  int slct;

  FILE *file;
  file = fopen("graph.txt", "r");

  if (file == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  struct bot allstocks;

  printf("Welcome to The Nasdaq(Edited) Stocks\n\n");

  for (int i = 0; i < TOTAL; i++) {
    fscanf(file, "%s", allstocks.corp[i]);
    for (int k = 0; k < HOUR; k++) {
      fscanf(file, "%s %f", allstocks.date[i][k], &allstocks.price[i][k]);
      if (k == 0){
        allstocks.exch[i][k] = 0;
      } else {
        allstocks.exch[i][k] = ((allstocks.price[i][k] - allstocks.price[i][k-1]) /allstocks.price[i][k-1])*100;
      }
    }
  }

  fclose(file);

  for (int l = 0; l < TOTAL; l++) {
    printf("%d. %s\n", l + 1, allstocks.corp[l]);
  }
  printf("\n\nPlease Select The Stocks You Want to Trade: ");
  scanf("%d",&slct);
  printf("\n");

  for (int k = 0; k < HOUR; k++) {
    printf(" - Time: %s:30, Price: %.2f, Profit: %.2f\n", allstocks.date[slct-1][k], allstocks.price[slct-1][k], allstocks.exch[slct-1][k]);
    sleep(1);
  }

  return 0;
}

//https://finance.yahoo.com/quote/meta/history/
