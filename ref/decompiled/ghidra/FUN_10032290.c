/* Ghidra decompiled: sound.dll */
/* Function: FUN_10032290 @ 0x10032290 */
/* Body size: 291 addresses */


undefined4 __thiscall FUN_10032290(void *this,HPSTR param_1)

{
  int *piVar1;
  HPSTR this_00;
  int iVar2;
  LONG LVar3;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this_00 = param_1;
  if (param_1 == (HPSTR)0x0) {
    return 1;
  }
  if ((param_1[0x6c] & 8U) == 0) {
    return 0xb;
  }
  piVar1 = (int *)((int)this + 0x54);
  iVar2 = thunk_FUN_10012fe0(param_1,piVar1,(undefined4 *)((int)this + 0x180),0x100f4,
                             *(undefined4 *)((int)this + 0x178));
  if (iVar2 != 0) {
    return 0x11;
  }
  *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) | 0x10000000;
  iVar2 = thunk_FUN_100101a0((void *)*piVar1,0,*(undefined4 *)((int)this + 0x178),&param_1,&local_c,
                             &local_4,&local_8);
  if ((iVar2 == 0) && (local_c == *(int *)((int)this + 0x178))) {
    LVar3 = mmioRead(*(HMMIO *)this,param_1,local_c);
    if (LVar3 != local_c) {
      thunk_FUN_10010370((void *)*piVar1,param_1,local_c,local_4,local_8);
      thunk_FUN_100132e0(this_00,(undefined *)*piVar1);
      return 0x23;
    }
    thunk_FUN_10010370((void *)*piVar1,param_1,local_c,local_4,local_8);
    *(void **)(*piVar1 + 0x20) = this;
  }
  *(undefined4 *)((int)this + 0x220) = 0x5622;
  return 0;
}

