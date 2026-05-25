/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006bac0 @ 0x1006BAC0 */


int * __cdecl FUN_1006bac0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  int *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = (int *)FUN_10078da0(1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    iVar1 = __setjmp3(local_8,0,unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      FUN_10079340((int)local_8,param_2,param_3,param_4);
      if (((param_1 == (char *)0x0) || (*param_1 != s_1_0_5_1012318c[0])) ||
         ((*param_1 == '0' && (param_1[2] < '9')))) {
        FUN_10078fe0(local_8,"Incompatible libpng version in application and library");
      }
      local_8[0x2c] = 0x2000;
      iVar1 = FUN_10078e60(local_8,local_8[0x2c]);
      local_8[0x2b] = iVar1;
      local_8[0x25] = (int)FUN_100786b0;
      local_8[0x26] = (int)FUN_10078750;
      local_8[0x27] = (int)local_8;
      local_c = FUN_1009c0b0((int)(local_8 + 0x1d),"1.0.2",0x38);
      local_c = local_c + 6;
      switch(local_c) {
      case 0:
        FUN_10078fe0(local_8,"zlib version error");
        break;
      default:
        FUN_10078fe0(local_8,"Unknown zlib error");
        break;
      case 2:
      case 4:
        FUN_10078fe0(local_8,"zlib memory error");
        break;
      case 6:
      }
      local_8[0x20] = local_8[0x2b];
      local_8[0x21] = local_8[0x2c];
      FUN_10078cb0((int)local_8,0,0);
    }
    else {
      FUN_10078ed0((int)local_8,(void *)local_8[0x2b]);
      FUN_10078e20(local_8);
      local_8 = (int *)0x0;
    }
  }
  return local_8;
}

