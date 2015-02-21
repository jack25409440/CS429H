/* Testing Code */

#include <limits.h>
#include <math.h>

/* Routines used by floation point test code */

/* Convert from bit level representation to floating point number */
float u2f(unsigned u) {
  union {
    unsigned u;
    float f;
  } a;
  a.u = u;
  return a.f;
}

/* Convert from floating point number to bit-level representation */
unsigned f2u(float f) {
  union {
    unsigned u;
    float f;
  } a;
  a.f = f;
  return a.u;
}

int test_bitXor(int x, int y)
{
  return x^y;
}
int test_isTmax(int x) {
    return x == 0x7FFFFFFF;
}
int test_isLessOrEqual(int x, int y)
{
  return x <= y;
}
int test_rempwr2(int x, int n)
{
    int p2n = 1<<n;
    return x%p2n;
}
int test_subOK(int x, int y)
{
  long long ldiff = (long long) x - y;
  return ldiff == (int) ldiff;
}
int test_isAsciiDigit(int x) {
  return (0x30 <= x) && (x <= 0x39);
}






int test_reverseBytes(int x)
{
    unsigned char byte0 = (x >> 0);
    unsigned char byte1 = (x >> 8);
    unsigned char byte2 = (x >> 16);
    unsigned char byte3 = (x >> 24);
    unsigned result = (byte0<<24)|(byte1<<16)|(byte2<<8)|(byte3<<0);
    return result;
}
int test_ezThreeFourths(int x)
{
  return (x*3)/4;
}
int test_trueThreeFourths(int x)
{
  return (int) (((long long int) x * 3)/4);
}
int test_bitParity(int x) {
  int result = 0;
  int i;
  for (i = 0; i < 32; i++)
    result ^= (x >> i) & 0x1;
  return result;
}
int test_tc2sm(int x) {
  int sign = x < 0;
  int mag = x < 0 ? -x : x;
  return (sign << 31) | mag;
}

int test_isPower2(int x) {
  int i;
  for (i = 0; i < 31; i++) {
    if (x == 1<<i)
      return 1;
  }
  return 0;
}
unsigned test_float_neg(unsigned uf) {
    float f = u2f(uf);
    float nf = -f;
    if (isnan(f))
 return uf;
    else
 return f2u(nf);
}
unsigned test_float_i2f(int x) {
  float f = (float) x;
  return f2u(f);
}
