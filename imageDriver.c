/**
 * This is a main test driver program that allows you
 * to test your functions on an actual image visually
 * in an ad-hoc manner.
 */
#include <stdlib.h>
#include <stdio.h>

#include "imageUtils.h"

int main(int argc, char **argv)
{

  int h, w;
  Pixel **image = loadImage ("Parrot.jpg", &h, &w);

  Pixel **copiedImage = copyImage (image, h, w);
  saveImage ("copy.jpg", copiedImage, h, w);
/**
  Pixel **horizFlippedImage = flipHorizontal (image, h, w);
  flipHorizontal (image, h, w);
  saveImage ("horizFlip.jpg", h, w);

  Pixel **vertFlippedImage = flipVertical (image, h, w);
  flipVertical (image, h, w);
  saveImage ("vertFlip.jpg", flipVertical, h, w);
*/
  Pixel **rotatedImage = rotateClockwise(image, h, w);
  saveImage ("rotated.jpg", rotatedImage, h, w);

  return 0;
}
