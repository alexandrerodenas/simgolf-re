/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003d5c0 @ 0x1003D5C0 */


int * __cdecl FUN_1003d5c0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  char *pcVar5;
  
  piVar1 = FUN_10042c60(1);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = __setjmp3(piVar1,0,unaff_ESI,piVar1);
  if (iVar2 != 0) {
    FUN_10042d00((int)piVar1,(LPVOID)piVar1[0x2b]);
    FUN_10042cb0(piVar1);
    return (int *)0x0;
  }
  FUN_10042f30((int)piVar1,param_2,param_3,param_4);
  if (((param_1 == (char *)0x0) || (*param_1 != s_1_0_5_10055728[0])) ||
     ((*param_1 == '0' && (param_1[2] < '9')))) {
    FUN_10042d90(piVar1,s_Incompatible_libpng_version_in_a_10055238);
  }
  piVar1[0x2c] = 0x2000;
  pvVar3 = FUN_10042cc0(piVar1,0x2000);
  piVar1[0x2b] = (int)pvVar3;
  piVar1[0x25] = (int)FUN_10042980;
  piVar1[0x26] = (int)FUN_100429f0;
  piVar1[0x27] = (int)piVar1;
  uVar4 = FUN_1004fa60((int)(piVar1 + 0x1d),s_1_0_2_10055230,0x38);
  switch(uVar4) {
  case 0:
    goto switchD_1003d69e_caseD_0;
  case 0xfffffffa:
    pcVar5 = s_zlib_version_error_10055208;
    break;
  default:
    pcVar5 = s_Unknown_zlib_error_100551f4;
    break;
  case 0xfffffffc:
  case 0xfffffffe:
    pcVar5 = s_zlib_memory_error_1005521c;
  }
  FUN_10042d90(piVar1,pcVar5);
switchD_1003d69e_caseD_0:
  piVar1[0x20] = piVar1[0x2b];
  piVar1[0x21] = piVar1[0x2c];
  FUN_10042bc0((int)piVar1,0,0);
  return piVar1;
}

