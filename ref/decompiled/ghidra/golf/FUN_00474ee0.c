/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474ee0 @ 0x00474EE0 */
/* Body size: 361 addresses */


void * FUN_00474ee0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  size_t _Size;
  short local_10 [5];
  int local_6;
  
  iVar1 = FUN_004a614d(param_1,&DAT_004c84f0);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  iVar2 = FUN_004a63a1(local_10,0xe,1,iVar1);
  if (iVar2 == 0) {
    FUN_004a609f(iVar1);
    return (void *)0x0;
  }
  if (local_10[0] != 0x4d42) {
    FUN_004a609f(iVar1);
    return (void *)0x0;
  }
  uVar5 = local_6 - 0xe;
  pvVar3 = _malloc(uVar5);
  *param_2 = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    FUN_004a609f();
    return (void *)0x0;
  }
  uVar4 = FUN_004a63a1(pvVar3,1,uVar5,iVar1);
  if (uVar4 < uVar5) {
    FUN_004a5007(*param_2);
    FUN_004a609f(iVar1);
    return (void *)0x0;
  }
  iVar2 = *param_2;
  _Size = *(size_t *)(iVar2 + 0x14);
  if (_Size == 0) {
    uVar5 = (int)*(uint *)(iVar2 + 8) >> 0x1f;
    _Size = ((*(uint *)(iVar2 + 8) ^ uVar5) - uVar5) * (uint)*(ushort *)(iVar2 + 0xe) *
            *(int *)(iVar2 + 4);
  }
  pvVar3 = _malloc(_Size);
  if (pvVar3 == (void *)0x0) {
    FUN_004a5007(*param_2);
    FUN_004a609f(iVar1);
    return (void *)0x0;
  }
  iVar2 = FUN_004a63a1(pvVar3,1,_Size,iVar1);
  if (iVar2 == 0) {
    FUN_004a5007(*param_2);
    FUN_004a5007(pvVar3);
    FUN_004a609f(iVar1);
    return (void *)0x0;
  }
  FUN_004a609f(iVar1);
  return pvVar3;
}

