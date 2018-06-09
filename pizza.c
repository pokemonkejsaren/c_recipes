// pizzarecept
#include <stdio.h>

/*
  Utmärkt för juggepitsa på sten. undersida blir frasig men inte knaprig, kanterna likaså, och inte för fluffiga. osäker på hur förbättra?
*/

int main( int argc, char *argv[] )  {

  // ingredient list
  enum INGREDIENTS {FLOUR, WATER, OIL, SALT, YEAST};
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
  prop[WATER] = 0.59;
  prop[OIL] = 0.075;
  prop[YEAST] = 0.005;
  prop[SALT] = 0.02;

  // print
  printf("ingredients:\n");
  printf("flour\t%f\n", prop[FLOUR] * weight);
  printf("water\t%f\n", prop[WATER] * weight);
  printf("oil\t%f\n", prop[OIL] * weight);
  printf("yeast\t%f\n", prop[YEAST] * weight);
  printf("salt\t%f\n", prop[SALT] * weight);

  printf("\n");
  printf("instructions:\n");

  printf("\n");
  printf("dissolve yeast, add all, knead... KNEAD\n");
  printf("rise for at least 18 h fridge lmao\n");
  printf("form a pizza\n");
  printf("bake as hot as possible on stone lmao\n");

  return 0;
}
