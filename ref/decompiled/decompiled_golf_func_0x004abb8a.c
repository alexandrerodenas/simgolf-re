/**
 * func_004abb8a — Auto-décompilé
 * Adresse: 0x004abb8a [golf.exe]
 * Taille: 575 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: False
 * Appelle: 0x4abbe6, 0x4ad192, 0x4abca0
 * Constantes: 0x4abc34, 0x4abc2d, 0x4abc97, 0x4ad192, 0x4abca0, 0x4abbe6, 0x4abc4c, 0x4abc8e
 */
void func_004abb8a(void) {
    /* 115 instructions */

    // push ebp
    // mov ebp, esp
    // sub esp, 0x28
    // push esi
    // lea eax, [ebp + 8]
    // push edi
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abbe6)
    // pop ecx
    // lea eax, [ebp - 0x28]
    // pop ecx
    // lea esi, [ebp - 0xc]
    // push eax
    // push 0
    // push(0x11)
    // sub esp, 0xc
    // mov edi, esp
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsw word ptr es:[edi], word ptr [esi]
    // CALL(0x4ad192)
    // mov esi, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 0x14]
    // mov dword ptr [esi + 8], eax
    // movsx eax, byte ptr [ebp - 0x26]
    // mov dword ptr [esi], eax
    // movsx eax, word ptr [ebp - 0x28]
    // mov dword ptr [esi + 4], eax
    // lea eax, [ebp - 0x24]
    // push eax
    // push edi
    // CALL(0x4abca0)
    // add esp, 0x20
    // mov dword ptr [esi + 0xc], edi
    // mov eax, esi
    // pop edi
    // pop esi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // mov edx, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // mov ax, word ptr [edx + 6]
    // mov edi, 0x7ff
    // mov ecx, eax
    // and eax, 0x8000
    // shr ecx, 4
    // and ecx, edi
    // mov dword ptr [ebp + 0xc], eax
    // mov eax, dword ptr [edx + 4]
    // mov edx, dword ptr [edx]
    // movzx ebx, cx
    // mov esi, 0x80000000
    // and eax, 0xfffff
    // test ebx, ebx
    // mov dword ptr [ebp - 4], esi
    // if (...) GOTO(0x4abc34)
    // cmp ebx, edi
    // if (...) GOTO(0x4abc2d)
    // lea edi, [ecx + 0x3c00]
    // if (...) GOTO(0x4abc55)
    // mov edi, 0x7fff
    // if (...) GOTO(0x4abc55)
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4abc4c)
    // cmp edx, ebx
    // if (...) GOTO(0x4abc4c)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], ebx
    // mov word ptr [eax + 8], bx
    // if (...) GOTO(0x4abc97)
    // lea edi, [ecx + 0x3c01]
    // mov dword ptr [ebp - 4], ebx
    // mov ecx, edx
    // shr ecx, 0x15
    // shl eax, 0xb
    // or ecx, eax
    // mov eax, dword ptr [ebp + 8]
    // or ecx, dword ptr [ebp - 4]
    // shl edx, 0xb
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax], edx
    // test esi, ecx
    // if (...) GOTO(0x4abc8e)
    // mov edx, dword ptr [eax]
    // add ecx, ecx
    // mov ebx, edx
    // shr ebx, 0x1f
    // or ebx, ecx
    // lea ecx, [edx + edx]
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 4], ebx
    // add edi, 0xffff
    // mov ecx, ebx
    // if (...) GOTO(0x4abc6d)
    // mov ecx, dword ptr [ebp + 0xc]
    // or ecx, edi
    // mov word ptr [eax + 8], cx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
}