// no knead pizzarecept

/*
   inte så bra än. passar inte som #juggepitsa, utan snarare som mer brödig italiens pitsa med fluffiga kanter. måste ändras
*/

#include <stdio.h>

int main( int argc, char *argv[] )  {

  // ingredient list
  enum INGREDIENTS {FLOUR, WATER, OIL, SALT, SUGAR, YEAST};
  int nbr_ingredients = YEAST + 1;

  // take number of eaters as input
  double nbr_eaters;
  sscanf(argv[1], "%lf", &nbr_eaters);

  // weights
  double base_weight = 170; // large pizza
  double weight = base_weight * nbr_eaters;

  // proportions
  double prop[nbr_ingredients];

  prop[FLOUR] = 1.0;
  prop[WATER] = 0.744;
  prop[OIL] = 0.016;
  prop[SUGAR] = 0.003;
  prop[YEAST] = 0.012;
  prop[SALT] = 0.014;

  // print
  printf("ingredients:\n");
  printf("flour\t%f\n", prop[FLOUR] * weight);
  printf("water\t%f\n", prop[WATER] * weight);
  printf("oil\t%f\n", prop[OIL] * weight);
  printf("sugar\t%f\n", prop[SUGAR] * weight);
  printf("yeast\t%f\n", prop[YEAST] * weight);
  printf("salt\t%f\n", prop[SALT] * weight);

  printf("\n");
  printf("instructions:\n");

  printf("\n");
  printf("dissolve yeast, add all, knead until smidig\n");
  printf("rise for at least 12 h room temp lmao\n");
  printf("form a ball\n");
  printf("rise for 15 min\n");
  printf("form a pizza\n");
  printf("bake as hot as possible on stone lmao\n");

  return 0;
}
