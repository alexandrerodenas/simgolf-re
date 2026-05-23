/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006bca0 @ 0x1006BCA0 */
/* Body size: 346 addresses */


void __cdecl FUN_1006bca0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [16];
  int local_48;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_88;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_1007f3a0(local_44,param_1,0x40);
  _memset(param_1,0,0x21c);
  FUN_1007f3a0(param_1,local_44,0x40);
  param_1[0x2c] = 0x2000;
  iVar1 = FUN_10078e60(param_1,param_1[0x2c]);
  param_1[0x2b] = iVar1;
  param_1[0x25] = (int)FUN_100786b0;
  param_1[0x26] = (int)FUN_10078750;
  param_1[0x27] = (int)param_1;
  local_48 = FUN_1009c0b0((int)(param_1 + 0x1d),"1.0.2",0x38);
  local_48 = local_48 + 6;
  switch(local_48) {
  case 0:
    FUN_10078fe0(param_1,"zlib version");
    break;
  default:
    FUN_10078fe0(param_1,"Unknown zlib error");
    break;
  case 2:
  case 4:
    FUN_10078fe0(param_1,"zlib memory");
    break;
  case 6:
  }
  param_1[0x20] = param_1[0x2b];
  param_1[0x21] = param_1[0x2c];
  FUN_10078cb0((int)param_1,0,0);
  uStack_8 = 0x1006bdf6;
  __chkesp();
  return;
}

