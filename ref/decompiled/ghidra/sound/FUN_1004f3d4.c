/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f3d4 @ 0x1004F3D4 */


void __cdecl FUN_1004f3d4(byte *param_1)

{
  int iVar1;
  undefined *extraout_ECX;
  undefined4 uVar2;
  undefined *this;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    this = &DAT_1005fac0;
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 != 0) goto LAB_1004f430;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_100b57c0)(DAT_100b57bc,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
  this = extraout_ECX;
LAB_1004f430:
  FUN_10050d31(this,param_1);
  return;
}

