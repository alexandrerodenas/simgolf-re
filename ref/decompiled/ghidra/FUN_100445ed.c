/* Ghidra decompiled: sound.dll */
/* Function: FUN_100445ed @ 0x100445ED */
/* Body size: 85 addresses */


char * __cdecl FUN_100445ed(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10049efe((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10049e87(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10044642(param_2,param_3,&local_14,'\0');
  return param_2;
}

