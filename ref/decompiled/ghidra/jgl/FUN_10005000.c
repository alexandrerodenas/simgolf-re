/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10005000 @ 0x10005000 */


undefined4 __thiscall
FUN_10005000(void *this,int param_1,int param_2,int param_3,int param_4,char param_5,char param_6)

{
  int iVar1;
  RECT *lprcSrc1;
  BOOL BVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RECT local_18;
  int *local_8;
  
  local_18.left = param_1;
  local_18.right = param_1 + param_3;
  local_18.top = param_2;
  local_18.bottom = param_2 + param_4;
  local_8 = this;
  lprcSrc1 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar2 = IntersectRect(&local_18,lprcSrc1,&local_18);
  if (BVar2 != 0) {
    pcVar3 = (char *)(**(code **)(*(int *)this + 0x14))(local_18.left,local_18.top);
    if (pcVar3 == (char *)0x0) {
      return 7;
    }
    iVar1 = *(int *)((int)this + 0x40);
    iVar4 = local_18.right - local_18.left;
    iVar5 = local_18.bottom - local_18.top;
    iVar6 = iVar4;
    do {
      do {
        if (*pcVar3 == param_5) {
          *pcVar3 = param_6;
        }
        pcVar3 = pcVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pcVar3 = pcVar3 + (iVar1 - iVar4);
      iVar5 = iVar5 + -1;
      iVar6 = iVar4;
    } while (iVar5 != 0);
    (**(code **)(*local_8 + 0x24))(1);
  }
  return 0;
}

