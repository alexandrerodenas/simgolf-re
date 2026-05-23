/**
 * func_004aa6c0 — Auto-décompilé
 * Adresse: 0x004aa6c0 [golf.exe]
 * Taille: 1150 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: False
 * Constantes: 0x4aa6e0, 0x2922f47, 0x4aa8a4, 0x4aa714, 0x4aa88c, 0x4aa71c, 0x4aa858, 0x4aa6fc
 */
void func_004aa6c0(void) {
    /* 230 instructions */

    // push ebp
    // mov ebp, esp
    // push edi
    // push esi
    // mov esi, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 8]
    // mov eax, ecx
    // mov edx, ecx
    // add eax, esi
    // cmp edi, esi
    // jbe 0x4aa6e0
    // cmp edi, eax
    // if (...) GOTO(0x4aa858)
    // test edi, 3
    // if (...) GOTO(0x4aa6fc)
    // shr ecx, 2
    // and edx, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // mov eax, edi
    // mov edx, 3
    // sub ecx, 4
    // if (...) GOTO(0x4aa714)
    // and eax, 3
    // add ecx, eax
    // if (...) GOTO(dword)
    // if (...) GOTO(dword)
    // // nop
    // if (...) GOTO(dword)
    // // nop
    // xor byte ptr [edi - 0x58a3ffb6], ah
    // dec edx
    // add byte ptr [eax + 0x23004aa7], al
    // ror dword ptr [edx - 0x75f877fa], 1
    // inc esi
    // add dword ptr [eax + 0x468a0147], ecx
    // add al, cl
    // if (...) GOTO(0x2922f47)
    // add esi, 3
    // add edi, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // and edx, ecx
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov al, byte ptr [esi + 1]
    // shr ecx, 2
    // mov byte ptr [edi + 1], al
    // add esi, 2
    // add edi, 2
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // // nop
    // and edx, ecx
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // inc esi
    // shr ecx, 2
    // inc edi
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // if (...) GOTO(dword)
    // dec edx
    // add ah, ah
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, bl
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, dl
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, cl
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, al
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add byte ptr [edi + 0x448b004a], bh
    // mov fs, esp
    // mov dword ptr [edi + ecx*4 - 0x1c], eax
    // mov eax, dword ptr [esi + ecx*4 - 0x18]
    // mov dword ptr [edi + ecx*4 - 0x18], eax
    // mov eax, dword ptr [esi + ecx*4 - 0x14]
    // mov dword ptr [edi + ecx*4 - 0x14], eax
    // mov eax, dword ptr [esi + ecx*4 - 0x10]
    // mov dword ptr [edi + ecx*4 - 0x10], eax
    // mov eax, dword ptr [esi + ecx*4 - 0xc]
    // mov dword ptr [edi + ecx*4 - 0xc], eax
    // mov eax, dword ptr [esi + ecx*4 - 8]
    // mov dword ptr [edi + ecx*4 - 8], eax
    // mov eax, dword ptr [esi + ecx*4 - 4]
    // mov dword ptr [edi + ecx*4 - 4], eax
    // lea eax, [ecx*4]
    // add esi, eax
    // add edi, eax
    // if (...) GOTO(dword)
    // mov edi, edi
    // sbb byte ptr [eax - 0x57dfffb6], ch
    // dec edx
    // add byte ptr [eax + ebp*4], ch
    // dec edx
    // add byte ptr [eax - 0x58], al
    // dec edx
    // add byte ptr [ebx + 0x5f5e0845], cl
    // leave 
    // return;
    // // nop
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // pop edi
    // leave 
    // return;
    // // nop
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov al, byte ptr [esi + 1]
    // mov byte ptr [edi + 1], al
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // pop edi
    // leave 
    // return;
    // lea ecx, [ecx]
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov al, byte ptr [esi + 1]
    // mov byte ptr [edi + 1], al
    // mov al, byte ptr [esi + 2]
    // mov byte ptr [edi + 2], al
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // pop edi
    // leave 
    // return;
    // // nop
    // lea esi, [ecx + esi - 4]
    // lea edi, [ecx + edi - 4]
    // test edi, 3
    // if (...) GOTO(0x4aa88c)
    // shr ecx, 2
    // and edx, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa880)
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // mov edi, edi
    // neg ecx
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // mov eax, edi
    // mov edx, 3
    // cmp ecx, 4
    // if (...) GOTO(0x4aa8a4)
    // and eax, 3
    // sub ecx, eax
    // if (...) GOTO(dword)
    // if (...) GOTO(dword)
    // // nop
    // mov eax, 0xd8004aa8
    // test al, 0x4a
    // add byte ptr [eax], al
    // test eax, 0x468a004a
    // add esp, dword ptr [ebx]
    // ror dword ptr [eax - 0x3eb1fcb9], 1
    // if (...) GOTO(0xf9cdf7c9)
    // or byte ptr [edx - 0x4a], dh
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // mov al, byte ptr [esi + 3]
    // and edx, ecx
    // mov byte ptr [edi + 3], al
    // mov al, byte ptr [esi + 2]
    // shr ecx, 2
    // mov byte ptr [edi + 2], al
    // sub esi, 2
    // sub edi, 2
    // cmp ecx, 8
    // if (...) GOTO(0x4aa880)
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // // nop
    // mov al, byte ptr [esi + 3]
    // and edx, ecx
    // mov byte ptr [edi + 3], al
    // mov al, byte ptr [esi + 2]
    // mov byte ptr [edi + 2], al
    // mov al, byte ptr [esi + 1]
    // shr ecx, 2
    // mov byte ptr [edi + 1], al
    // sub esi, 3
    // sub edi, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa880)
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // push esp
    // test eax, 0xa95c004a
    // dec edx
    // add byte ptr [ecx + ebp*4 + 0x4a], ah
    // add byte ptr [ecx + ebp*4 + 0x4a], ch
    // add byte ptr [ecx + ebp*4 + 0x4a], dh
    // add byte ptr [ecx + ebp*4 + 0x4a], bh
    // add byte ptr [ecx + ebp*4 - 0x5668ffb6], al
    // dec edx
    // add byte ptr [ebx - 0x76e371bc], cl
    // inc esp
}