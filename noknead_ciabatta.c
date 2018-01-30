// no knead ciabatta
#include <stdio.h>

int main( int argc, char *argv[] )  {

  // ingredient list
  enum INGREDIENTS {FLOUR, WATER, SALT, YEAST};
  int nbr_ingredients = YEAST + 1;

  // take number of eaters as input
  double nbr_eaters;
  sscanf(argv[1], "%lf", &nbr_eaters);

  // weights
  double base_weight = 136; // one bread
  double weight = base_weight * nbr_eaters;

  // proportions
  double prop[nbr_ingredients];

  prop[FLOUR] = 1.0;
  prop[WATER] = 0.870;
  prop[YEAST] = 0.037;
  prop[SALT] = 0.016;

  // print
  printf("ingredients:\n");
  printf("flour\t%f\n", prop[FLOUR] * weight);
  printf("water\t%f\n", prop[WATER] * weight);
  printf("yeast\t%f\n", prop[YEAST] * weight);
  printf("salt\t%f\n", prop[SALT] * weight);

  printf("\n");
  printf("instructions:\n");

  printf("\n");
  printf("Mix all\n");
  printf("rise for at least 18 h room temp lmao\n");
  printf("carefully form a some loaves\n");
  printf("rise for 2 h room temp lmao\n");
  printf("bake 220 C 35-45 min\n");

  return 0;
}
