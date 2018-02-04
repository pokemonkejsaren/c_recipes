// no knead baguette

/*
  helt fantastisk bra. något vattnig i smaken men osäker på vad som ska ändras.
*/

#include <stdio.h>

int main( int argc, char *argv[] )  {

  // ingredient list
  enum INGREDIENTS {FLOUR, WATER, SALT, YEAST};
  int nbr_ingredients = YEAST + 1;

  // take number of eaters as input
  double nbr_eaters;
  sscanf(argv[1], "%lf", &nbr_eaters);

  // weights
  double base_weight = 255; // one baguette
  double weight = base_weight * nbr_eaters;

  // proportions
  double prop[nbr_ingredients];

  prop[FLOUR] = 1.0;
  prop[WATER] = 0.637;
  prop[YEAST] = 0.041;
  prop[SALT] = 0.020;

  // print
  printf("ingredients:\n");
  printf("flour\t%f\n", prop[FLOUR] * weight);
  printf("water\t%f\n", prop[WATER] * weight);
  printf("yeast\t%f\n", prop[YEAST] * weight);
  printf("salt\t%f\n", prop[SALT] * weight);

  printf("\n");
  printf("instructions:\n");

  printf("\n");
  printf("Dissolve yeast\n");
  printf("Mix all\n");
  printf("Stir until it lets go of bunke (smidig)\n");
  printf("rise for at least 12 h room temp lmao\n");
  printf("cut and form some baguettes on floured surface\n");
  printf("rise for 1.5 h room temp lmao\n");
  printf("cut in baguettes diagonally (preferably with sharp thing)\n");
  printf("spray or brush with water at 0, 5 and 10 min while baking\n");
  printf("bake 275 - 300 C 15 min total\n");

  return 0;
}
