/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009b890 @ 0x1009B890 */
/* Body size: 736 addresses */


undefined4 __cdecl FUN_1009b890(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_c;
  
  if (((param_1 == (uint *)0x0) ||
      (puVar1 = (uint *)FUN_1009bce0((byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  uVar5 = (uint)(*(byte *)((int)puVar1 + 1) == 0);
  if (DAT_10128770 == DAT_10128774) {
    DAT_10128770 = copy_environ(DAT_10128770);
  }
  if (DAT_10128770 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10128778 == (undefined4 *)0x0)) {
      if (uVar5 != 0) {
        return 0;
      }
      DAT_10128770 = (int *)__malloc_dbg(4,2,0x101207f0,0x87);
      if (DAT_10128770 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_10128770 = 0;
      if (DAT_10128778 == (undefined4 *)0x0) {
        DAT_10128778 = (undefined4 *)__malloc_dbg(4,2,0x101207f0,0x8e);
        if (DAT_10128778 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10128778 = 0;
      }
    }
    else {
      iVar2 = FUN_1009b390();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_10128770;
  local_c = findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((local_c < 0) || (*piVar3 == 0)) {
    if (uVar5 != 0) {
      return 0;
    }
    if (local_c < 0) {
      local_c = -local_c;
    }
    piVar3 = (int *)FID_conflict___realloc_dbg(piVar3,local_c * 4 + 8,2,0x101207f0,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[local_c] = (int)param_1;
    piVar3[local_c + 1] = 0;
    DAT_10128770 = piVar3;
  }
  else if (uVar5 == 0) {
    piVar3[local_c] = (int)param_1;
  }
  else {
    __free_dbg((void *)piVar3[local_c],2);
    for (; piVar3[local_c] != 0; local_c = local_c + 1) {
      piVar3[local_c] = piVar3[local_c + 1];
    }
    piVar3 = (int *)FID_conflict___realloc_dbg(piVar3,local_c << 2,2,0x101207f0,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_10128770 = piVar3;
    }
  }
  if (param_2 != 0) {
    uVar9 = 0xe5;
    pcVar8 = "setenv.c";
    uVar7 = 2;
    sVar4 = _strlen((char *)param_1);
    uVar5 = sVar4 + 2;
    puVar1 = (uint *)__malloc_dbg(uVar5,uVar7,(int)pcVar8,uVar9);
    if (puVar1 != (uint *)0x0) {
      iVar2 = 0x1009bb24;
      FUN_1007f760(puVar1,param_1);
      puVar6 = (undefined1 *)((int)puVar1 + (uVar5 - (int)param_1));
      *puVar6 = 0;
      SetEnvironmentVariableA((LPCSTR)puVar1,(LPCSTR)(~-(uint)(iVar2 != 0) & (uint)(puVar6 + 1)));
      __free_dbg(puVar1,2);
    }
  }
  return 0;
}

