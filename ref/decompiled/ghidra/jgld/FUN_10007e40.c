/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10007e40 @ 0x10007E40 */


void __thiscall FUN_10007e40(void *this,uint param_1,int param_2,int param_3)

{
  DWORD dwMessageId;
  int iVar1;
  va_list *unaff_EDI;
  undefined4 *puVar2;
  undefined1 *dwLanguageId;
  LPSTR lpBuffer;
  DWORD nSize;
  undefined4 local_44c [16];
  int local_40c;
  undefined1 local_408 [1024];
  int *local_8;
  
  puVar2 = local_44c;
  for (iVar1 = 0x112; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (((-1 < (int)param_1) && (-1 < param_2)) &&
     (((param_1 != *(uint *)((int)this + 0x38) || (param_2 != *(int *)((int)this + 0x3c))) ||
      ((*(int *)((int)this + 0x24) != param_3 && (param_3 != 0)))))) {
    local_8 = this;
    (**(code **)(*(int *)this + 8))();
    __chkesp();
    if (param_3 == 0) {
      (**(code **)(*DAT_10128420 + 0xb0))();
      iVar1 = __chkesp();
      local_8[9] = iVar1;
      if (local_8[9] == 0) {
        local_8[9] = 8;
      }
    }
    else {
      local_8[9] = param_3;
    }
    CreateCompatibleDC((HDC)0x0);
    iVar1 = __chkesp();
    local_8[0x12f] = iVar1;
    if (local_8[0x12f] != 0) {
      local_8[0x22] = param_1;
      local_8[0x23] = -param_2;
      *(short *)((int)local_8 + 0x92) = (short)local_8[9];
      local_8[0x29] = 0;
      CreateDIBSection((HDC)local_8[0x12f],(BITMAPINFO *)(local_8 + 0x21),0,
                       (void **)(local_8 + 0x130),(HANDLE)0x0,0);
      iVar1 = __chkesp();
      local_8[0x12d] = iVar1;
      if (local_8[0x12d] == 0) {
        nSize = 0;
        lpBuffer = (LPSTR)0x400;
        dwLanguageId = local_408;
        GetLastError();
        dwMessageId = __chkesp();
        FormatMessageA(0x1200,(LPCVOID)0x0,dwMessageId,(DWORD)dwLanguageId,lpBuffer,nSize,unaff_EDI)
        ;
        __chkesp();
        MessageBoxA((HWND)0x0,"Unable to allocate draw-buffer; terminating program.","FATAL ERROR",
                    0x30);
        __chkesp();
        FUN_1007f1a0(4);
      }
      SelectObject((HDC)local_8[0x12f],(HGDIOBJ)local_8[0x12d]);
      iVar1 = __chkesp();
      local_8[300] = iVar1;
      local_40c = local_8[9] + -8;
      switch(local_8[9]) {
      case 8:
        local_8[0x10] = ((int)(param_1 + 3) >> 2) << 2;
        break;
      default:
        goto LAB_1000820b;
      case 0x10:
        local_8[0x10] = ((int)(param_1 + 1) >> 1) << 1;
        break;
      case 0x18:
        local_8[0x10] = param_1 + (param_1 & 1);
        break;
      case 0x20:
        local_8[0x10] = param_1;
      }
      local_8[0xe] = param_1;
      local_8[0xf] = param_2;
      local_8[10] = 0;
      if (local_8[10] == 0) {
        *(undefined2 *)(local_8 + 0xb) = 10;
        *(undefined2 *)((int)local_8 + 0x2e) = 5;
        *(undefined2 *)(local_8 + 0xc) = 0;
        *(undefined2 *)((int)local_8 + 0x36) = 0x1f;
        *(ushort *)(local_8 + 0xd) = *(ushort *)((int)local_8 + 0x36) ^ 0x3ff;
        *(ushort *)((int)local_8 + 0x32) =
             (*(ushort *)((int)local_8 + 0x36) | *(ushort *)(local_8 + 0xd)) ^ 0x7fff;
      }
      else {
        *(undefined2 *)(local_8 + 0xb) = 0xb;
        *(undefined2 *)((int)local_8 + 0x2e) = 6;
        *(undefined2 *)(local_8 + 0xc) = 0;
        *(undefined2 *)((int)local_8 + 0x36) = 0x1f;
        *(ushort *)(local_8 + 0xd) = *(ushort *)((int)local_8 + 0x36) ^ 0x7ff;
        *(ushort *)((int)local_8 + 0x32) =
             (*(ushort *)((int)local_8 + 0x36) | *(ushort *)(local_8 + 0xd)) ^ 0xffff;
      }
      SetBkMode((HDC)local_8[0x12f],1);
      __chkesp();
      SetTextAlign((HDC)local_8[0x12f],0x18);
      __chkesp();
      thunk_FUN_10008360(local_8 + 0x15,0,0,param_1,param_2);
      (**(code **)(*local_8 + 0x34))(local_8 + 0x15);
      __chkesp();
    }
  }
LAB_1000820b:
  local_8 = (int *)0x1000821b;
  __chkesp();
  return;
}

