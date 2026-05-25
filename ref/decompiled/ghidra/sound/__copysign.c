/* Ghidra decompiled: sound.dll */
/* Function: __copysign @ 0x1004DB1D */


/* Library Function - Single Match
    __copysign
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2019 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}

