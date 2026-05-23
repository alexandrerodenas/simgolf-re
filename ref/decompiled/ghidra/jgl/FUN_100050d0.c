/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100050d0 @ 0x100050D0 */
/* Body size: 225 addresses */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_100050d0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  RECT *lprcSrc2;
  BOOL BVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RECT local_18;
  int *local_8;
  
  if (param_5 == 0) {
    return 0x10;
  }
  local_18.left = param_1;
  local_18.right = param_3;
  local_18.top = param_2;
  local_18.bottom = param_4;
  local_8 = this;
  lprcSrc2 = (RECT *)(**(code **)(*(int *)this + 0xcc))();
  BVar1 = IntersectRect(&local_18,&local_18,lprcSrc2);
  if (BVar1 != 0) {
    iVar6 = local_18.right - local_18.left;
    iVar5 = local_18.bottom - local_18.top;
    iVar2 = (**(code **)(*(int *)this + 0xe0))();
    pbVar3 = (byte *)(**(code **)(*(int *)this + 0xc))(local_18.left,local_18.top);
    iVar4 = iVar6;
    if (pbVar3 == (byte *)0x0) {
      return 7;
    }
    do {
      do {
        *pbVar3 = *(byte *)(param_5 + (uint)*pbVar3);
        pbVar3 = pbVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pbVar3 = pbVar3 + (iVar2 - iVar6);
      iVar5 = iVar5 + -1;
      iVar4 = iVar6;
    } while (iVar5 != 0);
    (**(code **)(*local_8 + 0x24))(1);
  }
  return 0;
}

