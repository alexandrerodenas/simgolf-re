/* Ghidra decompiled: Terrain.dll */
/* Function: __cfltcvt @ 0x10020A60 */


/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    pcVar1 = FUN_100205d0((undefined4 *)arg,buffer,format,precision);
  }
  else if (sizeInBytes == 0x66) {
    pcVar1 = FUN_100207c0((undefined4 *)arg,buffer,format);
  }
  else {
    pcVar1 = (char *)FUN_10020970((undefined4 *)arg,buffer,format,precision);
  }
  return (errno_t)pcVar1;
}

