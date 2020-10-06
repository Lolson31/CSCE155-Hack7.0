/**
 * This is a main test driver program that allows you
 * to test your functions on an actual image visually
 * in an ad-hoc manner.
 */
#include <stdlib.h>
#include <stdio.h>

#include "imageUtils.h"

int main(int argc, char **argv) {

  int h, w;
  Pixel **image = loadImage("Parrot.jpg", &h, &w);

  copyImage(image, h, w);

  saveImage("copy.jpg", image, h, w);

  return 0;
}
