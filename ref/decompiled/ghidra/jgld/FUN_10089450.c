/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10089450 @ 0x10089450 */


undefined4 FUN_10089450(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  DWORD DVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  char *local_123c;
  uint local_1238;
  int local_1234;
  CHAR local_1230 [260];
  CHAR local_112c [4240];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_14 [4];
  
  FUN_10089db0();
  local_9c = 0x94;
  BVar1 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar1 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_14[0] = -0x4b;
    aCStackY_14[1] = -0x6c;
    aCStackY_14[2] = '\b';
    aCStackY_14[3] = '\x10';
    DVar3 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_112c,0x1090);
    if (DVar3 != 0) {
      for (pcVar4 = local_112c; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
        if (('`' < *pcVar4) && (*pcVar4 < '{')) {
          *pcVar4 = *pcVar4 + -0x20;
        }
      }
      aCStackY_14[0] = '\x13';
      aCStackY_14[1] = -0x6b;
      aCStackY_14[2] = '\b';
      aCStackY_14[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_112c,0x16);
      if (iVar5 == 0) {
        local_123c = local_112c;
      }
      else {
        aCStackY_14[0] = '<';
        aCStackY_14[1] = -0x6b;
        aCStackY_14[2] = '\b';
        aCStackY_14[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1230,0x104);
        for (pcVar4 = local_1230; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
          if (('`' < *pcVar4) && (*pcVar4 < '{')) {
            *pcVar4 = *pcVar4 + -0x20;
          }
        }
        local_123c = _strstr(local_112c,local_1230);
      }
      if ((local_123c != (char *)0x0) && (pcVar4 = _strchr(local_123c,0x2c), pcVar4 != (char *)0x0))
      {
        pbVar6 = (byte *)(pcVar4 + 1);
        while (*pbVar6 != 0) {
          if (*pbVar6 == 0x3b) {
            *pbVar6 = 0;
          }
          else {
            pbVar6 = pbVar6 + 1;
          }
        }
        aCStackY_14[0] = '\x18';
        aCStackY_14[1] = -0x6a;
        aCStackY_14[2] = '\b';
        aCStackY_14[3] = '\x10';
        local_1234 = FUN_10090e80((byte *)(pcVar4 + 1),(undefined4 *)0x0,10);
        if (local_1234 == 2) {
          return 2;
        }
        if (local_1234 == 3) {
          return 3;
        }
        if (local_1234 == 1) {
          return 1;
        }
      }
    }
    FUN_100893f0(&local_1238);
    if ((local_1238 & 0xff) < 6) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

