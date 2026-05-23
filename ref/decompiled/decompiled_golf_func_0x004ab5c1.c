/**
 * func_004ab5c1 — Auto-décompilé
 * Adresse: 0x004ab5c1 [golf.exe]
 * Taille: 3780 bytes, Type: std_prologue
 * Appel: __thiscall, Locals: 0B, SEH: False
 * Appelle: 0x4ab60c, 0x4ab69e, 0x4ab5c1, 0x4acb20, 0x4ab727, 0x4ab770, 0x4ab879, 0x4ab86d
 * Constantes: 0x4ab891, 0x4aba4f, 0x4ab916, 0x4ab717, 0x4ab719, 0x4aba36, 0x4abb5c, 0x4ab7a9
 */
void func_004ab5c1(void) {
    /* 756 instructions */

    // push ebp
    // mov ebp, esp
    // push ecx
    // push esi
    // wait 
    // fnstcw word ptr [ebp - 4]
    // push dword ptr [ebp - 4]
    // CALL(0x4ab60c)
    // mov esi, eax
    // mov eax, dword ptr [ebp + 0xc]
    // not eax
    // and esi, eax
    // mov eax, dword ptr [ebp + 8]
    // and eax, dword ptr [ebp + 0xc]
    // or esi, eax
    // push esi
    // CALL(0x4ab69e)
    // pop ecx
    // mov dword ptr [ebp + 0xc], eax
    // pop ecx
    // fldcw word ptr [ebp + 0xc]
    // mov eax, esi
    // pop esi
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // and eax, 0xfff7ffff
    // push eax
    // push dword ptr [esp + 8]
    // CALL(0x4ab5c1)
    // pop ecx
    // pop ecx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push ebp
    // test bl, 1
    // push edi
    // if (...) GOTO(0x4ab61d)
    // push(0x10)
    // pop eax
    // test bl, 4
    // if (...) GOTO(0x4ab624)
    // or al, 8
    // test bl, 8
    // if (...) GOTO(0x4ab62b)
    // or al, 4
    // test bl, 0x10
    // if (...) GOTO(0x4ab632)
    // or al, 2
    // test bl, 0x20
    // if (...) GOTO(0x4ab639)
    // or al, 1
    // test bl, 2
    // if (...) GOTO(0x4ab643)
    // or eax, 0x80000
    // movzx ecx, bx
    // push esi
    // mov edx, ecx
    // mov esi, 0xc00
    // mov edi, 0x300
    // and edx, esi
    // mov ebp, 0x200
    // if (...) GOTO(0x4ab67b)
    // cmp edx, 0x400
    // if (...) GOTO(0x4ab678)
    // cmp edx, 0x800
    // if (...) GOTO(0x4ab674)
    // cmp edx, esi
    // if (...) GOTO(0x4ab67b)
    // or eax, edi
    // if (...) GOTO(0x4ab67b)
    // or eax, ebp
    // if (...) GOTO(0x4ab67b)
    // or ah, 1
    // and ecx, edi
    // pop esi
    // if (...) GOTO(0x4ab68b)
    // cmp ecx, ebp
    // if (...) GOTO(0x4ab690)
    // or eax, 0x10000
    // if (...) GOTO(0x4ab690)
    // or eax, 0x20000
    // pop edi
    // pop ebp
    // test bh, 0x10
    // pop ebx
    // if (...) GOTO(0x4ab69d)
    // or eax, 0x40000
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push esi
    // test bl, 0x10
    // if (...) GOTO(0x4ab6ae)
    // push 1
    // pop eax
    // test bl, 8
    // if (...) GOTO(0x4ab6b5)
    // or al, 4
    // test bl, 4
    // if (...) GOTO(0x4ab6bc)
    // or al, 8
    // test bl, 2
    // if (...) GOTO(0x4ab6c3)
    // or al, 0x10
    // test bl, 1
    // if (...) GOTO(0x4ab6ca)
    // or al, 0x20
    // test ebx, 0x80000
    // if (...) GOTO(0x4ab6d4)
    // or al, 2
    // mov ecx, ebx
    // mov edx, 0x300
    // and ecx, edx
    // mov esi, 0x200
    // if (...) GOTO(0x4ab701)
    // cmp ecx, 0x100
    // if (...) GOTO(0x4ab6fe)
    // cmp ecx, esi
    // if (...) GOTO(0x4ab6f9)
    // cmp ecx, edx
    // if (...) GOTO(0x4ab701)
    // or ah, 0xc
    // if (...) GOTO(0x4ab701)
    // or ah, 8
    // if (...) GOTO(0x4ab701)
    // or ah, 4
    // mov ecx, ebx
    // and ecx, 0x30000
    // if (...) GOTO(0x4ab717)
    // cmp ecx, 0x10000
    // if (...) GOTO(0x4ab719)
    // or eax, esi
    // if (...) GOTO(0x4ab719)
    // or eax, edx
    // pop esi
    // test ebx, 0x40000
    // pop ebx
    // if (...) GOTO(0x4ab726)
    // or ah, 0x10
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push(0x20)
    // cdq 
    // pop ecx
    // idiv ecx
    // push(0x1f)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x10]
    // cdq 
    // idiv ecx
    // pop ecx
    // mov eax, dword ptr [esp + 8]
    // sub ecx, edx
    // or edx, 0xffffffff
    // shl edx, cl
    // not edx
    // test dword ptr [eax + esi*4], edx
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // cmp esi, 3
    // if (...) GOTO(0x4ab767)
    // lea eax, [eax + esi*4]
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // add eax, 4
    // cmp esi, 3
    // if (...) GOTO(0x4ab759)
    // push 1
    // pop eax
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov ebx, dword ptr [esp + 0x14]
    // cdq 
    // pop ecx
    // idiv ecx
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x14]
    // cdq 
    // idiv ecx
    // lea edi, [ebx + esi*4]
    // push edi
    // push(0x1f)
    // pop ecx
    // push 1
    // pop eax
    // sub ecx, edx
    // shl eax, cl
    // push eax
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // js 0x4ab7c2
    // lea edi, [ebx + esi*4]
    // test eax, eax
    // if (...) GOTO(0x4ab7c2)
    // push edi
    // push 1
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // sub edi, 4
    // test esi, esi
    // if (...) GOTO(0x4ab7a9)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // lea edi, [eax - 1]
    // push(0x20)
    // pop ecx
    // and dword ptr [ebp - 4], 0
    // lea ebx, [edi + 1]
    // push(0x20)
    // mov eax, ebx
    // pop esi
    // cdq 
    // idiv ecx
    // push(0x1f)
    // mov ecx, eax
    // mov eax, ebx
    // cdq 
    // idiv esi
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // push 1
    // mov dword ptr [ebp - 8], ecx
    // lea eax, [eax + ecx*4]
    // mov dword ptr [ebp + 0xc], eax
    // sub esi, edx
    // pop edx
    // mov ecx, esi
    // shl edx, cl
    // test dword ptr [eax], edx
    // if (...) GOTO(0x4ab82a)
    // inc ebx
    // push ebx
    // push dword ptr [ebp + 8]
    // CALL(0x4ab727)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab827)
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4ab770)
    // pop ecx
    // mov dword ptr [ebp - 4], eax
    // pop ecx
    // mov eax, dword ptr [ebp + 0xc]
    // or edx, 0xffffffff
    // mov ecx, esi
    // shl edx, cl
    // push 3
    // pop ecx
    // and dword ptr [eax], edx
    // mov eax, dword ptr [ebp - 8]
    // inc eax
    // cmp eax, ecx
    // if (...) GOTO(0x4ab84a)
    // mov edx, dword ptr [ebp + 8]
    // sub ecx, eax
    // lea edi, [edx + eax*4]
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // mov eax, dword ptr [ebp - 4]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // push 3
    // sub ecx, eax
    // pop edx
    // mov esi, dword ptr [eax]
    // mov dword ptr [ecx + eax], esi
    // add eax, 4
    // dec edx
    // if (...) GOTO(0x4ab860)
    // pop esi
    // return;
    // push edi
    // mov edi, dword ptr [esp + 8]
    // xor eax, eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // pop edi
    // return;
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab891)
    // inc ecx
    // add eax, 4
    // cmp ecx, 3
    // if (...) GOTO(0x4ab87f)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov edi, dword ptr [ebp + 8]
    // pop ebx
    // or esi, 0xffffffff
    // cdq 
    // mov ecx, ebx
    // mov dword ptr [ebp - 4], 3
    // idiv ecx
    // mov dword ptr [ebp - 0xc], eax
    // mov eax, dword ptr [ebp + 0xc]
    // cdq 
    // idiv ecx
    // and dword ptr [ebp + 0xc], 0
    // mov ecx, edx
    // shl esi, cl
    // sub ebx, edx
    // not esi
    // mov eax, dword ptr [edi]
    // mov ecx, eax
    // and ecx, esi
    // mov dword ptr [ebp - 8], ecx
    // mov ecx, edx
    // shr eax, cl
    // or eax, dword ptr [ebp + 0xc]
    // mov dword ptr [edi], eax
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, ebx
    // add edi, 4
    // shl eax, cl
    // dec dword ptr [ebp - 4]
    // mov dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4ab8ca)
    // mov edi, dword ptr [ebp - 0xc]
    // push 2
    // pop ebx
    // mov esi, edi
    // push 8
    // pop ecx
    // shl esi, 2
    // cmp ebx, edi
    // if (...) GOTO(0x4ab90f)
    // mov edx, dword ptr [ebp + 8]
    // mov eax, ecx
    // sub eax, esi
    // mov eax, dword ptr [eax + edx]
    // mov dword ptr [ecx + edx], eax
    // if (...) GOTO(0x4ab916)
    // mov eax, dword ptr [ebp + 8]
    // and dword ptr [ecx + eax], 0
    // dec ebx
    // sub ecx, 4
    // jns 0x4ab8fc
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x18
    // mov eax, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // push edi
    // movzx ecx, word ptr [eax + 0xa]
    // mov ebx, ecx
    // and ecx, 0x8000
    // mov dword ptr [ebp + 8], ecx
    // mov ecx, dword ptr [eax + 6]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [eax + 2]
    // movzx eax, word ptr [eax]
    // mov edi, dword ptr [ebp + 0x10]
    // and ebx, 0x7fff
    // sub ebx, 0x3fff
    // mov dword ptr [ebp - 8], ecx
    // shl eax, 0x10
    // cmp ebx, 0xffffc001
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4ab98e)
    // lea eax, [ebp - 0xc]
    // xor esi, esi
    // push eax
    // CALL(0x4ab879)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aba4d)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // push 2
    // pop eax
    // if (...) GOTO(0x4aba4f)
    // lea eax, [ebp - 0xc]
    // push eax
    // lea eax, [ebp - 0x18]
    // push eax
    // CALL(0x4ab852)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4ab9af)
    // inc ebx
    // mov eax, dword ptr [edi + 4]
    // mov ecx, eax
    // sub ecx, dword ptr [edi + 8]
    // cmp ebx, ecx
    // if (...) GOTO(0x4ab9c7)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // if (...) GOTO(0x4aba03)
    // cmp ebx, eax
    // if (...) GOTO(0x4aba0a)
    // sub eax, ebx
    // mov esi, eax
    // lea eax, [ebp - 0x18]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab852)
    // lea eax, [ebp - 0xc]
    // push esi
    // push eax
    // CALL(0x4ab894)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // mov eax, dword ptr [edi + 0xc]
    // inc eax
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // add esp, 0x20
    // xor esi, esi
    // if (...) GOTO(0x4ab986)
    // cmp ebx, dword ptr [edi]
    // if (...) GOTO(0x4aba36)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // push dword ptr [edi + 0xc]
    // or byte ptr [ebp - 9], 0x80
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // mov esi, dword ptr [edi + 0x14]
    // add esp, 0xc
    // add esi, dword ptr [edi]
    // push 1
    // if (...) GOTO(0x4ab988)
    // push dword ptr [edi + 0xc]
    // mov esi, dword ptr [edi + 0x14]
    // and byte ptr [ebp - 9], 0x7f
    // lea eax, [ebp - 0xc]
    // push eax
    // add esi, ebx
    // CALL(0x4ab894)
    // pop ecx
    // pop ecx
    // xor eax, eax
    // push(0x1f)
    // pop ecx
    // sub ecx, dword ptr [edi + 0xc]
    // mov edi, dword ptr [edi + 0x10]
    // shl esi, cl
    // mov ecx, dword ptr [ebp + 8]
    // neg ecx
    // sbb ecx, ecx
    // and ecx, 0x80000000
    // or esi, ecx
    // or esi, dword ptr [ebp - 0xc]
    // cmp edi, 0x40
    // if (...) GOTO(0x4aba7e)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebp - 8]
    // mov dword ptr [ecx + 4], esi
    // mov dword ptr [ecx], edx
    // if (...) GOTO(0x4aba88)
    // cmp edi, 0x20
    // if (...) GOTO(0x4aba88)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [ecx], esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push(0x4e5568)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push(0x4e5580)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4aba8d)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abaa3)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov edx, dword ptr [ebp + 0x10]
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + 0xc]
    // push edi
    // lea edi, [esi + 1]
    // mov byte ptr [esi], 0x30
    // test ebx, ebx
    // mov eax, edi
    // if (...) GOTO(0x4abb50)
    // mov dword ptr [ebp + 8], ebx
    // xor ebx, ebx
    // mov dl, byte ptr [ecx]
    // test dl, dl
    // if (...) GOTO(0x4abb42)
    // movsx edx, dl
    // inc ecx
    // if (...) GOTO(0x4abb45)
    // push(0x30)
    // pop edx
    // mov byte ptr [eax], dl
    // inc eax
    // dec dword ptr [ebp + 8]
    // if (...) GOTO(0x4abb36)
    // mov edx, dword ptr [ebp + 0x10]
    // and byte ptr [eax], 0
    // test ebx, ebx
    // if (...) GOTO(0x4abb69)
    // cmp byte ptr [ecx], 0x35
    // if (...) GOTO(0x4abb69)
    // dec eax
    // cmp byte ptr [eax], 0x39
    // if (...) GOTO(0x4abb67)
    // mov byte ptr [eax], 0x30
    // if (...) GOTO(0x4abb5c)
    // inc byte ptr [eax]
    // cmp byte ptr [esi], 0x31
    // if (...) GOTO(0x4abb73)
    // inc dword ptr [edx + 4]
    // if (...) GOTO(0x4abb85)
    // push edi
    // CALL(0x4abdf0)
    // inc eax
    // push eax
    // push edi
    // push esi
    // CALL(0x4a6d80)
    // add esp, 0x10
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
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