#include "fileA.h"

int simpleDivision(int a, int b) {
  if (b == 0)
    return -1;

  if ((a < 0) || (b < 0))
    return -2;

  return a/b;
}

