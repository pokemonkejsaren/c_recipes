// ciabattarecept

/*
  otroligt bra men åxå jobbig att laga, särskilt utan maskin. Kanske öka saltmängd?
*/

#include <stdio.h>

int main( int argc, char *argv[] )  {

  // ingredient list
  enum INGREDIENTS {B_FLOUR, B_WATER, B_YEAST, FLOUR, WATER, SALT, YEAST};
  int nbr_ingredients = YEAST + 1;

  // take number of eaters as input
  double nbr_eaters; // or rather breads
  sscanf(argv[1], "%lf", &nbr_eaters);

  // weights
  double biga_base_weight = 8.88; // for teh biga
  double biga_weight = biga_base_weight * nbr_eaters;

  double base_weight = 36; // for the breads
  double weight = base_weight * nbr_eaters;

  // proportions
  double prop[nbr_ingredients];

  prop[B_FLOUR] = 1;
  prop[B_WATER] = 0.80;
  prop[B_YEAST] = 0.07;

  prop[FLOUR] = 1.0;
  prop[WATER] = 0.837;
  prop[YEAST] = 0.035;
  prop[SALT] = 0.021;

  // print ingredients
  printf("ingredients:\n");
  printf("biga:\n");
  printf("flour\t%f\n", prop[B_FLOUR] * biga_weight);
  printf("water\t%f\n", prop[B_WATER] * biga_weight);
  printf("yeast\t%f\n", prop[B_YEAST] * biga_weight);

  printf("\n");
  printf("bread:\n");
  printf("flour\t%f\n", prop[FLOUR] * weight);
  printf("water\t%f\n", prop[WATER] * weight);
  printf("yeast\t%f\n", prop[YEAST] * weight);
  printf("salt\t%f\n", prop[SALT] * weight);

  printf("\n");
  printf("instructions:\n");

  printf("\n");
  printf("start with biga\n");
  printf("dissolve yeast in water, add flour, stirr for 1-2 min\n");
  printf("let rise overnight, at least 8h lmao\n");

  printf("\n");
  printf("continue with bread\n");
  printf("dissolve yeast in water, add biga and stir some\n");
  printf("add salt and flour and let rest for 20 min lmao\n");
  printf("knead a lot (at least 18 min in machine), will not be as smooth as usual doughs\n");
  printf("rise for 3 hours, should increase a lot in size #gainz\n");
  printf("bake 250 C for like 20-30 min, on stone if you have one lmao\n");

  return 0;
}
