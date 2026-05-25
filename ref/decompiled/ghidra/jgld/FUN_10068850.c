/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068850 @ 0x10068850 */


void __thiscall FUN_10068850(void *this,uint *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  HGDIOBJ h;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_bc [16];
  tagTEXTMETRICA local_7c;
  LOGFONTA local_44;
  void *local_8;
  
  puVar3 = local_bc;
  for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 != (uint *)0x0) {
    local_8 = this;
    if ((*(uint *)((int)this + 0x14) & 1) == 0) {
      (**(code **)(*(int *)this + 0xc))();
      __chkesp();
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 4) + 0xc) = 0;
      *(undefined4 *)(*(int *)((int)this + 4) + 8) = 0;
      *(undefined4 *)(*(int *)((int)this + 4) + 0x14) = 0;
      *(undefined4 *)(*(int *)((int)this + 4) + 0x18) = 0;
      if (*(int *)((int)this + 0x18) != 0) {
        DeleteObject(*(HGDIOBJ *)((int)this + 0x18));
        __chkesp();
        *(undefined4 *)((int)local_8 + 0x18) = 0;
      }
    }
    local_44.lfHeight = -param_2;
    local_44.lfWidth = 0;
    local_44.lfEscapement = 0;
    local_44.lfOrientation = 0;
    local_44.lfWeight = -(uint)((param_3 & 1) != 0) & 700;
    local_44.lfItalic = (param_3 & 2) != 0;
    local_44.lfUnderline = (param_3 & 4) != 0;
    local_44.lfStrikeOut = '\0';
    local_44.lfCharSet = '\0';
    local_44.lfOutPrecision = '\a';
    local_44.lfClipPrecision = '\0';
    local_44.lfQuality = '\0';
    local_44.lfPitchAndFamily = '\0';
    FUN_1007f760((uint *)local_44.lfFaceName,param_1);
    CreateFontIndirectA(&local_44);
    uVar1 = __chkesp();
    *(undefined4 *)((int)local_8 + 0x18) = uVar1;
    if (*(int *)((int)local_8 + 0x18) != 0) {
      SelectObject(DAT_10128724,*(HGDIOBJ *)((int)local_8 + 0x18));
      __chkesp();
      GetTextMetricsA(DAT_10128724,&local_7c);
      __chkesp();
      *(LONG *)(*(int *)((int)local_8 + 4) + 8) = local_7c.tmHeight + local_7c.tmExternalLeading;
      *(LONG *)(*(int *)((int)local_8 + 4) + 0xc) = local_7c.tmAscent - local_7c.tmInternalLeading;
      *(LONG *)(*(int *)((int)local_8 + 4) + 0x10) = local_7c.tmInternalLeading;
      *(LONG *)(*(int *)((int)local_8 + 4) + 0x14) = local_7c.tmAscent;
      *(LONG *)(*(int *)((int)local_8 + 4) + 0x18) = local_7c.tmDescent;
      GetStockObject(0xd);
      h = (HGDIOBJ)__chkesp();
      SelectObject(DAT_10128724,h);
      __chkesp();
    }
  }
  local_8 = (void *)0x10068a56;
  __chkesp();
  return;
}

