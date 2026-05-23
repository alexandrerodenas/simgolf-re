/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001050 @ 0x10001050 */
/* Body size: 278 addresses */


undefined4 __thiscall FUN_10001050(void *this,LPCSTR param_1,uint param_2,int param_3)

{
  HANDLE pvVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  FUN_10001170((int)this);
  *(uint *)((int)this + 0x10) = param_2;
  pvVar1 = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,
                       (DWORD)(&DAT_10000080.field_0x0 + (-(uint)(param_3 != 0) & 0xf8000000)),
                       (HANDLE)0x0);
  *(HANDLE *)((int)this + 8) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    GetLastError();
    return 0;
  }
  DVar2 = SetFilePointer(pvVar1,param_2,(PLONG)0x0,0);
  if (DVar2 == 0xffffffff) {
    FUN_10001170((int)this);
    return 0;
  }
  SetEndOfFile(*(HANDLE *)((int)this + 8));
  DVar2 = SetFilePointer(*(HANDLE *)((int)this + 8),0,(PLONG)0x0,0);
  if (DVar2 == 0xffffffff) {
    FUN_10001170((int)this);
    return 0;
  }
  pvVar1 = CreateFileMappingA(*(HANDLE *)((int)this + 8),(LPSECURITY_ATTRIBUTES)0x0,4,0,0,
                              (LPCSTR)0x0);
  *(HANDLE *)((int)this + 0xc) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_10001170((int)this);
    return 0;
  }
  puVar3 = MapViewOfFile(pvVar1,0xf001f,0,0,0);
  *(undefined4 **)((int)this + 4) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    FUN_10001170((int)this);
    return 0;
  }
  for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return *(undefined4 *)((int)this + 4);
}

