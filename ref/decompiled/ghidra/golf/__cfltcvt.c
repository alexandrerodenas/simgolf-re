/* Ghidra decompiled: golf.exe */
/* Function: __cfltcvt @ 0x004A78D7 */


/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = FUN_004a7625(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = FUN_004a7748(arg,buffer,format);
      return eVar1;
    }
    eVar1 = FUN_004a7844(arg,buffer,format,precision);
  }
  return eVar1;
}

