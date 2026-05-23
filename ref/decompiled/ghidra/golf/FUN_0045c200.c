/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045c200 @ 0x0045C200 */
/* Body size: 532 addresses */


void FUN_0045c200(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  sVar2 = (&DAT_0057956e)[param_1 * 0x80];
  cVar1 = (&DAT_004d60aa)[sVar2 * 0x230];
  if (param_4 == 0) {
    FUN_00478af0(param_2 + 4,param_3,0x50,0x60,0x80007fff);
  }
  FUN_00462020(param_1);
  puVar3 = PTR_DAT_004c1570;
  if (param_4 != 1) {
    if (cVar1 < '\x14') {
      FUN_0046c940(param_1);
      FUN_004675d0(param_1);
      FUN_00473cb0(puVar3,param_2,param_3,1,1,1,0);
      return;
    }
    FUN_0046c940(param_1);
    FUN_004675d0(param_1);
    FUN_00473cb0(puVar3,param_2,param_3,1,1,1,0);
    return;
  }
  if ((*(byte *)(&DAT_004d60b4 + sVar2 * 0x8c) & 8) != 0) {
    FUN_00473e60(PTR_DAT_004c1570,param_2 + 0x10,param_3 + 0x4c,0);
  }
  FUN_00462020(param_1);
  puVar6 = &DAT_0081ca10;
  iVar4 = param_2 + 0x13;
  iVar5 = param_3 + 0x4c;
  puVar3 = PTR_DAT_004c1570;
  FUN_0046c940(param_1,PTR_DAT_004c1570,iVar4,iVar5,&DAT_0081ca10);
  FUN_00473e60(puVar3,iVar4,iVar5,puVar6);
  puVar3 = PTR_DAT_004c1570;
  if (cVar1 < '\x14') {
    FUN_0046c940(param_1);
    FUN_004675d0(param_1);
    FUN_00473cb0(puVar3,param_2,param_3 + -0x14,1,1,1,0);
    return;
  }
  FUN_0046c940(param_1);
  FUN_004675d0(param_1);
  FUN_00473cb0(puVar3,param_2 + -0x14,param_3 + -0x14,1,1,1,0);
  return;
}

