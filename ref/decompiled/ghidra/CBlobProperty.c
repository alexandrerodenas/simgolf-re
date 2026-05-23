/* Ghidra decompiled: Terrain.dll */
/* Function: CBlobProperty @ 0x10033F60 */
/* Body size: 52 addresses */


/* Library Function - Single Match
    public: __thiscall CBlobProperty::CBlobProperty(void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

CBlobProperty * __thiscall CBlobProperty::CBlobProperty(CBlobProperty *this,void *param_1)

{
  FUN_10035f10((undefined4 *)this);
  *(undefined ***)this = &PTR_FUN_100612e0;
  *(undefined4 *)(this + 0x50) = 0;
  *(void **)(this + 0x4c) = param_1;
  return this;
}

