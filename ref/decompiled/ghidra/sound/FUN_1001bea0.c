/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001bea0 @ 0x1001BEA0 */


int __thiscall FUN_1001bea0(void *this,byte param_1)

{
  thunk_FUN_1001b570((uint)this);
  if ((param_1 & 1) != 0) {
    FUN_1004249a((undefined *)((int)this + -0x2c));
  }
  return (int)this + -0x2c;
}

