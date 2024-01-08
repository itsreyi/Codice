#include<stdio.h>
#include<stdlib.h>

float valoreAssoluto(float x)
{
  if (x < 0)
  {
    x * -1;
  }

  return x;
}

float radice(float a)
{
  float x = 1.0;
  while (valoreAssoluto(x * x - a) > 1e-5)
    x = (x + a / x) / 2.0;
  return x;
}