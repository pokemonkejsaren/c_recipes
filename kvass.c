// kvassrecept

/*
  blandade resultat. Citronen gör susen men fortfarande problem med jästfällning. Bra bubbel nu.
*/

#include <stdio.h>

int main( int argc, char *argv[] )  {

  // ingredient list
  enum INGREDIENTS {WATER, SUGAR, RAISINS_1, RAISINS_2, LEMON, BREAD, YEAST};
  int nbr_ingredients = YEAST + 1;

  // take number of eaters as input
  double nbr_eaters; // 0.001 * m^3
  sscanf(argv[1], "%lf", &nbr_eaters);

  // weights
  double base_weight = 1000; // large pizza
  double weight = base_weight * nbr_eaters;

  // proportions, WATER = 1;
  double prop[nbr_ingredients];

  prop[WATER] = 1;
  prop[YEAST] = 0.005;
  prop[SUGAR] = 0.067;
  prop[BREAD] = 0.002; // st
  prop[RAISINS_1] = 0.005; // st
  prop[RAISINS_2] = 0.005; // st
  prop[LEMON] = 0.001; // squeeze

  // print
  printf("ingredients:\n");
  printf("water\t%f\n", prop[WATER] * weight);
  printf("sugar\t%f\n", prop[SUGAR] * weight);
  printf("yeast\t%f\n", prop[YEAST] * weight);
  printf("bread loaves\t%f\n", prop[BREAD] * weight);
  printf("raisins 1\t%f\n", prop[RAISINS_1] * weight);
  printf("raisins 2\t%f\n", prop[RAISINS_2] * weight);
  printf("lemonsqueezes\t%f\n", prop[LEMON] * weight);

  printf("\n");
  printf("instructions:\n");

  printf("\n");
  printf("toast bread hard\n");
  printf("put in boiling water with raisins 1\n");
  printf("leave off heat for like 10 h\n");
  printf("remove bread and raisins 1\n");
  printf("add sugar, yeast, lemon and raisins 2\n");
  printf("put in suitable container\n");
  printf("to start fermentation, perhaps put in hot place for like 30 min\n");
  printf("leave for like a week or so (remember to keep an eye on teh pressure lmao)\n");
  printf("remove raisins 2 and put in bottle\n");
  printf("to avoid yeast precipitation from the bottom, perhaps siphon the kvass is good idea\n");

  return 0;
}
