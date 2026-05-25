/* Ghidra decompiled: binkw32.dll */
/* Function: radmalloc @ 0x30001020 */


/* __stdcall radmalloc,4 */

int radmalloc(uint param_1)

{
  void *pvVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  
                    /* 0x1020  81  _radmalloc@4 */
  if ((param_1 == 0) || (param_1 == 0xffffffff)) {
LAB_3000108f:
    iVar2 = 0;
  }
  else {
    if (DAT_30041418 == (code *)0x0) {
LAB_3000104a:
      pvVar1 = _malloc(param_1 + 0x40);
      if (pvVar1 == (void *)0x0) goto LAB_3000108f;
      cVar4 = '\0';
    }
    else {
      pvVar1 = (void *)(*DAT_30041418)(param_1 + 0x40);
      if (pvVar1 == (void *)0x0) goto LAB_3000104a;
      if (pvVar1 == (void *)0xffffffff) goto LAB_3000108f;
      cVar4 = '\x03';
    }
    bVar3 = 0x40 - ((byte)pvVar1 & 0x1f);
    param_1 = (uint)bVar3;
    iVar2 = (int)pvVar1 + param_1;
    *(byte *)(iVar2 + -1) = bVar3;
    *(char *)(iVar2 + -2) = cVar4;
    if (cVar4 == '\x03') {
      *(undefined4 *)(iVar2 + -8) = DAT_3004141c;
      return iVar2;
    }
  }
  return iVar2;
}

