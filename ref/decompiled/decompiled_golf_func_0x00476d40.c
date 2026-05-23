/**
 * func_00476d40 — Auto-décompilé
 * Adresse: 0x00476d40 [golf.exe]
 * Taille: 87510 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: True
 * Appelle: dword, 0x476ef0, 0x477580, 0x405096, 0x483980, 0x476dd0, 0x476d80, 0x476d40
 * Constantes: 0x47d16d, 0x4802ed, 0x482e40, 0x47ee2e, 0x47cd68, 0x477536, 0x47d130, 0x47a9d5
 */
void func_00476d40(void) {
    /* 17502 instructions */

    // push ebp
    // mov ebp, esp
    // push ebx
    // mov eax, dword ptr [ebp + 8]
    // mov ebx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebx]
    // and edx, edx
    // if (...) GOTO(0x476d76)
    // mov cl, byte ptr [eax]
    // cmp cl, 0x7b
    // if (...) GOTO(0x476d6f)
    // cmp cl, 0x7d
    // if (...) GOTO(0x476d6f)
    // cmp cl, 0x5b
    // if (...) GOTO(0x476d6f)
    // cmp cl, 0x5d
    // if (...) GOTO(0x476d6f)
    // cmp cl, 0x24
    // if (...) GOTO(0x476d6f)
    // inc eax
    // dec edx
    // if (...) GOTO(0x476d50)
    // mov dword ptr [ebx], edx
    // mov dword ptr [ebp + 8], eax
    // if (...) GOTO(0x476d76)
    // mov eax, dword ptr [ebp + 8]
    // pop ebx
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebp
    // mov ebp, esp
    // push ebx
    // mov eax, dword ptr [ebp + 8]
    // mov ebx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebx]
    // and edx, edx
    // if (...) GOTO(0x476dbb)
    // mov cl, byte ptr [eax]
    // cmp cl, 0x7b
    // if (...) GOTO(0x476db4)
    // cmp cl, 0x7d
    // if (...) GOTO(0x476db4)
    // cmp cl, 0x5b
    // if (...) GOTO(0x476db4)
    // cmp cl, 0x5d
    // if (...) GOTO(0x476db4)
    // cmp cl, 0x24
    // if (...) GOTO(0x476db4)
    // cmp cl, 0x3d
    // if (...) GOTO(0x476db4)
    // inc eax
    // dec edx
    // if (...) GOTO(0x476d90)
    // mov dword ptr [ebx], edx
    // mov dword ptr [ebp + 8], eax
    // if (...) GOTO(0x476dbb)
    // mov eax, dword ptr [ebp + 8]
    // pop ebx
    // pop ebp
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebp
    // mov ebp, esp
    // push ebx
    // mov eax, dword ptr [ebp + 8]
    // mov ebx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebx]
    // and edx, edx
    // if (...) GOTO(0x476e10)
    // mov cl, byte ptr [eax]
    // cmp cl, 0x7b
    // if (...) GOTO(0x476e09)
    // cmp cl, 0x7d
    // if (...) GOTO(0x476e09)
    // cmp cl, 0x5b
    // if (...) GOTO(0x476e09)
    // cmp cl, 0x5d
    // if (...) GOTO(0x476e09)
    // cmp cl, 0x24
    // if (...) GOTO(0x476e09)
    // cmp cl, 0x3d
    // if (...) GOTO(0x476e09)
    // cmp cl, 0x5e
    // if (...) GOTO(0x476e09)
    // inc eax
    // dec edx
    // if (...) GOTO(0x476de0)
    // mov dword ptr [ebx], edx
    // mov dword ptr [ebp + 8], eax
    // if (...) GOTO(0x476e10)
    // mov eax, dword ptr [ebp + 8]
    // pop ebx
    // pop ebp
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [esp + 4]
    // sub esp, 8
    // push ebp
    // xor ebp, ebp
    // push esi
    // cmp edx, ebp
    // mov esi, ecx
    // if (...) GOTO(0x476e3b)
    // pop esi
    // xor eax, eax
    // pop ebp
    // add esp, 8
    // return;
    // mov ecx, dword ptr [esp + 0x1c]
    // mov dword ptr [esi + 0x1c], ebp
    // mov dword ptr [0x839aa8], ebp
    // mov eax, dword ptr [esi + 0x14]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov dword ptr [esi + 0x18], eax
    // mov dword ptr [esp + 0x10], ebp
    // mov dword ptr [esp + 0x1c], ebp
    // mov dword ptr [esp + 0x14], ecx
    // cmp dword ptr [esp + 0x24], ebp
    // if (...) GOTO(0x476e7c)
    // mov eax, dword ptr [esp + 0x14]
    // mov edi, dword ptr [esp + 0x1c]
    // inc edi
    // mov dword ptr [eax], edx
    // add eax, 4
    // mov dword ptr [esp + 0x1c], edi
    // mov dword ptr [esp + 0x14], eax
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + 0x20]
    // push ecx
    // push eax
    // push edx
    // mov ecx, esi
    // mov dword ptr [esp + 0x2c], ebx
    // CALL(0x476ef0)
    // mov ecx, esi
    // mov edi, eax
    // mov dword ptr [0x839aa8], ebp
    // CALL(0x477580)
    // mov ecx, dword ptr [esp + 0x10]
    // mov edx, edi
    // add ecx, eax
    // mov eax, dword ptr [esi + 0x1c]
    // inc eax
    // mov dword ptr [esp + 0x10], ecx
    // mov dword ptr [esi + 0x1c], eax
    // mov eax, dword ptr [esi + 0x18]
    // cmp eax, ebp
    // if (...) GOTO(0x476ec8)
    // sub ebx, eax
    // mov dword ptr [esi + 0x18], ebp
    // cmp edi, ebp
    // if (...) GOTO(0x476e60)
    // mov eax, dword ptr [esp + 0x28]
    // pop edi
    // cmp eax, ebp
    // pop ebx
    // if (...) GOTO(0x476edc)
    // mov ecx, dword ptr [esp + 0x14]
    // mov dword ptr [eax], ecx
    // mov eax, dword ptr [esp + 8]
    // pop esi
    // pop ebp
    // add esp, 8
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x10]
    // push esi
    // push edi
    // mov edi, ecx
    // test ebp, ebp
    // if (...) GOTO(0x4771c0)
    // mov eax, dword ptr [edi + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x476f11)
    // mov eax, dword ptr [0x83ad44]
    // mov dword ptr [edi + 0x5c], eax
    // cmp dword ptr [edi + 0x48], 2
    // if (...) GOTO(0x476f1e)
    // mov dword ptr [edi + 0x48], 1
    // mov eax, dword ptr [edi + 0x40]
    // mov ebx, dword ptr [esp + 0x14]
    // test eax, eax
    // if (...) GOTO(0x476f3f)
    // mov ecx, dword ptr [esp + 0x1c]
    // push ecx
    // mov ecx, dword ptr [edi + 0x5c]
    // push ebp
    // push ebx
    // CALL(0x483980)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // cmp dword ptr [edi + 0x48], 1
    // if (...) GOTO(0x476f52)
    // lea edx, [esp + 0x1c]
    // push edx
    // push ebx
    // CALL(0x476dd0)
    // if (...) GOTO(0x476f70)
    // cmp dword ptr [edi + 0x34], 3
    // if (...) GOTO(0x476f65)
    // lea eax, [esp + 0x1c]
    // push eax
    // push ebx
    // CALL(0x476d80)
    // if (...) GOTO(0x476f70)
    // lea ecx, [esp + 0x1c]
    // push ecx
    // push ebx
    // CALL(0x476d40)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x24]
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x47713c)
    // movsx eax, byte ptr [esi]
    // add eax, -0x24
    // cmp eax, 0x59
    // if (...) GOTO(0x477049)
    // xor edx, edx
    // mov dl, byte ptr [eax + 0x4771ec]
    // if (...) GOTO(dword)
    // mov dword ptr [edi + 0x3c], 2
    // if (...) GOTO(0x477049)
    // push 6
    // push(0x4e4254)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x476fcd)
    // mov dword ptr [edi + 0x3c], 1
    // mov ebp, 3
    // if (...) GOTO(0x47704c)
    // push 9
    // push(0x4e4248)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x476fea)
    // mov dword ptr [edi + 0x48], 1
    // if (...) GOTO(0x477049)
    // push 9
    // push(0x4e423c)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x477049)
    // mov dword ptr [edi + 0x48], 1
    // mov ebp, 3
    // if (...) GOTO(0x47704c)
    // mov dword ptr [edi + 0x48], 2
    // xor ebp, ebp
    // if (...) GOTO(0x47704c)
    // cmp byte ptr [esi + 1], 0x7b
    // if (...) GOTO(0x47703f)
    // mov ebp, 1
    // if (...) GOTO(0x47704c)
    // cmp byte ptr [esi + 1], 0x7d
    // if (...) GOTO(0x477013)
    // if (...) GOTO(0x47703f)
    // cmp byte ptr [esi + 1], 0x5b
    // if (...) GOTO(0x47703f)
    // mov ebp, 2
    // if (...) GOTO(0x47704c)
    // cmp byte ptr [esi + 1], 0x5d
    // if (...) GOTO(0x477013)
    // mov eax, dword ptr [esp + 0x1c]
    // inc esi
    // dec eax
    // mov dword ptr [esp + 0x1c], eax
    // mov ebp, dword ptr [edi + 0x34]
    // mov eax, dword ptr [edi + 0x34]
    // mov ecx, dword ptr [edi + eax*4 + 0x5c]
    // test ecx, ecx
    // if (...) GOTO(0x477071)
    // mov eax, dword ptr [esp + 0x18]
    // mov edx, esi
    // sub edx, ebx
    // push edx
    // push eax
    // push ebx
    // CALL(0x483980)
    // test eax, eax
    // if (...) GOTO(0x47710a)
    // if (...) GOTO(0x47708c)
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, esi
    // sub ecx, ebx
    // push ecx
    // mov ecx, dword ptr [edi + 0x5c]
    // push edx
    // push ebx
    // CALL(0x483980)
    // test eax, eax
    // if (...) GOTO(0x47718e)
    // mov ecx, dword ptr [edi + 0x3c]
    // cmp ecx, 1
    // if (...) GOTO(0x4770a4)
    // mov eax, dword ptr [esp + 0x1c]
    // add esi, 5
    // sub eax, 5
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x4770c8)
    // mov eax, dword ptr [edi + 0x48]
    // cmp eax, 1
    // if (...) GOTO(0x4770bc)
    // mov eax, dword ptr [esp + 0x1c]
    // add esi, 9
    // sub eax, 9
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x4770c8)
    // cmp eax, 2
    // if (...) GOTO(0x4770c8)
    // mov dword ptr [edi + 0x48], 0
    // cmp ecx, 2
    // lea ebx, [esi + 1]
    // if (...) GOTO(0x4770f5)
    // push(0x3e)
    // push ebx
    // CALL(0x4a6170)
    // xor ebp, ebp
    // add esp, 8
    // cmp eax, ebp
    // if (...) GOTO(0x4770f2)
    // mov ecx, dword ptr [esp + 0x1c]
    // sub ebx, eax
    // lea edx, [ecx + ebx - 1]
    // lea ebx, [eax + 1]
    // mov dword ptr [esp + 0x1c], edx
    // mov dword ptr [edi + 0x3c], ebp
    // mov eax, dword ptr [esp + 0x1c]
    // mov dword ptr [edi + 0x34], ebp
    // mov ebp, dword ptr [esp + 0x18]
    // dec eax
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x476f3f)
    // mov dword ptr [edi + 0x3c], 0
    // mov cl, byte ptr [eax - 1]
    // cmp cl, 0x20
    // if (...) GOTO(0x4771c2)
    // cmp eax, ebx
    // if (...) GOTO(0x4771c2)
    // push(0x20)
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // push eax
    // CALL(0x4935b0)
    // add esp, 0xc
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov edx, dword ptr [edi + 0x34]
    // mov ecx, dword ptr [edi + edx*4 + 0x5c]
    // test ecx, ecx
    // if (...) GOTO(0x47717d)
    // sub esi, ebx
    // push esi
    // push ebp
    // push ebx
    // CALL(0x483980)
    // xor ecx, ecx
    // cmp eax, ecx
    // if (...) GOTO(0x4771ba)
    // mov dword ptr [edi + 0x3c], ecx
    // mov cl, byte ptr [eax - 1]
    // cmp cl, 0x20
    // if (...) GOTO(0x4771c2)
    // cmp eax, ebx
    // if (...) GOTO(0x4771c2)
    // push(0x20)
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // push eax
    // CALL(0x4935b0)
    // add esp, 0xc
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov ecx, dword ptr [edi + 0x5c]
    // sub esi, ebx
    // push esi
    // push ebp
    // push ebx
    // CALL(0x483980)
    // test eax, eax
    // if (...) GOTO(0x4771b8)
    // mov dword ptr [edi + 0x3c], 0
    // mov cl, byte ptr [eax - 1]
    // cmp cl, 0x20
    // if (...) GOTO(0x4771c2)
    // cmp eax, ebx
    // if (...) GOTO(0x4771c2)
    // mov ecx, dword ptr [esp + 0x14]
    // push(0x20)
    // push eax
    // push ecx
    // CALL(0x4935b0)
    // add esp, 0xc
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // xor ecx, ecx
    // mov dword ptr [edi + 0x3c], ecx
    // mov dword ptr [edi + 0x48], ecx
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // lea ecx, [ecx]
    // stosd dword ptr es:[edi], eax
    // outsd dx, dword ptr [esi]
    // inc edi
    // add byte ptr [edi + 0x2c00476f], bl
    // jo 0x47721e
    // add byte ptr [ecx], bh
    // jo 0x477222
    // add byte ptr [eax + esi*2], cl
    // inc edi
    // add byte ptr [edi], dl
    // jo 0x47722a
    // add byte ptr [eax + esi*2], ah
    // inc edi
    // add byte ptr [ecx + 0x70], cl
    // inc edi
    // add byte ptr [eax], al
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add dword ptr [edi], eax
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add al, byte ptr [edi]
    // add eax, dword ptr [edi + eax]
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add eax, 0x90900607
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [esp + 4]
    // push esi
    // test edx, edx
    // mov esi, ecx
    // if (...) GOTO(0x477261)
    // xor eax, eax
    // pop esi
    // return;
    // push edi
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x477280)
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push edi
    // mov edi, ecx
    // mov eax, dword ptr [edi + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x477294)
    // mov eax, dword ptr [0x83ad44]
    // mov dword ptr [edi + 0x5c], eax
    // mov ecx, dword ptr [edi + 0x40]
    // mov eax, dword ptr [esp + 0x10]
    // xor ebp, ebp
    // mov ebx, eax
    // test ecx, ecx
    // mov dword ptr [esp + 0x10], ebp
    // if (...) GOTO(0x4772bb)
    // mov ecx, dword ptr [esp + 0x14]
    // push ecx
    // mov ecx, dword ptr [edi + 0x5c]
    // push eax
    // CALL(0x483930)
    // pop edi
    // pop ebp
    // pop ebx
    // return;
    // push esi
    // cmp dword ptr [edi + 0x4c], 1
    // if (...) GOTO(0x4772cf)
    // lea edx, [esp + 0x18]
    // push edx
    // push ebx
    // CALL(0x476dd0)
    // if (...) GOTO(0x4772ed)
    // cmp dword ptr [edi + 0x38], 3
    // if (...) GOTO(0x4772e2)
    // lea eax, [esp + 0x18]
    // push eax
    // push ebx
    // CALL(0x476d80)
    // if (...) GOTO(0x4772ed)
    // lea ecx, [esp + 0x18]
    // push ecx
    // push ebx
    // CALL(0x476d40)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x20]
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x477489)
    // movsx eax, byte ptr [esi]
    // add eax, -0x24
    // cmp eax, 0x59
    // if (...) GOTO(0x4773c6)
    // xor edx, edx
    // mov dl, byte ptr [eax + 0x4774f8]
    // if (...) GOTO(dword)
    // mov dword ptr [edi + 0x3c], 2
    // if (...) GOTO(0x4773c6)
    // push 6
    // push(0x4e4254)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47734a)
    // mov dword ptr [edi + 0x3c], 1
    // mov ebp, 3
    // if (...) GOTO(0x4773c9)
    // push 9
    // push(0x4e4248)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x477367)
    // mov dword ptr [edi + 0x4c], 1
    // if (...) GOTO(0x4773c6)
    // push 9
    // push(0x4e423c)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4773c6)
    // mov dword ptr [edi + 0x4c], 1
    // mov ebp, 3
    // if (...) GOTO(0x4773c9)
    // mov dword ptr [edi + 0x4c], 2
    // xor ebp, ebp
    // if (...) GOTO(0x4773c9)
    // cmp byte ptr [esi + 1], 0x7b
    // if (...) GOTO(0x4773bc)
    // mov ebp, 1
    // if (...) GOTO(0x4773c9)
    // cmp byte ptr [esi + 1], 0x7d
    // if (...) GOTO(0x477390)
    // if (...) GOTO(0x4773bc)
    // cmp byte ptr [esi + 1], 0x5b
    // if (...) GOTO(0x4773bc)
    // mov ebp, 2
    // if (...) GOTO(0x4773c9)
    // cmp byte ptr [esi + 1], 0x5d
    // if (...) GOTO(0x477390)
    // mov eax, dword ptr [esp + 0x18]
    // inc esi
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // mov ebp, dword ptr [edi + 0x38]
    // mov eax, dword ptr [edi + 0x38]
    // mov ecx, dword ptr [edi + eax*4 + 0x5c]
    // test ecx, ecx
    // if (...) GOTO(0x4773dc)
    // mov edx, esi
    // sub edx, ebx
    // push edx
    // push ebx
    // if (...) GOTO(0x4773e5)
    // mov ecx, dword ptr [edi + 0x5c]
    // mov eax, esi
    // sub eax, ebx
    // push eax
    // push ebx
    // CALL(0x483930)
    // mov ecx, dword ptr [esp + 0x14]
    // add ecx, eax
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [edi + 0x3c]
    // cmp ecx, 1
    // if (...) GOTO(0x47740c)
    // mov eax, dword ptr [esp + 0x18]
    // add esi, 5
    // sub eax, 5
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x477447)
    // mov eax, dword ptr [edi + 0x4c]
    // cmp eax, 1
    // if (...) GOTO(0x477424)
    // mov eax, dword ptr [esp + 0x18]
    // add esi, 9
    // sub eax, 9
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x477447)
    // cmp eax, 2
    // if (...) GOTO(0x477447)
    // mov eax, dword ptr [edi + 0x54]
    // mov dword ptr [edi + 0x4c], 0
    // test eax, eax
    // mov eax, dword ptr [esp + 0x14]
    // if (...) GOTO(0x477440)
    // add eax, 0x19
    // if (...) GOTO(0x477443)
    // add eax, 0x1e
    // mov dword ptr [esp + 0x14], eax
    // cmp ecx, 2
    // lea ebx, [esi + 1]
    // if (...) GOTO(0x477474)
    // push(0x3e)
    // push ebx
    // CALL(0x4a6170)
    // xor ebp, ebp
    // add esp, 8
    // cmp eax, ebp
    // if (...) GOTO(0x477471)
    // mov ecx, dword ptr [esp + 0x18]
    // sub ebx, eax
    // lea edx, [ecx + ebx - 1]
    // lea ebx, [eax + 1]
    // mov dword ptr [esp + 0x18], edx
    // mov dword ptr [edi + 0x3c], ebp
    // mov eax, dword ptr [esp + 0x18]
    // mov dword ptr [edi + 0x38], ebp
    // mov ebp, dword ptr [esp + 0x14]
    // dec eax
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x4772bc)
    // mov eax, dword ptr [edi + 0x38]
    // mov ecx, dword ptr [edi + eax*4 + 0x5c]
    // test ecx, ecx
    // if (...) GOTO(0x47749a)
    // sub esi, ebx
    // push esi
    // push ebx
    // if (...) GOTO(0x4774a1)
    // mov ecx, dword ptr [edi + 0x5c]
    // sub esi, ebx
    // push esi
    // push ebx
    // CALL(0x483930)
    // add ebp, eax
    // mov eax, dword ptr [edi + 0x4c]
    // cmp eax, 2
    // pop esi
    // if (...) GOTO(0x4774c7)
    // xor eax, eax
    // add ebp, 0x1e
    // mov dword ptr [edi + 0x4c], eax
    // mov dword ptr [edi + 0x3c], eax
    // mov dword ptr [edi + 0x4c], eax
    // mov eax, ebp
    // pop edi
    // pop ebp
    // pop ebx
    // return;
    // xor eax, eax
    // mov dword ptr [edi + 0x3c], eax
    // mov dword ptr [edi + 0x4c], eax
    // mov eax, ebp
    // pop edi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // sub byte ptr [ebx + 0x47], dh
    // add byte ptr [ebx + esi*2], bl
    // inc edi
    // add byte ptr [ecx - 0x49ffb88d], ch
    // jae 0x47752e
    // add byte ptr [ecx - 0x6bffb88d], cl
    // jae 0x477536
    // add byte ptr [ecx - 0x39ffb88d], ah
    // jae 0x47753e
    // add byte ptr [eax], al
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add dword ptr [edi], eax
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add al, byte ptr [edi]
    // add eax, dword ptr [edi + eax]
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add eax, 0x90900607
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x477575)
    // mov eax, dword ptr [0x83ad44]
    // mov dword ptr [ecx + 0x5c], eax
    // mov ecx, eax
    // mov eax, dword ptr [ecx + 0x10]
    // return;
    // mov edx, dword ptr [ecx + 0x5c]
    // mov eax, dword ptr [edx + 0x10]
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x47758f)
    // mov eax, dword ptr [0x83ad44]
    // mov dword ptr [ecx + 0x5c], eax
    // mov eax, dword ptr [ecx + 0x5c]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47759f)
    // mov eax, dword ptr [eax + 0x10]
    // add eax, ecx
    // return;
    // mov eax, dword ptr [eax + 0xc]
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 8
    // mov eax, dword ptr [esp + 0xc]
    // push ebp
    // mov ebp, ecx
    // push esi
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, eax
    // mov esi, dword ptr [ebp + 0x40]
    // mov dword ptr [esp + 8], edx
    // test esi, esi
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x4775eb)
    // mov edx, dword ptr [esp + 0x20]
    // push edx
    // mov edx, dword ptr [esp + 0x20]
    // push edx
    // push ecx
    // push eax
    // mov ecx, ebp
    // CALL(0x4767a0)
    // pop esi
    // pop ebp
    // add esp, 8
    // return;
    // push ebx
    // push edi
    // mov eax, dword ptr [ebp + 0x50]
    // mov edi, 1
    // cmp eax, edi
    // mov ebx, 2
    // if (...) GOTO(0x47760b)
    // lea eax, [esp + 0x28]
    // push eax
    // push edx
    // CALL(0x476dd0)
    // if (...) GOTO(0x477629)
    // cmp dword ptr [ebp + 0x30], 3
    // if (...) GOTO(0x47761e)
    // lea ecx, [esp + 0x28]
    // push ecx
    // push edx
    // CALL(0x476d80)
    // if (...) GOTO(0x477629)
    // lea eax, [esp + 0x28]
    // push eax
    // push edx
    // CALL(0x476d40)
    // mov esi, eax
    // add esp, 8
    // test esi, esi
    // if (...) GOTO(0x477a62)
    // mov eax, dword ptr [esp + 0x28]
    // test eax, eax
    // if (...) GOTO(0x477a62)
    // movsx eax, byte ptr [esi]
    // add eax, -0x24
    // cmp eax, 0x59
    // if (...) GOTO(0x47771e)
    // xor ecx, ecx
    // mov cl, byte ptr [eax + 0x477bc8]
    // if (...) GOTO(dword)
    // mov dword ptr [ebp + 0x3c], ebx
    // if (...) GOTO(0x47771e)
    // push 6
    // push(0x4e4254)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4776b6)
    // mov ecx, dword ptr [ebp + 0xb0]
    // mov ebx, 3
    // inc ecx
    // mov dword ptr [ebp + 0x3c], edi
    // mov eax, ecx
    // mov dword ptr [esp + 0x1c], ebx
    // cmp eax, 0x28
    // mov dword ptr [ebp + 0xb0], ecx
    // if (...) GOTO(0x477725)
    // push 0
    // push(0x4e4280)  // ptr?
    // push(0x4e425c)  // ptr?
    // push 0
    // CALL(dword)
    // if (...) GOTO(0x477725)
    // push 9
    // push(0x4e4248)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4776cf)
    // mov dword ptr [ebp + 0x50], edi
    // if (...) GOTO(0x47771e)
    // push 9
    // push(0x4e423c)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47771e)
    // mov dword ptr [ebp + 0x50], edi
    // mov ebx, 3
    // if (...) GOTO(0x477721)
    // mov dword ptr [ebp + 0x50], ebx
    // xor ebx, ebx
    // if (...) GOTO(0x477721)
    // cmp byte ptr [esi + 1], 0x7b
    // if (...) GOTO(0x477714)
    // mov ebx, edi
    // if (...) GOTO(0x477721)
    // cmp byte ptr [esi + 1], 0x7d
    // if (...) GOTO(0x4776f0)
    // if (...) GOTO(0x477714)
    // cmp byte ptr [esi + 1], 0x5b
    // if (...) GOTO(0x477721)
    // if (...) GOTO(0x477714)
    // cmp byte ptr [esi + 1], 0x5d
    // if (...) GOTO(0x4776f0)
    // mov eax, dword ptr [esp + 0x28]
    // inc esi
    // dec eax
    // mov dword ptr [esp + 0x28], eax
    // mov ebx, dword ptr [ebp + 0x30]
    // mov dword ptr [esp + 0x1c], ebx
    // mov eax, dword ptr [ebp + 0x50]
    // mov edi, dword ptr [esp + 0x20]
    // cmp eax, 2
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x4777ef)
    // mov edx, dword ptr [ebp + 0x44]
    // mov eax, dword ptr [edx*8 + 0x83fe08]
    // test eax, eax
    // if (...) GOTO(0x47780e)
    // mov eax, dword ptr [ebp]
    // mov ecx, ebp
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47780e)
    // mov edx, dword ptr [ebp]
    // mov ecx, ebp
    // CALL(dword)
    // mov eax, dword ptr [ebp + 0x44]
    // mov ebx, dword ptr [eax*8 + 0x83fe08]
    // mov ecx, ebx
    // CALL(0x4941e0)
    // push eax
    // mov ecx, ebp
    // CALL(0x477250)
    // mov edi, eax
    // add edi, 0x1e
    // cmp edi, 0xc8
    // if (...) GOTO(0x47778e)
    // mov edi, 0xc8
    // mov edx, dword ptr [ebp]
    // push 7
    // mov ecx, ebp
    // CALL(dword)
    // push eax
    // mov eax, dword ptr [esp + 0x2c]
    // push(0x138)
    // push edi
    // mov edi, dword ptr [esp + 0x30]
    // push eax
    // push edi
    // mov ecx, ebx
    // CALL(0x4936a0)
    // mov ecx, dword ptr [ebp + 0x30]
    // push 0
    // push 0
    // push 0
    // mov edx, dword ptr [ebp + ecx*4 + 0x5c]
    // lea ecx, [ebx + 0x23b0]
    // push edx
    // CALL(0x4762d0)
    // mov eax, dword ptr [ebp + 0x44]
    // mov ecx, dword ptr [eax*8 + 0x83fe08]
    // CALL(0x493a30)
    // mov ecx, ebx
    // CALL(0x493ed0)
    // mov ebx, dword ptr [esp + 0x1c]
    // add edi, eax
    // mov dword ptr [esp + 0x20], edi
    // mov edi, dword ptr [esp + 0x14]
    // if (...) GOTO(0x47780e)
    // mov eax, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esp + 0x24]
    // mov ecx, esi
    // sub ecx, eax
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // push eax
    // mov ecx, ebp
    // CALL(0x4767a0)
    // mov dword ptr [esp + 0x20], eax
    // mov eax, dword ptr [ebp + 0x3c]
    // cmp eax, 1
    // if (...) GOTO(0x477826)
    // mov ecx, dword ptr [esp + 0x28]
    // add esi, 5
    // sub ecx, 5
    // mov dword ptr [esp + 0x28], ecx
    // if (...) GOTO(0x477843)
    // cmp dword ptr [ebp + 0x50], 1
    // if (...) GOTO(0x477843)
    // mov edx, dword ptr [esp + 0x28]
    // add esi, 9
    // sub edx, 9
    // mov dword ptr [esp + 0x28], edx
    // movsx edx, byte ptr [esi]
    // sub edx, 0x30
    // mov dword ptr [ebp + 0x44], edx
    // inc esi
    // cmp eax, 2
    // mov dword ptr [esp + 0x10], esi
    // if (...) GOTO(0x47792d)
    // mov ebx, esi
    // push(0x3e)
    // push ebx
    // CALL(0x4a6170)
    // mov esi, eax
    // add esp, 8
    // test esi, esi
    // mov dword ptr [esp + 0x1c], esi
    // if (...) GOTO(0x477928)
    // mov eax, dword ptr [ebp + 0xb0]
    // cmp eax, 0x28
    // if (...) GOTO(0x477915)
    // mov cl, byte ptr [ebx]
    // cmp cl, 0x30
    // if (...) GOTO(0x4778a5)
    // cmp cl, 0x39
    // if (...) GOTO(0x4778a5)
    // push ebx
    // mov byte ptr [esi], 0
    // CALL(0x4a6b93)
    // mov byte ptr [esi], 0x3e
    // mov ecx, dword ptr [ebp + 0xb0]
    // add esp, 4
    // mov dword ptr [ebp + ecx*4 + 0x110], eax
    // if (...) GOTO(0x477915)
    // mov ecx, dword ptr [esp + 0x10]
    // mov ebx, esi
    // sub ebx, ecx
    // mov dword ptr [ebp + eax*4 + 0x110], 0xffffffff
    // lea edx, [ebx + 1]
    // push edx
    // CALL(0x4a504f)
    // mov ecx, dword ptr [ebp + 0xb0]
    // add esp, 4
    // mov dword ptr [ebp + ecx*4 + 0x1b0], eax
    // mov edx, dword ptr [ebp + 0xb0]
    // mov eax, dword ptr [ebp + edx*4 + 0x1b0]
    // test eax, eax
    // if (...) GOTO(0x477911)
    // mov esi, dword ptr [esp + 0x10]
    // mov ecx, ebx
    // mov edi, eax
    // mov eax, ecx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [ebp + 0xb0]
    // mov esi, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [esp + 0x14]
    // mov edx, dword ptr [ebp + ecx*4 + 0x1b0]
    // mov byte ptr [edx + ebx], 0
    // mov ebx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x28]
    // sub ebx, esi
    // inc esi
    // lea ecx, [eax + ebx - 1]
    // mov dword ptr [esp + 0x10], esi
    // mov dword ptr [esp + 0x28], ecx
    // xor ebx, ebx
    // mov dword ptr [ebp + 0x3c], ebx
    // mov eax, dword ptr [ebp + 0x50]
    // test eax, eax
    // if (...) GOTO(0x4779fe)
    // mov ecx, dword ptr [esp + 0x20]
    // sub ecx, edi
    // test ecx, ecx
    // if (...) GOTO(0x4779fe)
    // mov edx, dword ptr [ebp + 0x30]
    // mov esi, dword ptr [ebp + edx*4 + 0x5c]
    // test esi, esi
    // if (...) GOTO(0x477958)
    // mov esi, dword ptr [ebp + 0x5c]
    // test esi, esi
    // if (...) GOTO(0x47797e)
    // mov edx, dword ptr [esi + 8]
    // test edx, edx
    // if (...) GOTO(0x477966)
    // mov eax, dword ptr [esi + 0x10]
    // add eax, edx
    // if (...) GOTO(0x477969)
    // mov eax, dword ptr [esi + 0xc]
    // push eax
    // mov eax, dword ptr [esp + 0x28]
    // push ecx
    // mov ecx, dword ptr [ebp + 0x44]
    // push eax
    // push edi
    // push 1
    // push ecx
    // mov ecx, ebp
    // CALL(0x478a90)
    // cmp dword ptr [ebp + 0x50], 2
    // if (...) GOTO(0x477a4d)
    // test esi, esi
    // mov dword ptr [ebp + 0x50], 0
    // if (...) GOTO(0x477a4d)
    // mov ecx, dword ptr [ebp + 0x54]
    // test ecx, ecx
    // if (...) GOTO(0x477a4d)
    // mov edx, dword ptr [ebp + 0x44]
    // mov eax, dword ptr [edx*8 + 0x83fe08]
    // test eax, eax
    // if (...) GOTO(0x477a4d)
    // mov eax, dword ptr [esp + 0x24]
    // mov edi, dword ptr [esp + 0x20]
    // push 0
    // push eax
    // push edi
    // push ebp
    // CALL(0x473e60)
    // mov ecx, dword ptr [ebp + 0x54]
    // mov eax, edi
    // mov edx, dword ptr [ecx + 0x18]
    // mov ecx, dword ptr [esi + 8]
    // add edi, edx
    // test ecx, ecx
    // mov dword ptr [esp + 0x20], edi
    // if (...) GOTO(0x4779e2)
    // mov esi, dword ptr [esi + 0x10]
    // add esi, ecx
    // if (...) GOTO(0x4779e5)
    // mov esi, dword ptr [esi + 0xc]
    // mov edx, dword ptr [esp + 0x24]
    // sub edi, eax
    // push esi
    // push edi
    // push edx
    // push eax
    // mov eax, dword ptr [ebp + 0x44]
    // push 0
    // push eax
    // mov ecx, ebp
    // CALL(0x478a90)
    // if (...) GOTO(0x477a4d)
    // cmp dword ptr [ebp + 0x30], 3
    // if (...) GOTO(0x477a4d)
    // mov edx, dword ptr [ebp + 0xb0]
    // cmp edx, 0x28
    // if (...) GOTO(0x477a4d)
    // mov eax, dword ptr [ebp + 0x68]
    // test eax, eax
    // if (...) GOTO(0x477a1d)
    // mov eax, dword ptr [ebp + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x477a4d)
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x477a2b)
    // mov eax, dword ptr [eax + 0x10]
    // add eax, ecx
    // if (...) GOTO(0x477a2e)
    // mov eax, dword ptr [eax + 0xc]
    // mov ecx, dword ptr [esp + 0x20]
    // push 0
    // push eax
    // mov eax, dword ptr [esp + 0x2c]
    // sub ecx, edi
    // dec edx
    // push ecx
    // push eax
    // push edi
    // push 0
    // push edx
    // lea ecx, [ebp + 0xb4]
    // CALL(0x4929b0)
    // mov eax, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x10]
    // dec eax
    // mov dword ptr [ebp + 0x30], ebx
    // mov dword ptr [esp + 0x28], eax
    // if (...) GOTO(0x4775ed)
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0x24]
    // mov edi, dword ptr [esp + 0x20]
    // sub esi, eax
    // push esi
    // push ecx
    // push edi
    // push eax
    // mov ecx, ebp
    // CALL(0x4767a0)
    // mov ebx, eax
    // mov eax, dword ptr [ebp + 0x50]
    // test eax, eax
    // if (...) GOTO(0x477b4c)
    // mov ecx, ebx
    // sub ecx, edi
    // test ecx, ecx
    // if (...) GOTO(0x477b4c)
    // mov edx, dword ptr [ebp + 0x30]
    // mov esi, dword ptr [ebp + edx*4 + 0x5c]
    // test esi, esi
    // if (...) GOTO(0x477aa6)
    // mov esi, dword ptr [ebp + 0x5c]
    // test esi, esi
    // if (...) GOTO(0x477acc)
    // mov edx, dword ptr [esi + 8]
    // test edx, edx
    // if (...) GOTO(0x477ab4)
    // mov eax, dword ptr [esi + 0x10]
    // add eax, edx
    // if (...) GOTO(0x477ab7)
    // mov eax, dword ptr [esi + 0xc]
    // push eax
    // mov eax, dword ptr [esp + 0x28]
    // push ecx
    // mov ecx, dword ptr [ebp + 0x44]
    // push eax
    // push edi
    // push 1
    // push ecx
    // mov ecx, ebp
    // CALL(0x478a90)
    // cmp dword ptr [ebp + 0x50], 2
    // if (...) GOTO(0x477b99)
    // test esi, esi
    // mov dword ptr [ebp + 0x50], 0
    // if (...) GOTO(0x477b99)
    // mov ecx, dword ptr [ebp + 0x54]
    // test ecx, ecx
    // if (...) GOTO(0x477b99)
    // mov edx, dword ptr [ebp + 0x44]
    // mov eax, dword ptr [edx*8 + 0x83fe08]
    // test eax, eax
    // if (...) GOTO(0x477b99)
    // mov edi, dword ptr [esp + 0x24]
    // push 0
    // push edi
    // push ebx
    // push ebp
    // CALL(0x473e60)
    // mov eax, dword ptr [ebp + 0x54]
    // mov ecx, ebx
    // mov edx, dword ptr [eax + 0x18]
    // mov eax, dword ptr [esi + 8]
    // add ebx, edx
    // test eax, eax
    // if (...) GOTO(0x477b28)
    // mov esi, dword ptr [esi + 0x10]
    // add esi, eax
    // if (...) GOTO(0x477b2b)
    // mov esi, dword ptr [esi + 0xc]
    // mov eax, dword ptr [ebp + 0x44]
    // mov edx, ebx
    // sub edx, ecx
    // push esi
    // push edx
    // push edi
    // push ecx
    // push 0
    // push eax
    // mov ecx, ebp
    // CALL(0x478a90)
    // mov eax, ebx
    // pop edi
    // pop ebx
    // pop esi
    // pop ebp
    // add esp, 8
    // return;
    // cmp dword ptr [ebp + 0x30], 3
    // if (...) GOTO(0x477b99)
    // mov edx, dword ptr [ebp + 0xb0]
    // cmp edx, 0x28
    // if (...) GOTO(0x477b99)
    // mov eax, dword ptr [ebp + 0x68]
    // test eax, eax
    // if (...) GOTO(0x477b6b)
    // mov eax, dword ptr [ebp + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x477b99)
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x477b79)
    // mov eax, dword ptr [eax + 0x10]
    // add eax, ecx
    // if (...) GOTO(0x477b7c)
    // mov eax, dword ptr [eax + 0xc]
    // mov ecx, ebx
    // push 0
    // push eax
    // mov eax, dword ptr [esp + 0x2c]
    // sub ecx, edi
    // dec edx
    // push ecx
    // push eax
    // push edi
    // push 0
    // push edx
    // lea ecx, [ebp + 0xb4]
    // CALL(0x4929b0)
    // mov eax, ebx
    // pop edi
    // pop ebx
    // pop esi
    // pop ebp
    // add esp, 8
    // return;
    // lea ecx, [ecx]
    // push(0x60004776)  // ptr?
    // jbe 0x477bf6
    // add byte ptr [esi], al
    // if (...) GOTO(0x477bfa)
    // add byte ptr [esi], cl
    // if (...) GOTO(0x477bfe)
    // add ch, ch
    // jbe 0x477c02
    // add ah, dh
    // jbe 0x477c06
    // add dh, bh
    // jbe 0x477c0a
    // add byte ptr [esi], bl
    // if (...) GOTO(0x477c0e)
    // add byte ptr [eax], al
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add dword ptr [edi], eax
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add al, byte ptr [edi]
    // add eax, dword ptr [edi + eax]
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // pop es
    // add eax, 0x90900607
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // test esi, esi
    // mov ebx, ecx
    // if (...) GOTO(0x477c47)
    // mov eax, dword ptr [esp + 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [ebx + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x477cbe)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x477cbe)
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov edx, dword ptr [esp + 0x1c]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, edx
    // if (...) GOTO(0x477c75)
    // mov edi, esi
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x477c77)
    // mov ecx, edx
    // test ecx, ecx
    // if (...) GOTO(0x477c9b)
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, edx
    // if (...) GOTO(0x477c97)
    // mov edi, esi
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov edx, ecx
    // test edx, edx
    // if (...) GOTO(0x477ca5)
    // mov eax, dword ptr [esp + 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esp + 0x14]
    // push edx
    // push eax
    // push ecx
    // push esi
    // mov ecx, ebx
    // CALL(0x4775b0)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // mov eax, 3
    // pop ebx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // sub esp, 0x14
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x20]
    // push edi
    // test ebp, ebp
    // mov dword ptr [esp + 0xc], ecx
    // if (...) GOTO(0x477d93)
    // mov edx, dword ptr [esp + 0x28]
    // test edx, edx
    // if (...) GOTO(0x477d93)
    // mov eax, dword ptr [ecx + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x477d93)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x477d93)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov ebx, dword ptr [esp + 0x2c]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, ebx
    // if (...) GOTO(0x477d28)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x477d2a)
    // mov ecx, ebx
    // test ecx, ecx
    // if (...) GOTO(0x477d93)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, ebx
    // if (...) GOTO(0x477d4a)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov ebx, ecx
    // test ebx, ebx
    // if (...) GOTO(0x477d93)
    // mov ecx, dword ptr [edx + 8]
    // mov eax, dword ptr [edx]
    // mov edi, dword ptr [edx + 4]
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push esi
    // mov esi, dword ptr [edx + 0xc]
    // mov dword ptr [esp + 0x14], eax
    // CALL(0x477560)
    // sub esi, edi
    // mov ecx, dword ptr [esp + 0x10]
    // sub esi, eax
    // push ebx
    // mov eax, esi
    // cdq 
    // sub eax, edx
    // mov edx, dword ptr [esp + 0x18]
    // sar eax, 1
    // add eax, edi
    // push eax
    // push edx
    // push ebp
    // CALL(0x4775b0)
    // pop esi
    // pop edi
    // pop ebp
    // pop ebx
    // add esp, 0x14
    // return;
    // pop edi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x14
    // return;
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // test ebx, ebx
    // push edi
    // mov ebp, ecx
    // if (...) GOTO(0x477db9)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [ebp + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x477e54)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x477e54)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov esi, dword ptr [esp + 0x24]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x477def)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x477df1)
    // mov ecx, esi
    // test ecx, ecx
    // if (...) GOTO(0x477e15)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x477e11)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov esi, ecx
    // test esi, esi
    // if (...) GOTO(0x477e20)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push esi
    // push ebx
    // mov ecx, ebp
    // CALL(0x477280)
    // mov ecx, dword ptr [esp + 0x20]
    // push esi
    // sub ecx, eax
    // mov eax, ecx
    // mov ecx, dword ptr [esp + 0x20]
    // cdq 
    // sub eax, edx
    // push ecx
    // mov edx, eax
    // mov eax, dword ptr [esp + 0x20]
    // sar edx, 1
    // add eax, edx
    // mov ecx, ebp
    // push eax
    // push ebx
    // CALL(0x4775b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // return;
    // sub esp, 0x10
    // mov eax, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x1c]
    // push esi
    // mov esi, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 4], eax
    // add eax, esi
    // mov dword ptr [esp + 0xc], eax
    // mov eax, dword ptr [esp + 0x28]
    // mov dword ptr [esp + 8], edx
    // add edx, eax
    // mov dword ptr [esp + 0x10], edx
    // mov edx, dword ptr [esp + 0x2c]
    // push edx
    // mov edx, dword ptr [esp + 0x1c]
    // lea eax, [esp + 8]
    // push eax
    // push edx
    // CALL(0x477eb0)
    // pop esi
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [esp + 4]
    // sub esp, 0x10
    // test edx, edx
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov ebp, ecx
    // if (...) GOTO(0x477fb1)
    // mov eax, dword ptr [esp + 0x28]
    // test eax, eax
    // if (...) GOTO(0x477fb1)
    // mov ecx, dword ptr [eax]
    // mov esi, dword ptr [eax + 8]
    // mov ebx, dword ptr [eax + 0xc]
    // mov dword ptr [esp + 0x10], ecx
    // mov ecx, dword ptr [eax + 4]
    // mov eax, dword ptr [ebp + 0x5c]
    // test eax, eax
    // mov dword ptr [esp + 0x14], ecx
    // if (...) GOTO(0x477fa2)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x477fa2)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x2c]
    // not ecx
    // dec ecx
    // cmp ecx, eax
    // if (...) GOTO(0x477f1c)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x477f1e)
    // mov ecx, eax
    // test ecx, ecx
    // if (...) GOTO(0x477fb1)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x2c]
    // not ecx
    // dec ecx
    // cmp ecx, eax
    // if (...) GOTO(0x477f4a)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov dword ptr [esp + 0x2c], ecx
    // mov eax, dword ptr [esp + 0x2c]
    // test eax, eax
    // if (...) GOTO(0x477fb1)
    // push edx
    // mov ecx, ebp
    // CALL(0x477250)
    // mov ecx, dword ptr [esp + 0x10]
    // sub esi, ecx
    // sub esi, eax
    // mov eax, esi
    // cdq 
    // sub eax, edx
    // mov esi, eax
    // sar esi, 1
    // add esi, ecx
    // mov ecx, ebp
    // CALL(0x477560)
    // mov ecx, dword ptr [esp + 0x14]
    // sub ebx, ecx
    // sub ebx, eax
    // mov eax, ebx
    // cdq 
    // sub eax, edx
    // mov edx, dword ptr [esp + 0x2c]
    // sar eax, 1
    // add eax, ecx
    // push edx
    // push eax
    // mov eax, dword ptr [esp + 0x2c]
    // push esi
    // push eax
    // mov ecx, ebp
    // CALL(0x4775b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // add esp, 0x10
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // test ebx, ebx
    // push edi
    // mov ebp, ecx
    // if (...) GOTO(0x477fd9)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [ebp + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x478065)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478065)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov esi, dword ptr [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x47800b)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x47800d)
    // mov ecx, esi
    // test ecx, ecx
    // if (...) GOTO(0x478031)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x47802d)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov esi, ecx
    // test esi, esi
    // if (...) GOTO(0x47803c)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push esi
    // push ebx
    // mov ecx, ebp
    // CALL(0x477280)
    // mov edx, dword ptr [esp + 0x1c]
    // mov ecx, eax
    // mov eax, dword ptr [esp + 0x18]
    // push esi
    // sar ecx, 1
    // sub eax, ecx
    // push edx
    // push eax
    // push ebx
    // mov ecx, ebp
    // CALL(0x4775b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // test ebx, ebx
    // push edi
    // mov ebp, ecx
    // if (...) GOTO(0x478099)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [ebp + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x478127)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478127)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov esi, dword ptr [esp + 0x24]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x4780cb)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x4780cd)
    // mov ecx, esi
    // test ecx, ecx
    // if (...) GOTO(0x4780f1)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x4780ed)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov esi, ecx
    // test esi, esi
    // if (...) GOTO(0x4780fc)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push esi
    // push ebx
    // mov ecx, ebp
    // CALL(0x477280)
    // mov ecx, dword ptr [esp + 0x20]
    // mov edx, dword ptr [esp + 0x1c]
    // sub ecx, eax
    // mov eax, dword ptr [esp + 0x18]
    // add eax, ecx
    // push esi
    // push edx
    // push eax
    // push ebx
    // mov ecx, ebp
    // CALL(0x4775b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // test ebx, ebx
    // push edi
    // mov ebp, ecx
    // if (...) GOTO(0x478159)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [ebp + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x4781dd)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4781dd)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov esi, dword ptr [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x478187)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x478189)
    // mov ecx, esi
    // test ecx, ecx
    // if (...) GOTO(0x4781ad)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, esi
    // if (...) GOTO(0x4781a9)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov esi, ecx
    // test esi, esi
    // if (...) GOTO(0x4781b8)
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push esi
    // push ebx
    // mov ecx, ebp
    // CALL(0x477280)
    // mov ecx, dword ptr [esp + 0x18]
    // push esi
    // sub ecx, eax
    // mov eax, dword ptr [esp + 0x20]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, ebp
    // CALL(0x4775b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x10]
    // mov edx, ecx
    // push esi
    // push edi
    // test ebp, ebp
    // mov dword ptr [esp + 0x10], edx
    // if (...) GOTO(0x4782c3)
    // mov esi, dword ptr [esp + 0x1c]
    // test esi, esi
    // if (...) GOTO(0x4782c3)
    // mov eax, dword ptr [edx + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x4782b6)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4782b6)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov ebx, dword ptr [esp + 0x20]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, ebx
    // if (...) GOTO(0x478249)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // if (...) GOTO(0x47824b)
    // mov ecx, ebx
    // test ecx, ecx
    // if (...) GOTO(0x4782c3)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // cmp ecx, ebx
    // if (...) GOTO(0x47826b)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov ebx, ecx
    // test ebx, ebx
    // if (...) GOTO(0x4782c3)
    // push ebx
    // push ebp
    // mov ecx, edx
    // CALL(0x477280)
    // mov esi, dword ptr [esi + 8]
    // mov ecx, dword ptr [esp + 0x10]
    // sub esi, eax
    // mov eax, dword ptr [esp + 0x1c]
    // mov edi, dword ptr [eax + 4]
    // CALL(0x477560)
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebx
    // mov edx, dword ptr [ecx + 0xc]
    // mov ecx, dword ptr [esp + 0x14]
    // sub edx, edi
    // sub edx, eax
    // mov eax, edx
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // add eax, edi
    // push eax
    // push esi
    // push ebp
    // CALL(0x4775b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // pop ecx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // mov eax, dword ptr [esp + 0x18]
    // push ebx
    // mov ebx, dword ptr [esp + 0x18]
    // push esi
    // push edi
    // xor edi, edi
    // mov esi, ecx
    // cmp ebx, edi
    // if (...) GOTO(0x47841c)
    // cmp eax, edi
    // if (...) GOTO(0x47841c)
    // mov dword ptr [0x839aa8], edi
    // mov ecx, dword ptr [esi + 0x14]
    // mov dword ptr [esi + 0x1c], edi
    // mov dword ptr [esi + 0x18], ecx
    // mov ecx, dword ptr [eax]
    // mov edx, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 4]
    // sub edx, ecx
    // mov dword ptr [esp + 0x20], ecx
    // mov ecx, dword ptr [esp + 0x28]
    // push ebp
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0x28], eax
    // mov dword ptr [esp + 0x14], edi
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x47832a)
    // mov edx, dword ptr [esp + 0x10]
    // cmp dword ptr [esp + 0x2c], edi
    // if (...) GOTO(0x478346)
    // mov eax, dword ptr [esp + 0x18]
    // mov ebp, dword ptr [esp + 0x14]
    // inc ebp
    // mov dword ptr [eax], ebx
    // add eax, 4
    // mov dword ptr [esp + 0x14], ebp
    // mov dword ptr [esp + 0x18], eax
    // cmp ebx, edi
    // mov dword ptr [esp + 0x1c], edx
    // if (...) GOTO(0x478356)
    // mov eax, dword ptr [esp + 0x24]
    // xor ebp, ebp
    // if (...) GOTO(0x4783bb)
    // mov dword ptr [0x839aa8], edi
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea edx, [esp + 0x1c]
    // push ecx
    // push edx
    // push ebx
    // mov ecx, esi
    // CALL(0x476ef0)
    // mov ebp, eax
    // test ebp, ebp
    // if (...) GOTO(0x47839a)
    // mov ecx, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x24]
    // sub eax, ebx
    // push eax
    // push ecx
    // push edx
    // push ebx
    // mov ecx, esi
    // CALL(0x477c30)
    // mov dword ptr [0x839a5c], eax
    // xor edi, edi
    // if (...) GOTO(0x4783c0)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x28]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x28]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, esi
    // CALL(0x477c30)
    // xor edi, edi
    // mov dword ptr [0x839a5c], eax
    // mov ecx, esi
    // CALL(0x477580)
    // mov ebx, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esi + 0x1c]
    // add ebx, eax
    // mov eax, dword ptr [esi + 0x18]
    // inc edx
    // mov dword ptr [esp + 0x28], ebx
    // cmp eax, edi
    // mov ebx, ebp
    // mov dword ptr [esi + 0x1c], edx
    // if (...) GOTO(0x4783f8)
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0x24]
    // sub edx, eax
    // add ecx, eax
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0x24], ecx
    // mov dword ptr [esi + 0x18], edi
    // cmp ebp, edi
    // if (...) GOTO(0x478326)
    // mov eax, dword ptr [esp + 0x30]
    // pop ebp
    // cmp eax, edi
    // if (...) GOTO(0x47840f)
    // mov edx, dword ptr [esp + 0x10]
    // mov dword ptr [eax], edx
    // mov eax, dword ptr [esp + 0x24]
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [eax + 4]
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push esi
    // push edi
    // xor edi, edi
    // mov esi, ecx
    // cmp ebx, edi
    // if (...) GOTO(0x478526)
    // cmp dword ptr [esp + 0x1c], edi
    // if (...) GOTO(0x478526)
    // mov dword ptr [0x839aa8], edi
    // mov eax, dword ptr [esi + 0x14]
    // push ebp
    // mov dword ptr [esi + 0x1c], edi
    // mov dword ptr [esi + 0x18], eax
    // mov ecx, dword ptr [esp + 0x20]
    // cmp ebx, edi
    // mov dword ptr [esp + 0x14], ecx
    // if (...) GOTO(0x478471)
    // mov eax, dword ptr [esp + 0x18]
    // xor ebp, ebp
    // if (...) GOTO(0x4784d6)
    // mov dword ptr [0x839aa8], edi
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea edx, [esp + 0x14]
    // push ecx
    // push edx
    // push ebx
    // mov ecx, esi
    // CALL(0x476ef0)
    // mov ebp, eax
    // test ebp, ebp
    // if (...) GOTO(0x4784b5)
    // mov ecx, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x18]
    // sub eax, ebx
    // push eax
    // push ecx
    // push edx
    // push ebx
    // mov ecx, esi
    // CALL(0x477c30)
    // mov dword ptr [0x839a5c], eax
    // xor edi, edi
    // if (...) GOTO(0x4784db)
    // mov edi, ebx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [esp + 0x1c]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, esi
    // CALL(0x477c30)
    // xor edi, edi
    // mov dword ptr [0x839a5c], eax
    // mov ecx, esi
    // CALL(0x477580)
    // mov ebx, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esi + 0x1c]
    // add ebx, eax
    // mov eax, dword ptr [esi + 0x18]
    // inc edx
    // mov dword ptr [esp + 0x1c], ebx
    // cmp eax, edi
    // mov ebx, ebp
    // mov dword ptr [esi + 0x1c], edx
    // if (...) GOTO(0x478513)
    // mov edx, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esp + 0x18]
    // sub edx, eax
    // add ecx, eax
    // mov dword ptr [esp + 0x20], edx
    // mov dword ptr [esp + 0x18], ecx
    // mov dword ptr [esi + 0x18], edi
    // cmp ebp, edi
    // if (...) GOTO(0x47845d)
    // mov eax, dword ptr [esp + 0x1c]
    // pop ebp
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esp + 0x18]
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // xor eax, eax
    // cmp esi, eax
    // mov ebx, ecx
    // if (...) GOTO(0x478547)
    // mov eax, dword ptr [esp + 0x14]
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov dword ptr [0x839aa8], eax
    // push edi
    // mov dword ptr [ebx + 0x1c], eax
    // mov ecx, dword ptr [esp + 0x20]
    // cmp esi, eax
    // mov dword ptr [esp + 0x14], ecx
    // if (...) GOTO(0x478561)
    // xor ebp, ebp
    // if (...) GOTO(0x4785af)
    // mov dword ptr [0x839aa8], eax
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea edx, [esp + 0x14]
    // push ecx
    // push edx
    // push esi
    // mov ecx, ebx
    // CALL(0x476ef0)
    // mov ebp, eax
    // test ebp, ebp
    // if (...) GOTO(0x47858b)
    // sub eax, esi
    // push eax
    // if (...) GOTO(0x478598)
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // mov edx, dword ptr [esp + 0x20]
    // mov eax, dword ptr [esp + 0x1c]
    // push ecx
    // push edx
    // push eax
    // push esi
    // mov ecx, ebx
    // CALL(0x477da0)
    // mov esi, dword ptr [ebx + 0x1c]
    // mov ecx, ebx
    // inc esi
    // mov dword ptr [ebx + 0x1c], esi
    // CALL(0x477580)
    // mov edx, dword ptr [esp + 0x1c]
    // mov esi, ebp
    // add edx, eax
    // xor eax, eax
    // cmp ebp, eax
    // mov dword ptr [esp + 0x1c], edx
    // if (...) GOTO(0x478551)
    // pop edi
    // pop ebp
    // pop esi
    // mov eax, edx
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [ecx + 0x14]
    // xor eax, eax
    // mov dword ptr [ecx + 0x1c], eax
    // mov dword ptr [ecx + 0x18], edx
    // mov edx, dword ptr [esp + 8]
    // mov dword ptr [ecx + 0x3c], eax
    // mov dword ptr [0x839aa0], eax
    // mov dword ptr [0x839aa8], eax
    // mov eax, dword ptr [esp + 4]
    // mov dword ptr [0x839aa4], edx
    // push eax
    // CALL(0x478610)
    // return;
    // // nop
    // mov edx, dword ptr [0x839aa4]
    // push ebx
    // xor ebx, ebx
    // push ebp
    // push esi
    // cmp edx, ebx
    // mov esi, ecx
    // if (...) GOTO(0x478629)
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // mov ebp, dword ptr [esp + 0x10]
    // cmp ebp, ebx
    // if (...) GOTO(0x47863c)
    // mov eax, dword ptr [0x839aa0]
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // cmp dword ptr [esi + 0x5c], ebx
    // if (...) GOTO(0x47864f)
    // mov eax, dword ptr [0x83ad44]
    // mov dword ptr [esi + 0x5c], eax
    // mov edx, dword ptr [0x839aa4]
    // cmp byte ptr [ebp], bl
    // if (...) GOTO(0x47865f)
    // mov eax, dword ptr [0x839aa0]
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push edi
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [0x839aa8]
    // not ecx
    // dec ecx
    // sub edx, eax
    // push ecx
    // lea ecx, [esp + 0x18]
    // push ecx
    // push ebp
    // mov ecx, esi
    // mov dword ptr [esp + 0x20], edx
    // CALL(0x476ef0)
    // mov ebp, eax
    // cmp ebp, ebx
    // if (...) GOTO(0x4786cd)
    // mov edi, dword ptr [esi + 0x1c]
    // mov ecx, esi
    // inc edi
    // mov dword ptr [esi + 0x1c], edi
    // CALL(0x477580)
    // mov edx, dword ptr [0x839aa0]
    // mov dword ptr [0x839aa8], ebx
    // add edx, eax
    // mov dword ptr [0x839aa0], edx
    // mov eax, dword ptr [esi + 0x18]
    // cmp eax, ebx
    // if (...) GOTO(0x4786c5)
    // mov ecx, dword ptr [0x839aa4]
    // sub ecx, eax
    // mov dword ptr [0x839aa4], ecx
    // mov dword ptr [esi + 0x18], ebx
    // mov edx, dword ptr [0x839aa4]
    // if (...) GOTO(0x478660)
    // push(0x4c3f70)  // ptr?
    // mov ecx, esi
    // CALL(0x477250)
    // mov ecx, dword ptr [0x839aa8]
    // pop edi
    // add ecx, eax
    // mov eax, dword ptr [0x839aa0]
    // pop esi
    // pop ebp
    // mov dword ptr [0x839aa8], ecx
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [0x839aa8]
    // push esi
    // push edi
    // xor edi, edi
    // cmp eax, edi
    // mov esi, ecx
    // if (...) GOTO(0x478729)
    // CALL(0x477580)
    // mov ecx, dword ptr [0x839aa0]
    // add ecx, eax
    // mov dword ptr [0x839aa0], ecx
    // mov eax, dword ptr [esi + 0x1c]
    // inc eax
    // mov dword ptr [esi + 0x1c], eax
    // mov dword ptr [0x839aa4], edi
    // mov dword ptr [esi + 0x30], edi
    // mov dword ptr [esi + 0x38], edi
    // mov dword ptr [esi + 0x34], edi
    // mov dword ptr [esi + 0x3c], edi
    // mov eax, dword ptr [0x839aa0]
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [ecx + 0x14]
    // xor eax, eax
    // mov dword ptr [ecx + 0x18], edx
    // mov edx, dword ptr [esp + 8]
    // mov dword ptr [ecx + 0x1c], eax
    // mov dword ptr [0x839a9c], edx
    // mov edx, dword ptr [esp + 0xc]
    // mov dword ptr [0x839aa8], eax
    // mov dword ptr [0x839aa0], edx
    // mov edx, dword ptr [esp + 0x10]
    // mov dword ptr [0x839aa4], edx
    // mov dword ptr [ecx + 0x3c], eax
    // mov byte ptr [0x839658], al
    // mov eax, dword ptr [esp + 4]
    // push eax
    // CALL(0x4787a0)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov edx, dword ptr [0x839aa4]
    // push ebx
    // test edx, edx
    // push ebp
    // mov ebx, ecx
    // if (...) GOTO(0x4787b7)
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // mov ebp, dword ptr [esp + 0x10]
    // test ebp, ebp
    // if (...) GOTO(0x4787ca)
    // mov eax, dword ptr [0x839aa0]
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // cmp byte ptr [ebp], 0
    // if (...) GOTO(0x4787db)
    // mov eax, dword ptr [0x839aa0]
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // push esi
    // push edi
    // mov al, byte ptr [0x839658]
    // test al, al
    // if (...) GOTO(0x478833)
    // mov edi, 0x4c3f70
    // or ecx, 0xffffffff
    // xor eax, eax
    // push(0x4c3f70)  // ptr?
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x839658
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, ebx
    // CALL(0x477250)
    // mov ecx, dword ptr [0x839aa8]
    // mov edx, dword ptr [0x839aa4]
    // add ecx, eax
    // mov dword ptr [0x839aa8], ecx
    // mov esi, dword ptr [0x839aa8]
    // cmp esi, edx
    // if (...) GOTO(0x478865)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // sub edx, esi
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + 0x10]
    // push ecx
    // push eax
    // push ebp
    // mov ecx, ebx
    // mov dword ptr [esp + 0x1c], edx
    // CALL(0x476ef0)
    // mov edx, eax
    // mov dword ptr [esp + 0x18], edx
    // if (...) GOTO(0x47886b)
    // mov dword ptr [esp + 0x18], ebp
    // mov edx, ebp
    // test edx, edx
    // if (...) GOTO(0x478938)
    // mov edi, 0x839658
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov esi, ebp
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov eax, ecx
    // mov ecx, edx
    // sub ecx, ebp
    // add eax, 0x839658
    // mov edx, ecx
    // mov edi, eax
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // sub eax, ebp
    // mov ebp, dword ptr [esp + 0x18]
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov byte ptr [eax + ebp], 0
    // mov eax, 0x839658
    // test eax, eax
    // if (...) GOTO(0x4788d9)
    // mov edi, eax
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov edx, dword ptr [0x839a9c]
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [0x839aa0]
    // push ecx
    // push edx
    // push(0x839658)  // ptr?
    // mov ecx, ebx
    // CALL(0x477c30)
    // xor esi, esi
    // mov byte ptr [0x839658], 0
    // mov dword ptr [0x839aa8], esi
    // mov edi, dword ptr [ebx + 0x1c]
    // inc edi
    // mov ecx, ebx
    // mov dword ptr [ebx + 0x1c], edi
    // CALL(0x477580)
    // mov edx, dword ptr [0x839aa0]
    // add edx, eax
    // mov dword ptr [0x839aa0], edx
    // mov eax, dword ptr [ebx + 0x18]
    // cmp eax, esi
    // if (...) GOTO(0x47892d)
    // mov edx, dword ptr [0x839aa4]
    // mov ecx, dword ptr [0x839a9c]
    // sub edx, eax
    // mov dword ptr [0x839aa4], edx
    // mov eax, dword ptr [ebx + 0x18]
    // add ecx, eax
    // mov dword ptr [0x839a9c], ecx
    // mov dword ptr [ebx + 0x18], esi
    // mov edx, dword ptr [0x839aa4]
    // if (...) GOTO(0x4787dd)
    // mov edi, ebp
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edx, ecx
    // mov edi, 0x839658
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // mov eax, dword ptr [0x839aa0]
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // // nop
    // mov al, byte ptr [0x839658]
    // push ebx
    // xor ebx, ebx
    // push esi
    // cmp al, bl
    // mov esi, ecx
    // if (...) GOTO(0x4789cd)
    // mov eax, 0x839658
    // test eax, eax
    // if (...) GOTO(0x4789b1)
    // push edi
    // mov edi, eax
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // mov edx, dword ptr [0x839a9c]
    // not ecx
    // dec ecx
    // push ecx
    // mov ecx, dword ptr [0x839aa0]
    // push ecx
    // push edx
    // push(0x839658)  // ptr?
    // mov ecx, esi
    // CALL(0x477c30)
    // pop edi
    // mov ecx, esi
    // CALL(0x477580)
    // mov ecx, dword ptr [0x839aa0]
    // add ecx, eax
    // mov dword ptr [0x839aa0], ecx
    // mov eax, dword ptr [esi + 0x1c]
    // inc eax
    // mov dword ptr [esi + 0x1c], eax
    // mov byte ptr [0x839658], bl
    // mov dword ptr [0x839aa4], ebx
    // mov dword ptr [esi + 0x30], ebx
    // mov dword ptr [esi + 0x38], ebx
    // mov dword ptr [esi + 0x34], ebx
    // mov dword ptr [esi + 0x3c], ebx
    // mov eax, dword ptr [0x839aa0]
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4789ff)
    // mov eax, 7
    // return;
    // mov eax, dword ptr [esp + 4]
    // test eax, eax
    // if (...) GOTO(0x478a0f)
    // mov eax, 3
    // return;
    // mov eax, dword ptr [eax + 4]
    // mov edx, dword ptr [ecx]
    // push eax
    // CALL(dword)
    // xor eax, eax
    // return;
    // push esi
    // mov esi, ecx
    // push(0x50)
    // lea ecx, [esi + 0xb4]
    // CALL(0x492920)
    // mov dword ptr [esi + 0xb0], 0
    // lea eax, [esi + 0x1b4]
    // mov ecx, 0x28
    // mov edx, 0xfffffffe
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x478a55)
    // mov dword ptr [eax], 0
    // mov dword ptr [eax - 0xa0], edx
    // add eax, 4
    // dec ecx
    // if (...) GOTO(0x478a4a)
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // push(0xa)
    // lea ecx, [esi + 0x254]
    // CALL(0x492920)
    // mov dword ptr [esi + 0x2b4], 0
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [ecx + 0x2b4]
    // push 0
    // inc edx
    // mov eax, edx
    // mov dword ptr [ecx + 0x2b4], edx
    // cmp eax, 0x14
    // if (...) GOTO(0x478abb)
    // push(0x4e4280)  // ptr?
    // push(0x4e428c)  // ptr?
    // push 0
    // CALL(dword)
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x18]
    // push eax
    // mov eax, dword ptr [esp + 0x18]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push eax
    // mov eax, dword ptr [esp + 0x18]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push eax
    // push edx
    // add ecx, 0x254
    // CALL(0x4929b0)
    // return;
    // CALL(0x405095)
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x18]
    // push esi
    // mov esi, dword ptr [esp + 0x20]
    // mov dword ptr [esp + 4], eax
    // add eax, esi
    // mov dword ptr [esp + 0xc], eax
    // mov eax, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 8], edx
    // add edx, eax
    // mov dword ptr [esp + 0x10], edx
    // mov edx, dword ptr [esp + 0x28]
    // lea eax, [esp + 4]
    // push edx
    // push eax
    // CALL(0x478b50)
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478b43)
    // mov edx, dword ptr [esp + 4]
    // mov eax, dword ptr [ecx]
    // push edx
    // push 0
    // CALL(dword)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478b5f)
    // mov eax, 7
    // return;
    // mov edx, dword ptr [esp + 8]
    // mov eax, dword ptr [ecx]
    // push edx
    // mov edx, dword ptr [esp + 8]
    // push edx
    // CALL(dword)
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478ba7)
    // mov edx, dword ptr [esp + 0x14]
    // push 1
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [ecx]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push edx
    // mov edx, dword ptr [esp + 0x18]
    // push edx
    // CALL(dword)
    // return;
    // CALL(0x405098)
    // // nop
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478bd5)
    // mov eax, dword ptr [esp + 0x10]
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // mov edx, dword ptr [ecx]
    // push 1
    // push eax
    // mov eax, dword ptr [esp + 0x18]
    // push eax
    // push esi
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // push eax
    // CALL(dword)
    // pop esi
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478c05)
    // mov eax, dword ptr [esp + 0x10]
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // mov edx, dword ptr [ecx]
    // push 1
    // push eax
    // mov eax, dword ptr [esp + 0x18]
    // push eax
    // mov eax, dword ptr [esp + 0x14]
    // push eax
    // push esi
    // push eax
    // CALL(dword)
    // pop esi
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478c24)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x478c26)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // cmp eax, 8
    // if (...) GOTO(0x478c51)
    // cmp eax, 0x10
    // if (...) GOTO(0x478c6c)
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push edx
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(0x494d30)
    // pop esi
    // return;
    // mov edx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0xc]
    // push edx
    // mov edx, dword ptr [esp + 0xc]
    // push eax
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x485d40)
    // pop esi
    // return;
    // push esi
    // mov esi, ecx
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478c84)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x478c86)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // cmp eax, 8
    // if (...) GOTO(0x478cb1)
    // cmp eax, 0x10
    // if (...) GOTO(0x478ccc)
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push edx
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(0x494f00)
    // pop esi
    // return;
    // mov edx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esp + 0xc]
    // push edx
    // mov edx, dword ptr [esp + 0xc]
    // push eax
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x485e80)
    // pop esi
    // return;
    // sub esp, 0x84
    // push ebx
    // mov ebx, dword ptr [esp + 0x8c]
    // push ebp
    // push esi
    // test ebx, ebx
    // mov dword ptr [esp + 0xc], ecx
    // if (...) GOTO(0x478cf9)
    // pop esi
    // pop ebp
    // mov eax, 3
    // pop ebx
    // add esp, 0x84
    // return;
    // push edi
    // mov edi, 0x4e4218
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push(0x4e4218)  // ptr?
    // push ebx
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x478d4a)
    // mov edi, 0x4e4218
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // mov edi, 0x4e4218
    // mov ebp, dword ptr [esp + 0x9c]
    // lea ebx, [ebx + ecx + 1]
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // or eax, 0xffffffff
    // sub eax, ecx
    // add ebp, eax
    // if (...) GOTO(0x478d51)
    // mov ebp, dword ptr [esp + 0x9c]
    // mov ecx, 0x20
    // mov esi, ebx
    // lea edi, [esp + 0x14]
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov al, byte ptr [esp + 0x17]
    // pop edi
    // cmp al, 8
    // if (...) GOTO(0x478d78)
    // pop esi
    // pop ebp
    // mov eax, 0x17
    // pop ebx
    // add esp, 0x84
    // return;
    // mov esi, dword ptr [esp + 0xc]
    // mov ecx, esi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x478dbe)
    // CALL(0x492460)
    // cmp eax, 8
    // if (...) GOTO(0x478dbe)
    // mov eax, dword ptr [esp + 0xa4]
    // mov ecx, dword ptr [esp + 0xa0]
    // mov edx, dword ptr [esp + 0x9c]
    // push eax
    // push ecx
    // push edx
    // push ebp
    // push ebx
    // mov ecx, esi
    // CALL(0x495420)
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x84
    // return;
    // mov eax, dword ptr [esp + 0xa4]
    // mov ecx, dword ptr [esp + 0xa0]
    // mov edx, dword ptr [esp + 0x9c]
    // push eax
    // push ecx
    // push edx
    // push ebp
    // push ebx
    // mov ecx, esi
    // CALL(0x495100)
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x84
    // return;
    // CALL(0x405099)
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478e90)
    // mov edi, dword ptr [esp + 0x10]
    // test edi, edi
    // if (...) GOTO(0x478e90)
    // mov ebx, dword ptr [esp + 0x14]
    // test ebx, ebx
    // if (...) GOTO(0x478e90)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // cmp edi, eax
    // if (...) GOTO(0x478e90)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478e31)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x478e33)
    // xor eax, eax
    // cmp ebx, eax
    // if (...) GOTO(0x478e90)
    // push ebx
    // push edi
    // mov ecx, esi
    // CALL(0x4796a0)
    // mov ecx, dword ptr [esi + 4]
    // mov edi, eax
    // test ecx, ecx
    // if (...) GOTO(0x478e50)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // test edi, edi
    // if (...) GOTO(0x478e90)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478e65)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x478e67)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // cmp eax, 8
    // if (...) GOTO(0x478e86)
    // cmp eax, 0x10
    // if (...) GOTO(0x478e7b)
    // mov eax, dword ptr [edi]
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // mov ax, word ptr [edi]
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // mov al, byte ptr [edi]
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // xor eax, eax
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478eb7)
    // pop edi
    // pop esi
    // mov eax, 7
    // pop ebx
    // return;
    // mov edi, dword ptr [esp + 0x10]
    // test edi, edi
    // if (...) GOTO(0x478f45)
    // mov ebx, dword ptr [esp + 0x14]
    // test ebx, ebx
    // if (...) GOTO(0x478f45)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // cmp edi, eax
    // if (...) GOTO(0x478f45)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478ee8)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x478eea)
    // xor eax, eax
    // cmp ebx, eax
    // if (...) GOTO(0x478f45)
    // push ebx
    // push edi
    // mov ecx, esi
    // CALL(0x4796a0)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x478f37)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478f0e)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x478f10)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // cmp eax, 8
    // if (...) GOTO(0x478f31)
    // cmp eax, 0x10
    // if (...) GOTO(0x478f27)
    // pop edi
    // pop esi
    // mov eax, 0x17
    // pop ebx
    // return;
    // mov cx, word ptr [esp + 0x18]
    // mov word ptr [edi], cx
    // if (...) GOTO(0x478f37)
    // mov dl, byte ptr [esp + 0x18]
    // mov byte ptr [edi], dl
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x478f45)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // pop edi
    // pop esi
    // xor eax, eax
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // push -1
    // push(0x4b7bcb)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x198
    // push esi
    // push edi
    // lea ecx, [esp + 8]
    // CALL(0x492d80)
    // mov edx, dword ptr [esp + 0x1b0]
    // xor eax, eax
    // cmp edx, eax
    // mov dword ptr [esp + 0x1a8], eax
    // if (...) GOTO(0x479180)
    // cmp dword ptr [esp + 0x1b4], eax
    // if (...) GOTO(0x479180)
    // cmp dword ptr [esp + 0x1b8], eax
    // if (...) GOTO(0x479180)
    // mov edi, edx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // push ebx
    // sub edi, ecx
    // lea ebx, [esp + 0xa0]
    // mov esi, edi
    // mov edi, ebx
    // mov ebx, ecx
    // or ecx, 0xffffffff
    // mov byte ptr [esp + 0xa0], al
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, ebx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov edi, edx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + ecx + 0xa0]
    // lea ecx, [esp + 0xa0]
    // cmp eax, ecx
    // if (...) GOTO(0x479016)
    // cmp byte ptr [eax], 0x2e
    // if (...) GOTO(0x47900b)
    // dec eax
    // lea edx, [esp + 0xa0]
    // cmp eax, edx
    // if (...) GOTO(0x478ff8)
    // if (...) GOTO(0x479016)
    // lea ecx, [esp + 0xa0]
    // cmp eax, ecx
    // if (...) GOTO(0x479067)
    // mov eax, dword ptr [0x83fe5c]
    // dec eax
    // if (...) GOTO(0x479036)
    // dec eax
    // lea edx, [esp + 0xa0]
    // if (...) GOTO(0x47902f)
    // mov edi, 0x4e4234
    // if (...) GOTO(0x479042)
    // mov edi, 0x4e42b8
    // if (...) GOTO(0x479042)
    // lea edx, [esp + 0xa0]
    // mov edi, 0x4e42b0
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov ebx, ecx
    // mov edi, edx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, ebx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // lea eax, [esp + 0xa0]
    // push 1
    // push eax
    // lea ecx, [esp + 0x14]
    // CALL(0x492dd0)
    // test eax, eax
    // pop ebx
    // if (...) GOTO(0x4790af)
    // lea ecx, [esp + 8]
    // mov dword ptr [esp + 0x1a8], 0xffffffff
    // CALL(0x492dc0)
    // pop edi
    // mov eax, 6
    // pop esi
    // mov ecx, dword ptr [esp + 0x198]
    // mov dword ptr fs:[0], ecx
    // add esp, 0x1a4
    // return;
    // mov ecx, dword ptr [esp + 0x10]
    // mov esi, dword ptr [esp + 0xc]
    // push 0
    // push ecx
    // CALL(dword)
    // mov edi, 0x4e4218
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push(0x4e4218)  // ptr?
    // push esi
    // CALL(0x4a6ad0)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4790f3)
    // mov edi, 0x4e4218
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea esi, [esi + ecx + 1]
    // mov ecx, 0x20
    // lea edi, [esp + 0x1c]
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cmp byte ptr [esp + 0x1c], 0xa
    // if (...) GOTO(0x479180)
    // cmp byte ptr [esp + 0x1e], 1
    // if (...) GOTO(0x479180)
    // mov edx, dword ptr [esp + 0x20]
    // mov eax, dword ptr [esp + 0x24]
    // mov ecx, dword ptr [esp + 0x1b4]
    // and edx, 0xffff
    // and eax, 0xffff
    // sub eax, edx
    // mov edx, dword ptr [esp + 0x22]
    // inc eax
    // and edx, 0xffff
    // mov dword ptr [ecx], eax
    // mov eax, dword ptr [esp + 0x26]
    // mov ecx, dword ptr [esp + 0x1b8]
    // and eax, 0xffff
    // sub eax, edx
    // inc eax
    // mov dword ptr [ecx], eax
    // lea ecx, [esp + 8]
    // CALL(0x492e80)
    // lea ecx, [esp + 8]
    // mov dword ptr [esp + 0x1a8], 0xffffffff
    // CALL(0x492dc0)
    // pop edi
    // xor eax, eax
    // pop esi
    // mov ecx, dword ptr [esp + 0x198]
    // mov dword ptr fs:[0], ecx
    // add esp, 0x1a4
    // return;
    // lea ecx, [esp + 8]
    // mov dword ptr [esp + 0x1a8], 0xffffffff
    // CALL(0x492dc0)
    // mov ecx, dword ptr [esp + 0x1a0]
    // pop edi
    // mov eax, 3
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x1a4
    // return;
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x18]
    // mov ebx, ecx
    // test edi, edi
    // if (...) GOTO(0x479551)
    // mov esi, dword ptr [esp + 0x1c]
    // test esi, esi
    // if (...) GOTO(0x479551)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x4791e7)
    // mov eax, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // mov ecx, dword ptr [esi]
    // test ecx, ecx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x47922b)
    // mov eax, dword ptr [edi + 4]
    // mov ebp, dword ptr [edi]
    // push 0
    // push eax
    // push ebp
    // push ebx
    // mov dword ptr [esp + 0x28], eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47922b)
    // mov ecx, dword ptr [esi + 0x24]
    // push ecx
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [ecx + 0x18]
    // push edx
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push ecx
    // push ebp
    // push ecx
    // push ebp
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x479276)
    // mov ebp, dword ptr [edi + 8]
    // mov eax, dword ptr [ecx + 0x18]
    // sub ebp, eax
    // mov eax, dword ptr [edi + 4]
    // push 0
    // push eax
    // push ebp
    // push ebx
    // mov dword ptr [esp + 0x28], eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x479276)
    // mov edx, dword ptr [esi + 0x24]
    // mov ecx, dword ptr [esp + 0x10]
    // push edx
    // mov edx, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [ecx + 0x18]
    // push edx
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push ecx
    // push ebp
    // push ecx
    // push ebp
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov ecx, dword ptr [esi + 8]
    // test ecx, ecx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x4792c0)
    // mov ebp, dword ptr [edi + 0xc]
    // mov edx, dword ptr [ecx + 0x1c]
    // mov eax, dword ptr [edi]
    // sub ebp, edx
    // push 0
    // push ebp
    // push eax
    // push ebx
    // mov dword ptr [esp + 0x2c], eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4792c0)
    // mov edx, dword ptr [esi + 0x24]
    // mov ecx, dword ptr [esp + 0x10]
    // push edx
    // mov edx, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [ecx + 0x18]
    // push edx
    // push ecx
    // mov ecx, dword ptr [esp + 0x28]
    // push ebp
    // push ecx
    // push ebp
    // push ecx
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov ecx, dword ptr [esi + 0xc]
    // test ecx, ecx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x479310)
    // mov ebp, dword ptr [edi + 8]
    // mov eax, dword ptr [ecx + 0x18]
    // mov edx, dword ptr [ecx + 0x1c]
    // sub ebp, eax
    // mov eax, dword ptr [edi + 0xc]
    // push 0
    // sub eax, edx
    // push eax
    // push ebp
    // push ebx
    // mov dword ptr [esp + 0x28], eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x479310)
    // mov edx, dword ptr [esi + 0x24]
    // mov ecx, dword ptr [esp + 0x10]
    // push edx
    // mov edx, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [ecx + 0x18]
    // push edx
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push ecx
    // push ebp
    // push ecx
    // push ebp
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov edx, dword ptr [esi + 0x10]
    // test edx, edx
    // if (...) GOTO(0x479388)
    // mov ecx, dword ptr [edi + 4]
    // mov eax, dword ptr [edi]
    // mov ebp, dword ptr [edi + 8]
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [edx + 0x1c]
    // sub ebp, eax
    // mov dword ptr [esp + 0x10], ecx
    // mov ecx, dword ptr [esi]
    // test ecx, ecx
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x479341)
    // mov ecx, dword ptr [ecx + 0x18]
    // add eax, ecx
    // sub ebp, ecx
    // mov dword ptr [esp + 0x1c], eax
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47934b)
    // sub ebp, dword ptr [ecx + 0x18]
    // mov ecx, dword ptr [esp + 0x10]
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebp
    // push ecx
    // push eax
    // push 0
    // push 0
    // push edx
    // mov ecx, ebx
    // CALL(0x476140)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x479388)
    // mov edx, dword ptr [esi + 0x24]
    // mov ecx, dword ptr [esp + 0x10]
    // push edx
    // mov edx, dword ptr [esp + 0x1c]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push ebp
    // push edx
    // push ecx
    // push edx
    // push ecx
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov eax, dword ptr [esi + 0x14]
    // test eax, eax
    // if (...) GOTO(0x479402)
    // mov edx, dword ptr [eax + 0x1c]
    // mov eax, dword ptr [edi + 0xc]
    // mov ecx, dword ptr [edi]
    // mov ebp, dword ptr [edi + 8]
    // mov dword ptr [esp + 0x10], edx
    // sub eax, edx
    // mov edx, dword ptr [esi + 8]
    // sub ebp, ecx
    // test edx, edx
    // mov dword ptr [esp + 0x1c], ecx
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x4793bc)
    // mov edx, dword ptr [edx + 0x18]
    // sub ebp, edx
    // add ecx, edx
    // mov dword ptr [esp + 0x1c], ecx
    // mov edx, dword ptr [esi + 0xc]
    // test edx, edx
    // if (...) GOTO(0x4793c6)
    // sub ebp, dword ptr [edx + 0x18]
    // mov edx, dword ptr [esp + 0x10]
    // push edx
    // push ebp
    // push eax
    // mov eax, dword ptr [esi + 0x14]
    // push ecx
    // push 0
    // push 0
    // push eax
    // mov ecx, ebx
    // CALL(0x476140)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x479402)
    // mov ecx, dword ptr [esi + 0x24]
    // mov edx, dword ptr [esp + 0x10]
    // push ecx
    // mov ecx, dword ptr [esp + 0x20]
    // push edx
    // mov edx, dword ptr [esp + 0x20]
    // push ebp
    // push edx
    // push ecx
    // push edx
    // push ecx
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov edx, dword ptr [esi + 0x18]
    // test edx, edx
    // if (...) GOTO(0x47947a)
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [edx + 0x18]
    // mov ebp, dword ptr [edi + 0xc]
    // mov dword ptr [esp + 0x1c], eax
    // mov eax, dword ptr [edi + 4]
    // mov dword ptr [esp + 0x10], ecx
    // mov ecx, dword ptr [esi]
    // sub ebp, eax
    // test ecx, ecx
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x479433)
    // mov ecx, dword ptr [ecx + 0x1c]
    // add eax, ecx
    // sub ebp, ecx
    // mov dword ptr [esp + 0x18], eax
    // mov ecx, dword ptr [esi + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47943d)
    // sub ebp, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [esp + 0x10]
    // push ebp
    // push ecx
    // push eax
    // mov eax, dword ptr [esp + 0x28]
    // mov ecx, ebx
    // push eax
    // push 0
    // push 0
    // push edx
    // CALL(0x476140)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47947a)
    // mov ecx, dword ptr [esi + 0x24]
    // mov edx, dword ptr [esp + 0x10]
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebp
    // push edx
    // mov edx, dword ptr [esp + 0x28]
    // push ecx
    // push edx
    // push ecx
    // push edx
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov eax, dword ptr [esi + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x4794f5)
    // mov ecx, dword ptr [eax + 0x18]
    // mov eax, dword ptr [edi + 8]
    // mov ebp, dword ptr [edi + 0xc]
    // mov edx, dword ptr [esi + 4]
    // mov dword ptr [esp + 0x10], ecx
    // sub eax, ecx
    // mov ecx, dword ptr [edi + 4]
    // mov dword ptr [esp + 0x1c], eax
    // sub ebp, ecx
    // mov dword ptr [esp + 0x18], ecx
    // test edx, edx
    // if (...) GOTO(0x4794af)
    // mov edx, dword ptr [edx + 0x1c]
    // add ecx, edx
    // sub ebp, edx
    // mov dword ptr [esp + 0x18], ecx
    // mov edx, dword ptr [esi + 0xc]
    // test edx, edx
    // if (...) GOTO(0x4794b9)
    // sub ebp, dword ptr [edx + 0x1c]
    // mov edx, dword ptr [esp + 0x10]
    // push ebp
    // push edx
    // push ecx
    // push eax
    // mov eax, dword ptr [esi + 0x1c]
    // push 0
    // push 0
    // push eax
    // mov ecx, ebx
    // CALL(0x476140)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // if (...) GOTO(0x4794f5)
    // mov ecx, dword ptr [esi + 0x24]
    // mov edx, dword ptr [esp + 0x10]
    // push ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // push ebp
    // push edx
    // mov edx, dword ptr [esp + 0x28]
    // push ecx
    // push edx
    // push ecx
    // push edx
    // push eax
    // mov ecx, ebx
    // CALL(0x475e10)
    // mov eax, dword ptr [esi + 0x20]
    // test eax, eax
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x479551)
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [edi + 4]
    // mov eax, dword ptr [edi + 8]
    // mov edi, dword ptr [edi + 0xc]
    // mov ebp, dword ptr [esi + 0x18]
    // sub eax, edx
    // sub edi, ecx
    // test ebp, ebp
    // if (...) GOTO(0x47951d)
    // mov ebp, dword ptr [ebp + 0x18]
    // add edx, ebp
    // sub eax, ebp
    // mov ebp, dword ptr [esi + 0x10]
    // test ebp, ebp
    // if (...) GOTO(0x47952b)
    // mov ebp, dword ptr [ebp + 0x1c]
    // add ecx, ebp
    // sub edi, ebp
    // mov ebp, dword ptr [esi + 0x1c]
    // test ebp, ebp
    // if (...) GOTO(0x479535)
    // sub eax, dword ptr [ebp + 0x18]
    // mov esi, dword ptr [esi + 0x14]
    // test esi, esi
    // if (...) GOTO(0x47953f)
    // sub edi, dword ptr [esi + 0x1c]
    // push edi
    // push eax
    // mov eax, dword ptr [esp + 0x20]
    // push ecx
    // push edx
    // push ecx
    // push edx
    // push eax
    // mov ecx, ebx
    // CALL(0x475fb0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0x14]
    // push ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push ebp
    // mov ebp, dword ptr [esp + 0xc]
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x18]
    // mov esi, ecx
    // push eax
    // push edi
    // lea ecx, [ebp + 1]
    // push ebx
    // push ecx
    // mov ecx, esi
    // CALL(0x478bb0)
    // mov edx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0x20]
    // push edx
    // lea ecx, [ebx - 1]
    // push eax
    // push ecx
    // push ebp
    // mov ecx, esi
    // CALL(0x478bb0)
    // mov eax, dword ptr [esp + 0x20]
    // mov edx, dword ptr [esp + 0x24]
    // dec eax
    // push edx
    // push eax
    // push edi
    // push ebp
    // mov ecx, esi
    // CALL(0x478be0)
    // mov ecx, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x20]
    // push ecx
    // inc edi
    // push edx
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(0x478be0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // test eax, eax
    // if (...) GOTO(0x4795e0)
    // mov eax, 3
    // return;
    // mov edx, dword ptr [esp + 0xc]
    // push edx
    // mov edx, dword ptr [esp + 0xc]
    // push edx
    // mov edx, dword ptr [eax + 0xc]
    // dec edx
    // push edx
    // mov edx, dword ptr [eax + 8]
    // dec edx
    // push edx
    // mov edx, dword ptr [eax + 4]
    // mov eax, dword ptr [eax]
    // push edx
    // push eax
    // CALL(0x479560)
    // xor eax, eax
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // push ebp
    // mov ebp, dword ptr [esp + 0x14]
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // push edi
    // push ebx
    // inc eax
    // push ebp
    // mov esi, ecx
    // push eax
    // CALL(0x478c10)
    // mov ecx, dword ptr [esp + 0x20]
    // mov eax, dword ptr [esp + 0x14]
    // push edi
    // lea edx, [ebp - 1]
    // push ecx
    // push edx
    // push eax
    // mov ecx, esi
    // CALL(0x478c10)
    // mov ecx, dword ptr [esp + 0x20]
    // mov edx, dword ptr [esp + 0x14]
    // push edi
    // push ecx
    // push ebx
    // push edx
    // mov ecx, esi
    // CALL(0x478c70)
    // mov eax, dword ptr [esp + 0x20]
    // push edi
    // inc ebx
    // push eax
    // push ebx
    // push ebp
    // mov ecx, esi
    // CALL(0x478c70)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [esp + 4]
    // test eax, eax
    // if (...) GOTO(0x479680)
    // mov eax, 0x10
    // return;
    // mov edx, dword ptr [esp + 8]
    // push edx
    // mov edx, dword ptr [eax + 0xc]
    // dec edx
    // push edx
    // mov edx, dword ptr [eax + 8]
    // dec edx
    // push edx
    // mov edx, dword ptr [eax + 4]
    // mov eax, dword ptr [eax]
    // push edx
    // push eax
    // CALL(0x479610)
    // xor eax, eax
    // return;
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4796b7)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4796b9)
    // xor eax, eax
    // mov ebp, dword ptr [esp + 0x14]
    // cmp ebp, eax
    // if (...) GOTO(0x4797e4)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4796d6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4796d8)
    // xor eax, eax
    // mov ebx, dword ptr [esp + 0x18]
    // cmp ebx, eax
    // if (...) GOTO(0x4797e4)
    // mov ecx, dword ptr [esi + 4]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4797e4)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x479707)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x479709)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // add eax, -8
    // cmp eax, 0x18
    // if (...) GOTO(0x4797e4)
    // xor ecx, ecx
    // mov cl, byte ptr [eax + 0x479804]
    // if (...) GOTO(dword)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x479743)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // imul eax, ebx
    // add eax, edi
    // pop edi
    // add eax, ebp
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // xor eax, eax
    // imul eax, ebx
    // add eax, edi
    // pop edi
    // add eax, ebp
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x479771)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // imul eax, ebx
    // add eax, ebp
    // lea eax, [edi + eax*2]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // xor eax, eax
    // imul eax, ebx
    // add eax, ebp
    // lea eax, [edi + eax*2]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4797a2)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // imul eax, ebx
    // add eax, ebp
    // lea ecx, [edi + eax*2]
    // pop edi
    // pop esi
    // pop ebp
    // add eax, ecx
    // pop ebx
    // return;
    // xor eax, eax
    // imul eax, ebx
    // add eax, ebp
    // lea ecx, [edi + eax*2]
    // pop edi
    // pop esi
    // pop ebp
    // add eax, ecx
    // pop ebx
    // return;
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4797d3)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // imul eax, ebx
    // add eax, ebp
    // lea eax, [edi + eax*4]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // xor eax, eax
    // imul eax, ebx
    // add eax, ebp
    // lea eax, [edi + eax*4]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // lea ecx, [ecx]
    // xchg edi, eax
    // inc edi
    // add byte ptr [ebx - 0x69], dl
    // inc edi
    // add byte ptr [edx - 0x4affb869], al
    // xchg edi, eax
    // inc edi
    // add ah, ah
    // xchg edi, eax
    // inc edi
    // add byte ptr [eax], al
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 1
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 2
    // add al, 4
    // add al, 4
    // add al, 4
    // add al, 3
    // // nop
    // // nop
    // // nop
    // xor eax, eax
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push edi
    // mov edi, ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push eax
    // push ecx
    // mov ecx, edi
    // CALL(0x4796a0)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x479854)
    // mov al, byte ptr [esp + 0x14]
    // pop edi
    // pop esi
    // return;
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x479865)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x479867)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // push ebx
    // cmp eax, 0x10
    // if (...) GOTO(0x47987e)
    // cmp eax, 0x18
    // if (...) GOTO(0x479879)
    // cmp eax, 0x20
    // if (...) GOTO(0x4798a6)
    // mov bl, byte ptr [esi + 2]
    // if (...) GOTO(0x4798aa)
    // mov ecx, dword ptr [0x83ad50]
    // xor ebx, ebx
    // mov bx, word ptr [esi]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // cmp eax, 1
    // if (...) GOTO(0x47989e)
    // sar ebx, 8
    // and bl, 0xf8
    // if (...) GOTO(0x4798aa)
    // sar ebx, 7
    // and bl, 0xf8
    // if (...) GOTO(0x4798aa)
    // mov bl, byte ptr [esp + 0x18]
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4798b8)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov al, bl
    // pop ebx
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push edi
    // mov edi, ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push eax
    // push ecx
    // mov ecx, edi
    // CALL(0x4796a0)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x4798e4)
    // mov al, byte ptr [esp + 0x14]
    // pop edi
    // pop esi
    // return;
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4798f5)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4798f7)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // push ebx
    // cmp eax, 0x10
    // if (...) GOTO(0x47990e)
    // cmp eax, 0x18
    // if (...) GOTO(0x479909)
    // cmp eax, 0x20
    // if (...) GOTO(0x479936)
    // mov bl, byte ptr [esi + 1]
    // if (...) GOTO(0x47993a)
    // mov ecx, dword ptr [0x83ad50]
    // xor ebx, ebx
    // mov bx, word ptr [esi]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // cmp eax, 1
    // if (...) GOTO(0x47992e)
    // sar ebx, 3
    // and bl, 0xfc
    // if (...) GOTO(0x47993a)
    // sar ebx, 2
    // and bl, 0xf8
    // if (...) GOTO(0x47993a)
    // mov bl, byte ptr [esp + 0x18]
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x479948)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov al, bl
    // pop ebx
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push edi
    // mov edi, ecx
    // mov ecx, dword ptr [esp + 0xc]
    // push eax
    // push ecx
    // mov ecx, edi
    // CALL(0x4796a0)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x479974)
    // mov al, byte ptr [esp + 0x14]
    // pop edi
    // pop esi
    // return;
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x479985)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x479987)
    // xor eax, eax
    // mov eax, dword ptr [eax]
    // push ebx
    // cmp eax, 0x10
    // if (...) GOTO(0x47999d)
    // cmp eax, 0x18
    // if (...) GOTO(0x479999)
    // cmp eax, 0x20
    // if (...) GOTO(0x4799a4)
    // mov bl, byte ptr [esi]
    // if (...) GOTO(0x4799a8)
    // mov bl, byte ptr [esi]
    // shl bl, 3
    // if (...) GOTO(0x4799a8)
    // mov bl, byte ptr [esp + 0x18]
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4799b6)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov al, bl
    // pop ebx
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // if (...) GOTO(0x4799d0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov dword ptr [0x83a4f8], 0x4ba87c
    // return;
    // CALL(0x405099)
    // CALL(0x4799f0)
    // if (...) GOTO(0x479a00)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x83a500
    // if (...) GOTO(0x474ae0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x479a10)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x83a2c0]
    // mov al, 1
    // test al, cl
    // if (...) GOTO(0x479a2e)
    // or cl, al
    // mov byte ptr [0x83a2c0], cl
    // mov ecx, 0x83a500
    // if (...) GOTO(0x474c40)
    // return;
    // // nop
    // CALL(0x479a40)
    // if (...) GOTO(0x479a50)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x83a7b8
    // if (...) GOTO(0x474ae0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x479a60)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x83a2c0]
    // mov al, 2
    // test al, cl
    // if (...) GOTO(0x479a7e)
    // or cl, al
    // mov byte ptr [0x83a2c0], cl
    // mov ecx, 0x83a7b8
    // if (...) GOTO(0x474c40)
    // return;
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push esi
    // test eax, eax
    // mov esi, ecx
    // if (...) GOTO(0x479ab0)
    // mov ecx, dword ptr [eax]
    // mov dword ptr [0x83aa78], ecx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [0x83aa7c], edx
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [0x83aa80], ecx
    // mov edx, dword ptr [eax + 0xc]
    // mov dword ptr [0x83aa84], edx
    // if (...) GOTO(0x479ae5)
    // lea eax, [esi + 0x1ac]
    // push(0x83aa78)  // ptr?
    // mov ecx, dword ptr [eax]
    // mov dword ptr [0x83aa78], ecx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [0x83aa7c], edx
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [0x83aa80], ecx
    // mov ecx, esi
    // mov edx, dword ptr [eax + 0xc]
    // mov dword ptr [0x83aa84], edx
    // CALL(0x47b0d0)
    // mov ecx, esi
    // mov dword ptr [0x83aa98], esi
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x479b18)
    // mov ecx, dword ptr [0x83ad50]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov esi, eax
    // CALL(dword)
    // cmp eax, esi
    // if (...) GOTO(0x479b18)
    // push(0x83aa78)  // ptr?
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // cmp dword ptr [0x83aa98], ecx
    // if (...) GOTO(0x479b3a)
    // push 0
    // CALL(dword)
    // mov dword ptr [0x83aa98], 0
    // return;
    // CALL(0x405099)
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi + 0x228]
    // add eax, 0xa
    // mov dword ptr [esi + 0x228], eax
    // shl eax, 2
    // push eax
    // CALL(0x4a504f)
    // mov ecx, dword ptr [esi + 0x22c]
    // mov edi, eax
    // add esp, 4
    // xor eax, eax
    // test ecx, ecx
    // if (...) GOTO(0x479b86)
    // mov ecx, dword ptr [esi + 0x224]
    // inc eax
    // mov edx, dword ptr [ecx + eax*4 - 4]
    // mov dword ptr [edi + eax*4 - 4], edx
    // mov ecx, dword ptr [esi + 0x22c]
    // cmp eax, ecx
    // if (...) GOTO(0x479b6d)
    // mov eax, dword ptr [esi + 0x224]
    // test eax, eax
    // if (...) GOTO(0x479b99)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 0x224], edi
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 0x228]
    // test eax, eax
    // if (...) GOTO(0x479bc2)
    // cmp eax, 0xa
    // if (...) GOTO(0x479c3c)
    // add eax, -0xa
    // test eax, eax
    // mov dword ptr [esi + 0x228], eax
    // if (...) GOTO(0x479bee)
    // mov eax, dword ptr [esi + 0x224]
    // test eax, eax
    // if (...) GOTO(0x479be2)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 0x224], 0
    // pop esi
    // return;
    // shl eax, 2
    // push edi
    // push eax
    // CALL(0x4a504f)
    // mov ecx, dword ptr [esi + 0x22c]
    // mov edi, eax
    // add esp, 4
    // xor eax, eax
    // test ecx, ecx
    // if (...) GOTO(0x479c22)
    // mov ecx, dword ptr [esi + 0x224]
    // inc eax
    // mov edx, dword ptr [ecx + eax*4 - 4]
    // mov dword ptr [edi + eax*4 - 4], edx
    // mov ecx, dword ptr [esi + 0x22c]
    // cmp eax, ecx
    // if (...) GOTO(0x479c09)
    // mov eax, dword ptr [esi + 0x224]
    // test eax, eax
    // if (...) GOTO(0x479c35)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 0x224], edi
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // push -1
    // push(0x4b7be8)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push esi
    // mov esi, ecx
    // push edi
    // mov dword ptr [esp + 8], esi
    // CALL(0x495d30)
    // xor edi, edi
    // lea ecx, [esi + 0xbc]
    // mov dword ptr [esp + 0x14], edi
    // CALL(0x492850)
    // mov dword ptr [esi + 0x134], 0x4baa10
    // mov dword ptr [esi + 0x138], edi
    // mov dword ptr [esi + 0x13c], edi
    // mov dword ptr [esi + 0x140], edi
    // mov dword ptr [esi + 0x144], edi
    // mov dword ptr [esi + 0x148], edi
    // mov dword ptr [esi], 0x4ba8b4
    // mov dword ptr [esi + 0xb0], esi
    // mov dword ptr [esi + 0x228], edi
    // mov dword ptr [esi + 0x224], edi
    // mov dword ptr [esi + 0x22c], edi
    // mov dword ptr [esi + 0xa0], edi
    // mov dword ptr [esi + 0xa4], edi
    // mov dword ptr [esi + 0xa8], edi
    // mov dword ptr [esi + 0xac], edi
    // mov dword ptr [esi + 0xb4], edi
    // mov dword ptr [esi + 0xb8], edi
    // mov dword ptr [esi + 0x1a4], edi
    // mov dword ptr [esi + 0x1a8], edi
    // mov dword ptr [esi + 0x208], edi
    // mov dword ptr [esi + 0x20c], edi
    // mov dword ptr [esi + 0x210], edi
    // mov dword ptr [esi + 0x214], edi
    // mov dword ptr [esi + 0x218], edi
    // mov dword ptr [esi + 0x204], edi
    // mov dword ptr [esi + 0x130], edi
    // mov dword ptr [esi + 0x15c], edi
    // mov dword ptr [esi + 0x21c], edi
    // mov eax, 1
    // mov dword ptr [esi + 0x19c], edi
    // mov dword ptr [esi + 0x1a0], eax
    // mov ecx, dword ptr [0x83ab64]
    // mov dword ptr [esi + 0x168], ecx
    // mov edx, dword ptr [0x4e42c8]
    // mov dword ptr [esi + 0x16c], edx
    // mov ecx, dword ptr [0x4e42cc]
    // mov dword ptr [esi + 0x180], ecx
    // mov edx, dword ptr [0x83ab6c]
    // mov dword ptr [esi + 0x170], edx
    // mov ecx, dword ptr [0x4e42d0]
    // mov dword ptr [esi + 0x174], ecx
    // mov edx, dword ptr [0x4e42d4]
    // mov dword ptr [esi + 0x178], edx
    // mov ecx, dword ptr [0x4e42d8]
    // mov dword ptr [esi + 0x17c], ecx
    // mov edx, dword ptr [0x4e42dc]
    // mov dword ptr [esi + 0x184], edx
    // mov ecx, dword ptr [0x4e42e0]
    // mov dword ptr [esi + 0x188], ecx
    // mov edx, dword ptr [0x4e42e4]
    // mov dword ptr [esi + 0x18c], edx
    // mov ecx, dword ptr [0x83ab70]
    // mov dword ptr [esi + 0x190], ecx
    // mov edx, dword ptr [0x4e42e8]
    // mov dword ptr [esi + 0x194], edx
    // mov ecx, dword ptr [0x83ab68]
    // mov dword ptr [esi + 0x164], ecx
    // mov dword ptr [esi + 0x14c], edi
    // mov dword ptr [esi + 0x198], edi
    // mov dword ptr [esi + 0x150], edi
    // mov dword ptr [esi + 0x154], edi
    // mov dword ptr [esi + 0x158], edi
    // mov dword ptr [esi + 0x26c], edi
    // mov dword ptr [esi + 0x270], edi
    // mov dword ptr [esi + 0x160], edi
    // mov dword ptr [esi + 0x1cc], edi
    // mov dword ptr [esi + 0x1d0], edi
    // mov dword ptr [esi + 0x1d4], edi
    // mov dword ptr [esi + 0x1d8], edi
    // mov dword ptr [esi + 0x1ac], edi
    // mov dword ptr [esi + 0x1b0], edi
    // mov ecx, dword ptr [esp + 0xc]
    // mov dword ptr [esi + 0x1b4], edi
    // mov dword ptr [esi + 0x1b8], edi
    // mov dword ptr [esi + 0x1bc], edi
    // mov dword ptr [esi + 0x1c0], edi
    // mov dword ptr [esi + 0x1c4], edi
    // mov dword ptr [esi + 0x1c8], edi
    // mov dword ptr [esi + 0x11c], edi
    // mov dword ptr [esi + 0x128], edi
    // mov dword ptr [esi + 0x124], edi
    // mov dword ptr [esi + 0x120], edi
    // mov dword ptr [esi + 0x1ec], edi
    // mov dword ptr [esi + 0x1f0], edi
    // mov dword ptr [esi + 0x9c], edi
    // mov dword ptr [esi + 0x1f4], eax
    // mov dword ptr [esi + 0x1f8], eax
    // mov dword ptr [esi + 0x1fc], eax
    // mov dword ptr [esi + 0x200], eax
    // mov dword ptr [esi + 0x230], edi
    // mov dword ptr [esi + 0x234], edi
    // mov dword ptr [esi + 0x238], edi
    // mov dword ptr [esi + 0x23c], edi
    // mov dword ptr [esi + 0x240], edi
    // mov dword ptr [esi + 0x244], edi
    // mov dword ptr [esi + 0x248], edi
    // mov dword ptr [esi + 0x24c], edi
    // mov dword ptr [esi + 0x250], edi
    // mov dword ptr [esi + 0x254], edi
    // mov dword ptr [esi + 0x258], edi
    // mov dword ptr [esi + 0x25c], edi
    // mov dword ptr [esi + 0x260], edi
    // mov dword ptr [esi + 0x264], edi
    // mov dword ptr [esi + 0x268], edi
    // mov dword ptr [esi + 0x12c], edi
    // mov dword ptr [esi + 0x220], 2
    // mov eax, esi
    // pop edi
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x47a3c0)
    // test byte ptr [esp + 8], 1
    // if (...) GOTO(0x479f28)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov eax, esi
    // pop esi
    // return;
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // lea ecx, [esi + 0xbc]
    // CALL(0x492830)
    // mov eax, dword ptr [0x83ab40]
    // mov edx, dword ptr [0x83ab44]
    // xor edi, edi
    // mov ecx, eax
    // cmp eax, edi
    // if (...) GOTO(0x479f56)
    // mov ecx, edx
    // cmp ecx, esi
    // if (...) GOTO(0x479f6c)
    // cmp eax, edi
    // if (...) GOTO(0x479f60)
    // mov eax, edx
    // push eax
    // mov ecx, esi
    // CALL(0x47b080)
    // test eax, eax
    // if (...) GOTO(0x479f78)
    // mov dword ptr [0x83ab40], edi
    // mov dword ptr [0x83ab44], edi
    // cmp dword ptr [0x83ab30], esi
    // if (...) GOTO(0x479f8d)
    // mov dword ptr [0x83ab30], edi
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // cmp dword ptr [0x83ab34], esi
    // if (...) GOTO(0x479f9b)
    // mov dword ptr [0x83ab34], edi
    // cmp dword ptr [0x83aac0], esi
    // if (...) GOTO(0x479fa8)
    // CALL(0x480360)
    // cmp dword ptr [0x83aaf0], esi
    // if (...) GOTO(0x479fb6)
    // mov dword ptr [0x83aaf0], edi
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x26c]
    // mov ebp, 1
    // cmp eax, edi
    // mov bl, 0x40
    // if (...) GOTO(0x479ff9)
    // test byte ptr [esi + 0x9c], bl
    // if (...) GOTO(0x479fe4)
    // mov edx, dword ptr [esi]
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // mov dword ptr [esi + 0x26c], eax
    // mov ecx, dword ptr [esi + 0x26c]
    // cmp ecx, edi
    // if (...) GOTO(0x479ff9)
    // mov eax, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x26c], edi
    // mov eax, dword ptr [esi + 0x270]
    // cmp eax, edi
    // if (...) GOTO(0x47a02e)
    // test byte ptr [esi + 0x9c], bl
    // if (...) GOTO(0x47a019)
    // mov edx, dword ptr [esi]
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // mov dword ptr [esi + 0x270], eax
    // mov ecx, dword ptr [esi + 0x270]
    // cmp ecx, edi
    // if (...) GOTO(0x47a02e)
    // mov eax, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x270], edi
    // test dword ptr [esi + 0x9c], 0x100000
    // if (...) GOTO(0x47a041)
    // mov ecx, esi
    // CALL(0x47ada0)
    // mov eax, dword ptr [esi + 0x22c]
    // xor ebx, ebx
    // cmp eax, edi
    // if (...) GOTO(0x47a066)
    // mov ecx, dword ptr [esi + 0x224]
    // mov ecx, dword ptr [ecx + ebx*4]
    // CALL(0x479f30)
    // mov eax, dword ptr [esi + 0x22c]
    // inc ebx
    // cmp ebx, eax
    // if (...) GOTO(0x47a04d)
    // mov ecx, dword ptr [esi + 0x130]
    // push esi
    // cmp ecx, edi
    // if (...) GOTO(0x47a078)
    // CALL(0x47e680)
    // if (...) GOTO(0x47a080)
    // CALL(0x47e520)
    // add esp, 4
    // mov dword ptr [esi + 0x130], edi
    // mov dword ptr [esi + 0x21c], edi
    // mov dword ptr [esi + 0xb4], edi
    // mov dword ptr [esi + 0xb8], edi
    // mov dword ptr [esi + 0x1a4], edi
    // mov dword ptr [esi + 0x1a8], edi
    // mov dword ptr [esi + 0xb0], esi
    // mov dword ptr [esi + 0x208], edi
    // mov dword ptr [esi + 0x20c], edi
    // mov dword ptr [esi + 0x210], edi
    // mov dword ptr [esi + 0x218], edi
    // mov dword ptr [esi + 0x214], edi
    // mov dword ptr [esi + 0x204], edi
    // mov dword ptr [esi + 0x15c], edi
    // cmp dword ptr [esi + 0x138], edi
    // if (...) GOTO(0x47a154)
    // cmp dword ptr [esi + 0x148], edi
    // if (...) GOTO(0x47a142)
    // mov eax, dword ptr [esi + 0x140]
    // xor ebx, ebx
    // cmp eax, edi
    // if (...) GOTO(0x47a142)
    // mov eax, dword ptr [esi + 0x138]
    // mov edx, dword ptr [eax + 0xc]
    // mov dword ptr [esi + 0x13c], edx
    // mov eax, dword ptr [eax + 8]
    // cmp eax, edi
    // if (...) GOTO(0x47a10f)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x138]
    // mov dword ptr [eax + 8], edi
    // mov eax, dword ptr [esi + 0x138]
    // cmp eax, edi
    // if (...) GOTO(0x47a12b)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x140]
    // mov ecx, dword ptr [esi + 0x13c]
    // inc ebx
    // mov dword ptr [esi + 0x138], ecx
    // cmp ebx, eax
    // if (...) GOTO(0x47a0f0)
    // mov dword ptr [esi + 0x138], edi
    // mov dword ptr [esi + 0x144], edi
    // mov dword ptr [esi + 0x140], edi
    // mov dword ptr [esi + 0x144], edi
    // mov dword ptr [esi + 0x19c], edi
    // mov dword ptr [esi + 0x1a0], ebp
    // mov edx, dword ptr [0x83ab64]
    // mov dword ptr [esi + 0x168], edx
    // mov eax, dword ptr [0x4e42c8]
    // mov dword ptr [esi + 0x16c], eax
    // mov ecx, dword ptr [0x83ab6c]
    // mov dword ptr [esi + 0x170], ecx
    // mov edx, dword ptr [0x4e42d0]
    // mov dword ptr [esi + 0x174], edx
    // mov eax, dword ptr [0x4e42d4]
    // mov dword ptr [esi + 0x178], eax
    // mov ecx, dword ptr [0x4e42d8]
    // mov dword ptr [esi + 0x17c], ecx
    // mov edx, dword ptr [0x4e42cc]
    // mov dword ptr [esi + 0x180], edx
    // mov eax, dword ptr [0x4e42dc]
    // mov dword ptr [esi + 0x184], eax
    // mov ecx, dword ptr [0x4e42e0]
    // mov dword ptr [esi + 0x188], ecx
    // mov edx, dword ptr [0x4e42e4]
    // mov dword ptr [esi + 0x18c], edx
    // mov eax, dword ptr [0x83ab70]
    // mov dword ptr [esi + 0x190], eax
    // mov ecx, dword ptr [0x4e42e8]
    // mov dword ptr [esi + 0x194], ecx
    // mov edx, dword ptr [0x83ab68]
    // mov dword ptr [esi + 0x164], edx
    // mov eax, dword ptr [esi + 0x14c]
    // cmp eax, edi
    // if (...) GOTO(0x47a217)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [esi + 0x14c], edi
    // mov ecx, dword ptr [esi + 0x150]
    // cmp ecx, edi
    // if (...) GOTO(0x47a22c)
    // mov eax, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x150], edi
    // mov ecx, dword ptr [esi + 0x154]
    // cmp ecx, edi
    // if (...) GOTO(0x47a241)
    // mov edx, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x154], edi
    // mov ecx, dword ptr [esi + 0x158]
    // cmp ecx, edi
    // if (...) GOTO(0x47a256)
    // mov eax, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x158], edi
    // mov dword ptr [esi + 0x160], edi
    // mov dword ptr [esi + 0x9c], edi
    // mov dword ptr [esi + 0x1f4], ebp
    // mov dword ptr [esi + 0x1f8], ebp
    // mov dword ptr [esi + 0x1fc], ebp
    // mov dword ptr [esi + 0x200], ebp
    // mov dword ptr [esi + 0x1cc], edi
    // mov dword ptr [esi + 0x1d0], edi
    // mov dword ptr [esi + 0x1d4], edi
    // mov dword ptr [esi + 0x1d8], edi
    // mov dword ptr [esi + 0x1ac], edi
    // mov dword ptr [esi + 0x1b0], edi
    // mov dword ptr [esi + 0x1b4], edi
    // mov dword ptr [esi + 0x1b8], edi
    // mov dword ptr [esi + 0x1bc], edi
    // mov dword ptr [esi + 0x1c0], edi
    // mov dword ptr [esi + 0x1c4], edi
    // mov dword ptr [esi + 0x1c8], edi
    // mov ecx, dword ptr [esi + 0x11c]
    // mov dword ptr [esi + 0x1ec], edi
    // cmp ecx, edi
    // mov dword ptr [esi + 0x1f0], edi
    // mov dword ptr [esi + 0x230], edi
    // mov dword ptr [esi + 0x234], edi
    // mov dword ptr [esi + 0x238], edi
    // mov dword ptr [esi + 0x23c], edi
    // mov dword ptr [esi + 0x240], edi
    // mov dword ptr [esi + 0x244], edi
    // mov dword ptr [esi + 0x248], edi
    // mov dword ptr [esi + 0x24c], edi
    // mov dword ptr [esi + 0x250], edi
    // mov dword ptr [esi + 0x254], edi
    // mov dword ptr [esi + 0x258], edi
    // mov dword ptr [esi + 0x25c], edi
    // mov dword ptr [esi + 0x260], edi
    // mov dword ptr [esi + 0x264], edi
    // mov dword ptr [esi + 0x268], edi
    // mov dword ptr [esi + 0x220], 2
    // mov dword ptr [esi + 0xa0], edi
    // mov dword ptr [esi + 0xa4], edi
    // mov dword ptr [esi + 0xa8], edi
    // mov dword ptr [esi + 0xac], edi
    // mov dword ptr [esi + 0x22c], edi
    // if (...) GOTO(0x47a366)
    // mov edx, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x11c], edi
    // mov ecx, dword ptr [esi + 0x120]
    // cmp ecx, edi
    // if (...) GOTO(0x47a37c)
    // mov eax, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x120], edi
    // mov ecx, dword ptr [esi + 0x124]
    // cmp ecx, edi
    // if (...) GOTO(0x47a392)
    // mov edx, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x124], edi
    // mov ecx, dword ptr [esi + 0x128]
    // cmp ecx, edi
    // if (...) GOTO(0x47a3a8)
    // mov eax, dword ptr [ecx]
    // push ebp
    // CALL(dword)
    // mov dword ptr [esi + 0x128], edi
    // mov ecx, esi
    // CALL(0x495eb0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push -1
    // push(0x4b7c24)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push ebx
    // push esi
    // mov esi, ecx
    // mov dword ptr [esp + 8], esi
    // mov dword ptr [esi], 0x4ba8b4
    // mov dword ptr [esp + 0x14], 2
    // CALL(0x479f30)
    // mov eax, dword ptr [esi + 0x138]
    // xor ebx, ebx
    // cmp eax, ebx
    // mov dword ptr [esi + 0x134], 0x4baa10
    // if (...) GOTO(0x47a483)
    // mov eax, dword ptr [esi + 0x148]
    // push edi
    // cmp eax, ebx
    // if (...) GOTO(0x47a470)
    // mov eax, dword ptr [esi + 0x140]
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x47a470)
    // mov eax, dword ptr [esi + 0x138]
    // mov ecx, dword ptr [eax + 0xc]
    // mov dword ptr [esi + 0x13c], ecx
    // mov eax, dword ptr [eax + 8]
    // cmp eax, ebx
    // if (...) GOTO(0x47a43d)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov edx, dword ptr [esi + 0x138]
    // mov dword ptr [edx + 8], ebx
    // mov eax, dword ptr [esi + 0x138]
    // cmp eax, ebx
    // if (...) GOTO(0x47a459)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x13c]
    // inc edi
    // mov dword ptr [esi + 0x138], eax
    // mov eax, dword ptr [esi + 0x140]
    // cmp edi, eax
    // if (...) GOTO(0x47a41e)
    // mov dword ptr [esi + 0x138], ebx
    // mov dword ptr [esi + 0x144], ebx
    // mov dword ptr [esi + 0x140], ebx
    // pop edi
    // lea ecx, [esi + 0xbc]
    // mov dword ptr [esi + 0x144], ebx
    // mov byte ptr [esp + 0x14], bl
    // CALL(0x4928d0)
    // mov ecx, esi
    // mov dword ptr [esp + 0x14], 0xffffffff
    // mov dword ptr [esi], 0x4baa14
    // CALL(0x495eb0)
    // mov ecx, dword ptr [esp + 0xc]
    // pop esi
    // pop ebx
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr fs:[0]
    // push -1
    // push(0x4b7c72)  // ptr?
    // push eax
    // mov dword ptr fs:[0], esp
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov esi, ecx
    // CALL(0x479f30)
    // mov eax, dword ptr [esp + 0x40]
    // test eax, eax
    // if (...) GOTO(0x47a502)
    // mov ecx, dword ptr [eax]
    // mov dword ptr [esi + 0x180], ecx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [esi + 0x184], edx
    // mov eax, dword ptr [eax + 8]
    // mov dword ptr [esi + 0x188], eax
    // mov ebp, dword ptr [esi + 0x220]
    // mov ebx, 2
    // or ebp, ebx
    // push(0x2b8)
    // mov dword ptr [esi + 0x220], ebp
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x40], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 0
    // if (...) GOTO(0x47a53b)
    // mov ecx, eax
    // CALL(0x474ae0)
    // if (...) GOTO(0x47a53d)
    // xor eax, eax
    // or edi, 0xffffffff
    // mov dword ptr [esi + 0x11c], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], edi
    // if (...) GOTO(0x47a558)
    // mov eax, 4
    // if (...) GOTO(0x47aae0)
    // push(0x2b8)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x40], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 1
    // if (...) GOTO(0x47a57e)
    // mov ecx, eax
    // CALL(0x474ae0)
    // if (...) GOTO(0x47a580)
    // xor eax, eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esi + 0x120], eax
    // if (...) GOTO(0x47a598)
    // mov eax, 4
    // if (...) GOTO(0x47aae0)
    // push(0x2b8)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x40], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], ebx
    // if (...) GOTO(0x47a5ba)
    // mov ecx, eax
    // CALL(0x474ae0)
    // if (...) GOTO(0x47a5bc)
    // xor eax, eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esi + 0x124], eax
    // if (...) GOTO(0x47a5d4)
    // mov eax, 4
    // if (...) GOTO(0x47aae0)
    // push(0x2b8)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x40], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 3
    // if (...) GOTO(0x47a5fa)
    // mov ecx, eax
    // CALL(0x474ae0)
    // if (...) GOTO(0x47a5fc)
    // xor eax, eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esi + 0x128], eax
    // if (...) GOTO(0x47a614)
    // mov eax, 4
    // if (...) GOTO(0x47aae0)
    // mov edi, dword ptr [esp + 0x34]
    // test edi, 0xf0000000
    // if (...) GOTO(0x47a638)
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47a638)
    // mov eax, 3
    // if (...) GOTO(0x47aae0)
    // test edi, 0x80000
    // if (...) GOTO(0x47a647)
    // or edi, 0x20
    // mov dword ptr [esp + 0x34], edi
    // mov eax, dword ptr [esp + 0x20]
    // mov edi, dword ptr [esp + 0x38]
    // mov ebx, dword ptr [esp + 0x28]
    // test eax, eax
    // if (...) GOTO(0x47a675)
    // test edi, edi
    // if (...) GOTO(0x47a69f)
    // mov eax, dword ptr [edi + 0x1b4]
    // mov ebp, dword ptr [edi + 0x1ac]
    // mov ecx, dword ptr [esp + 0x20]
    // sub eax, ebp
    // sub eax, ebx
    // add ecx, eax
    // mov dword ptr [esp + 0x20], ecx
    // mov ecx, dword ptr [0x83ad50]
    // mov ebx, dword ptr [esp + 0x24]
    // test ebx, ebx
    // if (...) GOTO(0x47a6f5)
    // test edi, edi
    // if (...) GOTO(0x47a6d5)
    // mov eax, dword ptr [edi + 0x1b8]
    // mov ebp, dword ptr [edi + 0x1b0]
    // mov edx, dword ptr [esp + 0x2c]
    // sub eax, ebp
    // sub eax, edx
    // add ebx, eax
    // if (...) GOTO(0x47a6f5)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x47a6b9)
    // mov edx, dword ptr [esp + 0x20]
    // xor eax, eax
    // sub eax, ebx
    // add edx, eax
    // mov dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x47a67b)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [0x83ad50]
    // sub eax, ebx
    // add edx, eax
    // mov dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x47a67b)
    // test ecx, ecx
    // if (...) GOTO(0x47a6e5)
    // mov edx, dword ptr [esp + 0x2c]
    // xor eax, eax
    // sub eax, edx
    // add ebx, eax
    // if (...) GOTO(0x47a6f9)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // sub eax, dword ptr [esp + 0x2c]
    // add ebx, eax
    // if (...) GOTO(0x47a6f9)
    // test edi, edi
    // if (...) GOTO(0x47a708)
    // mov eax, dword ptr [0x83aa9c]
    // test eax, eax
    // if (...) GOTO(0x47a708)
    // mov edi, eax
    // mov dword ptr [esp + 0x38], edi
    // mov ecx, dword ptr [esp + 0x30]
    // mov eax, dword ptr [esp + 0x34]
    // mov ebp, dword ptr [esp + 0x3c]
    // mov dword ptr [esi + 0x9c], eax
    // test ecx, ecx
    // mov dword ptr [esi + 0x130], edi
    // mov dword ptr [esi + 0x15c], ebp
    // if (...) GOTO(0x47a73e)
    // cmp byte ptr [ecx], 0
    // if (...) GOTO(0x47a73e)
    // test eax, 0x400080
    // if (...) GOTO(0x47a73e)
    // or al, 0x10
    // mov dword ptr [esi + 0x9c], eax
    // test edi, edi
    // if (...) GOTO(0x47a74c)
    // push esi
    // mov ecx, edi
    // CALL(0x47e5f0)
    // if (...) GOTO(0x47a783)
    // cmp dword ptr [0x83ab94], 0x80
    // if (...) GOTO(0x47a77a)
    // mov ecx, esi
    // CALL(0x479f30)
    // push 0
    // push(0x4e4304)  // ptr?
    // push(0x4e42f0)  // ptr?
    // push 0
    // CALL(dword)
    // push 4
    // CALL(0x4a5108)
    // push esi
    // CALL(0x47e4c0)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x9c]
    // test al, 0x80
    // if (...) GOTO(0x47a7a1)
    // test al, 0x1d
    // if (...) GOTO(0x47a7a1)
    // mov eax, dword ptr [esi + 0xa0]
    // or al, 2
    // mov dword ptr [esi + 0xa0], eax
    // if (...) GOTO(0x47a7bb)
    // mov edx, dword ptr [esi + 0xa0]
    // and edx, 0xfffffffd
    // and eax, 0xfffffbee
    // mov dword ptr [esi + 0xa0], edx
    // mov dword ptr [esi + 0x9c], eax
    // mov eax, dword ptr [esi + 0x9c]
    // test ah, 8
    // if (...) GOTO(0x47a833)
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47a833)
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x2c]
    // lea ebp, [esi + 0x1bc]
    // lea edi, [esi + 0x1ac]
    // mov dword ptr [ebp], eax
    // add eax, ecx
    // mov dword ptr [ebp + 4], ebx
    // mov dword ptr [ebp + 8], eax
    // add ebx, edx
    // mov eax, ebp
    // mov dword ptr [ebp + 0xc], ebx
    // mov ecx, edi
    // mov edx, dword ptr [eax]
    // push edi
    // mov dword ptr [ecx], edx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [ecx + 4], edx
    // mov edx, dword ptr [eax + 8]
    // mov dword ptr [ecx + 8], edx
    // mov eax, dword ptr [eax + 0xc]
    // mov dword ptr [ecx + 0xc], eax
    // mov ecx, esi
    // CALL(0x47cce0)
    // mov ebp, dword ptr [ebp]
    // mov ecx, dword ptr [edi]
    // mov eax, dword ptr [esi + 0x1c0]
    // mov ebx, dword ptr [edi + 8]
    // neg ebp
    // add ecx, ebp
    // neg eax
    // mov dword ptr [edi], ecx
    // add ebx, ebp
    // if (...) GOTO(0x47a89d)
    // mov eax, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x2c]
    // lea edi, [esi + 0x1ac]
    // mov dword ptr [edi], eax
    // mov dword ptr [edi + 4], ebx
    // add eax, ecx
    // add ebx, edx
    // mov dword ptr [edi + 8], eax
    // mov dword ptr [edi + 0xc], ebx
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47a8b4)
    // lea ebp, [esi + 0x1bc]
    // mov eax, edi
    // mov ecx, ebp
    // push ebp
    // mov edx, dword ptr [eax]
    // mov dword ptr [ecx], edx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [ecx + 4], edx
    // mov edx, dword ptr [eax + 8]
    // mov dword ptr [ecx + 8], edx
    // mov eax, dword ptr [eax + 0xc]
    // mov dword ptr [ecx + 0xc], eax
    // mov ecx, esi
    // CALL(0x47cc10)
    // mov ecx, dword ptr [ebp]
    // mov ebp, dword ptr [edi]
    // mov eax, dword ptr [esi + 0x1c0]
    // mov ebx, dword ptr [edi + 8]
    // neg ecx
    // add ebp, ecx
    // neg eax
    // mov dword ptr [edi], ebp
    // add ebx, ecx
    // mov dword ptr [edi + 8], ebx
    // mov edx, dword ptr [edi + 4]
    // mov ebp, dword ptr [esp + 0x3c]
    // add edx, eax
    // mov dword ptr [edi + 4], edx
    // mov ecx, dword ptr [edi + 0xc]
    // add ecx, eax
    // mov dword ptr [edi + 0xc], ecx
    // mov edx, edi
    // lea ecx, [esi + 0x1cc]
    // mov eax, dword ptr [edx]
    // mov dword ptr [ecx], eax
    // mov eax, dword ptr [edx + 4]
    // mov dword ptr [ecx + 4], eax
    // mov eax, dword ptr [edx + 8]
    // mov dword ptr [ecx + 8], eax
    // mov eax, dword ptr [esp + 0x30]
    // mov edx, dword ptr [edx + 0xc]
    // push eax
    // mov dword ptr [ecx + 0xc], edx
    // mov ecx, esi
    // CALL(0x47b8f0)
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // test ebp, ebp
    // if (...) GOTO(0x47a90c)
    // mov eax, dword ptr [ebp]
    // push esi
    // mov ecx, ebp
    // CALL(dword)
    // mov ebx, eax
    // test ebx, ebx
    // if (...) GOTO(0x47a90c)
    // mov ecx, esi
    // CALL(0x479f30)
    // mov eax, ebx
    // if (...) GOTO(0x47aae0)
    // mov eax, dword ptr [esi + 0x9c]
    // test al, 0x10
    // if (...) GOTO(0x47a91e)
    // mov ecx, dword ptr [esi + 0x180]
    // if (...) GOTO(0x47a928)
    // test al, 0x20
    // if (...) GOTO(0x47a92e)
    // mov ecx, dword ptr [esi + 0x184]
    // mov dword ptr [esi + 0x1ec], ecx
    // test ah, 4
    // if (...) GOTO(0x47a941)
    // mov ecx, dword ptr [esi + 0x184]
    // mov dword ptr [esi + 0x1f0], ecx
    // if (...) GOTO(0x47a94b)
    // mov dword ptr [esi + 0x1f0], 0
    // test al, 4
    // mov ebp, 4
    // if (...) GOTO(0x47a9f2)
    // test al, 0x40
    // if (...) GOTO(0x47a969)
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov dword ptr [esi + 0x270], eax
    // mov eax, dword ptr [esi + 0x270]
    // test eax, eax
    // if (...) GOTO(0x47a9f2)
    // push(0x13b4)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x20], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], ebp
    // if (...) GOTO(0x47a995)
    // mov ecx, eax
    // CALL(0x496030)
    // if (...) GOTO(0x47a997)
    // xor eax, eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 0xffffffff
    // mov dword ptr [esi + 0x270], eax
    // if (...) GOTO(0x47a9b0)
    // mov eax, ebp
    // if (...) GOTO(0x47aae0)
    // mov ecx, dword ptr [esi + 0x1b8]
    // mov ebx, dword ptr [0x83ff10]
    // mov dl, byte ptr [esi + 0x9c]
    // sub ecx, ebx
    // test dl, 8
    // mov edx, dword ptr [esi + 0x1b4]
    // if (...) GOTO(0x47a9d3)
    // sub edx, dword ptr [edi]
    // if (...) GOTO(0x47a9d5)
    // mov ebx, dword ptr [edi]
    // sub edx, ebx
    // push -2
    // push esi
    // push edx
    // push ecx
    // push 0
    // mov ecx, eax
    // CALL(0x496740)
    // mov ecx, dword ptr [esi + 0x270]
    // push 0
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x9c]
    // test al, 8
    // if (...) GOTO(0x47aaaa)
    // test al, 0x40
    // if (...) GOTO(0x47aa11)
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov dword ptr [esi + 0x26c], eax
    // mov eax, dword ptr [esi + 0x26c]
    // test eax, eax
    // if (...) GOTO(0x47aaaa)
    // push(0x13b4)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x20], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 5
    // if (...) GOTO(0x47aa45)
    // mov ecx, eax
    // CALL(0x496030)
    // if (...) GOTO(0x47aa47)
    // xor eax, eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 0xffffffff
    // mov dword ptr [esi + 0x26c], eax
    // if (...) GOTO(0x47aa60)
    // mov eax, ebp
    // if (...) GOTO(0x47aae0)
    // mov edi, dword ptr [esi + 0x1b4]
    // mov ecx, dword ptr [0x83ff10]
    // mov dl, byte ptr [esi + 0x9c]
    // sub edi, ecx
    // test dl, 4
    // mov edx, dword ptr [esi + 0x1b8]
    // if (...) GOTO(0x47aa87)
    // sub edx, dword ptr [esi + 0x1b0]
    // if (...) GOTO(0x47aa8d)
    // mov ecx, dword ptr [esi + 0x1b0]
    // sub edx, ecx
    // push -1
    // push esi
    // push edx
    // push 0
    // push edi
    // mov ecx, eax
    // CALL(0x496710)
    // mov ecx, dword ptr [esi + 0x26c]
    // push 0
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, esi
    // CALL(0x47d510)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x9c]
    // test eax, 0x100000
    // if (...) GOTO(0x47aad0)
    // mov ecx, dword ptr [esp + 0x38]
    // push ecx
    // mov ecx, esi
    // CALL(0x47abe0)
    // mov eax, dword ptr [esi + 0xa0]
    // or eax, ebp
    // mov dword ptr [esi + 0xa0], eax
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x10]
    // pop edi
    // pop esi
    // pop ebp
    // mov dword ptr fs:[0], ecx
    // pop ebx
    // add esp, 0xc
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // cmp eax, 0x7f00
    // if (...) GOTO(0x47ab3a)
    // cmp eax, 0x7f8a
    // if (...) GOTO(0x47ab3a)
    // push -1
    // xor edx, edx
    // push -1
    // push 1
    // push edx
    // mov dword ptr [ecx + 0x208], edx
    // mov dword ptr [ecx + 0x218], eax
    // mov dword ptr [ecx + 0x214], edx
    // CALL(0x47d130)
    // add esp, 0x10
    // xor eax, eax
    // return;
    // mov eax, 3
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // test edi, edi
    // mov ebx, ecx
    // if (...) GOTO(0x47abae)
    // mov esi, dword ptr [esp + 0x24]
    // test esi, esi
    // if (...) GOTO(0x47abae)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x47ab79)
    // mov eax, dword ptr [ecx]
    // push esi
    // push edi
    // CALL(dword)
    // push esi
    // push edi
    // mov ecx, ebx
    // CALL(0x47b200)
    // cmp ebx, dword ptr [0x83aa9c]
    // if (...) GOTO(0x47abae)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x47ab9e)
    // mov edx, dword ptr [ecx]
    // lea eax, [esp + 0xc]
    // push eax
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0xc]
    // mov edx, dword ptr [edi]
    // sub edx, ecx
    // mov dword ptr [edi], edx
    // mov edx, dword ptr [esp + 0x10]
    // sub dword ptr [esi], edx
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(0x405095)
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // push 1
    // CALL(dword)
    // movsx esi, ax
    // push(0x17)
    // sar esi, 0xf
    // CALL(dword)
    // xor eax, esi
    // pop esi
    // return;
    // CALL(0x405099)
    // push esi
    // push edi
    // mov edi, ecx
    // mov eax, dword ptr [edi + 0x9c]
    // test eax, 0x200000
    // if (...) GOTO(0x47ad93)
    // test byte ptr [edi + 0xa0], 8
    // if (...) GOTO(0x47ad93)
    // mov esi, dword ptr [esp + 0xc]
    // test ah, 0x10
    // if (...) GOTO(0x47ac13)
    // test esi, esi
    // if (...) GOTO(0x47ad93)
    // mov eax, dword ptr [esi + 0x9c]
    // not eax
    // test ah, 0x10
    // if (...) GOTO(0x47ad93)
    // mov eax, dword ptr [esi + 0x140]
    // mov ecx, dword ptr [esi + 0x148]
    // test eax, eax
    // if (...) GOTO(0x47acb9)
    // test ecx, ecx
    // push(0x1c)
    // if (...) GOTO(0x47ac45)
    // CALL(0x474860)
    // if (...) GOTO(0x47ac4d)
    // CALL(0x4a504f)
    // add esp, 4
    // test eax, eax
    // mov dword ptr [esi + 0x138], eax
    // if (...) GOTO(0x47ad6e)
    // mov dword ptr [eax + 4], edi
    // mov eax, dword ptr [esi + 0x138]
    // push 4
    // mov dword ptr [eax + 0xc], eax
    // mov eax, dword ptr [esi + 0x138]
    // mov dword ptr [eax + 0x10], eax
    // mov ecx, dword ptr [esi + 0x148]
    // test ecx, ecx
    // if (...) GOTO(0x47ac8c)
    // CALL(0x474860)
    // mov ecx, dword ptr [esi + 0x138]
    // mov dword ptr [ecx + 8], eax
    // if (...) GOTO(0x47ac9d)
    // CALL(0x4a504f)
    // mov edx, dword ptr [esi + 0x138]
    // add esp, 4
    // mov dword ptr [edx + 8], eax
    // mov eax, dword ptr [esi + 0x138]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47ad6e)
    // mov dword ptr [esi + 0x13c], eax
    // if (...) GOTO(0x47ad5b)
    // test ecx, ecx
    // push(0x1c)
    // if (...) GOTO(0x47acc6)
    // CALL(0x474860)
    // if (...) GOTO(0x47acce)
    // CALL(0x4a504f)
    // add esp, 4
    // mov ecx, dword ptr [esi + 0x138]
    // mov edx, dword ptr [ecx + 0x10]
    // mov dword ptr [edx + 0xc], eax
    // mov eax, dword ptr [esi + 0x138]
    // mov eax, dword ptr [eax + 0x10]
    // mov ecx, dword ptr [eax + 0xc]
    // test ecx, ecx
    // if (...) GOTO(0x47ad6e)
    // mov dword ptr [ecx + 0x10], eax
    // mov eax, dword ptr [esi + 0x138]
    // push 4
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [ecx + 0xc]
    // mov dword ptr [edx + 0xc], eax
    // mov eax, dword ptr [esi + 0x138]
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [ecx + 0xc]
    // mov dword ptr [eax + 0x10], edx
    // mov eax, dword ptr [esi + 0x138]
    // mov eax, dword ptr [eax + 0x10]
    // mov dword ptr [esi + 0x13c], eax
    // mov dword ptr [eax + 4], edi
    // mov ecx, dword ptr [esi + 0x148]
    // test ecx, ecx
    // if (...) GOTO(0x47ad3d)
    // CALL(0x474860)
    // mov ecx, dword ptr [esi + 0x13c]
    // mov dword ptr [ecx + 8], eax
    // if (...) GOTO(0x47ad4e)
    // CALL(0x4a504f)
    // mov edx, dword ptr [esi + 0x13c]
    // add esp, 4
    // mov dword ptr [edx + 8], eax
    // mov eax, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47ad6e)
    // mov eax, dword ptr [esi + 0x140]
    // mov dword ptr [esi + 0x144], eax
    // inc eax
    // mov dword ptr [esi + 0x140], eax
    // mov ecx, dword ptr [esi + 0x140]
    // dec ecx
    // js 0x47ad8d
    // mov edx, dword ptr [esi + 0x138]
    // mov dword ptr [esi + 0x144], 0
    // mov dword ptr [esi + 0x13c], edx
    // mov dword ptr [edi + 0x130], esi
    // pop edi
    // pop esi
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [ecx + 0x130]
    // test esi, esi
    // if (...) GOTO(0x47ae73)
    // mov eax, dword ptr [esi + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47ae73)
    // push edi
    // mov edi, dword ptr [esi + 0x140]
    // xor edx, edx
    // test edi, edi
    // if (...) GOTO(0x47ae5b)
    // mov eax, dword ptr [esi + 0x13c]
    // cmp dword ptr [eax + 4], ecx
    // if (...) GOTO(0x47ade9)
    // mov eax, dword ptr [eax + 0xc]
    // inc edx
    // cmp edx, edi
    // mov dword ptr [esi + 0x13c], eax
    // if (...) GOTO(0x47adce)
    // if (...) GOTO(0x47ae5b)
    // mov eax, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [eax + 0xc]
    // mov edx, dword ptr [eax + 0x10]
    // mov dword ptr [ecx + 0x10], edx
    // mov eax, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [eax + 0xc]
    // mov dword ptr [ecx + 0xc], edx
    // mov edi, dword ptr [esi + 0x13c]
    // cmp edi, dword ptr [esi + 0x138]
    // if (...) GOTO(0x47ae1e)
    // mov eax, dword ptr [edi + 0xc]
    // mov dword ptr [esi + 0x138], eax
    // mov eax, dword ptr [esi + 0x148]
    // mov ecx, dword ptr [edi + 0xc]
    // test eax, eax
    // mov dword ptr [esi + 0x13c], ecx
    // if (...) GOTO(0x47ae55)
    // mov eax, dword ptr [edi + 8]
    // test eax, eax
    // if (...) GOTO(0x47ae41)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // test edi, edi
    // mov dword ptr [edi + 8], 0
    // if (...) GOTO(0x47ae55)
    // push edi
    // CALL(0x4a5007)
    // add esp, 4
    // dec dword ptr [esi + 0x140]
    // mov eax, dword ptr [esi + 0x140]
    // pop edi
    // test eax, eax
    // if (...) GOTO(0x47ae6c)
    // mov dword ptr [esi + 0x138], eax
    // dec eax
    // mov dword ptr [esi + 0x144], eax
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push ebp
    // push esi
    // test ebx, ebx
    // push edi
    // mov esi, ecx
    // if (...) GOTO(0x47af54)
    // mov eax, dword ptr [esi + 0x140]
    // test eax, eax
    // if (...) GOTO(0x47af54)
    // mov eax, dword ptr [esi + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47aeb5)
    // mov eax, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [eax + 4]
    // if (...) GOTO(0x47aeb7)
    // xor ecx, ecx
    // cmp ebx, ecx
    // if (...) GOTO(0x47af54)
    // mov dword ptr [0x83ab98], ecx
    // mov eax, dword ptr [esi + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47af54)
    // mov edi, dword ptr [esi + 0x140]
    // xor edx, edx
    // test edi, edi
    // mov dword ptr [esi + 0x144], 0
    // mov dword ptr [esi + 0x13c], eax
    // if (...) GOTO(0x47af54)
    // mov eax, dword ptr [esi + 0x13c]
    // cmp dword ptr [eax + 4], ebx
    // if (...) GOTO(0x47af1c)
    // mov ebp, dword ptr [esi + 0x144]
    // inc ebp
    // inc edx
    // mov dword ptr [esi + 0x144], ebp
    // mov eax, dword ptr [eax + 0xc]
    // cmp edx, edi
    // mov dword ptr [esi + 0x13c], eax
    // if (...) GOTO(0x47aeef)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // test ecx, ecx
    // if (...) GOTO(0x47af33)
    // cmp dword ptr [esi + 0x140], 1
    // if (...) GOTO(0x47af33)
    // mov edx, dword ptr [ecx]
    // push 0
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47af54)
    // mov eax, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47af54)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405099)
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 0x130]
    // test eax, eax
    // if (...) GOTO(0x47b073)
    // cmp dword ptr [eax + 0x140], 1
    // if (...) GOTO(0x47b073)
    // mov ecx, dword ptr [eax + 0x138]
    // test ecx, ecx
    // if (...) GOTO(0x47af93)
    // mov eax, dword ptr [eax + 0x13c]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x47af95)
    // xor eax, eax
    // mov dword ptr [0x83ab98], eax
    // mov eax, dword ptr [esi + 0x130]
    // push edi
    // xor edi, edi
    // mov ecx, dword ptr [eax + 0x140]
    // test ecx, ecx
    // if (...) GOTO(0x47b01b)
    // mov ecx, dword ptr [eax + 0x138]
    // test ecx, ecx
    // if (...) GOTO(0x47afe7)
    // mov ecx, dword ptr [eax + 0x13c]
    // mov edx, dword ptr [ecx + 0xc]
    // mov ecx, dword ptr [eax + 0x144]
    // mov dword ptr [eax + 0x13c], edx
    // mov edx, dword ptr [eax + 0x140]
    // inc ecx
    // cmp ecx, edx
    // mov dword ptr [eax + 0x144], ecx
    // if (...) GOTO(0x47afe7)
    // mov dword ptr [eax + 0x144], 0
    // mov eax, dword ptr [esi + 0x130]
    // add eax, 0x134
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47b001)
    // mov eax, dword ptr [eax + 8]
    // mov ecx, dword ptr [eax + 4]
    // if (...) GOTO(0x47b003)
    // xor ecx, ecx
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47b01b)
    // mov eax, dword ptr [esi + 0x130]
    // inc edi
    // cmp edi, dword ptr [eax + 0x140]
    // if (...) GOTO(0x47afad)
    // mov eax, dword ptr [esi + 0x130]
    // pop edi
    // add eax, 0x134
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47b036)
    // mov ecx, dword ptr [eax + 8]
    // mov eax, dword ptr [ecx + 4]
    // if (...) GOTO(0x47b038)
    // xor eax, eax
    // cmp eax, dword ptr [0x83ab98]
    // if (...) GOTO(0x47b073)
    // mov edx, dword ptr [esi]
    // push 0
    // mov ecx, esi
    // CALL(dword)
    // mov esi, dword ptr [esi + 0x130]
    // add esi, 0x134
    // mov eax, dword ptr [esi + 4]
    // test eax, eax
    // if (...) GOTO(0x47b073)
    // mov eax, dword ptr [esi + 8]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47b073)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push esi
    // push edi
    // test ebx, ebx
    // mov edi, ecx
    // if (...) GOTO(0x47b0bb)
    // mov eax, dword ptr [edi + 0x22c]
    // xor esi, esi
    // test eax, eax
    // if (...) GOTO(0x47b0bb)
    // mov eax, dword ptr [edi + 0x224]
    // mov ecx, dword ptr [eax + esi*4]
    // cmp ecx, ebx
    // if (...) GOTO(0x47b0c3)
    // push ebx
    // CALL(0x47b080)
    // test eax, eax
    // if (...) GOTO(0x47b0c3)
    // mov eax, dword ptr [edi + 0x22c]
    // inc esi
    // cmp esi, eax
    // if (...) GOTO(0x47b099)
    // pop edi
    // pop esi
    // xor eax, eax
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // mov eax, 1
    // pop ebx
    // return;
    // // nop
    // // nop
    // push ecx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // xor eax, eax
    // cmp esi, eax
    // if (...) GOTO(0x47b119)
    // mov dword ptr [esp + 0xc], eax
    // mov dword ptr [esp + 4], eax
    // lea eax, [esp + 4]
    // lea edx, [esp + 0xc]
    // push eax
    // push edx
    // CALL(0x47b170)
    // mov eax, dword ptr [esp + 0xc]
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esi + 8]
    // add edx, eax
    // add ecx, eax
    // mov eax, dword ptr [esp + 4]
    // mov dword ptr [esi], edx
    // mov edx, dword ptr [esi + 4]
    // mov dword ptr [esi + 8], ecx
    // mov ecx, dword ptr [esi + 0xc]
    // add edx, eax
    // add ecx, eax
    // mov dword ptr [esi + 4], edx
    // mov dword ptr [esi + 0xc], ecx
    // pop esi
    // pop ecx
    // return;
    // // nop
    // // nop
    // push ecx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // xor eax, eax
    // cmp esi, eax
    // if (...) GOTO(0x47b169)
    // mov dword ptr [esp + 0xc], eax
    // mov dword ptr [esp + 4], eax
    // lea eax, [esp + 4]
    // lea edx, [esp + 0xc]
    // push eax
    // push edx
    // CALL(0x47b290)
    // mov eax, dword ptr [esp + 0xc]
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esi + 8]
    // add edx, eax
    // add ecx, eax
    // mov eax, dword ptr [esp + 4]
    // mov dword ptr [esi], edx
    // mov edx, dword ptr [esi + 4]
    // mov dword ptr [esi + 8], ecx
    // mov ecx, dword ptr [esi + 0xc]
    // add edx, eax
    // add ecx, eax
    // mov dword ptr [esi + 4], edx
    // mov dword ptr [esi + 0xc], ecx
    // pop esi
    // pop ecx
    // return;
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esi + 0x1bc]
    // mov edx, dword ptr [esi + 0x1ac]
    // mov ecx, dword ptr [edi]
    // add eax, edx
    // add ecx, eax
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [esi + 0x1c0]
    // mov ebx, dword ptr [esi + 0x1b0]
    // add ecx, ebx
    // mov ebx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [ebx]
    // add edx, ecx
    // mov dword ptr [ebx], edx
    // mov al, byte ptr [esi + 0x9c]
    // test al, 0x20
    // if (...) GOTO(0x47b1ef)
    // mov ecx, dword ptr [esi + 0x130]
    // test ecx, ecx
    // if (...) GOTO(0x47b1ef)
    // push ebx
    // push edi
    // CALL(0x47b170)
    // mov eax, dword ptr [esi + 0x9c]
    // test ah, 0x80
    // if (...) GOTO(0x47b1ef)
    // mov edx, dword ptr [esi + 0x130]
    // mov ecx, dword ptr [edi]
    // mov eax, dword ptr [edx + 0x1ac]
    // sub ecx, eax
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [esi + 0x130]
    // mov eax, dword ptr [ebx]
    // mov edx, dword ptr [ecx + 0x1b0]
    // sub eax, edx
    // mov dword ptr [ebx], eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esi + 0x1bc]
    // mov edx, dword ptr [esi + 0x1ac]
    // mov ecx, dword ptr [edi]
    // add eax, edx
    // sub ecx, eax
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [esi + 0x1c0]
    // mov ebx, dword ptr [esi + 0x1b0]
    // add ecx, ebx
    // mov ebx, dword ptr [esp + 0x14]
    // mov edx, dword ptr [ebx]
    // sub edx, ecx
    // mov dword ptr [ebx], edx
    // mov al, byte ptr [esi + 0x9c]
    // test al, 0x20
    // if (...) GOTO(0x47b27f)
    // mov ecx, dword ptr [esi + 0x130]
    // test ecx, ecx
    // if (...) GOTO(0x47b27f)
    // push ebx
    // push edi
    // CALL(0x47b200)
    // mov eax, dword ptr [esi + 0x9c]
    // test ah, 0x80
    // if (...) GOTO(0x47b27f)
    // mov edx, dword ptr [esi + 0x130]
    // mov ecx, dword ptr [edi]
    // mov eax, dword ptr [edx + 0x1ac]
    // add ecx, eax
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [esi + 0x130]
    // mov eax, dword ptr [ebx]
    // mov edx, dword ptr [ecx + 0x1b0]
    // add eax, edx
    // mov dword ptr [ebx], eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // mov esi, ecx
    // push edi
    // push ebx
    // CALL(0x47b170)
    // mov eax, dword ptr [esi + 0x1ac]
    // mov ecx, dword ptr [ebx]
    // sub ecx, eax
    // mov dword ptr [ebx], ecx
    // mov ecx, dword ptr [esi + 0x1b0]
    // mov eax, dword ptr [edi]
    // sub eax, ecx
    // mov dword ptr [edi], eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // mov esi, ecx
    // push edi
    // push ebx
    // CALL(0x47b200)
    // mov eax, dword ptr [esi + 0x1ac]
    // mov ecx, dword ptr [ebx]
    // add ecx, eax
    // mov dword ptr [ebx], ecx
    // mov ecx, dword ptr [esi + 0x1b0]
    // mov eax, dword ptr [edi]
    // add eax, ecx
    // mov dword ptr [edi], eax
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 8
    // push esi
    // mov esi, ecx
    // mov ecx, dword ptr [0x83ad50]
    // push edi
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47b387)
    // test ecx, ecx
    // if (...) GOTO(0x47b32e)
    // xor edx, edx
    // if (...) GOTO(0x47b33e)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, eax
    // mov eax, dword ptr [esi + 0x1bc]
    // mov edi, dword ptr [esi + 0x1c4]
    // sub eax, edi
    // add eax, edx
    // cdq 
    // sub eax, edx
    // mov edi, eax
    // sar edi, 1
    // test ecx, ecx
    // mov dword ptr [esp + 8], edi
    // if (...) GOTO(0x47b36b)
    // mov eax, dword ptr [esi + 0x1c0]
    // mov edx, dword ptr [esi + 0x1c8]
    // if (...) GOTO(0x47b3d8)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov edi, dword ptr [esp + 8]
    // mov edx, dword ptr [esi + 0x1c8]
    // mov ecx, eax
    // mov eax, dword ptr [esi + 0x1c0]
    // if (...) GOTO(0x47b3d8)
    // test ecx, ecx
    // if (...) GOTO(0x47b38f)
    // xor edx, edx
    // if (...) GOTO(0x47b39f)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83ad50]
    // mov edx, eax
    // mov eax, dword ptr [esi + 0x1ac]
    // mov edi, dword ptr [esi + 0x1b4]
    // sub eax, edi
    // add eax, edx
    // cdq 
    // sub eax, edx
    // mov edi, eax
    // sar edi, 1
    // test ecx, ecx
    // mov dword ptr [esp + 8], edi
    // if (...) GOTO(0x47b3cc)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov edi, dword ptr [esp + 8]
    // mov ecx, eax
    // mov eax, dword ptr [esi + 0x1b0]
    // mov edx, dword ptr [esi + 0x1b8]
    // sub eax, edx
    // add eax, ecx
    // mov ecx, dword ptr [esi + 0x130]
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // test ecx, ecx
    // mov dword ptr [esp + 0xc], eax
    // if (...) GOTO(0x47b406)
    // lea eax, [esp + 0xc]
    // lea edx, [esp + 8]
    // push eax
    // push edx
    // CALL(0x47b200)
    // mov edi, dword ptr [esp + 8]
    // mov eax, dword ptr [esp + 0xc]
    // push eax
    // push edi
    // mov ecx, esi
    // CALL(0x47b420)
    // pop edi
    // pop esi
    // add esp, 8
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov al, byte ptr [ecx + 0xa0]
    // push esi
    // test al, 2
    // mov eax, dword ptr [esp + 0xc]
    // if (...) GOTO(0x47b477)
    // mov edx, dword ptr [ecx + 0x1c0]
    // mov esi, dword ptr [ecx + 0x1bc]
    // sub eax, edx
    // mov edx, dword ptr [esp + 8]
    // sub edx, esi
    // add esi, edx
    // mov dword ptr [ecx + 0x1bc], esi
    // mov esi, dword ptr [ecx + 0x1c4]
    // add esi, edx
    // mov edx, dword ptr [ecx + 0x1c0]
    // add edx, eax
    // mov dword ptr [ecx + 0x1c4], esi
    // mov dword ptr [ecx + 0x1c0], edx
    // mov edx, dword ptr [ecx + 0x1c8]
    // add edx, eax
    // mov dword ptr [ecx + 0x1c8], edx
    // if (...) GOTO(0x47b4bd)
    // mov edx, dword ptr [ecx + 0x1b0]
    // mov esi, dword ptr [ecx + 0x1ac]
    // sub eax, edx
    // mov edx, dword ptr [esp + 8]
    // sub edx, esi
    // add esi, edx
    // mov dword ptr [ecx + 0x1ac], esi
    // mov esi, dword ptr [ecx + 0x1b4]
    // add esi, edx
    // mov edx, dword ptr [ecx + 0x1b8]
    // mov dword ptr [ecx + 0x1b4], esi
    // mov esi, dword ptr [ecx + 0x1b0]
    // add esi, eax
    // add edx, eax
    // mov dword ptr [ecx + 0x1b0], esi
    // mov dword ptr [ecx + 0x1b8], edx
    // lea eax, [ecx + 0x1dc]
    // push eax
    // push ecx
    // CALL(0x47e140)
    // add esp, 8
    // xor eax, eax
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push edi
    // mov edi, ecx
    // mov eax, dword ptr [edi]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47b505)
    // mov edx, dword ptr [edi]
    // lea eax, [esp + 0x10]
    // push eax
    // lea ecx, [esp + 0x10]
    // lea eax, [esp + 0xc]
    // push ecx
    // push eax
    // mov ecx, edi
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x10]
    // push esi
    // test eax, eax
    // if (...) GOTO(0x47b55e)
    // test byte ptr [edi + 0xa0], 2
    // if (...) GOTO(0x47b545)
    // mov ecx, dword ptr [edi + 0x1ac]
    // mov eax, dword ptr [edi + 0x1b0]
    // mov edx, dword ptr [esp + 0xc]
    // lea esi, [edi + 0x1ac]
    // mov dword ptr [esi], ecx
    // add ecx, edx
    // mov dword ptr [esi + 8], ecx
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [esi + 4], eax
    // add eax, ecx
    // mov dword ptr [esi + 0xc], eax
    // if (...) GOTO(0x47b5eb)
    // lea edx, [esp + 0x10]
    // lea eax, [esp + 0xc]
    // push edx
    // push eax
    // mov ecx, edi
    // CALL(0x47ca10)
    // mov dword ptr [esp + 0x14], 0
    // mov ecx, dword ptr [edi + 0x1bc]
    // mov eax, dword ptr [edi + 0x1c0]
    // mov edx, dword ptr [esp + 0xc]
    // mov dword ptr [edi + 0x1bc], ecx
    // add ecx, edx
    // mov dword ptr [edi + 0x1c0], eax
    // mov dword ptr [edi + 0x1c4], ecx
    // mov ecx, dword ptr [esp + 0x10]
    // add eax, ecx
    // lea esi, [edi + 0x1ac]
    // mov dword ptr [edi + 0x1c8], eax
    // mov eax, dword ptr [edi + 0x1bc]
    // mov ecx, dword ptr [edi + 0x1c0]
    // mov edx, esi
    // push esi
    // mov dword ptr [edx], eax
    // mov eax, dword ptr [edi + 0x1c4]
    // mov dword ptr [edx + 4], ecx
    // mov ecx, dword ptr [edi + 0x1c8]
    // mov dword ptr [edx + 8], eax
    // mov dword ptr [edx + 0xc], ecx
    // mov ecx, dword ptr [esi]
    // mov edx, dword ptr [esi]
    // mov eax, dword ptr [edi + 0x1b0]
    // neg ecx
    // add edx, ecx
    // mov dword ptr [esi], edx
    // mov edx, dword ptr [esi + 8]
    // add edx, ecx
    // mov ecx, dword ptr [esi + 0xc]
    // neg eax
    // mov dword ptr [esi + 8], edx
    // mov edx, dword ptr [esi + 4]
    // add ecx, eax
    // add edx, eax
    // mov dword ptr [esi + 0xc], ecx
    // mov ecx, edi
    // mov dword ptr [esi + 4], edx
    // CALL(0x47cce0)
    // mov edx, dword ptr [edi]
    // mov ecx, edi
    // CALL(dword)
    // mov ecx, edi
    // CALL(0x47b9a0)
    // lea eax, [edi + 0x1dc]
    // push eax
    // push edi
    // CALL(0x47e140)
    // mov ecx, dword ptr [edi + 0xb0]
    // add esp, 8
    // cmp ecx, edi
    // if (...) GOTO(0x47b629)
    // mov eax, dword ptr [esp + 0x10]
    // mov edx, dword ptr [ecx]
    // push 0
    // push 0
    // push eax
    // mov eax, dword ptr [esp + 0x18]
    // push eax
    // CALL(dword)
    // mov ecx, dword ptr [edi + 0x1b8]
    // mov eax, dword ptr [edi + 0x1b0]
    // mov edx, dword ptr [edi + 0x1b4]
    // sub ecx, eax
    // mov eax, dword ptr [esi]
    // push ecx
    // sub edx, eax
    // mov ecx, edi
    // push edx
    // CALL(0x47bc60)
    // mov ecx, dword ptr [0x83ad50]
    // pop esi
    // test ecx, ecx
    // if (...) GOTO(0x47b65c)
    // mov eax, dword ptr [ecx]
    // push 0
    // CALL(dword)
    // mov edx, dword ptr [edi]
    // mov ecx, edi
    // CALL(dword)
    // xor eax, eax
    // pop edi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 0xa0]
    // test al, 1
    // if (...) GOTO(0x47b80d)
    // test al, 4
    // if (...) GOTO(0x47b80d)
    // mov ecx, dword ptr [esi + 0x220]
    // mov al, byte ptr [esi + 0x9c]
    // or ecx, 2
    // test al, 2
    // mov dword ptr [esi + 0x220], ecx
    // if (...) GOTO(0x47b6b1)
    // xor eax, eax
    // mov dword ptr [0x83ab40], eax
    // mov dword ptr [0x83ab44], eax
    // mov ecx, dword ptr [esi + 0xa0]
    // push ebx
    // mov bl, byte ptr [esp + 0x1c]
    // or ecx, 1
    // push ebp
    // push edi
    // test bl, 4
    // mov dword ptr [esi + 0xa0], ecx
    // if (...) GOTO(0x47b6d3)
    // mov ecx, esi
    // CALL(0x47e120)
    // CALL(0x47e450)
    // test bl, 2
    // if (...) GOTO(0x47b702)
    // mov eax, dword ptr [esi + 0x1b8]
    // mov ebp, dword ptr [esi + 0x1b0]
    // mov ecx, dword ptr [esi + 0x1b4]
    // mov edx, dword ptr [esi + 0x1ac]
    // sub eax, ebp
    // sub ecx, edx
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(0x47bc60)
    // test bl, 1
    // if (...) GOTO(0x47b70e)
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x15c]
    // test ecx, ecx
    // if (...) GOTO(0x47b720)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x140]
    // test eax, eax
    // if (...) GOTO(0x47b74b)
    // mov eax, dword ptr [esi + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47b74b)
    // mov ecx, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47b74b)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47b797)
    // lea eax, [esi + 0x1bc]
    // mov edx, dword ptr [esi + 0x1bc]
    // mov ecx, edx
    // mov edi, dword ptr [eax + 4]
    // neg ecx
    // mov ebx, dword ptr [eax + 8]
    // add edx, ecx
    // add ebx, ecx
    // lea ecx, [esp + 0x10]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, edi
    // neg eax
    // add edi, eax
    // add ebp, eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x14], edx
    // mov dword ptr [esp + 0x1c], ebx
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esp + 0x20], ebp
    // CALL(0x47b120)
    // if (...) GOTO(0x47b7d6)
    // lea edx, [esi + 0x1ac]
    // mov eax, edx
    // mov edx, dword ptr [eax]
    // mov ecx, edx
    // mov edi, dword ptr [eax + 4]
    // neg ecx
    // mov ebx, dword ptr [eax + 8]
    // add edx, ecx
    // add ebx, ecx
    // lea ecx, [esp + 0x10]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, edi
    // neg eax
    // add edi, eax
    // add ebp, eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x14], edx
    // mov dword ptr [esp + 0x1c], ebx
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esp + 0x20], ebp
    // CALL(0x47b0d0)
    // mov ecx, dword ptr [0x83ad50]
    // pop edi
    // pop ebp
    // pop ebx
    // test ecx, ecx
    // if (...) GOTO(0x47b7ed)
    // mov edx, dword ptr [ecx]
    // lea eax, [esp + 4]
    // push eax
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0xc]
    // test ecx, ecx
    // if (...) GOTO(0x47b7f9)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // cmp dword ptr [0x83aa98], esi
    // if (...) GOTO(0x47b80d)
    // push(0x83aa78)  // ptr?
    // mov ecx, esi
    // CALL(0x479a80)
    // pop esi
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi]
    // CALL(dword)
    // cmp dword ptr [0x83aa98], esi
    // if (...) GOTO(0x47b83b)
    // mov ecx, esi
    // CALL(0x479b20)
    // cmp dword ptr [0x83aac0], esi
    // if (...) GOTO(0x47b848)
    // CALL(0x480360)
    // mov eax, dword ptr [0x83ab40]
    // mov edx, dword ptr [0x83ab44]
    // xor edi, edi
    // mov ecx, eax
    // cmp eax, edi
    // if (...) GOTO(0x47b85d)
    // mov ecx, edx
    // cmp ecx, esi
    // if (...) GOTO(0x47b873)
    // cmp eax, edi
    // if (...) GOTO(0x47b867)
    // mov eax, edx
    // push eax
    // mov ecx, esi
    // CALL(0x47b080)
    // test eax, eax
    // if (...) GOTO(0x47b87f)
    // mov dword ptr [0x83ab40], edi
    // mov dword ptr [0x83ab44], edi
    // cmp dword ptr [0x83ab30], esi
    // if (...) GOTO(0x47b894)
    // mov dword ptr [0x83ab30], edi
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // cmp dword ptr [0x83ab34], esi
    // if (...) GOTO(0x47b8a2)
    // mov dword ptr [0x83ab34], edi
    // mov eax, dword ptr [esi + 0xa0]
    // test al, 1
    // if (...) GOTO(0x47b8e8)
    // and al, 0xfe
    // mov dword ptr [esi + 0xa0], eax
    // mov eax, dword ptr [0x83ab54]
    // cmp eax, esi
    // if (...) GOTO(0x47b8c7)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // CALL(0x47e450)
    // mov ecx, dword ptr [0x83ad50]
    // cmp ecx, edi
    // if (...) GOTO(0x47b8dc)
    // mov edx, dword ptr [ecx]
    // push edi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x10]
    // cmp ecx, edi
    // if (...) GOTO(0x47b8e8)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop edi
    // pop esi
    // return;
    // CALL(0x405099)
    // push ebx
    // mov ebx, ecx
    // push esi
    // push edi
    // mov eax, dword ptr [ebx + 0x14c]
    // test eax, eax
    // if (...) GOTO(0x47b912)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [ebx + 0x14c], 0
    // mov esi, dword ptr [esp + 0x10]
    // test esi, esi
    // if (...) GOTO(0x47b966)
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // push ecx
    // CALL(0x4a504f)
    // add esp, 4
    // mov dword ptr [ebx + 0x14c], eax
    // test eax, eax
    // if (...) GOTO(0x47b98b)
    // mov byte ptr [eax], 0
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // sub edi, ecx
    // mov esi, edi
    // mov edi, dword ptr [ebx + 0x14c]
    // mov edx, ecx
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // mov ecx, edx
    // dec edi
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, edx
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, ebx
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47b98b)
    // mov eax, dword ptr [ebx]
    // push 0
    // mov ecx, ebx
    // CALL(dword)
    // mov edx, dword ptr [ebx]
    // push 0
    // push 0
    // mov ecx, ebx
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push ebx
    // lea eax, [ecx + 0x1ac]
    // push ebp
    // push esi
    // mov esi, dword ptr [eax]
    // push edi
    // mov edx, esi
    // mov edi, dword ptr [eax + 4]
    // neg edx
    // mov ebx, dword ptr [eax + 8]
    // add esi, edx
    // add ebx, edx
    // lea edx, [esp + 0x10]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, edi
    // neg eax
    // add edi, eax
    // add ebp, eax
    // push edx
    // mov dword ptr [esp + 0x14], esi
    // mov dword ptr [esp + 0x1c], ebx
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esp + 0x20], ebp
    // CALL(0x487b00)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(0x405098)
    // // nop
    // mov ecx, dword ptr [ecx + 0x26c]
    // test ecx, ecx
    // if (...) GOTO(0x47ba04)
    // mov eax, dword ptr [esp + 4]
    // push eax
    // CALL(0x4967f0)
    // return;
    // CALL(0x405095)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 0x270]
    // test ecx, ecx
    // if (...) GOTO(0x47ba24)
    // mov eax, dword ptr [esp + 4]
    // push eax
    // CALL(0x4967f0)
    // return;
    // CALL(0x405095)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 0x26c]
    // test ecx, ecx
    // if (...) GOTO(0x47ba49)
    // mov eax, dword ptr [esp + 8]
    // mov edx, dword ptr [esp + 4]
    // push eax
    // push edx
    // CALL(0x496770)
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 0x270]
    // test ecx, ecx
    // if (...) GOTO(0x47ba69)
    // mov eax, dword ptr [esp + 8]
    // mov edx, dword ptr [esp + 4]
    // push eax
    // push edx
    // CALL(0x496770)
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx + 0x26c]
    // test eax, eax
    // if (...) GOTO(0x47ba84)
    // mov ecx, dword ptr [esp + 4]
    // mov dword ptr [eax + 0x5a0], ecx
    // return;
    // CALL(0x405095)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx + 0x270]
    // test eax, eax
    // if (...) GOTO(0x47baa4)
    // mov ecx, dword ptr [esp + 4]
    // mov dword ptr [eax + 0x5a0], ecx
    // return;
    // CALL(0x405095)
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [0x83ab58]
    // push ebx
    // xor ebx, ebx
    // push esi
    // cmp eax, 4
    // mov esi, ecx
    // if (...) GOTO(0x47bac7)
    // pop esi
    // xor eax, eax
    // pop ebx
    // return;
    // mov ecx, dword ptr [0x83ab30]
    // push edi
    // mov edi, dword ptr [esp + 0x18]
    // mov dword ptr [eax*4 + 0x83a4e8], esi
    // mov dword ptr [eax*4 + 0x83aa88], edi
    // inc eax
    // cmp ecx, ebx
    // mov dword ptr [0x83ab58], eax
    // mov dword ptr [0x83ab54], esi
    // mov dword ptr [0x83ab40], ebx
    // mov dword ptr [0x83ab44], ebx
    // if (...) GOTO(0x47bb0b)
    // cmp ecx, esi
    // if (...) GOTO(0x47bb0b)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [0x83ab30], ebx
    // cmp edi, ebx
    // mov dword ptr [0x83ab38], ebx
    // if (...) GOTO(0x47bb23)
    // mov dword ptr [0x83ab50], edi
    // mov edx, dword ptr [edi]
    // push ebx
    // mov ecx, edi
    // CALL(dword)
    // mov edi, dword ptr [esp + 0x10]
    // and edi, 2
    // if (...) GOTO(0x47bb34)
    // mov eax, dword ptr [esi]
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // CALL(0x483d30)
    // push(0x7f00)
    // push ebx
    // CALL(dword)
    // push eax
    // CALL(dword)
    // cmp edi, ebx
    // if (...) GOTO(0x47bba0)
    // cmp dword ptr [0x83ab54], esi
    // if (...) GOTO(0x47bba0)
    // mov edi, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47bba0)
    // cmp edi, ebx
    // if (...) GOTO(0x47bb74)
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x47bb89)
    // CALL(0x483ba0)
    // cmp dword ptr [0x83ab54], esi
    // if (...) GOTO(0x47bb5c)
    // pop edi
    // mov eax, ebx
    // pop esi
    // pop ebx
    // return;
    // mov ecx, dword ptr [0x83ab54]
    // cmp ecx, ebx
    // if (...) GOTO(0x47bb9b)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, 1
    // pop edi
    // mov eax, ebx
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov edx, dword ptr [0x83ab58]
    // push esi
    // test edx, edx
    // if (...) GOTO(0x47bc55)
    // dec edx
    // mov dword ptr [0x83ab58], edx
    // mov esi, dword ptr [edx*4 + 0x83a4e8]
    // lea eax, [edx*4 + 0x83a4e8]
    // cmp esi, ecx
    // if (...) GOTO(0x47bc21)
    // xor eax, eax
    // test edx, edx
    // if (...) GOTO(0x47bbef)
    // mov esi, 0x83a4e8
    // cmp dword ptr [esi], ecx
    // if (...) GOTO(0x47bbef)
    // inc eax
    // add esi, 4
    // cmp eax, edx
    // if (...) GOTO(0x47bbe3)
    // cmp eax, edx
    // if (...) GOTO(0x47bbfc)
    // inc edx
    // pop esi
    // mov dword ptr [0x83ab58], edx
    // return;
    // if (...) GOTO(0x47bc55)
    // mov ecx, dword ptr [eax*4 + 0x83a4ec]
    // mov dword ptr [eax*4 + 0x83a4e8], ecx
    // mov ecx, dword ptr [eax*4 + 0x83aa8c]
    // mov dword ptr [eax*4 + 0x83aa88], ecx
    // inc eax
    // cmp eax, edx
    // if (...) GOTO(0x47bbfe)
    // pop esi
    // return;
    // lea ecx, [edx*4 + 0x83aa88]
    // mov dword ptr [eax], 0
    // test edx, edx
    // mov dword ptr [ecx], 0
    // if (...) GOTO(0x47bc4b)
    // mov edx, dword ptr [ecx - 4]
    // mov eax, dword ptr [eax - 4]
    // mov dword ptr [0x83ab50], edx
    // mov dword ptr [0x83ab54], eax
    // pop esi
    // return;
    // mov dword ptr [0x83ab54], 0
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // mov dword ptr [0x83ab2c], esi
    // push edi
    // test byte ptr [esi + 0x9c], 0x40
    // if (...) GOTO(0x47be08)
    // mov ecx, dword ptr [esi + 0x26c]
    // test ecx, ecx
    // if (...) GOTO(0x47bd3f)
    // mov eax, dword ptr [esi + 0x1b4]
    // mov edi, dword ptr [esi + 0x1ac]
    // sub eax, edi
    // push 0
    // push eax
    // CALL(0x47b420)
    // mov eax, dword ptr [esi + 0x270]
    // test eax, eax
    // if (...) GOTO(0x47bd00)
    // mov eax, dword ptr [eax + 0x278]
    // test eax, eax
    // if (...) GOTO(0x47bcbf)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x47bcc1)
    // xor edi, edi
    // mov eax, dword ptr [esi + 0x26c]
    // add eax, 0x274
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x47bcdf)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // if (...) GOTO(0x47bce1)
    // xor eax, eax
    // mov ebx, dword ptr [esi + 0x1b8]
    // mov ebp, dword ptr [esi + 0x1b0]
    // mov ecx, dword ptr [esi + 0x26c]
    // sub ebx, ebp
    // push 0
    // sub ebx, edi
    // mov edx, dword ptr [ecx]
    // push 0
    // push ebx
    // if (...) GOTO(0x47bd3b)
    // mov eax, dword ptr [esi + 0x26c]
    // add eax, 0x274
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x47bd1e)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // if (...) GOTO(0x47bd20)
    // xor eax, eax
    // mov edi, dword ptr [esi + 0x1b8]
    // mov ebp, dword ptr [esi + 0x1b0]
    // mov ecx, dword ptr [esi + 0x26c]
    // push 0
    // sub edi, ebp
    // push 0
    // mov edx, dword ptr [ecx]
    // push edi
    // push eax
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x270]
    // test ecx, ecx
    // if (...) GOTO(0x47be08)
    // mov eax, dword ptr [esi + 0x1b8]
    // mov ebx, dword ptr [esi + 0x1b0]
    // sub eax, ebx
    // push eax
    // push 0
    // CALL(0x47b420)
    // mov eax, dword ptr [esi + 0x26c]
    // test eax, eax
    // mov eax, dword ptr [esi + 0x270]
    // if (...) GOTO(0x47bdcf)
    // add eax, 0x274
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x47bd8d)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x47bd8f)
    // xor edi, edi
    // mov eax, dword ptr [esi + 0x26c]
    // add eax, 0x274
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x47bdad)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // if (...) GOTO(0x47bdaf)
    // xor eax, eax
    // mov ebp, dword ptr [esi + 0x1ac]
    // mov ecx, dword ptr [esi + 0x270]
    // push 0
    // push 0
    // mov edx, dword ptr [ecx]
    // push edi
    // mov edi, dword ptr [esi + 0x1b4]
    // sub edi, ebp
    // sub edi, eax
    // push edi
    // if (...) GOTO(0x47be05)
    // add eax, 0x274
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x47bde7)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // if (...) GOTO(0x47bde9)
    // xor eax, eax
    // mov ebx, dword ptr [esi + 0x1ac]
    // mov ecx, dword ptr [esi + 0x270]
    // push 0
    // push 0
    // mov edx, dword ptr [ecx]
    // push eax
    // mov eax, dword ptr [esi + 0x1b4]
    // sub eax, ebx
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x230]
    // mov edi, dword ptr [esp + 0x18]
    // mov ebx, dword ptr [esp + 0x14]
    // test eax, eax
    // if (...) GOTO(0x47be21)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, esi
    // CALL(0x47d570)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47bf2f)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47bf2f)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47bf0f)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x238]
    // push ebx
    // mov ebx, dword ptr [esp + 0x20]
    // push ebp
    // mov ebp, dword ptr [esp + 0x20]
    // test eax, eax
    // push edi
    // if (...) GOTO(0x47be91)
    // push ebx
    // push ebp
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0x10]
    // lea ecx, [esp + 0x28]
    // push eax
    // lea edx, [esp + 0x28]
    // push ecx
    // lea edi, [esi + 0xbc]
    // push edx
    // push ebx
    // push ebp
    // mov ecx, edi
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47bf06)
    // mov edx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0x10]
    // push ecx
    // mov ecx, dword ptr [esp + 0x28]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov edx, dword ptr [esp + 0x28]
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, dword ptr [esp + 0x24]
    // push esi
    // push edx
    // push eax
    // mov ecx, edi
    // CALL(0x492cc0)
    // mov eax, dword ptr [esp + 0x2c]
    // test eax, eax
    // if (...) GOTO(0x47bef0)
    // mov edx, dword ptr [esi]
    // push ebx
    // push ebp
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x1c]
    // pop edi
    // pop ebp
    // pop ebx
    // test ecx, ecx
    // if (...) GOTO(0x47bf2f)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov ecx, edi
    // CALL(0x492d40)
    // if (...) GOTO(0x47bee7)
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x50]
    // test ecx, ecx
    // if (...) GOTO(0x47bf2f)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c007)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c007)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47bfe7)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x23c]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47bf8c)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x24]
    // push eax
    // lea edx, [esp + 0x24]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47bfc6)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47bfd2)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x44]
    // pop edi
    // test ecx, ecx
    // pop ebx
    // if (...) GOTO(0x47c007)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x6c]
    // test ecx, ecx
    // if (...) GOTO(0x47c007)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c0d7)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c0d7)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47c0b7)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x240]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47c05c)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x24]
    // push eax
    // lea edx, [esp + 0x24]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47c096)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c0a2)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x48]
    // pop edi
    // test ecx, ecx
    // pop ebx
    // if (...) GOTO(0x47c0d7)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x70]
    // test ecx, ecx
    // if (...) GOTO(0x47c0d7)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c1a4)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c1a4)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47c184)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x244]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47c12c)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x24]
    // push eax
    // lea edx, [esp + 0x24]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47c166)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c16f)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x20]
    // pop edi
    // test ecx, ecx
    // pop ebx
    // if (...) GOTO(0x47c1a4)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x54]
    // test ecx, ecx
    // if (...) GOTO(0x47c1a4)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // CALL(0x405099)
    // sub esp, 0x10
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c282)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c282)
    // mov edi, dword ptr [esp + 0x24]
    // mov ebx, dword ptr [esp + 0x20]
    // push ebp
    // mov ebp, dword ptr [esp + 0x2c]
    // test ebp, ebp
    // if (...) GOTO(0x47c1fd)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x248]
    // test eax, eax
    // if (...) GOTO(0x47c1fd)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // mov eax, dword ptr [0x83ab04]
    // test eax, eax
    // if (...) GOTO(0x47c20d)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // test ebp, ebp
    // pop ebp
    // if (...) GOTO(0x47c26a)
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x28]
    // push eax
    // lea edx, [esp + 0x28]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47c24c)
    // mov edx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x28]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c255)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x24]
    // test ecx, ecx
    // if (...) GOTO(0x47c282)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x58]
    // test ecx, ecx
    // if (...) GOTO(0x47c282)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(0x405099)
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c354)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c354)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47c334)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x24c]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47c2dc)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x24]
    // push eax
    // lea edx, [esp + 0x24]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47c316)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c31f)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x28]
    // pop edi
    // test ecx, ecx
    // pop ebx
    // if (...) GOTO(0x47c354)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x5c]
    // test ecx, ecx
    // if (...) GOTO(0x47c354)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // CALL(0x405099)
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c427)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c427)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47c407)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x250]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47c3ac)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x24]
    // push eax
    // lea edx, [esp + 0x24]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47c3e6)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c3f2)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x2c]
    // pop edi
    // test ecx, ecx
    // pop ebx
    // if (...) GOTO(0x47c427)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x60]
    // test ecx, ecx
    // if (...) GOTO(0x47c427)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c4f7)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c4f7)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47c4d7)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x254]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47c47c)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x24]
    // push eax
    // lea edx, [esp + 0x24]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47c4b6)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c4c2)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x30]
    // pop edi
    // test ecx, ecx
    // pop ebx
    // if (...) GOTO(0x47c4f7)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x64]
    // test ecx, ecx
    // if (...) GOTO(0x47c4f7)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c5c7)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c5c7)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x47c5a7)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x258]
    // push ebx
    // mov ebx, dword ptr [esp + 0x1c]
    // push edi
    // mov edi, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47c54c)
    // push edi
    // push ebx
    // CALL(eax)
    // add esp, 8
    // lea eax, [esp + 0xc]
    // lea ecx, [esp + 0x24]
    // push eax
    // lea edx, [esp + 0x24]
    // push ecx
    // push edx
    // push edi
    // push ebx
    // lea ecx, [esi + 0xbc]
    // CALL(0x492b10)
    // test eax, eax
    // if (...) GOTO(0x47c586)
    // mov edx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi]
    // lea ecx, [esp + 0xc]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c592)
    // mov edx, dword ptr [esi]
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x34]
    // pop edi
    // test ecx, ecx
    // pop ebx
    // if (...) GOTO(0x47c5c7)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x68]
    // test ecx, ecx
    // if (...) GOTO(0x47c5c7)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // xor edi, edi
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47c6ae)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47c6ae)
    // mov ebx, dword ptr [esp + 0x18]
    // cmp ebx, 0xd
    // if (...) GOTO(0x47c61b)
    // cmp ebx, 0x1b
    // if (...) GOTO(0x47c60d)
    // cmp ebx, 0x1000d
    // if (...) GOTO(0x47c61b)
    // if (...) GOTO(0x47c627)
    // mov eax, dword ptr [esi]
    // push -2
    // mov ecx, esi
    // CALL(dword)
    // if (...) GOTO(0x47c627)
    // mov edx, dword ptr [esi]
    // push -1
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x140]
    // mov ebp, dword ptr [esp + 0x14]
    // test eax, eax
    // if (...) GOTO(0x47c659)
    // mov eax, dword ptr [esi + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47c64a)
    // mov eax, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [eax + 4]
    // if (...) GOTO(0x47c64c)
    // xor ecx, ecx
    // cmp ebx, 9
    // if (...) GOTO(0x47c695)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x25c]
    // test eax, eax
    // if (...) GOTO(0x47c672)
    // push ebx
    // push ebp
    // CALL(eax)
    // add esp, 8
    // mov edi, eax
    // mov eax, dword ptr [esi]
    // push ebx
    // push ebp
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x38]
    // add edi, eax
    // test ecx, ecx
    // if (...) GOTO(0x47c68c)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push ebx
    // push ebp
    // CALL(0x47c5d0)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x47c659)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, ecx
    // push ebp
    // push esi
    // mov eax, dword ptr [ebx + 0x9c]
    // push edi
    // xor edi, edi
    // test eax, 0x200000
    // if (...) GOTO(0x47c959)
    // test byte ptr [ebx + 0xa0], 8
    // if (...) GOTO(0x47c959)
    // mov eax, dword ptr [ebx + 0x140]
    // mov esi, dword ptr [esp + 0x14]
    // xor ebp, ebp
    // test eax, eax
    // if (...) GOTO(0x47c823)
    // mov eax, dword ptr [ebx + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47c70f)
    // mov eax, dword ptr [ebx + 0x13c]
    // mov edi, dword ptr [eax + 4]
    // if (...) GOTO(0x47c711)
    // xor edi, edi
    // mov ecx, dword ptr [edi + 0x26c]
    // test ecx, ecx
    // if (...) GOTO(0x47c75f)
    // mov edx, dword ptr [ecx]
    // push esi
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c913)
    // cmp esi, 0x60
    // if (...) GOTO(0x47c738)
    // cmp esi, 0x69
    // if (...) GOTO(0x47c753)
    // mov eax, esi
    // push 2
    // and eax, 0xfff8ffff
    // push eax
    // CALL(dword)
    // and eax, 0xffff
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x47c75f)
    // push esi
    // push 0
    // mov ecx, edi
    // CALL(0x47c5d0)
    // mov ebp, eax
    // mov ecx, dword ptr [edi + 0x270]
    // test ecx, ecx
    // if (...) GOTO(0x47c7b1)
    // mov edx, dword ptr [ecx]
    // push esi
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c913)
    // test ebp, ebp
    // if (...) GOTO(0x47c7b1)
    // cmp esi, 0x60
    // if (...) GOTO(0x47c78a)
    // cmp esi, 0x69
    // if (...) GOTO(0x47c7a5)
    // mov eax, esi
    // push 2
    // and eax, 0xfff8ffff
    // push eax
    // CALL(dword)
    // and eax, 0xffff
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x47c7b1)
    // push esi
    // push 0
    // mov ecx, edi
    // CALL(0x47c5d0)
    // mov ebp, eax
    // mov eax, dword ptr [edi + 0x270]
    // test eax, eax
    // if (...) GOTO(0x47c809)
    // mov eax, dword ptr [edi + 0x26c]
    // test eax, eax
    // if (...) GOTO(0x47c809)
    // test ebp, ebp
    // if (...) GOTO(0x47c809)
    // cmp esi, 0x60
    // if (...) GOTO(0x47c7d3)
    // cmp esi, 0x69
    // if (...) GOTO(0x47c7ef)
    // mov ecx, esi
    // push 2
    // and ecx, 0xfff8ffff
    // push ecx
    // CALL(dword)
    // and eax, 0xffff
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x47c809)
    // push esi
    // push 0
    // mov ecx, edi
    // CALL(0x47c5d0)
    // test eax, eax
    // if (...) GOTO(0x47c809)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // return;
    // push esi
    // mov ecx, edi
    // CALL(0x47c6c0)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x47c823)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // return;
    // mov ecx, dword ptr [ebx + 0x26c]
    // test ecx, ecx
    // if (...) GOTO(0x47c875)
    // mov edx, dword ptr [ecx]
    // push esi
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c913)
    // test ebp, ebp
    // if (...) GOTO(0x47c875)
    // cmp esi, 0x60
    // if (...) GOTO(0x47c84e)
    // cmp esi, 0x69
    // if (...) GOTO(0x47c869)
    // mov eax, esi
    // push 2
    // and eax, 0xfff8ffff
    // push eax
    // CALL(dword)
    // and eax, 0xffff
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x47c875)
    // push esi
    // push 0
    // mov ecx, ebx
    // CALL(0x47c5d0)
    // mov ebp, eax
    // mov ecx, dword ptr [ebx + 0x270]
    // test ecx, ecx
    // if (...) GOTO(0x47c8c7)
    // mov edx, dword ptr [ecx]
    // push esi
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47c913)
    // test ebp, ebp
    // if (...) GOTO(0x47c8c7)
    // cmp esi, 0x60
    // if (...) GOTO(0x47c8a0)
    // cmp esi, 0x69
    // if (...) GOTO(0x47c8bb)
    // mov eax, esi
    // push 2
    // and eax, 0xfff8ffff
    // push eax
    // CALL(dword)
    // and eax, 0xffff
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x47c8c7)
    // push esi
    // push 0
    // mov ecx, ebx
    // CALL(0x47c5d0)
    // mov ebp, eax
    // mov eax, dword ptr [ebx + 0x270]
    // test eax, eax
    // if (...) GOTO(0x47c91f)
    // mov eax, dword ptr [ebx + 0x26c]
    // test eax, eax
    // if (...) GOTO(0x47c91f)
    // test ebp, ebp
    // if (...) GOTO(0x47c91f)
    // cmp esi, 0x60
    // if (...) GOTO(0x47c8e9)
    // cmp esi, 0x69
    // if (...) GOTO(0x47c905)
    // mov ecx, esi
    // push 2
    // and ecx, 0xfff8ffff
    // push ecx
    // CALL(dword)
    // and eax, 0xffff
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x47c91f)
    // push esi
    // push 0
    // mov ecx, ebx
    // CALL(0x47c5d0)
    // test eax, eax
    // if (...) GOTO(0x47c91f)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 1
    // pop ebx
    // return;
    // mov dword ptr [0x83ab2c], ebx
    // mov eax, dword ptr [ebx + 0x260]
    // test eax, eax
    // if (...) GOTO(0x47c937)
    // push esi
    // CALL(eax)
    // add esp, 4
    // mov edi, eax
    // mov edx, dword ptr [ebx]
    // push esi
    // mov ecx, ebx
    // CALL(dword)
    // mov ecx, dword ptr [ebx + 0x3c]
    // add edi, eax
    // test ecx, ecx
    // if (...) GOTO(0x47c950)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // xor edi, edi
    // test dword ptr [esi + 0x9c], 0x200000
    // if (...) GOTO(0x47ca01)
    // test byte ptr [esi + 0xa0], 8
    // if (...) GOTO(0x47ca01)
    // mov eax, dword ptr [esi + 0x140]
    // mov ebx, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x47c9c8)
    // mov eax, dword ptr [esi + 0x138]
    // test eax, eax
    // if (...) GOTO(0x47c9af)
    // mov eax, dword ptr [esi + 0x13c]
    // mov ecx, dword ptr [eax + 4]
    // if (...) GOTO(0x47c9b1)
    // xor ecx, ecx
    // push ebx
    // CALL(0x47c970)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x47c9c8)
    // pop edi
    // pop esi
    // mov eax, 1
    // pop ebx
    // return;
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x264]
    // test eax, eax
    // if (...) GOTO(0x47c9e0)
    // push ebx
    // CALL(eax)
    // add esp, 4
    // mov edi, eax
    // mov edx, dword ptr [esi]
    // push ebx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x40]
    // add edi, eax
    // test ecx, ecx
    // if (...) GOTO(0x47c9f9)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // xor eax, eax
    // pop ebx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, ecx
    // push esi
    // mov ecx, dword ptr [esp + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47cb00)
    // mov esi, dword ptr [esp + 0xc]
    // test esi, esi
    // if (...) GOTO(0x47cb00)
    // mov dl, byte ptr [eax + 0x9c]
    // push edi
    // test dl, 4
    // if (...) GOTO(0x47ca43)
    // mov edx, dword ptr [0x83ff10]
    // mov edi, dword ptr [esi]
    // add edi, edx
    // mov dword ptr [esi], edi
    // test byte ptr [eax + 0x9c], 8
    // if (...) GOTO(0x47ca58)
    // mov edx, dword ptr [0x83ff10]
    // mov edi, dword ptr [ecx]
    // add edi, edx
    // mov dword ptr [ecx], edi
    // mov edx, dword ptr [eax + 0x9c]
    // test dh, 4
    // if (...) GOTO(0x47ca8c)
    // mov edx, dword ptr [eax + 0x184]
    // mov edi, dword ptr [ecx]
    // shl edx, 1
    // add edi, edx
    // mov dword ptr [ecx], edi
    // mov ecx, dword ptr [eax + 0x184]
    // mov edx, dword ptr [esi]
    // shl ecx, 1
    // add edx, ecx
    // mov dword ptr [esi], edx
    // mov ecx, dword ptr [eax + 0x188]
    // cmp ecx, -1
    // if (...) GOTO(0x47cac2)
    // if (...) GOTO(0x47cab8)
    // test dl, 0x11
    // if (...) GOTO(0x47cac2)
    // mov edx, dword ptr [eax + 0x184]
    // mov edi, dword ptr [ecx]
    // shl edx, 1
    // add edi, edx
    // mov dword ptr [ecx], edi
    // mov ecx, dword ptr [eax + 0x184]
    // mov edx, dword ptr [esi]
    // shl ecx, 1
    // add edx, ecx
    // mov dword ptr [esi], edx
    // mov ecx, dword ptr [eax + 0x188]
    // cmp ecx, -1
    // if (...) GOTO(0x47cac2)
    // sub ecx, dword ptr [eax + 0x184]
    // add ecx, edx
    // mov dword ptr [esi], ecx
    // test byte ptr [eax + 0x9c], 0x10
    // if (...) GOTO(0x47cadf)
    // mov edx, dword ptr [eax + 0x180]
    // mov edi, dword ptr [eax + 0x184]
    // mov ecx, dword ptr [esi]
    // sub edx, edi
    // add ecx, edx
    // mov dword ptr [esi], ecx
    // mov ecx, dword ptr [eax + 0x15c]
    // pop edi
    // test ecx, ecx
    // if (...) GOTO(0x47cb00)
    // test dword ptr [eax + 0x9c], 0x20000000
    // if (...) GOTO(0x47cb00)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // add dword ptr [esi], eax
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, ecx
    // push esi
    // mov ecx, dword ptr [esp + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47cc0a)
    // mov esi, dword ptr [esp + 0xc]
    // test esi, esi
    // if (...) GOTO(0x47cc0a)
    // mov dl, byte ptr [eax + 0x9c]
    // push edi
    // test dl, 4
    // if (...) GOTO(0x47cb43)
    // mov edx, dword ptr [0x83ff10]
    // mov edi, dword ptr [esi]
    // sub edi, edx
    // mov dword ptr [esi], edi
    // test byte ptr [eax + 0x9c], 8
    // if (...) GOTO(0x47cb58)
    // mov edx, dword ptr [0x83ff10]
    // mov edi, dword ptr [ecx]
    // sub edi, edx
    // mov dword ptr [ecx], edi
    // mov edx, dword ptr [eax + 0x9c]
    // test dh, 4
    // if (...) GOTO(0x47cb90)
    // mov edx, dword ptr [eax + 0x184]
    // mov edi, dword ptr [ecx]
    // neg edx
    // shl edx, 1
    // add edi, edx
    // mov dword ptr [ecx], edi
    // mov ecx, dword ptr [eax + 0x184]
    // mov edx, dword ptr [esi]
    // neg ecx
    // shl ecx, 1
    // add edx, ecx
    // mov dword ptr [esi], edx
    // mov ecx, dword ptr [eax + 0x188]
    // cmp ecx, -1
    // if (...) GOTO(0x47cbcc)
    // if (...) GOTO(0x47cbc0)
    // test dl, 0x11
    // if (...) GOTO(0x47cbcc)
    // mov edx, dword ptr [eax + 0x184]
    // mov edi, dword ptr [ecx]
    // neg edx
    // shl edx, 1
    // add edi, edx
    // mov dword ptr [ecx], edi
    // mov ecx, dword ptr [eax + 0x184]
    // mov edx, dword ptr [esi]
    // neg ecx
    // shl ecx, 1
    // add edx, ecx
    // mov dword ptr [esi], edx
    // mov ecx, dword ptr [eax + 0x188]
    // cmp ecx, -1
    // if (...) GOTO(0x47cbcc)
    // mov edi, dword ptr [eax + 0x184]
    // sub edi, ecx
    // add edi, edx
    // mov dword ptr [esi], edi
    // test byte ptr [eax + 0x9c], 0x10
    // if (...) GOTO(0x47cbe9)
    // mov edx, dword ptr [eax + 0x184]
    // mov edi, dword ptr [eax + 0x180]
    // mov ecx, dword ptr [esi]
    // sub edx, edi
    // add ecx, edx
    // mov dword ptr [esi], ecx
    // mov ecx, dword ptr [eax + 0x15c]
    // pop edi
    // test ecx, ecx
    // if (...) GOTO(0x47cc0a)
    // test dword ptr [eax + 0x9c], 0x20000000
    // if (...) GOTO(0x47cc0a)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // sub dword ptr [esi], eax
    // pop esi
    // return;
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // test esi, esi
    // mov eax, ecx
    // if (...) GOTO(0x47ccd9)
    // test byte ptr [eax + 0x9c], 4
    // if (...) GOTO(0x47cc36)
    // mov ecx, dword ptr [0x83ff10]
    // mov edx, dword ptr [esi + 0xc]
    // add edx, ecx
    // mov dword ptr [esi + 0xc], edx
    // test byte ptr [eax + 0x9c], 8
    // if (...) GOTO(0x47cc4d)
    // mov edx, dword ptr [0x83ff10]
    // mov ecx, dword ptr [esi + 8]
    // add ecx, edx
    // mov dword ptr [esi + 8], ecx
    // mov ecx, dword ptr [eax + 0x9c]
    // push edi
    // test ch, 4
    // if (...) GOTO(0x47cc5e)
    // test cl, 0x11
    // if (...) GOTO(0x47cc98)
    // mov ecx, dword ptr [eax + 0x184]
    // mov edx, dword ptr [esi]
    // sub edx, ecx
    // mov dword ptr [esi], edx
    // mov edx, dword ptr [esi + 8]
    // add edx, ecx
    // mov dword ptr [esi + 8], edx
    // mov edx, dword ptr [esi + 4]
    // sub edx, ecx
    // mov dword ptr [esi + 4], edx
    // mov edx, dword ptr [esi + 0xc]
    // add edx, ecx
    // mov dword ptr [esi + 0xc], edx
    // mov ecx, dword ptr [eax + 0x188]
    // cmp ecx, -1
    // if (...) GOTO(0x47cc98)
    // sub ecx, dword ptr [eax + 0x184]
    // add ecx, edx
    // mov dword ptr [esi + 0xc], ecx
    // test byte ptr [eax + 0x9c], 0x10
    // if (...) GOTO(0x47ccb7)
    // mov ecx, dword ptr [eax + 0x184]
    // mov edi, dword ptr [eax + 0x180]
    // mov edx, dword ptr [esi + 4]
    // sub ecx, edi
    // add edx, ecx
    // mov dword ptr [esi + 4], edx
    // mov ecx, dword ptr [eax + 0x15c]
    // pop edi
    // test ecx, ecx
    // if (...) GOTO(0x47ccd9)
    // test dword ptr [eax + 0x9c], 0x20000000
    // if (...) GOTO(0x47ccd9)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // sub dword ptr [esi + 4], eax
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // test esi, esi
    // if (...) GOTO(0x47cdab)
    // test byte ptr [ecx + 0x9c], 4
    // if (...) GOTO(0x47cd03)
    // mov eax, dword ptr [0x83ff10]
    // mov edx, dword ptr [esi + 0xc]
    // sub edx, eax
    // mov dword ptr [esi + 0xc], edx
    // test byte ptr [ecx + 0x9c], 8
    // if (...) GOTO(0x47cd1a)
    // mov edx, dword ptr [0x83ff10]
    // mov eax, dword ptr [esi + 8]
    // sub eax, edx
    // mov dword ptr [esi + 8], eax
    // mov eax, dword ptr [ecx + 0x9c]
    // push edi
    // test ah, 4
    // if (...) GOTO(0x47cd2a)
    // test al, 0x11
    // if (...) GOTO(0x47cd68)
    // mov eax, dword ptr [ecx + 0x184]
    // mov edi, dword ptr [esi]
    // mov edx, dword ptr [esi + 8]
    // neg eax
    // sub edi, eax
    // add edx, eax
    // mov dword ptr [esi], edi
    // mov edi, dword ptr [esi + 4]
    // mov dword ptr [esi + 8], edx
    // mov edx, dword ptr [esi + 0xc]
    // sub edi, eax
    // add edx, eax
    // mov dword ptr [esi + 4], edi
    // mov dword ptr [esi + 0xc], edx
    // mov eax, dword ptr [ecx + 0x188]
    // cmp eax, -1
    // if (...) GOTO(0x47cd68)
    // mov edi, dword ptr [ecx + 0x184]
    // sub edi, eax
    // add edi, edx
    // mov dword ptr [esi + 0xc], edi
    // test byte ptr [ecx + 0x9c], 0x10
    // if (...) GOTO(0x47cd87)
    // mov eax, dword ptr [ecx + 0x180]
    // mov edi, dword ptr [ecx + 0x184]
    // mov edx, dword ptr [esi + 4]
    // sub eax, edi
    // add edx, eax
    // mov dword ptr [esi + 4], edx
    // mov eax, dword ptr [ecx + 0x15c]
    // pop edi
    // test eax, eax
    // if (...) GOTO(0x47cdab)
    // test dword ptr [ecx + 0x9c], 0x20000000
    // if (...) GOTO(0x47cdab)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // add dword ptr [esi + 4], eax
    // pop esi
    // return;
    // // nop
    // mov eax, dword ptr [0x83aabc]
    // test eax, eax
    // if (...) GOTO(0x47cdbb)
    // CALL(eax)
    // mov eax, dword ptr [0x83aac4]
    // push esi
    // mov esi, dword ptr [esp + 8]
    // test eax, eax
    // if (...) GOTO(0x47cf6d)
    // test esi, esi
    // if (...) GOTO(0x47cddc)
    // push esi
    // mov ecx, 0x83a7b8
    // CALL(0x475b00)
    // mov eax, dword ptr [0x4e42c4]
    // push ebx
    // push ebp
    // push edi
    // push eax
    // push eax
    // push(0x83a2c8)  // ptr?
    // mov ecx, 0x83a7b8
    // CALL(0x4795d0)
    // mov eax, dword ptr [0x83a2c8]
    // mov ebp, dword ptr [0x83a2d0]
    // mov ebx, dword ptr [0x83a2cc]
    // mov edi, dword ptr [0x83a2d4]
    // inc eax
    // dec ebp
    // mov dword ptr [0x83a2c8], eax
    // mov eax, dword ptr [0x83aad8]
    // inc ebx
    // dec edi
    // push eax
    // push(0x83a2c8)  // ptr?
    // mov ecx, 0x83a7b8
    // mov dword ptr [0x83a2d0], ebp
    // mov dword ptr [0x83a2cc], ebx
    // mov dword ptr [0x83a2d4], edi
    // CALL(0x478b50)
    // mov ecx, dword ptr [0x83aac8]
    // push 0
    // push 0
    // push 0
    // push ecx
    // mov ecx, 0x83a7b8
    // CALL(0x4762d0)
    // mov edx, dword ptr [0x4e42c0]
    // push 2
    // push 2
    // push -1
    // push edx
    // mov ecx, 0x83a7b8
    // CALL(0x476310)
    // mov eax, dword ptr [0x83aac4]
    // push(0x5e)
    // push eax
    // CALL(0x4a6170)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x47cef9)
    // mov ecx, dword ptr [0x83a2cc]
    // mov esi, dword ptr [0x83aac4]
    // lea ebp, [ecx + 1]
    // push(0x5e)
    // push esi
    // CALL(0x4a6170)
    // mov ebx, eax
    // add esp, 8
    // test ebx, ebx
    // if (...) GOTO(0x47cea1)
    // mov byte ptr [ebx], 0
    // test esi, esi
    // if (...) GOTO(0x47cecd)
    // mov edi, esi
    // or ecx, 0xffffffff
    // xor eax, eax
    // mov edx, dword ptr [0x83a2d0]
    // repne scasb al, byte ptr es:[edi]
    // mov eax, dword ptr [0x83a2c8]
    // not ecx
    // dec ecx
    // sub edx, eax
    // push ecx
    // push edx
    // push ebp
    // push eax
    // push esi
    // mov ecx, 0x83a7b8
    // CALL(0x477da0)
    // mov eax, dword ptr [0x83aac8]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47cee0)
    // mov eax, dword ptr [eax + 0x10]
    // add eax, ecx
    // if (...) GOTO(0x47cee3)
    // mov eax, dword ptr [eax + 0xc]
    // add ebp, eax
    // test ebx, ebx
    // if (...) GOTO(0x47ceec)
    // mov byte ptr [ebx], 0x5e
    // test ebx, ebx
    // lea esi, [ebx + 1]
    // if (...) GOTO(0x47ce8d)
    // mov esi, dword ptr [esp + 0x14]
    // if (...) GOTO(0x47cf20)
    // mov edx, dword ptr [0x83aac4]
    // test edx, edx
    // if (...) GOTO(0x47cf20)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // push(0x83a2c8)  // ptr?
    // push edx
    // mov ecx, 0x83a7b8
    // CALL(0x477eb0)
    // mov ebx, dword ptr [0x83a2c8]
    // mov edi, dword ptr [0x83a2d0]
    // mov edx, dword ptr [0x83a2cc]
    // mov ecx, dword ptr [0x83a2d4]
    // dec ebx
    // inc edi
    // mov dword ptr [0x83a2d0], edi
    // dec edx
    // inc ecx
    // pop edi
    // mov dword ptr [0x83a2c8], ebx
    // pop ebp
    // test esi, esi
    // mov dword ptr [0x83a2cc], edx
    // mov dword ptr [0x83a2d4], ecx
    // pop ebx
    // if (...) GOTO(0x47cf6d)
    // mov ecx, dword ptr [0x83a7bc]
    // test ecx, ecx
    // if (...) GOTO(0x47cf6d)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [0x83aaa0]
    // test eax, eax
    // if (...) GOTO(0x47cfad)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x47cf8e)
    // mov edx, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // mov eax, dword ptr [0x83aaa8]
    // mov ecx, dword ptr [0x83aaa4]
    // push 0
    // push eax
    // push ecx
    // mov ecx, dword ptr [0x83aaa0]
    // push(0x83a7b8)  // ptr?
    // CALL(0x473e60)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x47cfc0)
    // mov edx, dword ptr [ecx]
    // push esi
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x2b8
    // lea ecx, [esp]
    // CALL(0x474ae0)
    // xor eax, eax
    // mov dword ptr [0x83a4e8], eax
    // mov dword ptr [0x83a4ec], eax
    // mov dword ptr [0x83a4f0], eax
    // mov dword ptr [0x83a4f4], eax
    // CALL(0x4a0890)
    // lea ecx, [esp]
    // CALL(0x474c40)
    // xor eax, eax
    // add esp, 0x2b8
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x47d01f)
    // mov eax, dword ptr [ecx]
    // if (...) GOTO(dword)
    // return;
    // test byte ptr [ecx + 0xa0], 2
    // if (...) GOTO(0x47d05c)
    // mov eax, dword ptr [esp + 4]
    // push esi
    // mov esi, dword ptr [ecx + 0x1c0]
    // mov dword ptr [ecx + 0x184], eax
    // mov eax, dword ptr [ecx + 0x1c8]
    // mov edx, dword ptr [ecx]
    // push 0
    // sub eax, esi
    // mov esi, dword ptr [ecx + 0x1bc]
    // push 0
    // push eax
    // mov eax, dword ptr [ecx + 0x1c4]
    // sub eax, esi
    // push eax
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // mov eax, dword ptr [0x83aaa0]
    // sub esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x47d11e)
    // mov eax, dword ptr [0x83aab8]
    // mov ecx, dword ptr [0x83aab4]
    // mov edx, dword ptr [0x83aaa8]
    // push eax
    // mov eax, dword ptr [0x83aaa4]
    // push ecx
    // push edx
    // push eax
    // push 0
    // push 0
    // push(0x83a7b8)  // ptr?
    // mov ecx, 0x83a500
    // CALL(0x475c60)
    // mov ecx, dword ptr [0x83aaa4]
    // mov edx, dword ptr [0x83aab4]
    // mov eax, dword ptr [0x83aaa8]
    // add edx, ecx
    // mov dword ptr [esp + 8], edx
    // mov dword ptr [esp], ecx
    // mov ecx, dword ptr [0x83aab8]
    // lea edx, [esp]
    // push edx
    // add ecx, eax
    // push(0x83a4d8)  // ptr?
    // push(0x83a4d8)  // ptr?
    // mov dword ptr [esp + 0x10], eax
    // mov dword ptr [esp + 0x18], ecx
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x14]
    // test eax, eax
    // if (...) GOTO(0x47d11e)
    // push esi
    // mov esi, dword ptr [0x83aaa0]
    // push(0x83a4d8)  // ptr?
    // mov dword ptr [0x83aaa0], 0
    // CALL(0x47cdb0)
    // add esp, 4
    // mov dword ptr [0x83aaa0], esi
    // mov dword ptr [0x83a4d8], 0
    // mov dword ptr [0x83a4e0], 0
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 0xc]
    // sub esp, 0x18
    // push ebx
    // xor ebx, ebx
    // push esi
    // cmp ecx, -1
    // push edi
    // if (...) GOTO(0x47d154)
    // mov eax, dword ptr [esp + 0x34]
    // cmp eax, -1
    // if (...) GOTO(0x47d154)
    // mov dword ptr [esp + 0xc], ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x47d16d)
    // mov ecx, dword ptr [0x83ad50]
    // cmp ecx, ebx
    // if (...) GOTO(0x47d16d)
    // mov eax, dword ptr [ecx]
    // lea edx, [esp + 0x10]
    // push edx
    // lea edx, [esp + 0x10]
    // push edx
    // CALL(dword)
    // mov esi, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0xc]
    // mov ecx, dword ptr [esp + 0x10]
    // cmp esi, ebx
    // mov dword ptr [esp + 0x30], eax
    // mov dword ptr [esp + 0x34], ecx
    // if (...) GOTO(0x47d19b)
    // lea edx, [esp + 0x34]
    // lea eax, [esp + 0x30]
    // push edx
    // push eax
    // CALL(0x47f700)
    // add esp, 8
    // mov esi, eax
    // if (...) GOTO(0x47d1ac)
    // lea ecx, [esp + 0x34]
    // lea edx, [esp + 0x30]
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x47b2d0)
    // cmp esi, ebx
    // if (...) GOTO(0x47d48b)
    // cmp dword ptr [0x83ab18], ebx
    // if (...) GOTO(0x47d3c1)
    // test dword ptr [esi + 0x9c], 0x4000000
    // if (...) GOTO(0x47d3c1)
    // mov eax, dword ptr [esi + 0x208]
    // cmp eax, ebx
    // mov eax, dword ptr [0x83aaa0]
    // if (...) GOTO(0x47d36e)
    // cmp eax, ebx
    // push ebx
    // if (...) GOTO(0x47d1fd)
    // mov edi, dword ptr [0x4ba200]
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x47d205)
    // push ebx
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x47d1f4)
    // if (...) GOTO(0x47d205)
    // CALL(0x47d060)
    // add esp, 4
    // mov eax, dword ptr [esi + 0x208]
    // mov ecx, dword ptr [0x83aaa0]
    // cmp eax, ecx
    // if (...) GOTO(0x47d2a0)
    // mov eax, dword ptr [eax + 0x18]
    // mov dword ptr [0x83aab4], eax
    // mov ecx, dword ptr [esi + 0x208]
    // mov edx, dword ptr [ecx + 0x1c]
    // mov dword ptr [0x83aab8], edx
    // mov eax, dword ptr [esi + 0x20c]
    // mov dword ptr [0x83aaac], eax
    // mov ecx, dword ptr [esi + 0x210]
    // mov dword ptr [0x83aab0], ecx
    // mov ecx, dword ptr [0x83a504]
    // cmp ecx, ebx
    // if (...) GOTO(0x47d261)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83a504]
    // if (...) GOTO(0x47d263)
    // xor eax, eax
    // cmp eax, dword ptr [0x83aab4]
    // if (...) GOTO(0x47d283)
    // cmp ecx, ebx
    // if (...) GOTO(0x47d279)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x47d27b)
    // xor eax, eax
    // cmp eax, dword ptr [0x83aab8]
    // if (...) GOTO(0x47d2a0)
    // mov ecx, dword ptr [0x83aab8]
    // mov edx, dword ptr [0x83aab4]
    // push ebx
    // push ebx
    // push 1
    // push ebx
    // push ecx
    // push edx
    // mov ecx, 0x83a500
    // CALL(0x474dd0)
    // mov eax, dword ptr [esp + 0xc]
    // mov edi, dword ptr [0x83aaac]
    // mov ecx, dword ptr [esp + 0x10]
    // mov edx, dword ptr [0x83aab0]
    // sub eax, edi
    // sub ecx, edx
    // mov dword ptr [0x83aaa4], eax
    // mov dword ptr [0x83aaa8], ecx
    // mov edx, dword ptr [esi + 0x208]
    // mov dword ptr [0x83aaa0], edx
    // mov edx, dword ptr [0x83aab8]
    // push edx
    // mov edx, dword ptr [0x83aab4]
    // push edx
    // push ebx
    // push ebx
    // push ecx
    // push eax
    // push(0x83a500)  // ptr?
    // mov ecx, 0x83a7b8
    // CALL(0x475c60)
    // mov ecx, dword ptr [0x83aaa4]
    // mov edx, dword ptr [0x83aab4]
    // mov eax, dword ptr [0x83aaa8]
    // add edx, ecx
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [0x83aab8]
    // mov dword ptr [esp + 0x1c], edx
    // lea edx, [esp + 0x14]
    // push(0x83a4d8)  // ptr?
    // add ecx, eax
    // push edx
    // push(0x83a4d8)  // ptr?
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x2c], ecx
    // CALL(dword)
    // cmp dword ptr [esp + 0x2c], ebx
    // if (...) GOTO(0x47d4ae)
    // mov esi, dword ptr [0x83ab4c]
    // push(0x83a4d8)  // ptr?
    // mov dword ptr [0x83ab4c], 1
    // CALL(0x47cdb0)
    // mov eax, dword ptr [0x83a4e0]
    // add esp, 4
    // mov dword ptr [0x83ab4c], esi
    // mov dword ptr [0x83a4d8], eax
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x18
    // return;
    // cmp eax, ebx
    // if (...) GOTO(0x47d392)
    // push 1
    // CALL(0x47d060)
    // mov edi, dword ptr [0x4ba200]
    // add esp, 4
    // push 1
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x47d392)
    // push 1
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x47d38a)
    // mov dword ptr [0x83aaa0], ebx
    // mov eax, dword ptr [esi + 0x214]
    // cmp eax, ebx
    // if (...) GOTO(0x47d3ad)
    // mov eax, dword ptr [eax + 4]
    // cmp eax, ebx
    // if (...) GOTO(0x47d4a7)
    // mov esi, dword ptr [esi + 0x218]
    // cmp esi, ebx
    // if (...) GOTO(0x47d49b)
    // push esi
    // if (...) GOTO(0x47d4a0)
    // mov eax, dword ptr [esp + 0x34]
    // mov ecx, dword ptr [esp + 0x30]
    // mov edx, dword ptr [esi]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // add eax, 2
    // cmp eax, 0x13
    // if (...) GOTO(0x47d48b)
    // if (...) GOTO(dword)
    // push 1
    // CALL(0x47d060)
    // add esp, 4
    // mov dword ptr [0x83aaa0], ebx
    // mov dword ptr [0x83aba0], 1
    // if (...) GOTO(0x47d49b)
    // push 1
    // CALL(0x47d060)
    // add esp, 4
    // mov dword ptr [0x83aaa0], ebx
    // mov dword ptr [0x83aba0], 1
    // push(0x7f84)
    // if (...) GOTO(0x47d4a0)
    // push 1
    // CALL(0x47d060)
    // add esp, 4
    // mov dword ptr [0x83aaa0], ebx
    // mov dword ptr [0x83aba0], 1
    // push(0x7f85)
    // if (...) GOTO(0x47d4a0)
    // push 1
    // CALL(0x47d060)
    // add esp, 4
    // mov dword ptr [0x83aaa0], ebx
    // mov dword ptr [0x83aba0], 1
    // push(0x7f83)
    // if (...) GOTO(0x47d4a0)
    // push 1
    // CALL(0x47d060)
    // add esp, 4
    // mov dword ptr [0x83aaa0], ebx
    // mov dword ptr [0x83aba0], 1
    // push(0x7f82)
    // if (...) GOTO(0x47d4a0)
    // push 1
    // CALL(0x47d060)
    // add esp, 4
    // mov dword ptr [0x83aaa0], ebx
    // push(0x7f00)
    // push ebx
    // CALL(dword)
    // push eax
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x18
    // return;
    // lea ecx, [ecx]
    // scasb al, byte ptr es:[edi]
    // aam 0x47
    // add byte ptr [esi - 0x17ffb82c], ch
    // rol dword ptr [edi], cl
    // scasb al, byte ptr es:[edi]
    // aam 0x47
    // add al, ch
    // rol dword ptr [edi], cl
    // mov edx, esp
    // inc edi
    // add byte ptr [ebx - 0x74ffb82c], cl
    // aam 0x47
    // add byte ptr [ebx - 0x74ffb82c], cl
    // aam 0x47
    // add byte ptr [ebx - 0x74ffb82c], cl
    // aam 0x47
    // add byte ptr [edi], al
    // aam 0x47
    // add byte ptr [edi], al
    // aam 0x47
    // add byte ptr [eax], ch
    // aam 0x47
    // add byte ptr [edx - 0x2c], ch
    // inc edi
    // add byte ptr [ecx - 0x2c], cl
    // inc edi
    // add byte ptr [eax], ch
    // aam 0x47
    // add byte ptr [ecx - 0x2c], cl
    // inc edi
    // add byte ptr [edx - 0x2c], ch
    // inc edi
    // add byte ptr [eax - 0x6f6f6f70], dl
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov ecx, dword ptr [esi + 0x150]
    // test ecx, ecx
    // if (...) GOTO(0x47d52d)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x150], 0
    // mov ecx, dword ptr [esi + 0x154]
    // test ecx, ecx
    // if (...) GOTO(0x47d547)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x154], 0
    // mov ecx, dword ptr [esi + 0x158]
    // test ecx, ecx
    // if (...) GOTO(0x47d561)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x158], 0
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push esi
    // push edi
    // mov edi, ecx
    // mov ebx, dword ptr [edi + 0x194]
    // mov esi, dword ptr [edi + 0x1c4]
    // mov ecx, dword ptr [edi + 0x1bc]
    // mov edx, dword ptr [edi + 0x180]
    // lea eax, [ebx + ebx]
    // sub esi, eax
    // mov eax, dword ptr [edi + 0x184]
    // sub esi, ecx
    // mov ecx, dword ptr [edi + 0x158]
    // sub esi, eax
    // sub esi, edx
    // sub esi, 2
    // test ecx, ecx
    // if (...) GOTO(0x47d5db)
    // push ebx
    // push esi
    // CALL(0x47b420)
    // mov eax, dword ptr [edi + 0x158]
    // add eax, 0x274
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x47d5d0)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // if (...) GOTO(0x47d5d2)
    // xor eax, eax
    // mov ecx, 0xfffffffd
    // sub ecx, eax
    // add esi, ecx
    // mov ecx, dword ptr [edi + 0x154]
    // test ecx, ecx
    // if (...) GOTO(0x47d5ec)
    // push ebx
    // push esi
    // CALL(0x47b420)
    // mov ecx, dword ptr [edi + 0x150]
    // test ecx, ecx
    // if (...) GOTO(0x47d5fd)
    // push ebx
    // push esi
    // CALL(0x47b420)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x47b9a0)
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47d7b9)
    // mov eax, dword ptr [esi + 0x9c]
    // push ebx
    // test al, 0x10
    // push edi
    // if (...) GOTO(0x47d640)
    // test eax, 0x400000
    // if (...) GOTO(0x47d640)
    // mov ebx, dword ptr [esi + 0x180]
    // if (...) GOTO(0x47d646)
    // mov ebx, dword ptr [esi + 0x184]
    // mov edi, dword ptr [esi + 0x188]
    // cmp edi, -1
    // if (...) GOTO(0x47d657)
    // mov edi, dword ptr [esi + 0x184]
    // cmp edi, 1
    // if (...) GOTO(0x47d661)
    // mov edi, 1
    // cmp ebx, 1
    // if (...) GOTO(0x47d66b)
    // mov ebx, 1
    // mov eax, dword ptr [esi + 0x1c4]
    // mov edx, dword ptr [esi + 0x1bc]
    // mov ecx, dword ptr [esi + 0x11c]
    // push 0
    // push 0
    // push 1
    // push 0
    // sub eax, edx
    // push ebx
    // push eax
    // CALL(0x474dd0)
    // mov ecx, dword ptr [0x83ad10]
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // CALL(0x4789f0)
    // mov edx, dword ptr [0x4e432c]
    // mov ecx, dword ptr [esi + 0x11c]
    // push edx
    // CALL(0x478b30)
    // mov eax, dword ptr [esi + 0x188]
    // test eax, eax
    // if (...) GOTO(0x47d703)
    // mov eax, dword ptr [esi + 0x1c4]
    // mov edx, dword ptr [esi + 0x1bc]
    // mov ecx, dword ptr [esi + 0x128]
    // push 0
    // push 0
    // push 1
    // push 0
    // sub eax, edx
    // push edi
    // push eax
    // CALL(0x474dd0)
    // mov ecx, dword ptr [0x83ad10]
    // push ecx
    // mov ecx, dword ptr [esi + 0x128]
    // CALL(0x4789f0)
    // mov edx, dword ptr [0x4e432c]
    // mov ecx, dword ptr [esi + 0x128]
    // push edx
    // CALL(0x478b30)
    // mov eax, dword ptr [esi + 0x184]
    // test eax, eax
    // if (...) GOTO(0x47d7ab)
    // mov ecx, dword ptr [esi + 0x1c8]
    // mov edx, dword ptr [esi + 0x1c0]
    // sub ecx, edx
    // push 0
    // sub ecx, edi
    // push 0
    // push 1
    // sub ecx, ebx
    // push 0
    // push ecx
    // mov ecx, dword ptr [esi + 0x124]
    // push eax
    // CALL(0x474dd0)
    // mov edx, dword ptr [0x83ad10]
    // mov ecx, dword ptr [esi + 0x124]
    // push edx
    // CALL(0x4789f0)
    // mov eax, dword ptr [0x4e432c]
    // mov ecx, dword ptr [esi + 0x124]
    // push eax
    // CALL(0x478b30)
    // mov ecx, dword ptr [esi + 0x1c8]
    // mov eax, dword ptr [esi + 0x1c0]
    // mov edx, dword ptr [esi + 0x184]
    // sub ecx, eax
    // push 0
    // sub ecx, edi
    // push 0
    // push 1
    // sub ecx, ebx
    // push 0
    // push ecx
    // mov ecx, dword ptr [esi + 0x120]
    // push edx
    // CALL(0x474dd0)
    // mov eax, dword ptr [0x83ad10]
    // mov ecx, dword ptr [esi + 0x120]
    // push eax
    // CALL(0x4789f0)
    // mov ecx, dword ptr [0x4e432c]
    // push ecx
    // mov ecx, dword ptr [esi + 0x120]
    // CALL(0x478b30)
    // mov edx, dword ptr [esi]
    // push -1
    // mov ecx, esi
    // CALL(dword)
    // pop edi
    // pop ebx
    // pop esi
    // return;
    // CALL(0x405099)
    // mov dword ptr [ecx], 0x4baa14
    // if (...) GOTO(0x495eb0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx + 0x9c]
    // test ah, 0x10
    // if (...) GOTO(0x47d7e1)
    // mov eax, 1
    // return;
    // mov eax, dword ptr [ecx + 0x130]
    // test eax, eax
    // if (...) GOTO(0x47d80c)
    // mov edx, dword ptr [eax + 0x138]
    // test edx, edx
    // if (...) GOTO(0x47d800)
    // mov eax, dword ptr [eax + 0x13c]
    // mov eax, dword ptr [eax + 4]
    // if (...) GOTO(0x47d802)
    // xor eax, eax
    // cmp eax, ecx
    // if (...) GOTO(0x47d80c)
    // mov eax, 1
    // return;
    // xor eax, eax
    // return;
    // // nop
    // push esi
    // mov esi, ecx
    // mov dword ptr [esi], 0x4baa14
    // CALL(0x495eb0)
    // test byte ptr [esp + 8], 1
    // if (...) GOTO(0x47d82e)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov eax, esi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // mov dword ptr [0x83ab60], eax
    // return;
    // CALL(0x405098)
    // // nop
    // sub esp, 0x48
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47e103)
    // mov eax, dword ptr [esi + 0x9c]
    // test al, 0x11
    // if (...) GOTO(0x47e103)
    // test al, 0x10
    // if (...) GOTO(0x47d88b)
    // test eax, 0x400000
    // if (...) GOTO(0x47d88b)
    // mov eax, dword ptr [esi + 0x180]
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x47d895)
    // mov ecx, dword ptr [esi + 0x184]
    // mov dword ptr [esp + 0x14], ecx
    // mov eax, dword ptr [esi + 0x188]
    // cmp eax, -1
    // if (...) GOTO(0x47d8ac)
    // mov edx, dword ptr [esi + 0x184]
    // mov dword ptr [esp + 0x20], edx
    // if (...) GOTO(0x47d8b0)
    // mov dword ptr [esp + 0x20], eax
    // mov eax, dword ptr [esi + 0x1c4]
    // mov ebx, dword ptr [esi + 0x1bc]
    // mov ebp, dword ptr [esi + 0x1c8]
    // mov edi, dword ptr [esi + 0x1c0]
    // mov edx, dword ptr [esi + 0x1b4]
    // sub eax, ebx
    // sub edx, dword ptr [esi + 0x1ac]
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esp + 0x14]
    // sub ebp, edi
    // xor edi, edi
    // xor ebx, ebx
    // lea ecx, [eax - 1]
    // mov eax, dword ptr [esi + 0x184]
    // dec eax
    // mov dword ptr [esp + 0x1c], ecx
    // mov dword ptr [esp + 0x18], eax
    // lea eax, [edx + eax + 2]
    // mov edx, dword ptr [esp + 0x20]
    // mov dword ptr [esp + 0x40], eax
    // mov eax, ebp
    // sub eax, edx
    // mov edx, dword ptr [esp + 0x14]
    // mov dword ptr [esp + 0x24], eax
    // sub eax, edx
    // lea ecx, [eax + ecx + 2]
    // mov eax, dword ptr [esi + 0x11c]
    // mov dword ptr [esp + 0x44], ecx
    // mov ecx, dword ptr [esp + 0x5c]
    // test eax, eax
    // if (...) GOTO(0x47dbd8)
    // cmp ecx, -1
    // if (...) GOTO(0x47d937)
    // test ecx, ecx
    // if (...) GOTO(0x47dbd8)
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x47d94d)
    // mov edx, dword ptr [eax]
    // lea ecx, [esp + 0x48]
    // push ecx
    // mov ecx, eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x168]
    // test eax, eax
    // if (...) GOTO(0x47d973)
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + 0x11c]
    // push ebp
    // push edx
    // push 0
    // push 0
    // push 0
    // push 0
    // push eax
    // CALL(0x475fb0)
    // if (...) GOTO(0x47d985)
    // mov eax, dword ptr [esi + 0x16c]
    // mov ecx, dword ptr [esi + 0x11c]
    // push eax
    // CALL(0x478b30)
    // mov eax, dword ptr [esi + 0x194]
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [esp + 0x28], edi
    // xor edi, edi
    // test eax, eax
    // mov dword ptr [esp + 0x2c], ebx
    // mov dword ptr [esp + 0x30], ecx
    // mov dword ptr [esp + 0x34], ebp
    // if (...) GOTO(0x47d9f2)
    // mov edx, dword ptr [esi + 0x190]
    // mov eax, dword ptr [esi + 0x18c]
    // push edx
    // lea ecx, [esp + 0x2c]
    // push eax
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // CALL(0x4795d0)
    // mov ecx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0x30]
    // mov ebx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x34]
    // inc ecx
    // dec eax
    // inc ebx
    // mov dword ptr [esp + 0x30], eax
    // mov eax, dword ptr [esi + 0x194]
    // dec edx
    // inc edi
    // mov dword ptr [esp + 0x28], ecx
    // cmp edi, eax
    // mov dword ptr [esp + 0x2c], ebx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47d9a5)
    // mov eax, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esp + 0x40]
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, dword ptr [esi + 0x194]
    // mov dword ptr [esp + 0x28], edx
    // mov edx, dword ptr [esp + 0x44]
    // xor edi, edi
    // test eax, eax
    // mov dword ptr [esp + 0x30], ecx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47da6b)
    // mov eax, dword ptr [esi + 0x18c]
    // mov ecx, dword ptr [esi + 0x190]
    // push eax
    // lea edx, [esp + 0x2c]
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // push edx
    // CALL(0x4795d0)
    // mov ecx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0x30]
    // mov ebx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x34]
    // dec ecx
    // inc eax
    // dec ebx
    // mov dword ptr [esp + 0x30], eax
    // mov eax, dword ptr [esi + 0x194]
    // inc edx
    // inc edi
    // mov dword ptr [esp + 0x28], ecx
    // cmp edi, eax
    // mov dword ptr [esp + 0x2c], ebx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47da1e)
    // mov eax, dword ptr [esi + 0x14c]
    // test eax, eax
    // if (...) GOTO(0x47dbac)
    // mov eax, dword ptr [esi + 0x11c]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47da93)
    // mov eax, dword ptr [ecx]
    // lea edx, [esp + 0x28]
    // push edx
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x194]
    // mov ecx, dword ptr [esp + 0x28]
    // mov ebx, dword ptr [esp + 0x30]
    // mov edi, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x34]
    // neg eax
    // sub ecx, eax
    // add ebx, eax
    // sub edi, eax
    // add edx, eax
    // mov eax, dword ptr [esi + 0x17c]
    // mov dword ptr [esp + 0x28], ecx
    // mov ecx, dword ptr [esi + 0x178]
    // mov dword ptr [esp + 0x34], edx
    // mov edx, dword ptr [esi + 0x174]
    // push eax
    // mov eax, dword ptr [esi + 0x170]
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // push edx
    // push eax
    // mov dword ptr [esp + 0x40], ebx
    // mov dword ptr [esp + 0x3c], edi
    // CALL(0x476310)
    // mov ecx, dword ptr [esi + 0x164]
    // push 0
    // push 0
    // push 0
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // CALL(0x4762d0)
    // mov ecx, dword ptr [esi + 0x11c]
    // lea edx, [esp + 0x28]
    // push edx
    // CALL(0x475b00)
    // mov eax, dword ptr [esi + 0x198]
    // mov edx, dword ptr [esp + 0x28]
    // add edx, eax
    // mov eax, dword ptr [esi + 0x9c]
    // test eax, 0x10000
    // mov dword ptr [esp + 0x28], edx
    // if (...) GOTO(0x47db59)
    // mov edx, dword ptr [esi + 0x14c]
    // test edx, edx
    // if (...) GOTO(0x47dbac)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // lea ecx, [esp + 0x2c]
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // push edx
    // CALL(0x477cd0)
    // if (...) GOTO(0x47dbac)
    // mov edx, dword ptr [esi + 0x14c]
    // test eax, 0x40000
    // if (...) GOTO(0x47db8a)
    // test edx, edx
    // if (...) GOTO(0x47dbac)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // lea eax, [esp + 0x28]
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // push eax
    // push edx
    // CALL(0x4781f0)
    // if (...) GOTO(0x47dbac)
    // test edx, edx
    // if (...) GOTO(0x47dbac)
    // mov edi, edx
    // or ecx, 0xffffffff
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // not ecx
    // dec ecx
    // push ecx
    // lea ecx, [esp + 0x2c]
    // push ecx
    // mov ecx, dword ptr [esi + 0x11c]
    // push edx
    // CALL(0x477eb0)
    // mov eax, dword ptr [esi + 0x11c]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47dbc1)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x11c]
    // mov eax, dword ptr [esi]
    // push 0
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x5c]
    // mov eax, dword ptr [esi + 0x128]
    // test eax, eax
    // if (...) GOTO(0x47dd8f)
    // cmp ecx, -1
    // if (...) GOTO(0x47dbf4)
    // cmp ecx, 2
    // if (...) GOTO(0x47dd8f)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47dc08)
    // mov edx, dword ptr [ecx]
    // lea eax, [esp + 0x48]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x168]
    // test eax, eax
    // if (...) GOTO(0x47dc31)
    // mov ecx, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esp + 0x24]
    // push ebp
    // push ecx
    // mov ecx, dword ptr [esi + 0x128]
    // push 0
    // push 0
    // push edx
    // push 0
    // push eax
    // CALL(0x475fb0)
    // if (...) GOTO(0x47dc43)
    // mov eax, dword ptr [esi + 0x16c]
    // mov ecx, dword ptr [esi + 0x128]
    // push eax
    // CALL(0x478b30)
    // mov ebx, dword ptr [esp + 0x20]
    // mov edx, dword ptr [esi + 0x1c8]
    // mov ecx, dword ptr [esp + 0x10]
    // mov edi, dword ptr [esi + 0x1c0]
    // xor eax, eax
    // mov dword ptr [esp + 0x30], ecx
    // mov dword ptr [esp + 0x28], eax
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, ebx
    // mov ecx, ebp
    // sub eax, edx
    // add eax, edi
    // xor edi, edi
    // mov dword ptr [esp + 0x2c], eax
    // add ecx, eax
    // mov eax, dword ptr [esi + 0x194]
    // mov dword ptr [esp + 0x34], ecx
    // test eax, eax
    // if (...) GOTO(0x47dcd0)
    // mov edx, dword ptr [esi + 0x190]
    // mov eax, dword ptr [esi + 0x18c]
    // push edx
    // lea ecx, [esp + 0x2c]
    // push eax
    // push ecx
    // mov ecx, dword ptr [esi + 0x128]
    // CALL(0x4795d0)
    // mov edx, dword ptr [esp + 0x28]
    // mov ecx, dword ptr [esp + 0x30]
    // mov eax, dword ptr [esp + 0x2c]
    // inc edx
    // mov dword ptr [esp + 0x28], edx
    // mov edx, dword ptr [esp + 0x34]
    // dec ecx
    // inc eax
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, dword ptr [esi + 0x194]
    // dec edx
    // inc edi
    // cmp edi, eax
    // mov dword ptr [esp + 0x30], ecx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47dc83)
    // mov eax, dword ptr [esp + 0x40]
    // mov edx, dword ptr [esp + 0x18]
    // mov edi, dword ptr [esi + 0x1c0]
    // mov ecx, dword ptr [esp + 0x44]
    // mov dword ptr [esp + 0x30], eax
    // mov eax, dword ptr [esi + 0x1c8]
    // sub ebx, eax
    // mov dword ptr [esp + 0x28], edx
    // mov edx, dword ptr [esp + 0x1c]
    // add ebx, edi
    // mov eax, ebx
    // mov dword ptr [esp + 0x2c], edx
    // add edx, eax
    // add ecx, eax
    // mov eax, dword ptr [esi + 0x194]
    // xor edi, edi
    // test eax, eax
    // mov dword ptr [esp + 0x2c], edx
    // mov dword ptr [esp + 0x34], ecx
    // if (...) GOTO(0x47dd63)
    // mov eax, dword ptr [esi + 0x18c]
    // mov ecx, dword ptr [esi + 0x190]
    // push eax
    // lea edx, [esp + 0x2c]
    // push ecx
    // mov ecx, dword ptr [esi + 0x128]
    // push edx
    // CALL(0x4795d0)
    // mov ecx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0x30]
    // mov ebx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x34]
    // dec ecx
    // inc eax
    // dec ebx
    // mov dword ptr [esp + 0x30], eax
    // mov eax, dword ptr [esi + 0x194]
    // inc edx
    // inc edi
    // mov dword ptr [esp + 0x28], ecx
    // cmp edi, eax
    // mov dword ptr [esp + 0x2c], ebx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47dd16)
    // mov eax, dword ptr [esi + 0x128]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47dd78)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x128]
    // mov edx, dword ptr [esi]
    // push 2
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x5c]
    // mov eax, dword ptr [esi + 0x124]
    // test eax, eax
    // if (...) GOTO(0x47df39)
    // cmp ecx, -1
    // if (...) GOTO(0x47ddab)
    // cmp ecx, 3
    // if (...) GOTO(0x47df39)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47ddbf)
    // mov edx, dword ptr [ecx]
    // lea eax, [esp + 0x48]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x124]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47ddd4)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x168]
    // test eax, eax
    // if (...) GOTO(0x47ddfd)
    // mov ecx, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esp + 0x14]
    // push ebp
    // push ecx
    // mov ecx, dword ptr [esi + 0x124]
    // push 0
    // push 0
    // push edx
    // push 0
    // push eax
    // CALL(0x475fb0)
    // if (...) GOTO(0x47de0f)
    // mov eax, dword ptr [esi + 0x16c]
    // mov ecx, dword ptr [esi + 0x124]
    // push eax
    // CALL(0x478b30)
    // mov edi, dword ptr [esp + 0x14]
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [esp + 0x28], eax
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, ebp
    // neg edi
    // add eax, edi
    // xor ebx, ebx
    // mov dword ptr [esp + 0x34], eax
    // mov eax, dword ptr [esi + 0x194]
    // test eax, eax
    // mov dword ptr [esp + 0x30], ecx
    // mov dword ptr [esp + 0x2c], edi
    // if (...) GOTO(0x47de8c)
    // mov edx, dword ptr [esi + 0x190]
    // mov eax, dword ptr [esi + 0x18c]
    // push edx
    // lea ecx, [esp + 0x2c]
    // push eax
    // push ecx
    // mov ecx, dword ptr [esi + 0x124]
    // CALL(0x4795d0)
    // mov edx, dword ptr [esp + 0x28]
    // mov ecx, dword ptr [esp + 0x30]
    // mov eax, dword ptr [esp + 0x2c]
    // inc edx
    // mov dword ptr [esp + 0x28], edx
    // mov edx, dword ptr [esp + 0x34]
    // dec ecx
    // inc eax
    // mov dword ptr [esp + 0x2c], eax
    // mov eax, dword ptr [esi + 0x194]
    // dec edx
    // inc ebx
    // cmp ebx, eax
    // mov dword ptr [esp + 0x30], ecx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47de3f)
    // mov eax, dword ptr [esp + 0x40]
    // mov ecx, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x18]
    // mov dword ptr [esp + 0x30], eax
    // mov eax, dword ptr [esp + 0x44]
    // mov dword ptr [esp + 0x2c], ecx
    // add eax, edi
    // add ecx, edi
    // mov dword ptr [esp + 0x34], eax
    // mov eax, dword ptr [esi + 0x194]
    // xor edi, edi
    // mov dword ptr [esp + 0x28], edx
    // test eax, eax
    // mov dword ptr [esp + 0x2c], ecx
    // if (...) GOTO(0x47df0d)
    // mov edx, dword ptr [esi + 0x18c]
    // mov eax, dword ptr [esi + 0x190]
    // push edx
    // lea ecx, [esp + 0x2c]
    // push eax
    // push ecx
    // mov ecx, dword ptr [esi + 0x124]
    // CALL(0x4795d0)
    // mov ecx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0x30]
    // mov ebx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x34]
    // dec ecx
    // inc eax
    // dec ebx
    // mov dword ptr [esp + 0x30], eax
    // mov eax, dword ptr [esi + 0x194]
    // inc edx
    // inc edi
    // mov dword ptr [esp + 0x28], ecx
    // cmp edi, eax
    // mov dword ptr [esp + 0x2c], ebx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47dec0)
    // mov eax, dword ptr [esi + 0x124]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47df22)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x124]
    // mov eax, dword ptr [esi]
    // push 3
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esp + 0x5c]
    // mov eax, dword ptr [esi + 0x120]
    // test eax, eax
    // if (...) GOTO(0x47e103)
    // cmp ecx, -1
    // if (...) GOTO(0x47df55)
    // cmp ecx, 1
    // if (...) GOTO(0x47e103)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47df69)
    // mov edx, dword ptr [ecx]
    // lea eax, [esp + 0x48]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x168]
    // test eax, eax
    // if (...) GOTO(0x47df99)
    // mov ecx, dword ptr [esp + 0x10]
    // mov edi, dword ptr [esi + 0x184]
    // mov edx, dword ptr [esp + 0x14]
    // push ebp
    // push ecx
    // push 0
    // push 0
    // sub ecx, edi
    // push edx
    // push ecx
    // mov ecx, dword ptr [esi + 0x120]
    // push eax
    // CALL(0x475fb0)
    // if (...) GOTO(0x47dfab)
    // mov eax, dword ptr [esi + 0x16c]
    // mov ecx, dword ptr [esi + 0x120]
    // push eax
    // CALL(0x478b30)
    // mov edi, dword ptr [esp + 0x14]
    // xor eax, eax
    // mov edx, dword ptr [esp + 0x10]
    // mov dword ptr [esp + 0x28], eax
    // mov eax, dword ptr [esi + 0x1bc]
    // mov ebx, ebp
    // mov ebp, dword ptr [esi + 0x1c4]
    // xor ecx, ecx
    // sub eax, ebp
    // mov ebp, dword ptr [esi + 0x184]
    // neg edi
    // add eax, ebp
    // add ebx, edi
    // mov dword ptr [esp + 0x28], eax
    // add edx, eax
    // mov eax, dword ptr [esi + 0x194]
    // mov dword ptr [esp + 0x34], ebx
    // mov ecx, edi
    // xor ebx, ebx
    // test eax, eax
    // mov dword ptr [esp + 0x30], edx
    // mov dword ptr [esp + 0x2c], ecx
    // if (...) GOTO(0x47e044)
    // mov ecx, dword ptr [esi + 0x190]
    // mov edx, dword ptr [esi + 0x18c]
    // push ecx
    // mov ecx, dword ptr [esi + 0x120]
    // lea eax, [esp + 0x2c]
    // push edx
    // push eax
    // CALL(0x4795d0)
    // mov ecx, dword ptr [esp + 0x28]
    // mov eax, dword ptr [esp + 0x30]
    // mov ebp, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x34]
    // inc ecx
    // dec eax
    // inc ebp
    // mov dword ptr [esp + 0x30], eax
    // mov eax, dword ptr [esi + 0x194]
    // dec edx
    // inc ebx
    // mov dword ptr [esp + 0x28], ecx
    // cmp ebx, eax
    // mov dword ptr [esp + 0x2c], ebp
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47dff7)
    // mov eax, dword ptr [esi + 0x1bc]
    // mov ebp, dword ptr [esp + 0x18]
    // sub eax, dword ptr [esi + 0x1c4]
    // mov edx, dword ptr [esp + 0x40]
    // mov ecx, dword ptr [esp + 0x1c]
    // mov ebx, dword ptr [esp + 0x44]
    // add eax, dword ptr [esi + 0x184]
    // mov dword ptr [esp + 0x28], ebp
    // add ecx, edi
    // add ebx, edi
    // add ebp, eax
    // add edx, eax
    // mov eax, dword ptr [esi + 0x194]
    // xor edi, edi
    // test eax, eax
    // mov dword ptr [esp + 0x28], ebp
    // mov dword ptr [esp + 0x30], edx
    // mov dword ptr [esp + 0x2c], ecx
    // mov dword ptr [esp + 0x34], ebx
    // if (...) GOTO(0x47e0db)
    // mov ecx, dword ptr [esi + 0x18c]
    // mov edx, dword ptr [esi + 0x190]
    // push ecx
    // mov ecx, dword ptr [esi + 0x120]
    // lea eax, [esp + 0x2c]
    // push edx
    // push eax
    // CALL(0x4795d0)
    // mov eax, dword ptr [esp + 0x28]
    // mov ebp, dword ptr [esp + 0x30]
    // mov ebx, dword ptr [esp + 0x2c]
    // mov edx, dword ptr [esp + 0x34]
    // dec eax
    // inc ebp
    // dec ebx
    // mov dword ptr [esp + 0x28], eax
    // mov eax, dword ptr [esi + 0x194]
    // inc edx
    // inc edi
    // mov dword ptr [esp + 0x30], ebp
    // cmp edi, eax
    // mov dword ptr [esp + 0x2c], ebx
    // mov dword ptr [esp + 0x34], edx
    // if (...) GOTO(0x47e08e)
    // mov eax, dword ptr [esi + 0x120]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47e0f0)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x120]
    // mov eax, dword ptr [esi]
    // push 1
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x48
    // return;
    // // nop
    // // nop
    // // nop
    // xor eax, eax
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, ecx
    // push eax
    // mov ecx, dword ptr [eax + 0x130]
    // test ecx, ecx
    // if (...) GOTO(0x47e133)
    // CALL(0x47e700)
    // return;
    // CALL(0x47e580)
    // pop ecx
    // return;
    // CALL(0x405098)
    // // nop
    // sub esp, 0x20
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x30]
    // push edi
    // lea eax, [esi + 0x1bc]
    // mov edx, dword ptr [esi + 0x1bc]
    // mov ecx, edx
    // mov edi, dword ptr [eax + 4]
    // neg ecx
    // mov ebx, dword ptr [eax + 8]
    // add edx, ecx
    // add ebx, ecx
    // lea ecx, [esp + 0x10]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, edi
    // neg eax
    // add edi, eax
    // add ebp, eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x14], edx
    // mov dword ptr [esp + 0x1c], ebx
    // mov dword ptr [esp + 0x18], edi
    // mov dword ptr [esp + 0x20], ebp
    // CALL(0x47b120)
    // lea edx, [esi + 0x1ac]
    // mov eax, edx
    // mov edx, dword ptr [eax]
    // mov ecx, edx
    // mov edi, dword ptr [eax + 4]
    // neg ecx
    // mov ebx, dword ptr [eax + 8]
    // add edx, ecx
    // add ebx, ecx
    // lea ecx, [esp + 0x20]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, edi
    // neg eax
    // add edi, eax
    // add ebp, eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x24], edx
    // mov dword ptr [esp + 0x2c], ebx
    // mov dword ptr [esp + 0x28], edi
    // mov dword ptr [esp + 0x30], ebp
    // CALL(0x47b0d0)
    // mov ebx, dword ptr [esp + 0x38]
    // mov edi, dword ptr [0x4ba1d4]
    // lea edx, [esp + 0x20]
    // push ebx
    // lea eax, [esp + 0x24]
    // push edx
    // push eax
    // CALL(edi)
    // lea ecx, [esp + 0x10]
    // push ebx
    // lea edx, [esp + 0x14]
    // push ecx
    // push edx
    // CALL(edi)
    // mov eax, dword ptr [esi + 0x22c]
    // xor edi, edi
    // test eax, eax
    // if (...) GOTO(0x47e240)
    // mov ebp, 0x8000
    // mov eax, dword ptr [esi + 0x224]
    // mov ecx, dword ptr [eax + edi*4]
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47e235)
    // mov ecx, dword ptr [esi + 0x224]
    // mov eax, dword ptr [ecx + edi*4]
    // test dword ptr [eax + 0x9c], ebp
    // lea ecx, [esp + 0x10]
    // if (...) GOTO(0x47e22b)
    // lea ecx, [esp + 0x20]
    // push ecx
    // push eax
    // CALL(0x47e140)
    // add esp, 8
    // mov eax, dword ptr [esi + 0x22c]
    // inc edi
    // cmp edi, eax
    // if (...) GOTO(0x47e200)
    // mov ecx, esi
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47e2c0)
    // test byte ptr [esi + 0x9c], 0x20
    // if (...) GOTO(0x47e278)
    // mov edx, dword ptr [ebx]
    // add esi, 0x1dc
    // pop edi
    // mov dword ptr [esi], edx
    // mov eax, dword ptr [ebx + 4]
    // mov dword ptr [esi + 4], eax
    // mov ecx, dword ptr [ebx + 8]
    // mov dword ptr [esi + 8], ecx
    // mov edx, dword ptr [ebx + 0xc]
    // mov dword ptr [esi + 0xc], edx
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x20
    // return;
    // mov ecx, dword ptr [0x83a7bc]
    // test ecx, ecx
    // if (...) GOTO(0x47e2c0)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47e2c0)
    // mov ecx, dword ptr [0x83a7bc]
    // test ecx, ecx
    // if (...) GOTO(0x47e2a2)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x47e2a4)
    // xor eax, eax
    // mov ecx, dword ptr [eax]
    // add esi, 0x1dc
    // mov dword ptr [esi], ecx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [esi + 4], edx
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [esi + 8], ecx
    // mov edx, dword ptr [eax + 0xc]
    // mov dword ptr [esi + 0xc], edx
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x20
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [0x83a7bc]
    // sub esp, 0x10
    // test ecx, ecx
    // if (...) GOTO(0x47e2ea)
    // mov eax, dword ptr [ecx]
    // lea edx, [esp]
    // push edx
    // CALL(dword)
    // mov eax, dword ptr [0x83ab94]
    // push esi
    // xor esi, esi
    // test eax, eax
    // if (...) GOTO(0x47e323)
    // push edi
    // mov edi, 0x83a2d8
    // mov eax, dword ptr [edi]
    // test byte ptr [eax + 0xa0], 1
    // if (...) GOTO(0x47e315)
    // lea ecx, [esp + 8]
    // push ecx
    // push eax
    // CALL(0x47e140)
    // add esp, 8
    // mov eax, dword ptr [0x83ab94]
    // inc esi
    // add edi, 4
    // cmp esi, eax
    // if (...) GOTO(0x47e2fc)
    // pop edi
    // pop esi
    // add esp, 0x10
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // mov edx, dword ptr [0x83aae0]
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // push edi
    // xor ebx, ebx
    // xor ebp, ebp
    // mov eax, dword ptr [esi + 0x22c]
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x47e3b0)
    // mov eax, dword ptr [esi + 0x224]
    // mov eax, dword ptr [eax + edi*4]
    // test byte ptr [eax + 0x9c], 0x20
    // if (...) GOTO(0x47e3a5)
    // cmp edx, ebx
    // if (...) GOTO(0x47e373)
    // cmp edx, eax
    // if (...) GOTO(0x47e373)
    // mov dword ptr [0x83ab90], ebx
    // mov ebp, 1
    // mov ecx, dword ptr [esi + 0x224]
    // mov ecx, dword ptr [ecx + edi*4]
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47e397)
    // mov edx, dword ptr [esi + 0x224]
    // mov eax, dword ptr [edx + edi*4]
    // push eax
    // CALL(0x47e330)
    // add esp, 4
    // mov edx, dword ptr [0x83aae0]
    // cmp edx, ebx
    // if (...) GOTO(0x47e3a5)
    // cmp ebp, ebx
    // if (...) GOTO(0x47e3b0)
    // mov eax, dword ptr [esi + 0x22c]
    // inc edi
    // cmp edi, eax
    // if (...) GOTO(0x47e34e)
    // cmp edx, ebx
    // if (...) GOTO(0x47e3b8)
    // cmp ebp, ebx
    // if (...) GOTO(0x47e42c)
    // mov eax, dword ptr [esi + 0x22c]
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x47e42c)
    // cmp edx, ebx
    // if (...) GOTO(0x47e3de)
    // mov ecx, dword ptr [esi + 0x224]
    // cmp edx, dword ptr [ecx + edi*4]
    // if (...) GOTO(0x47e3de)
    // mov dword ptr [0x83ab90], ebx
    // mov ebp, 1
    // cmp dword ptr [esi + 0xb0], esi
    // if (...) GOTO(0x47e419)
    // mov eax, dword ptr [esi + 0x224]
    // mov ecx, dword ptr [eax + edi*4]
    // test byte ptr [ecx + 0x9c], 0x20
    // if (...) GOTO(0x47e419)
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47e413)
    // mov ecx, dword ptr [esi + 0x224]
    // mov edx, dword ptr [ecx + edi*4]
    // push edx
    // CALL(0x47e330)
    // add esp, 4
    // mov edx, dword ptr [0x83aae0]
    // cmp edx, ebx
    // if (...) GOTO(0x47e421)
    // cmp ebp, ebx
    // if (...) GOTO(0x47e42c)
    // mov eax, dword ptr [esi + 0x22c]
    // inc edi
    // cmp edi, eax
    // if (...) GOTO(0x47e3c4)
    // mov ecx, esi
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47e449)
    // mov eax, dword ptr [0x83ab90]
    // mov dword ptr [eax*4 + 0x839ac0], esi
    // inc eax
    // mov dword ptr [0x83ab90], eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr [0x83ab94]
    // push ebp
    // push edi
    // xor ebp, ebp
    // xor edi, edi
    // cmp eax, ebp
    // mov dword ptr [0x83ab90], ebp
    // if (...) GOTO(0x47e4ad)
    // mov ecx, dword ptr [0x83aae0]
    // push esi
    // mov esi, 0x83a2d8
    // cmp ecx, ebp
    // if (...) GOTO(0x47e485)
    // cmp ecx, dword ptr [esi]
    // if (...) GOTO(0x47e485)
    // mov dword ptr [0x83ab90], ebp
    // mov dword ptr [0x83aaec], ebp
    // mov eax, dword ptr [esi]
    // test byte ptr [eax + 0xa0], 1
    // if (...) GOTO(0x47e49f)
    // push eax
    // CALL(0x47e330)
    // mov ecx, dword ptr [0x83aae0]
    // add esp, 4
    // mov eax, dword ptr [0x83ab94]
    // inc edi
    // add esi, 4
    // cmp edi, eax
    // if (...) GOTO(0x47e471)
    // pop esi
    // CALL(0x47e2d0)
    // pop edi
    // pop ebp
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // test esi, esi
    // if (...) GOTO(0x47e513)
    // mov eax, dword ptr [esi + 0x9c]
    // mov ecx, dword ptr [0x83ab94]
    // test eax, 0x2000000
    // if (...) GOTO(0x47e4ec)
    // mov dword ptr [ecx*4 + 0x83a2d8], esi
    // inc ecx
    // mov dword ptr [0x83ab94], ecx
    // pop esi
    // return;
    // test ecx, ecx
    // if (...) GOTO(0x47e506)
    // push edi
    // lea eax, [ecx*4 + 0x83a2d8]
    // mov edx, ecx
    // mov edi, dword ptr [eax - 4]
    // mov dword ptr [eax], edi
    // add eax, -4
    // dec edx
    // if (...) GOTO(0x47e4fa)
    // pop edi
    // inc ecx
    // mov dword ptr [0x83a2d8], esi
    // mov dword ptr [0x83ab94], ecx
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // test ecx, ecx
    // if (...) GOTO(0x47e574)
    // mov eax, dword ptr [0x83ab94]
    // xor esi, esi
    // test eax, eax
    // if (...) GOTO(0x47e574)
    // mov edx, 0x83a2d8
    // cmp dword ptr [edx], ecx
    // if (...) GOTO(0x47e547)
    // inc esi
    // add edx, 4
    // cmp esi, eax
    // if (...) GOTO(0x47e539)
    // pop esi
    // return;
    // cmp esi, eax
    // if (...) GOTO(0x47e574)
    // dec eax
    // mov dword ptr [0x83ab94], eax
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83ab94]
    // cmp esi, ecx
    // if (...) GOTO(0x47e574)
    // lea eax, [esi*4 + 0x83a2d8]
    // sub ecx, esi
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [eax], edx
    // add eax, 4
    // dec ecx
    // if (...) GOTO(0x47e569)
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 8]
    // test esi, esi
    // if (...) GOTO(0x47e5de)
    // test dword ptr [esi + 0x9c], 0x2000000
    // if (...) GOTO(0x47e5de)
    // mov edx, dword ptr [0x83ab94]
    // xor eax, eax
    // test edx, edx
    // if (...) GOTO(0x47e5d9)
    // mov ecx, 0x83a2d8
    // cmp dword ptr [ecx], esi
    // if (...) GOTO(0x47e5b9)
    // inc eax
    // add ecx, 4
    // cmp eax, edx
    // if (...) GOTO(0x47e5a6)
    // CALL(0x47e450)
    // pop esi
    // return;
    // cmp eax, edx
    // if (...) GOTO(0x47e5d9)
    // test eax, eax
    // if (...) GOTO(0x47e5d3)
    // lea ecx, [eax*4 + 0x83a2d8]
    // mov edx, dword ptr [ecx - 4]
    // mov dword ptr [ecx], edx
    // add ecx, -4
    // dec eax
    // if (...) GOTO(0x47e5c8)
    // mov dword ptr [0x83a2d8], esi
    // CALL(0x47e450)
    // pop esi
    // return;
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov esi, ecx
    // test edi, edi
    // if (...) GOTO(0x47e674)
    // mov eax, dword ptr [esi + 0x22c]
    // mov ecx, dword ptr [esi + 0x228]
    // inc eax
    // cmp eax, ecx
    // if (...) GOTO(0x47e614)
    // mov ecx, esi
    // CALL(0x479b40)
    // test dword ptr [edi + 0x9c], 0x2000000
    // if (...) GOTO(0x47e641)
    // mov ecx, dword ptr [esi + 0x22c]
    // mov edx, dword ptr [esi + 0x224]
    // mov dword ptr [edx + ecx*4], edi
    // mov eax, dword ptr [esi + 0x22c]
    // inc eax
    // pop edi
    // mov dword ptr [esi + 0x22c], eax
    // pop esi
    // return;
    // mov eax, dword ptr [esi + 0x22c]
    // test eax, eax
    // if (...) GOTO(0x47e65f)
    // mov ecx, dword ptr [esi + 0x224]
    // mov edx, dword ptr [ecx + eax*4 - 4]
    // lea ecx, [ecx + eax*4]
    // dec eax
    // test eax, eax
    // mov dword ptr [ecx], edx
    // if (...) GOTO(0x47e64b)
    // mov eax, dword ptr [esi + 0x224]
    // mov dword ptr [eax], edi
    // mov eax, dword ptr [esi + 0x22c]
    // inc eax
    // mov dword ptr [esi + 0x22c], eax
    // pop edi
    // pop esi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push edi
    // mov edi, ecx
    // mov ecx, dword ptr [esp + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47e6f5)
    // mov eax, dword ptr [edi + 0x22c]
    // push esi
    // xor esi, esi
    // test eax, eax
    // if (...) GOTO(0x47e6aa)
    // mov edx, dword ptr [edi + 0x224]
    // cmp dword ptr [edx], ecx
    // if (...) GOTO(0x47e6aa)
    // inc esi
    // add edx, 4
    // cmp esi, eax
    // if (...) GOTO(0x47e69e)
    // cmp esi, eax
    // if (...) GOTO(0x47e6da)
    // dec eax
    // mov dword ptr [edi + 0x22c], eax
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // cmp esi, dword ptr [edi + 0x22c]
    // if (...) GOTO(0x47e6da)
    // mov eax, dword ptr [edi + 0x224]
    // inc esi
    // mov ecx, dword ptr [eax + esi*4]
    // mov dword ptr [eax + esi*4 - 4], ecx
    // mov eax, dword ptr [edi + 0x22c]
    // cmp esi, eax
    // if (...) GOTO(0x47e6c2)
    // mov edx, dword ptr [edi + 0x228]
    // mov eax, dword ptr [edi + 0x22c]
    // sub edx, 0xa
    // pop esi
    // cmp eax, edx
    // if (...) GOTO(0x47e6f5)
    // mov ecx, edi
    // CALL(0x479bb0)
    // pop edi
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push edi
    // mov edi, dword ptr [esp + 8]
    // test edi, edi
    // if (...) GOTO(0x47e75e)
    // test dword ptr [edi + 0x9c], 0x2000000
    // if (...) GOTO(0x47e75e)
    // mov edx, dword ptr [ecx + 0x22c]
    // xor eax, eax
    // push esi
    // test edx, edx
    // if (...) GOTO(0x47e734)
    // mov esi, dword ptr [ecx + 0x224]
    // cmp dword ptr [esi], edi
    // if (...) GOTO(0x47e734)
    // inc eax
    // add esi, 4
    // cmp eax, edx
    // if (...) GOTO(0x47e728)
    // cmp eax, edx
    // if (...) GOTO(0x47e758)
    // test eax, eax
    // if (...) GOTO(0x47e750)
    // mov edx, dword ptr [ecx + 0x224]
    // mov esi, dword ptr [edx + eax*4 - 4]
    // lea edx, [edx + eax*4]
    // dec eax
    // test eax, eax
    // mov dword ptr [edx], esi
    // if (...) GOTO(0x47e73c)
    // mov eax, dword ptr [ecx + 0x224]
    // mov dword ptr [eax], edi
    // CALL(0x47e450)
    // pop esi
    // pop edi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x38
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov edi, ecx
    // lea eax, [edi + 0x1ac]
    // mov esi, dword ptr [edi + 0x19c]
    // mov dword ptr [esp + 0x10], esi
    // mov edx, dword ptr [eax]
    // mov ebx, dword ptr [eax + 4]
    // mov ebp, dword ptr [eax + 8]
    // mov ecx, dword ptr [eax + 0xc]
    // mov eax, dword ptr [edi + 0x1c0]
    // mov dword ptr [esp + 0x24], ecx
    // mov ecx, dword ptr [edi + 0x1bc]
    // add ebp, ecx
    // add edx, ecx
    // mov ecx, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x20], ebp
    // xor ebp, ebp
    // add ebx, eax
    // add ecx, eax
    // cmp esi, ebp
    // mov dword ptr [esp + 0x18], edx
    // mov dword ptr [esp + 0x1c], ebx
    // mov dword ptr [esp + 0x24], ecx
    // if (...) GOTO(0x47e81f)
    // mov eax, dword ptr [esp + 0x4c]
    // cmp eax, ebp
    // if (...) GOTO(0x47e7ff)
    // push eax
    // lea edx, [esp + 0x1c]
    // lea eax, [esp + 0x1c]
    // push edx
    // push eax
    // CALL(dword)
    // mov ecx, dword ptr [edi + 0x160]
    // lea edx, [esp + 0x18]
    // push ecx
    // push edx
    // mov ecx, 0x83a7b8
    // CALL(0x478b50)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x38
    // return;
    // mov eax, dword ptr [edi + 0x160]
    // lea ecx, [esp + 0x18]
    // push eax
    // push ecx
    // mov ecx, 0x83a7b8
    // CALL(0x478b50)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x38
    // return;
    // mov ecx, dword ptr [0x83a7bc]
    // cmp ecx, ebp
    // if (...) GOTO(0x47e836)
    // mov edx, dword ptr [ecx]
    // lea eax, [esp + 0x38]
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x4c]
    // cmp eax, ebp
    // if (...) GOTO(0x47e856)
    // lea ecx, [esp + 0x18]
    // push eax
    // lea edx, [esp + 0x2c]
    // push ecx
    // push edx
    // CALL(dword)
    // lea eax, [esp + 0x28]
    // push eax
    // if (...) GOTO(0x47e85b)
    // lea ecx, [esp + 0x18]
    // push ecx
    // mov ecx, 0x83a7b8
    // CALL(0x475b00)
    // mov ecx, dword ptr [esi + 4]
    // cmp ecx, ebp
    // if (...) GOTO(0x47e87a)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esp + 0x4c], eax
    // if (...) GOTO(0x47e87e)
    // mov dword ptr [esp + 0x4c], ebp
    // mov ecx, dword ptr [esi + 4]
    // cmp ecx, ebp
    // if (...) GOTO(0x47e88f)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ebp, eax
    // mov ecx, dword ptr [esp + 0x20]
    // mov esi, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x4c]
    // sub ecx, esi
    // mov eax, ecx
    // sub eax, edx
    // cdq 
    // sub eax, edx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 0x24]
    // sar ebx, 1
    // add ebx, esi
    // mov esi, dword ptr [esp + 0x1c]
    // sub eax, esi
    // mov dword ptr [esp + 0x14], eax
    // sub eax, ebp
    // cdq 
    // sub eax, edx
    // mov edx, dword ptr [edi + 0x1a0]
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x1c]
    // sar esi, 1
    // add esi, eax
    // test edx, edx
    // if (...) GOTO(0x47e927)
    // test ebx, ebx
    // if (...) GOTO(0x47e8e9)
    // mov eax, ebx
    // mov edi, dword ptr [esp + 0x4c]
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cdq 
    // idiv edi
    // sub edi, edx
    // mov ebx, edi
    // if (...) GOTO(0x47e8eb)
    // neg ebx
    // test esi, esi
    // if (...) GOTO(0x47e8ff)
    // mov eax, esi
    // cdq 
    // xor eax, edx
    // sub eax, edx
    // cdq 
    // idiv ebp
    // sub ebp, edx
    // mov esi, ebp
    // if (...) GOTO(0x47e901)
    // neg esi
    // mov edx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esp + 0x1c]
    // push edx
    // mov edx, dword ptr [esp + 0x14]
    // push ecx
    // mov ecx, dword ptr [esp + 0x20]
    // push eax
    // push ecx
    // push esi
    // push ebx
    // push edx
    // mov ecx, 0x83a7b8
    // CALL(0x475fb0)
    // if (...) GOTO(0x47ea0b)
    // mov edx, dword ptr [edi + 0x160]
    // push edx
    // push esi
    // push ecx
    // push eax
    // mov eax, dword ptr [esp + 0x28]
    // mov ecx, 0x83a7b8
    // push eax
    // CALL(0x478af0)
    // mov ecx, dword ptr [edi + 0x160]
    // mov edx, dword ptr [esp + 0x1c]
    // mov eax, dword ptr [esp + 0x18]
    // push ecx
    // push ebp
    // add edx, esi
    // push ebx
    // push edx
    // push eax
    // mov ecx, 0x83a7b8
    // CALL(0x478af0)
    // mov edx, dword ptr [esp + 0x20]
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [edi + 0x160]
    // sub edx, eax
    // push ecx
    // mov ecx, dword ptr [esp + 0x50]
    // sub edx, ebx
    // push ebp
    // sub edx, ecx
    // add eax, ebx
    // push edx
    // mov edx, dword ptr [esp + 0x28]
    // add edx, esi
    // add eax, ecx
    // push edx
    // push eax
    // mov ecx, 0x83a7b8
    // CALL(0x478af0)
    // mov ecx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [edi + 0x160]
    // mov edx, dword ptr [esp + 0x20]
    // sub ecx, esi
    // sub ecx, ebp
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // push ecx
    // mov ecx, dword ptr [esp + 0x24]
    // sub edx, eax
    // add ecx, esi
    // push edx
    // add ecx, ebp
    // push ecx
    // push eax
    // mov ecx, 0x83a7b8
    // CALL(0x478af0)
    // mov edi, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47e9d6)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebp, eax
    // if (...) GOTO(0x47e9d8)
    // xor ebp, ebp
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x47e9e9)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x47e9eb)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x1c]
    // mov edx, dword ptr [esp + 0x18]
    // push ebp
    // add ecx, esi
    // push eax
    // add edx, ebx
    // push ecx
    // push edx
    // push 0
    // push 0
    // push(0x83a7b8)  // ptr?
    // mov ecx, edi
    // CALL(0x475c60)
    // lea eax, [esp + 0x38]
    // mov ecx, 0x83a7b8
    // push eax
    // CALL(0x475b00)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x38
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x18
    // push ebx
    // mov ebx, ecx
    // push ebp
    // push esi
    // mov al, byte ptr [ebx + 0x9c]
    // push edi
    // test al, 0x11
    // if (...) GOTO(0x47ed1e)
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47ed1e)
    // mov ecx, dword ptr [0x83ad50]
    // xor esi, esi
    // cmp ecx, esi
    // if (...) GOTO(0x47ea6e)
    // mov eax, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // lea ecx, [esp + 0x10]
    // lea edx, [esp + 0x14]
    // push ecx
    // push edx
    // mov ecx, ebx
    // mov dword ptr [esp + 0x1c], esi
    // mov dword ptr [esp + 0x18], esi
    // CALL(0x47b290)
    // mov ecx, dword ptr [ebx + 0x130]
    // cmp ecx, esi
    // if (...) GOTO(0x47eb76)
    // mov eax, dword ptr [ebx + 0x9c]
    // test al, 0x20
    // if (...) GOTO(0x47eb76)
    // test ah, 0x80
    // if (...) GOTO(0x47eafd)
    // lea eax, [ecx + 0x1bc]
    // mov esi, dword ptr [ecx + 0x1bc]
    // mov dword ptr [esp + 0x18], esi
    // mov edi, dword ptr [eax + 4]
    // mov dword ptr [esp + 0x1c], edi
    // mov ebp, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x20], ebp
    // mov edx, dword ptr [eax + 0xc]
    // mov eax, edi
    // mov dword ptr [esp + 0x24], edx
    // mov edx, esi
    // neg edx
    // add esi, edx
    // add ebp, edx
    // mov dword ptr [esp + 0x18], esi
    // mov esi, dword ptr [esp + 0x24]
    // neg eax
    // add edi, eax
    // add esi, eax
    // lea eax, [esp + 0x18]
    // mov dword ptr [esp + 0x20], ebp
    // push eax
    // mov dword ptr [esp + 0x20], edi
    // mov dword ptr [esp + 0x28], esi
    // CALL(0x47b120)
    // if (...) GOTO(0x47eb50)
    // lea edx, [ecx + 0x1ac]
    // mov esi, dword ptr [ecx + 0x1ac]
    // mov dword ptr [esp + 0x18], esi
    // mov edi, dword ptr [edx + 4]
    // mov dword ptr [esp + 0x1c], edi
    // mov ebp, dword ptr [edx + 8]
    // mov dword ptr [esp + 0x20], ebp
    // mov eax, dword ptr [edx + 0xc]
    // mov edx, esi
    // mov dword ptr [esp + 0x24], eax
    // mov eax, edi
    // neg edx
    // add esi, edx
    // add ebp, edx
    // mov edx, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x18], esi
    // neg eax
    // add edx, eax
    // add edi, eax
    // mov dword ptr [esp + 0x24], edx
    // lea edx, [esp + 0x18]
    // push edx
    // mov dword ptr [esp + 0x24], ebp
    // mov dword ptr [esp + 0x20], edi
    // CALL(0x47b0d0)
    // mov eax, dword ptr [esp + 0x2c]
    // test eax, eax
    // if (...) GOTO(0x47ebb5)
    // push eax
    // lea eax, [esp + 0x1c]
    // lea ecx, [esp + 0x1c]
    // push eax
    // push ecx
    // or edi, 0xffffffff
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47ed1e)
    // if (...) GOTO(0x47ebb9)
    // mov eax, dword ptr [esp + 0x2c]
    // cmp eax, esi
    // if (...) GOTO(0x47eb9e)
    // mov edx, dword ptr [eax]
    // mov ecx, dword ptr [eax + 4]
    // mov dword ptr [esp + 0x18], edx
    // mov edx, dword ptr [eax + 8]
    // mov eax, dword ptr [eax + 0xc]
    // or edi, 0xffffffff
    // mov dword ptr [esp + 0x1c], ecx
    // mov dword ptr [esp + 0x20], edx
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x47ebb9)
    // mov ecx, dword ptr [0x83a7bc]
    // cmp ecx, esi
    // if (...) GOTO(0x47ebb5)
    // mov edx, dword ptr [ecx]
    // lea eax, [esp + 0x18]
    // push eax
    // CALL(dword)
    // mov edi, dword ptr [esp + 0x30]
    // mov esi, dword ptr [0x83aadc]
    // test esi, esi
    // if (...) GOTO(0x47ec10)
    // mov eax, dword ptr [0x83aae4]
    // mov ecx, dword ptr [esp + 0x14]
    // mov ebp, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esp + 0x18]
    // sub ecx, eax
    // mov dword ptr [esp + 0x14], ecx
    // mov ecx, dword ptr [0x83aae8]
    // sub ebp, ecx
    // neg eax
    // mov dword ptr [esp + 0x10], ebp
    // mov ebp, dword ptr [esp + 0x20]
    // add edx, eax
    // add ebp, eax
    // mov eax, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x18], edx
    // mov edx, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 0x20], ebp
    // neg ecx
    // add edx, ecx
    // add eax, ecx
    // mov dword ptr [esp + 0x1c], edx
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x47ec15)
    // mov esi, 0x83a7b8
    // lea ecx, [esp + 0x18]
    // push ecx
    // mov ecx, esi
    // CALL(0x475b00)
    // mov eax, dword ptr [ebx + 0x9c]
    // test al, 0x10
    // if (...) GOTO(0x47ec3a)
    // test eax, 0x400000
    // if (...) GOTO(0x47ec3a)
    // mov ebp, dword ptr [ebx + 0x180]
    // if (...) GOTO(0x47ec40)
    // mov ebp, dword ptr [ebx + 0x184]
    // mov ecx, dword ptr [ebx + 0x11c]
    // test ecx, ecx
    // if (...) GOTO(0x47ec63)
    // cmp edi, -1
    // if (...) GOTO(0x47ec53)
    // test edi, edi
    // if (...) GOTO(0x47ec63)
    // mov edx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x14]
    // push edx
    // push eax
    // push esi
    // CALL(0x475b60)
    // mov ecx, dword ptr [ebx + 0x128]
    // test ecx, ecx
    // if (...) GOTO(0x47eca8)
    // cmp edi, -1
    // if (...) GOTO(0x47ec77)
    // cmp edi, 2
    // if (...) GOTO(0x47eca8)
    // mov eax, dword ptr [ebx + 0x188]
    // cmp eax, -1
    // if (...) GOTO(0x47ec88)
    // mov eax, dword ptr [ebx + 0x184]
    // mov edx, dword ptr [ebx + 0x1c8]
    // sub edx, dword ptr [ebx + 0x1c0]
    // sub edx, eax
    // mov eax, dword ptr [esp + 0x10]
    // add edx, eax
    // mov eax, dword ptr [esp + 0x14]
    // push edx
    // push eax
    // push esi
    // CALL(0x475b60)
    // mov ecx, dword ptr [ebx + 0x124]
    // test ecx, ecx
    // if (...) GOTO(0x47eccf)
    // cmp edi, -1
    // if (...) GOTO(0x47ecbc)
    // cmp edi, 3
    // if (...) GOTO(0x47eccf)
    // mov edx, dword ptr [esp + 0x10]
    // lea eax, [edx + ebp]
    // mov edx, dword ptr [esp + 0x14]
    // push eax
    // push edx
    // push esi
    // CALL(0x475b60)
    // mov ecx, dword ptr [ebx + 0x120]
    // test ecx, ecx
    // if (...) GOTO(0x47ed0d)
    // cmp edi, -1
    // if (...) GOTO(0x47ece3)
    // cmp edi, 1
    // if (...) GOTO(0x47ed0d)
    // mov eax, dword ptr [esp + 0x10]
    // mov edx, dword ptr [ebx + 0x1c4]
    // add ebp, eax
    // mov eax, dword ptr [ebx + 0x1bc]
    // push ebp
    // mov ebp, dword ptr [ebx + 0x184]
    // mov ebx, dword ptr [esp + 0x18]
    // sub edx, eax
    // sub edx, ebp
    // add edx, ebx
    // push edx
    // push esi
    // CALL(0x475b60)
    // mov esi, dword ptr [esi + 4]
    // test esi, esi
    // if (...) GOTO(0x47ed1e)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x18
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // mov al, byte ptr [ecx + 0xa0]
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // test al, 2
    // push edi
    // if (...) GOTO(0x47ee19)
    // mov eax, dword ptr [ecx + 0x1f0]
    // mov edi, dword ptr [esp + 0x10]
    // cmp edi, eax
    // if (...) GOTO(0x47ed85)
    // cmp esi, eax
    // if (...) GOTO(0x47ed62)
    // pop edi
    // pop esi
    // mov eax, 0xd
    // pop ebx
    // return;
    // cmp edi, eax
    // if (...) GOTO(0x47ed85)
    // mov edx, dword ptr [ecx + 0x1c8]
    // mov ebx, dword ptr [ecx + 0x1c0]
    // sub edx, ebx
    // sub edx, eax
    // cmp esi, edx
    // if (...) GOTO(0x47ed85)
    // pop edi
    // pop esi
    // mov eax, 0x10
    // pop ebx
    // return;
    // mov edx, dword ptr [ecx + 0x1c4]
    // mov ebx, dword ptr [ecx + 0x1bc]
    // sub edx, ebx
    // sub edx, eax
    // cmp edi, edx
    // if (...) GOTO(0x47edcd)
    // cmp esi, eax
    // if (...) GOTO(0x47eda8)
    // pop edi
    // pop esi
    // mov eax, 0xe
    // pop ebx
    // return;
    // cmp edi, edx
    // if (...) GOTO(0x47edcd)
    // mov ebx, dword ptr [ecx + 0x1c8]
    // push ebp
    // mov ebp, dword ptr [ecx + 0x1c0]
    // sub ebx, ebp
    // pop ebp
    // sub ebx, eax
    // cmp esi, ebx
    // if (...) GOTO(0x47edcd)
    // pop edi
    // pop esi
    // mov eax, 0x11
    // pop ebx
    // return;
    // cmp edi, eax
    // if (...) GOTO(0x47eddc)
    // pop edi
    // pop esi
    // mov eax, 0xa
    // pop ebx
    // return;
    // cmp esi, eax
    // if (...) GOTO(0x47edeb)
    // pop edi
    // pop esi
    // mov eax, 0xc
    // pop ebx
    // return;
    // cmp edi, edx
    // if (...) GOTO(0x47edfa)
    // pop edi
    // pop esi
    // mov eax, 0xb
    // pop ebx
    // return;
    // mov edx, dword ptr [ecx + 0x1c8]
    // mov ebx, dword ptr [ecx + 0x1c0]
    // sub edx, ebx
    // sub edx, eax
    // cmp esi, edx
    // if (...) GOTO(0x47ee19)
    // pop edi
    // pop esi
    // mov eax, 0xf
    // pop ebx
    // return;
    // mov eax, dword ptr [ecx + 0x9c]
    // test al, 1
    // if (...) GOTO(0x47ee2e)
    // pop edi
    // pop esi
    // mov eax, 2
    // pop ebx
    // return;
    // test al, 0x10
    // if (...) GOTO(0x47ee45)
    // cmp esi, dword ptr [ecx + 0x180]
    // if (...) GOTO(0x47ee5f)
    // pop edi
    // pop esi
    // mov eax, 2
    // pop ebx
    // return;
    // test eax, 0x4000000
    // if (...) GOTO(0x47ee5f)
    // cmp esi, dword ptr [ecx + 0x1ec]
    // if (...) GOTO(0x47ee5f)
    // pop edi
    // pop esi
    // mov eax, 2
    // pop ebx
    // return;
    // pop edi
    // pop esi
    // xor eax, eax
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // mov edx, ecx
    // mov ecx, dword ptr [0x8400b8]
    // test ecx, ecx
    // if (...) GOTO(0x47eeba)
    // cmp eax, dword ptr [ecx + 0x54]
    // if (...) GOTO(0x47ee99)
    // mov eax, dword ptr [esp + 8]
    // test eax, eax
    // if (...) GOTO(0x47eeb2)
    // mov eax, dword ptr [ecx + 0x5c]
    // push eax
    // CALL(0x497c20)
    // return;
    // cmp eax, dword ptr [ecx + 0x58]
    // if (...) GOTO(0x47eeba)
    // mov eax, dword ptr [esp + 8]
    // test eax, eax
    // if (...) GOTO(0x47eeb2)
    // mov edx, dword ptr [ecx + 0x60]
    // push edx
    // CALL(0x497c70)
    // return;
    // CALL(0x497cc0)
    // return;
    // mov ecx, dword ptr [esp + 8]
    // test ecx, ecx
    // if (...) GOTO(0x47eecd)
    // push eax
    // mov ecx, edx
    // CALL(0x47c970)
    // return;
    // push eax
    // mov ecx, edx
    // mov dword ptr [0x83ab88], eax
    // CALL(0x47c6c0)
    // return;
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [esp + 8]
    // mov eax, dword ptr [esp + 4]
    // push ebx
    // push esi
    // lea edx, [eax + ecx - 1]
    // mov eax, dword ptr [0x4e42ec]
    // test ecx, ecx
    // mov esi, ecx
    // if (...) GOTO(0x47ef14)
    // mov cl, byte ptr [eax]
    // mov bl, byte ptr [edx]
    // cmp cl, bl
    // if (...) GOTO(0x47ef19)
    // dec eax
    // dec edx
    // cmp eax, 0x83aba4
    // jae 0x47ef0f
    // mov eax, 0x83abad
    // dec esi
    // test esi, esi
    // if (...) GOTO(0x47eef9)
    // pop esi
    // xor eax, eax
    // pop ebx
    // return;
    // pop esi
    // mov eax, 1
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [0x4e42ec]
    // push ebx
    // mov bl, byte ptr [esp + 8]
    // push esi
    // push 6
    // mov esi, ecx
    // push(0x4e4324)  // ptr?
    // mov byte ptr [eax], bl
    // CALL(0x47eee0)
    // add esp, 8
    // test eax, eax
    // if (...) GOTO(0x47ef78)
    // mov ecx, 0x8400c8
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47ef6c)
    // mov ecx, 0x8400c8
    // CALL(0x47b820)
    // if (...) GOTO(0x47ef78)
    // push 0
    // mov ecx, 0x8400c8
    // CALL(0x47b670)
    // mov eax, dword ptr [0x4e42ec]
    // inc eax
    // cmp eax, 0x83abae
    // mov dword ptr [0x4e42ec], eax
    // if (...) GOTO(0x47ef94)
    // mov dword ptr [0x4e42ec], 0x83aba4
    // mov ecx, dword ptr [esi + 0x26c]
    // test ecx, ecx
    // if (...) GOTO(0x47efb4)
    // mov eax, dword ptr [0x83ab88]
    // mov edx, dword ptr [ecx]
    // push eax
    // movsx eax, bl
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47efe6)
    // mov ecx, dword ptr [esi + 0x270]
    // test ecx, ecx
    // if (...) GOTO(0x47efd4)
    // mov eax, dword ptr [0x83ab88]
    // mov edx, dword ptr [ecx]
    // push eax
    // movsx eax, bl
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47efe6)
    // mov ecx, dword ptr [0x83ab88]
    // movsx edx, bl
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x47c5d0)
    // pop esi
    // pop ebx
    // return;
    // CALL(0x405099)
    // mov eax, dword ptr [esp + 0xc]
    // mov edx, dword ptr [esp + 8]
    // push eax
    // mov eax, dword ptr [esp + 8]
    // push edx
    // push eax
    // CALL(0x47be40)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov esi, ecx
    // CALL(0x47e120)
    // mov ecx, dword ptr [esi + 0x130]
    // xor edi, edi
    // cmp ecx, edi
    // if (...) GOTO(0x47f031)
    // mov eax, dword ptr [ecx]
    // push esi
    // CALL(dword)
    // mov ebp, dword ptr [esp + 0x24]
    // cmp ebp, edi
    // if (...) GOTO(0x47f047)
    // mov dword ptr [0x83ab44], esi
    // mov dword ptr [0x83ab40], edi
    // if (...) GOTO(0x47f053)
    // mov dword ptr [0x83ab40], esi
    // mov dword ptr [0x83ab44], edi
    // mov eax, dword ptr [esp + 0x18]
    // mov ebx, dword ptr [esp + 0x1c]
    // cmp eax, edi
    // mov edi, dword ptr [esp + 0x20]
    // mov dword ptr [0x83ab48], 1
    // if (...) GOTO(0x47f082)
    // mov eax, dword ptr [esi + 0x9c]
    // test ah, 2
    // if (...) GOTO(0x47f082)
    // push ebp
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(0x47bf40)
    // mov edx, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47f0db)
    // lea eax, [esp + 0x10]
    // push 0
    // push eax
    // push edi
    // push ebx
    // lea ecx, [esi + 0x328]
    // CALL(0x492a90)
    // test eax, eax
    // if (...) GOTO(0x47f0db)
    // mov eax, dword ptr [esp + 0x10]
    // mov edx, dword ptr [esi]
    // mov ecx, dword ptr [esi + eax*4 + 0x388]
    // cmp ecx, -1
    // if (...) GOTO(0x47f0cd)
    // mov ecx, dword ptr [esi + eax*4 + 0x428]
    // push ecx
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // if (...) GOTO(0x47f0d7)
    // push ecx
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47f0e5)
    // push ebp
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(0x47c1b0)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // mov eax, dword ptr [0x83ab40]
    // push ebx
    // push esi
    // push edi
    // mov edi, ecx
    // xor ecx, ecx
    // cmp eax, ecx
    // if (...) GOTO(0x47f108)
    // mov eax, dword ptr [0x83ab44]
    // cmp eax, edi
    // if (...) GOTO(0x47f122)
    // mov esi, dword ptr [esp + 0x24]
    // mov ebx, dword ptr [esp + 0x20]
    // mov dword ptr [0x83ab40], ecx
    // mov dword ptr [0x83ab44], ecx
    // if (...) GOTO(0x47f18a)
    // lea eax, [edi + 0x1ac]
    // mov dword ptr [0x83ab40], ecx
    // mov dword ptr [0x83ab44], ecx
    // push ebp
    // mov edx, dword ptr [eax]
    // mov ecx, edx
    // mov esi, dword ptr [eax + 4]
    // neg ecx
    // mov ebx, dword ptr [eax + 8]
    // add edx, ecx
    // add ebx, ecx
    // lea ecx, [esp + 0x10]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, esi
    // neg eax
    // add esi, eax
    // mov dword ptr [esp + 0x18], ebx
    // mov ebx, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x14], esi
    // mov esi, dword ptr [esp + 0x28]
    // push ecx
    // add ebp, eax
    // push esi
    // push ebx
    // mov dword ptr [esp + 0x1c], edx
    // mov dword ptr [esp + 0x28], ebp
    // CALL(0x492610)
    // add esp, 0xc
    // test eax, eax
    // pop ebp
    // if (...) GOTO(0x47f18a)
    // mov edx, dword ptr [esp + 0x28]
    // mov ecx, edi
    // push edx
    // push esi
    // push ebx
    // CALL(0x47c0e0)
    // mov ecx, edi
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47f1a3)
    // mov eax, dword ptr [esp + 0x28]
    // mov ecx, edi
    // push eax
    // push esi
    // push ebx
    // CALL(0x47c290)
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov esi, ecx
    // CALL(0x47e120)
    // mov ecx, dword ptr [esi + 0x130]
    // xor edi, edi
    // cmp ecx, edi
    // if (...) GOTO(0x47f1d0)
    // mov eax, dword ptr [ecx]
    // push esi
    // CALL(dword)
    // mov ebp, dword ptr [esp + 0x20]
    // cmp ebp, edi
    // if (...) GOTO(0x47f1e6)
    // mov dword ptr [0x83ab44], esi
    // mov dword ptr [0x83ab40], edi
    // if (...) GOTO(0x47f1f2)
    // mov dword ptr [0x83ab40], esi
    // mov dword ptr [0x83ab44], edi
    // mov eax, dword ptr [esp + 0x14]
    // mov ebx, dword ptr [esp + 0x18]
    // mov dword ptr [0x83ab48], edi
    // cmp eax, edi
    // mov edi, dword ptr [esp + 0x1c]
    // if (...) GOTO(0x47f21d)
    // mov eax, dword ptr [esi + 0x9c]
    // test ah, 2
    // if (...) GOTO(0x47f21d)
    // push ebp
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(0x47c010)
    // push ebp
    // push edi
    // push ebx
    // mov ecx, esi
    // CALL(0x47c430)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // sub esp, 0x10
    // mov eax, dword ptr [0x83ab40]
    // push ebx
    // push esi
    // push edi
    // mov edi, ecx
    // xor ecx, ecx
    // cmp eax, ecx
    // if (...) GOTO(0x47f248)
    // mov eax, dword ptr [0x83ab44]
    // cmp eax, edi
    // if (...) GOTO(0x47f262)
    // mov esi, dword ptr [esp + 0x24]
    // mov ebx, dword ptr [esp + 0x20]
    // mov dword ptr [0x83ab40], ecx
    // mov dword ptr [0x83ab44], ecx
    // if (...) GOTO(0x47f2ca)
    // lea eax, [edi + 0x1ac]
    // mov dword ptr [0x83ab40], ecx
    // mov dword ptr [0x83ab44], ecx
    // push ebp
    // mov edx, dword ptr [eax]
    // mov ecx, edx
    // mov esi, dword ptr [eax + 4]
    // neg ecx
    // mov ebx, dword ptr [eax + 8]
    // add edx, ecx
    // add ebx, ecx
    // lea ecx, [esp + 0x10]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, esi
    // neg eax
    // add esi, eax
    // mov dword ptr [esp + 0x18], ebx
    // mov ebx, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x14], esi
    // mov esi, dword ptr [esp + 0x28]
    // push ecx
    // add ebp, eax
    // push esi
    // push ebx
    // mov dword ptr [esp + 0x1c], edx
    // mov dword ptr [esp + 0x28], ebp
    // CALL(0x492610)
    // add esp, 0xc
    // test eax, eax
    // pop ebp
    // if (...) GOTO(0x47f2ca)
    // mov edx, dword ptr [esp + 0x28]
    // mov ecx, edi
    // push edx
    // push esi
    // push ebx
    // CALL(0x47c360)
    // mov eax, dword ptr [esp + 0x28]
    // mov ecx, edi
    // push eax
    // push esi
    // push ebx
    // CALL(0x47c500)
    // pop edi
    // pop esi
    // pop ebx
    // add esp, 0x10
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [0x83ab54]
    // test esi, esi
    // if (...) GOTO(0x47f308)
    // mov eax, dword ptr [0x83b990]
    // test eax, eax
    // if (...) GOTO(0x47f318)
    // mov esi, eax
    // if (...) GOTO(0x47f318)
    // mov esi, dword ptr [0x83ab38]
    // test esi, esi
    // if (...) GOTO(0x47f318)
    // mov esi, dword ptr [0x83ab60]
    // test esi, esi
    // mov dword ptr [0x83ab3c], esi
    // if (...) GOTO(0x47f339)
    // mov esi, dword ptr [esi + 0xb0]
    // test esi, esi
    // if (...) GOTO(0x47f339)
    // mov ecx, esi
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47f339)
    // pop esi
    // return;
    // mov eax, esi
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x14]
    // push edi
    // mov ecx, esi
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47f35a)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov edi, dword ptr [esp + 0x1c]
    // mov ebp, dword ptr [esp + 0x20]
    // mov eax, dword ptr [edi]
    // mov ecx, dword ptr [ebp]
    // mov dword ptr [esp + 0x10], eax
    // mov al, byte ptr [esi + 0x9c]
    // test al, 0x20
    // mov dword ptr [esp + 0x20], ecx
    // if (...) GOTO(0x47f389)
    // mov edx, dword ptr [0x839ab8]
    // mov dword ptr [edi], edx
    // mov eax, dword ptr [0x839abc]
    // mov dword ptr [ebp], eax
    // mov eax, dword ptr [esi + 0x22c]
    // xor ebx, ebx
    // test eax, eax
    // if (...) GOTO(0x47f3c5)
    // mov ecx, dword ptr [esi + 0x224]
    // mov eax, dword ptr [ecx + ebx*4]
    // test byte ptr [eax + 0x9c], 0x20
    // if (...) GOTO(0x47f3ba)
    // push ebp
    // push edi
    // push eax
    // CALL(0x47f340)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f5d9)
    // mov eax, dword ptr [esi + 0x22c]
    // inc ebx
    // cmp ebx, eax
    // if (...) GOTO(0x47f395)
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47f5f2)
    // mov edx, dword ptr [ebp]
    // mov eax, dword ptr [edi]
    // lea ebx, [esi + 0x1bc]
    // push ebx
    // push edx
    // push eax
    // CALL(0x492610)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f6e3)
    // mov ecx, dword ptr [ebx]
    // mov edx, dword ptr [edi]
    // sub edx, ecx
    // xor ebx, ebx
    // mov dword ptr [edi], edx
    // mov edx, dword ptr [esi + 0x1c0]
    // mov ecx, dword ptr [ebp]
    // sub ecx, edx
    // mov dword ptr [ebp], ecx
    // mov eax, dword ptr [esi + 0x22c]
    // test eax, eax
    // if (...) GOTO(0x47f451)
    // cmp esi, dword ptr [esi + 0xb0]
    // if (...) GOTO(0x47f446)
    // mov eax, dword ptr [esi + 0x224]
    // mov eax, dword ptr [eax + ebx*4]
    // mov ecx, dword ptr [eax + 0x9c]
    // test ch, 0x80
    // if (...) GOTO(0x47f446)
    // test cl, 0x20
    // if (...) GOTO(0x47f446)
    // push ebp
    // push edi
    // push eax
    // CALL(0x47f340)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f5d9)
    // mov eax, dword ptr [esi + 0x22c]
    // inc ebx
    // cmp ebx, eax
    // if (...) GOTO(0x47f412)
    // mov ecx, dword ptr [ebp]
    // mov edx, dword ptr [edi]
    // lea ebx, [esi + 0x1ac]
    // push ebx
    // push ecx
    // push edx
    // CALL(0x492610)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f5df)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47f5cd)
    // mov eax, dword ptr [esi + 0x9c]
    // test eax, 0x10000000
    // if (...) GOTO(0x47f5cd)
    // test al, 0x10
    // if (...) GOTO(0x47f4a5)
    // test eax, 0x400000
    // if (...) GOTO(0x47f4a5)
    // mov ecx, dword ptr [esi + 0x180]
    // if (...) GOTO(0x47f4ab)
    // mov ecx, dword ptr [esi + 0x184]
    // mov eax, dword ptr [esi + 0x188]
    // mov dword ptr [esp + 0x1c], ecx
    // cmp eax, -1
    // if (...) GOTO(0x47f4c0)
    // mov dword ptr [esp + 0x18], eax
    // if (...) GOTO(0x47f4ca)
    // mov edx, dword ptr [esi + 0x184]
    // mov dword ptr [esp + 0x18], edx
    // mov eax, dword ptr [ebp]
    // cmp eax, ecx
    // if (...) GOTO(0x47f523)
    // mov ecx, dword ptr [esi + 0x11c]
    // push eax
    // mov eax, dword ptr [edi]
    // push eax
    // CALL(0x478df0)
    // mov ecx, dword ptr [0x4e432c]
    // and ecx, 0x7fffffff
    // cmp eax, ecx
    // if (...) GOTO(0x47f5cd)
    // mov edx, dword ptr [esi + 0x1bc]
    // mov ebx, dword ptr [edi]
    // add ebx, edx
    // mov edx, dword ptr [esp + 0x10]
    // mov dword ptr [edi], ebx
    // mov eax, dword ptr [esi + 0x1c0]
    // mov ecx, dword ptr [ebp]
    // add ecx, eax
    // mov eax, dword ptr [esp + 0x20]
    // mov dword ptr [ebp], ecx
    // mov dword ptr [edi], edx
    // pop edi
    // mov dword ptr [ebp], eax
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // mov edx, dword ptr [esi + 0x1c8]
    // mov ecx, dword ptr [esi + 0x1c0]
    // mov ebx, edx
    // sub ebx, ecx
    // sub ebx, dword ptr [esp + 0x18]
    // cmp eax, ebx
    // if (...) GOTO(0x47f593)
    // mov ebx, dword ptr [esp + 0x18]
    // sub ecx, edx
    // add ecx, eax
    // add ecx, ebx
    // push ecx
    // mov ecx, dword ptr [edi]
    // push ecx
    // mov ecx, dword ptr [esi + 0x128]
    // CALL(0x478df0)
    // mov edx, dword ptr [0x4e432c]
    // and edx, 0x7fffffff
    // cmp eax, edx
    // if (...) GOTO(0x47f5cd)
    // mov eax, dword ptr [esi + 0x1bc]
    // mov ecx, dword ptr [edi]
    // mov edx, dword ptr [esp + 0x10]
    // add ecx, eax
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [esi + 0x1c0]
    // mov eax, dword ptr [ebp]
    // add eax, ecx
    // mov dword ptr [ebp], eax
    // mov eax, dword ptr [esp + 0x20]
    // mov dword ptr [edi], edx
    // pop edi
    // mov dword ptr [ebp], eax
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // mov edx, dword ptr [edi]
    // mov ecx, dword ptr [esi + 0x184]
    // mov ebx, dword ptr [esp + 0x1c]
    // cmp edx, ecx
    // if (...) GOTO(0x47f5af)
    // mov ecx, dword ptr [esi + 0x124]
    // sub eax, ebx
    // push eax
    // push edx
    // if (...) GOTO(0x47f54f)
    // sub eax, ebx
    // mov ebx, dword ptr [esi + 0x1c4]
    // push eax
    // mov eax, dword ptr [esi + 0x1bc]
    // sub ecx, ebx
    // add ecx, eax
    // add ecx, edx
    // push ecx
    // mov ecx, dword ptr [esi + 0x120]
    // if (...) GOTO(0x47f54f)
    // mov dword ptr [0x83ab18], 1
    // mov eax, esi
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov edx, dword ptr [ebx]
    // mov ebx, dword ptr [edi]
    // sub ebx, edx
    // mov dword ptr [edi], ebx
    // mov eax, dword ptr [esi + 0x1b0]
    // sub dword ptr [ebp], eax
    // if (...) GOTO(0x47f621)
    // mov ecx, dword ptr [ebp]
    // mov edx, dword ptr [edi]
    // lea ebx, [esi + 0x1ac]
    // push ebx
    // push ecx
    // push edx
    // CALL(0x492610)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f6e3)
    // mov eax, dword ptr [ebx]
    // mov ecx, dword ptr [edi]
    // sub ecx, eax
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [esi + 0x1b0]
    // sub dword ptr [ebp], ecx
    // mov dword ptr [0x83ab18], 0
    // mov eax, dword ptr [esi + 0x22c]
    // xor ebx, ebx
    // test eax, eax
    // if (...) GOTO(0x47f676)
    // cmp esi, dword ptr [esi + 0xb0]
    // if (...) GOTO(0x47f66b)
    // mov edx, dword ptr [esi + 0x224]
    // mov eax, dword ptr [edx + ebx*4]
    // mov ecx, dword ptr [eax + 0x9c]
    // test ch, 0x80
    // if (...) GOTO(0x47f66b)
    // test cl, 0x20
    // if (...) GOTO(0x47f66b)
    // push ebp
    // push edi
    // push eax
    // CALL(0x47f340)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f5d9)
    // mov eax, dword ptr [esi + 0x22c]
    // inc ebx
    // cmp ebx, eax
    // if (...) GOTO(0x47f637)
    // test byte ptr [esi + 0x9c], 2
    // if (...) GOTO(0x47f6e3)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47f5d7)
    // mov eax, dword ptr [esi + 0x9c]
    // test eax, 0x1000000
    // if (...) GOTO(0x47f5d7)
    // test ah, 1
    // if (...) GOTO(0x47f5d7)
    // mov ecx, dword ptr [ebp]
    // mov edx, dword ptr [edi]
    // push ecx
    // push edx
    // lea ecx, [esi + 0x274]
    // CALL(0x478df0)
    // mov ecx, dword ptr [0x4e432c]
    // and ecx, 0x7fffffff
    // cmp eax, ecx
    // if (...) GOTO(0x47f6e3)
    // mov ecx, dword ptr [esi + 0xa4]
    // test ecx, ecx
    // if (...) GOTO(0x47f5d7)
    // test eax, eax
    // if (...) GOTO(0x47f5d7)
    // mov edx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [esp + 0x20]
    // mov dword ptr [edi], edx
    // pop edi
    // mov dword ptr [ebp], eax
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x10]
    // mov ebp, dword ptr [0x83ab30]
    // mov edx, dword ptr [0x83ab34]
    // mov eax, dword ptr [esi]
    // push edi
    // mov edi, dword ptr [esp + 0x18]
    // mov dword ptr [0x839ab8], eax
    // xor eax, eax
    // mov ecx, dword ptr [edi]
    // mov dword ptr [0x839abc], ecx
    // mov ecx, dword ptr [0x83ab44]
    // mov ebx, dword ptr [0x83ab40]
    // test ebx, ebx
    // if (...) GOTO(0x47f74e)
    // test byte ptr [ebx + 0xa0], 1
    // if (...) GOTO(0x47f79b)
    // mov dword ptr [0x83ab40], 0
    // if (...) GOTO(0x47f72f)
    // test ecx, ecx
    // if (...) GOTO(0x47f769)
    // mov ebx, 1
    // test byte ptr [ecx + 0xa0], bl
    // if (...) GOTO(0x47f7b5)
    // xor ecx, ecx
    // mov dword ptr [0x83ab44], ecx
    // if (...) GOTO(0x47f72f)
    // test ebp, ebp
    // if (...) GOTO(0x47f780)
    // test byte ptr [ebp + 0xa0], 1
    // if (...) GOTO(0x47f7c9)
    // xor ebp, ebp
    // mov dword ptr [0x83ab30], ebp
    // if (...) GOTO(0x47f72f)
    // test edx, edx
    // if (...) GOTO(0x47f7ff)
    // mov ebx, 1
    // test byte ptr [edx + 0xa0], bl
    // if (...) GOTO(0x47f7e3)
    // xor edx, edx
    // mov dword ptr [0x83ab34], edx
    // if (...) GOTO(0x47f72f)
    // push edi
    // push esi
    // mov ecx, ebx
    // CALL(0x47b200)
    // mov eax, dword ptr [0x83ab40]
    // mov dword ptr [0x83ab18], 0
    // if (...) GOTO(0x47f7f7)
    // push edi
    // push esi
    // CALL(0x47b2d0)
    // mov eax, dword ptr [0x83ab44]
    // mov dword ptr [0x83ab18], ebx
    // if (...) GOTO(0x47f7f7)
    // push edi
    // push esi
    // mov ecx, ebp
    // CALL(0x47b200)
    // mov eax, dword ptr [0x83ab30]
    // mov dword ptr [0x83ab18], 0
    // if (...) GOTO(0x47f7f7)
    // push edi
    // push esi
    // mov ecx, edx
    // CALL(0x47b2d0)
    // mov eax, dword ptr [0x83ab34]
    // mov dword ptr [0x83ab18], ebx
    // test eax, eax
    // if (...) GOTO(0x47f8d9)
    // mov ecx, dword ptr [0x83ab54]
    // test ecx, ecx
    // if (...) GOTO(0x47f895)
    // push edi
    // push esi
    // CALL(0x47b2d0)
    // mov edx, dword ptr [0x83ab54]
    // push edi
    // push esi
    // push edx
    // CALL(0x47f340)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f8c9)
    // mov ecx, dword ptr [0x83ab50]
    // test ecx, ecx
    // if (...) GOTO(0x47f864)
    // mov eax, dword ptr [0x839ab8]
    // push edi
    // mov dword ptr [esi], eax
    // mov ecx, dword ptr [0x839abc]
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [0x83ab50]
    // push esi
    // CALL(0x47b2d0)
    // mov edx, dword ptr [0x83ab50]
    // push edi
    // push esi
    // push edx
    // CALL(0x47f340)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f8c9)
    // mov eax, dword ptr [0x839ab8]
    // push edi
    // mov dword ptr [esi], eax
    // mov ecx, dword ptr [0x839abc]
    // mov dword ptr [edi], ecx
    // mov ecx, dword ptr [0x83ab54]
    // push esi
    // CALL(0x47b200)
    // mov eax, dword ptr [0x83ab54]
    // mov dword ptr [0x83ab18], 0
    // if (...) GOTO(0x47f8c5)
    // mov ecx, dword ptr [0x83ab94]
    // xor ebp, ebp
    // test ecx, ecx
    // if (...) GOTO(0x47f8d9)
    // mov ebx, 0x83a2d8
    // mov edx, dword ptr [ebx]
    // push edi
    // push esi
    // push edx
    // CALL(0x47f340)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x47f8c9)
    // mov ecx, dword ptr [0x83ab94]
    // inc ebp
    // add ebx, 4
    // cmp ebp, ecx
    // if (...) GOTO(0x47f8a6)
    // test eax, eax
    // if (...) GOTO(0x47f8d9)
    // mov ecx, dword ptr [0x83ab18]
    // test ecx, ecx
    // if (...) GOTO(0x47f8d9)
    // mov eax, dword ptr [eax + 0xb0]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // // nop
    // // nop
    // mov ecx, dword ptr [0x83ab90]
    // sub esp, 0x10
    // test ecx, ecx
    // push ebx
    // push ebp
    // push esi
    // push edi
    // if (...) GOTO(0x47fa1e)
    // mov eax, dword ptr [0x83aae0]
    // test eax, eax
    // if (...) GOTO(0x47f906)
    // xor esi, esi
    // mov dword ptr [esp + 0x28], esi
    // if (...) GOTO(0x47f90a)
    // mov esi, dword ptr [esp + 0x28]
    // test esi, esi
    // lea eax, [ecx - 1]
    // if (...) GOTO(0x47f930)
    // xor eax, eax
    // test ecx, ecx
    // if (...) GOTO(0x47f928)
    // mov edx, 0x839ac0
    // cmp esi, dword ptr [edx]
    // if (...) GOTO(0x47f928)
    // inc eax
    // add edx, 4
    // cmp eax, ecx
    // if (...) GOTO(0x47f91c)
    // cmp eax, ecx
    // if (...) GOTO(0x47fa1e)
    // mov ebp, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x47f98c)
    // lea edi, [eax*4 + 0x839ac0]
    // lea ebx, [eax + 1]
    // mov ecx, dword ptr [edi]
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x47f986)
    // mov esi, dword ptr [edi]
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47f965)
    // mov eax, dword ptr [esi]
    // push -1
    // push ebp
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x28]
    // test eax, eax
    // if (...) GOTO(0x47f975)
    // cmp eax, dword ptr [eax + 0xb0]
    // if (...) GOTO(0x47f986)
    // mov esi, dword ptr [esi + 0xb0]
    // push ebp
    // mov ecx, esi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // sub edi, 4
    // dec ebx
    // if (...) GOTO(0x47f942)
    // mov eax, dword ptr [0x83aaa0]
    // test eax, eax
    // if (...) GOTO(0x47fa1e)
    // mov ebx, dword ptr [0x83aaa4]
    // mov eax, dword ptr [0x83aab4]
    // mov edi, dword ptr [0x83aaa8]
    // mov edx, ebx
    // lea ecx, [eax + ebx]
    // mov eax, dword ptr [0x83aab8]
    // mov esi, edi
    // add eax, edi
    // test ebp, ebp
    // mov dword ptr [esp + 0x10], edx
    // mov dword ptr [esp + 0x14], esi
    // mov dword ptr [esp + 0x18], ecx
    // mov dword ptr [esp + 0x1c], eax
    // if (...) GOTO(0x47f9fd)
    // lea ecx, [esp + 0x10]
    // push ebp
    // lea edx, [esp + 0x14]
    // push ecx
    // push edx
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x47fa1e)
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x10]
    // mov esi, dword ptr [esp + 0x14]
    // mov edi, dword ptr [0x83aaa8]
    // mov ebx, dword ptr [0x83aaa4]
    // sub eax, esi
    // sub ecx, edx
    // push eax
    // push ecx
    // mov eax, esi
    // mov ecx, edx
    // sub eax, edi
    // sub ecx, ebx
    // push eax
    // push ecx
    // push esi
    // push edx
    // push(0x83a500)  // ptr?
    // mov ecx, 0x83a7b8
    // CALL(0x475c60)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x14
    // xor eax, eax
    // push esi
    // mov esi, dword ptr [esp + 0x1c]
    // push edi
    // cmp esi, eax
    // mov edi, ecx
    // if (...) GOTO(0x47fa53)
    // push edi
    // push eax
    // CALL(0x47f8e0)
    // add esp, 8
    // pop edi
    // pop esi
    // add esp, 0x14
    // return;
    // mov dword ptr [esp + 0x20], eax
    // mov dword ptr [esp + 8], eax
    // lea eax, [esp + 8]
    // push ebx
    // lea ecx, [esp + 0x24]
    // push eax
    // push ecx
    // mov ecx, edi
    // CALL(0x47b170)
    // mov eax, dword ptr [esi]
    // mov ebx, dword ptr [esp + 0x24]
    // mov edx, dword ptr [esi + 8]
    // mov ecx, dword ptr [esi + 4]
    // mov esi, dword ptr [esi + 0xc]
    // add eax, ebx
    // add edx, ebx
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esp + 0xc]
    // mov dword ptr [esp + 0x18], edx
    // lea edx, [esp + 0x10]
    // add ecx, eax
    // add esi, eax
    // push edi
    // push edx
    // mov dword ptr [esp + 0x1c], ecx
    // mov dword ptr [esp + 0x24], esi
    // CALL(0x47f8e0)
    // add esp, 8
    // pop ebx
    // pop edi
    // pop esi
    // add esp, 0x14
    // return;
    // // nop
    // sub esp, 0x38
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47fad5)
    // lea eax, [esp + 0x50]
    // lea ecx, [esp + 0x4c]
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(0x47b200)
    // if (...) GOTO(0x47fae6)
    // lea edx, [esp + 0x50]
    // lea eax, [esp + 0x4c]
    // push edx
    // push eax
    // mov ecx, esi
    // CALL(0x47b2d0)
    // mov ebp, dword ptr [esp + 0x4c]
    // mov edx, dword ptr [0x83ab24]
    // mov edi, dword ptr [esp + 0x50]
    // mov ecx, dword ptr [0x83ab28]
    // sub ebp, edx
    // sub edi, ecx
    // test ebp, ebp
    // if (...) GOTO(0x47fb0a)
    // test edi, edi
    // if (...) GOTO(0x4801a3)
    // mov ecx, dword ptr [esi + 0x1a4]
    // mov edx, dword ptr [esi + 0x1a8]
    // mov dword ptr [esp + 0x14], ecx
    // lea eax, [esp + 0x10]
    // lea ecx, [esp + 0x14]
    // push eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x18], edx
    // CALL(0x47ca10)
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47fb89)
    // lea edx, [esi + 0x1ac]
    // mov eax, edx
    // mov edx, dword ptr [eax]
    // mov ebx, dword ptr [eax + 4]
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x20], ecx
    // mov ecx, edx
    // mov eax, dword ptr [eax + 0xc]
    // neg ecx
    // add edx, ecx
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x18], edx
    // mov edx, dword ptr [esp + 0x20]
    // mov eax, ebx
    // add edx, ecx
    // mov ecx, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x20], edx
    // neg eax
    // add ecx, eax
    // add ebx, eax
    // mov dword ptr [esp + 0x24], ecx
    // lea ecx, [esp + 0x18]
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x20], ebx
    // CALL(0x47b0d0)
    // if (...) GOTO(0x47fbd8)
    // lea edx, [esi + 0x1bc]
    // mov eax, edx
    // mov edx, dword ptr [eax]
    // mov ebx, dword ptr [eax + 4]
    // mov ecx, dword ptr [eax + 8]
    // mov dword ptr [esp + 0x20], ecx
    // mov ecx, edx
    // mov eax, dword ptr [eax + 0xc]
    // neg ecx
    // add edx, ecx
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x18], edx
    // mov edx, dword ptr [esp + 0x20]
    // mov eax, ebx
    // add edx, ecx
    // mov ecx, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x20], edx
    // neg eax
    // add ecx, eax
    // add ebx, eax
    // mov dword ptr [esp + 0x24], ecx
    // lea ecx, [esp + 0x18]
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x20], ebx
    // CALL(0x47b120)
    // mov edx, dword ptr [0x83ab1c]
    // lea eax, [edx - 2]
    // cmp eax, 0xf
    // if (...) GOTO(0x4801a3)
    // if (...) GOTO(dword)
    // test ebp, ebp
    // if (...) GOTO(0x47fbfd)
    // test edi, edi
    // if (...) GOTO(0x4800ac)
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x47fc43)
    // mov ebx, dword ptr [esi + 0x1ac]
    // mov edx, dword ptr [esi + 0x1b4]
    // mov ecx, dword ptr [esi + 0x1b0]
    // mov eax, dword ptr [esi + 0x1b8]
    // add ebx, ebp
    // add edx, ebp
    // add ecx, edi
    // add eax, edi
    // mov dword ptr [esi + 0x1ac], ebx
    // mov dword ptr [esi + 0x1b4], edx
    // mov dword ptr [esi + 0x1b0], ecx
    // mov dword ptr [esi + 0x1b8], eax
    // if (...) GOTO(0x4800ac)
    // mov ecx, dword ptr [esi + 0x1bc]
    // mov eax, dword ptr [esi + 0x1c4]
    // mov ebx, dword ptr [esi + 0x1c0]
    // mov edx, dword ptr [esi + 0x1c8]
    // add ecx, ebp
    // add eax, ebp
    // add ebx, edi
    // add edx, edi
    // mov dword ptr [esi + 0x1bc], ecx
    // mov dword ptr [esi + 0x1c4], eax
    // mov dword ptr [esi + 0x1c0], ebx
    // mov dword ptr [esi + 0x1c8], edx
    // mov eax, dword ptr [esi + 0x12c]
    // test eax, eax
    // if (...) GOTO(0x4800ac)
    // add eax, 0x1ac
    // mov ecx, eax
    // mov edx, dword ptr [ecx]
    // mov dword ptr [esp + 0x38], edx
    // mov edx, dword ptr [ecx + 4]
    // mov dword ptr [esp + 0x3c], edx
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [esp + 0x40], edx
    // mov ecx, dword ptr [ecx + 0xc]
    // mov dword ptr [esp + 0x44], ecx
    // mov ebx, dword ptr [eax]
    // mov edx, dword ptr [eax + 8]
    // mov ecx, dword ptr [eax + 4]
    // add ebx, ebp
    // add edx, ebp
    // mov ebp, dword ptr [eax + 0xc]
    // add ecx, edi
    // add ebp, edi
    // mov dword ptr [eax], ebx
    // mov dword ptr [eax + 8], edx
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax + 0xc], ebp
    // mov edx, dword ptr [esi + 0x12c]
    // add edx, 0x1ac
    // lea eax, [esp + 0x38]
    // push edx
    // lea ecx, [esp + 0x3c]
    // push eax
    // push ecx
    // CALL(dword)
    // if (...) GOTO(0x4800ac)
    // test ebp, ebp
    // if (...) GOTO(0x4800ac)
    // mov eax, dword ptr [esi + 0x1bc]
    // add eax, ebp
    // mov dword ptr [esi + 0x1bc], eax
    // mov ecx, eax
    // mov eax, dword ptr [esi + 0x1c4]
    // mov edx, eax
    // sub edx, ecx
    // mov ecx, dword ptr [esp + 0x14]
    // cmp edx, ecx
    // if (...) GOTO(0x47fd1f)
    // mov edx, eax
    // sub edx, ecx
    // mov dword ptr [esi + 0x1bc], edx
    // mov edi, dword ptr [esi + 0x1c8]
    // mov ebx, dword ptr [esi + 0x1c0]
    // mov ecx, dword ptr [esi + 0xb0]
    // sub edi, ebx
    // mov ebx, dword ptr [esi + 0x1bc]
    // push 0
    // mov edx, dword ptr [ecx]
    // push 0
    // sub eax, ebx
    // push edi
    // push eax
    // CALL(dword)
    // if (...) GOTO(0x4800ac)
    // test ebp, ebp
    // if (...) GOTO(0x4800ac)
    // mov ecx, dword ptr [esi + 0x1c4]
    // mov edx, dword ptr [esp + 0x14]
    // add ecx, ebp
    // mov dword ptr [esi + 0x1c4], ecx
    // mov eax, dword ptr [0x83ab24]
    // add eax, ebp
    // mov dword ptr [0x83ab24], eax
    // mov ecx, dword ptr [esi + 0x1c4]
    // mov eax, dword ptr [esi + 0x1bc]
    // mov edi, ecx
    // sub edi, eax
    // cmp edi, edx
    // if (...) GOTO(0x48007f)
    // if (...) GOTO(0x480065)
    // test edi, edi
    // if (...) GOTO(0x4800ac)
    // mov ebp, dword ptr [esi + 0x1c0]
    // mov eax, dword ptr [esi + 0x1c8]
    // add ebp, edi
    // mov edx, eax
    // mov ecx, ebp
    // mov dword ptr [esi + 0x1c0], ebp
    // sub edx, ecx
    // mov ecx, dword ptr [esp + 0x10]
    // cmp edx, ecx
    // if (...) GOTO(0x47fdc2)
    // mov edx, eax
    // sub edx, ecx
    // mov dword ptr [esi + 0x1c0], edx
    // mov ecx, dword ptr [esi + 0xb0]
    // push 0
    // push 0
    // mov edx, dword ptr [ecx]
    // if (...) GOTO(0x47fe36)
    // test edi, edi
    // if (...) GOTO(0x4800ac)
    // mov ecx, dword ptr [esi + 0x1c8]
    // mov edx, dword ptr [esp + 0x10]
    // add ecx, edi
    // mov dword ptr [esi + 0x1c8], ecx
    // mov eax, dword ptr [0x83ab28]
    // add eax, edi
    // mov dword ptr [0x83ab28], eax
    // mov ecx, dword ptr [esi + 0x1c8]
    // mov eax, dword ptr [esi + 0x1c0]
    // mov edi, ecx
    // sub edi, eax
    // cmp edi, edx
    // if (...) GOTO(0x47fe24)
    // sub eax, ecx
    // add eax, edx
    // add ecx, eax
    // mov dword ptr [esi + 0x1c8], ecx
    // mov ecx, dword ptr [0x83ab28]
    // add ecx, eax
    // mov dword ptr [0x83ab28], ecx
    // mov ecx, dword ptr [esi + 0xb0]
    // mov eax, dword ptr [esi + 0x1c8]
    // push 0
    // push 0
    // mov edx, dword ptr [ecx]
    // mov edi, dword ptr [esi + 0x1c0]
    // mov ebx, dword ptr [esi + 0x1bc]
    // sub eax, edi
    // push eax
    // mov eax, dword ptr [esi + 0x1c4]
    // sub eax, ebx
    // push eax
    // CALL(dword)
    // if (...) GOTO(0x4800ac)
    // mov ecx, dword ptr [esi + 0x1bc]
    // mov eax, dword ptr [esi + 0x1c0]
    // add ecx, ebp
    // add eax, edi
    // mov dword ptr [esi + 0x1bc], ecx
    // mov ebx, ecx
    // mov dword ptr [esi + 0x1c0], eax
    // mov ecx, eax
    // mov eax, dword ptr [esi + 0x1c8]
    // mov edx, eax
    // sub edx, ecx
    // mov ecx, dword ptr [esp + 0x10]
    // cmp edx, ecx
    // if (...) GOTO(0x47fe92)
    // mov edx, eax
    // sub edx, ecx
    // mov dword ptr [esi + 0x1c0], edx
    // mov edx, dword ptr [esi + 0x1c4]
    // mov ecx, dword ptr [esp + 0x14]
    // mov edi, edx
    // sub edi, ebx
    // cmp edi, ecx
    // if (...) GOTO(0x47feae)
    // mov edi, edx
    // sub edi, ecx
    // mov dword ptr [esi + 0x1bc], edi
    // mov ebx, dword ptr [esi + 0x1c0]
    // mov ecx, dword ptr [esi + 0xb0]
    // sub eax, ebx
    // mov ebx, dword ptr [esi + 0x1bc]
    // mov edi, dword ptr [ecx]
    // push 0
    // push 0
    // sub edx, ebx
    // push eax
    // push edx
    // CALL(dword)
    // if (...) GOTO(0x4800ac)
    // mov edx, dword ptr [esi + 0x1c4]
    // mov ecx, dword ptr [esi + 0x1c0]
    // add edx, ebp
    // add ecx, edi
    // mov dword ptr [esi + 0x1c4], edx
    // mov dword ptr [esi + 0x1c0], ecx
    // mov eax, dword ptr [0x83ab24]
    // mov ecx, dword ptr [esp + 0x10]
    // add eax, ebp
    // mov dword ptr [0x83ab24], eax
    // mov eax, dword ptr [esi + 0x1c8]
    // mov ebx, dword ptr [esi + 0x1c0]
    // mov edx, eax
    // sub edx, ebx
    // cmp edx, ecx
    // if (...) GOTO(0x47ff1c)
    // sub eax, ecx
    // mov dword ptr [esi + 0x1c0], eax
    // mov ecx, dword ptr [esi + 0x1c4]
    // mov eax, dword ptr [esi + 0x1bc]
    // mov edx, dword ptr [esp + 0x14]
    // mov edi, ecx
    // sub edi, eax
    // cmp edi, edx
    // if (...) GOTO(0x48007f)
    // if (...) GOTO(0x480065)
    // mov edx, dword ptr [esi + 0x1bc]
    // mov ecx, dword ptr [esi + 0x1c8]
    // add edx, ebp
    // add ecx, edi
    // mov dword ptr [esi + 0x1bc], edx
    // mov dword ptr [esi + 0x1c8], ecx
    // mov eax, dword ptr [0x83ab28]
    // mov edx, dword ptr [esp + 0x10]
    // add eax, edi
    // mov dword ptr [0x83ab28], eax
    // mov ecx, dword ptr [esi + 0x1c8]
    // mov eax, dword ptr [esi + 0x1c0]
    // mov edi, ecx
    // sub edi, eax
    // cmp edi, edx
    // if (...) GOTO(0x47ff97)
    // sub eax, ecx
    // add eax, edx
    // add ecx, eax
    // mov dword ptr [esi + 0x1c8], ecx
    // mov ecx, dword ptr [0x83ab28]
    // add ecx, eax
    // mov dword ptr [0x83ab28], ecx
    // mov eax, dword ptr [esi + 0x1c4]
    // mov ebx, dword ptr [esi + 0x1bc]
    // mov ecx, dword ptr [esp + 0x14]
    // mov edx, eax
    // sub edx, ebx
    // cmp edx, ecx
    // if (...) GOTO(0x47ffb9)
    // mov edx, eax
    // sub edx, ecx
    // mov dword ptr [esi + 0x1bc], edx
    // mov edi, dword ptr [esi + 0x1c8]
    // mov ebx, dword ptr [esi + 0x1c0]
    // mov ecx, dword ptr [esi + 0xb0]
    // sub edi, ebx
    // mov ebx, dword ptr [esi + 0x1bc]
    // push 0
    // mov edx, dword ptr [ecx]
    // push 0
    // sub eax, ebx
    // push edi
    // push eax
    // CALL(dword)
    // if (...) GOTO(0x4800ac)
    // mov ebx, dword ptr [esi + 0x1c4]
    // mov edx, dword ptr [esi + 0x1c8]
    // add ebx, ebp
    // add edx, edi
    // mov dword ptr [esi + 0x1c4], ebx
    // mov dword ptr [esi + 0x1c8], edx
    // mov ecx, dword ptr [0x83ab24]
    // mov eax, dword ptr [0x83ab28]
    // mov edx, dword ptr [esp + 0x10]
    // add ecx, ebp
    // add eax, edi
    // mov dword ptr [0x83ab24], ecx
    // mov dword ptr [0x83ab28], eax
    // mov ecx, dword ptr [esi + 0x1c8]
    // mov eax, dword ptr [esi + 0x1c0]
    // mov edi, ecx
    // sub edi, eax
    // cmp edi, edx
    // if (...) GOTO(0x48004d)
    // sub eax, ecx
    // add eax, edx
    // add ecx, eax
    // mov dword ptr [esi + 0x1c8], ecx
    // mov ecx, dword ptr [0x83ab28]
    // add ecx, eax
    // mov dword ptr [0x83ab28], ecx
    // mov ecx, dword ptr [esi + 0x1c4]
    // mov eax, dword ptr [esi + 0x1bc]
    // mov edx, dword ptr [esp + 0x14]
    // mov edi, ecx
    // sub edi, eax
    // cmp edi, edx
    // if (...) GOTO(0x48007f)
    // sub eax, ecx
    // add eax, edx
    // add ecx, eax
    // mov dword ptr [esi + 0x1c4], ecx
    // mov ecx, dword ptr [0x83ab24]
    // add ecx, eax
    // mov dword ptr [0x83ab24], ecx
    // mov edx, dword ptr [esi + 0x1c8]
    // mov edi, dword ptr [esi + 0x1c0]
    // mov ecx, dword ptr [esi + 0xb0]
    // mov ebx, dword ptr [esi + 0x1bc]
    // push 0
    // sub edx, edi
    // mov eax, dword ptr [ecx]
    // push 0
    // push edx
    // mov edx, dword ptr [esi + 0x1c4]
    // sub edx, ebx
    // push edx
    // CALL(dword)
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x4800f8)
    // lea eax, [esi + 0x1ac]
    // mov edx, dword ptr [esi + 0x1ac]
    // mov ecx, edx
    // mov edi, dword ptr [eax + 4]
    // neg ecx
    // mov ebx, dword ptr [eax + 8]
    // add edx, ecx
    // add ebx, ecx
    // lea ecx, [esp + 0x28]
    // mov ebp, dword ptr [eax + 0xc]
    // mov eax, edi
    // neg eax
    // add edi, eax
    // add ebp, eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x2c], edx
    // mov dword ptr [esp + 0x34], ebx
    // mov dword ptr [esp + 0x30], edi
    // mov dword ptr [esp + 0x38], ebp
    // CALL(0x47b0d0)
    // if (...) GOTO(0x480137)
    // lea edx, [esi + 0x1bc]
    // mov eax, edx
    // mov edx, dword ptr [eax]
    // mov ecx, edx
    // mov edi, dword ptr [eax + 4]
    // neg ecx
    // mov ebp, dword ptr [eax + 8]
    // add edx, ecx
    // add ebp, ecx
    // lea ecx, [esp + 0x28]
    // mov ebx, dword ptr [eax + 0xc]
    // mov eax, edi
    // neg eax
    // add edi, eax
    // add ebx, eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0x2c], edx
    // mov dword ptr [esp + 0x34], ebp
    // mov dword ptr [esp + 0x30], edi
    // mov dword ptr [esp + 0x38], ebx
    // CALL(0x47b120)
    // mov edi, dword ptr [0x4ba1a4]
    // lea edx, [esp + 0x28]
    // lea eax, [esp + 0x18]
    // push edx
    // lea ecx, [esp + 0x1c]
    // push eax
    // push ecx
    // CALL(edi)
    // mov eax, dword ptr [esi + 0x12c]
    // test eax, eax
    // if (...) GOTO(0x480169)
    // lea edx, [esp + 0x38]
    // lea eax, [esp + 0x18]
    // push edx
    // lea ecx, [esp + 0x1c]
    // push eax
    // push ecx
    // CALL(edi)
    // lea edx, [esi + 0x1dc]
    // push edx
    // push esi
    // CALL(0x47e140)
    // lea eax, [esp + 0x20]
    // push 0
    // push eax
    // mov dword ptr [0x83ab4c], 1
    // CALL(0x47f8e0)
    // lea ecx, [esp + 0x28]
    // push ecx
    // CALL(0x47cdb0)
    // add esp, 0x14
    // mov dword ptr [0x83ab4c], 0
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x38
    // return;
    // lea ecx, [ecx]
    // int1 
    // sti 
    // inc edi
    // add byte ptr [ebx - 0x5cffb7ff], ah
    // add dword ptr [eax], ecx
    // mov dword ptr [0xa3004801], eax
    // add dword ptr [eax], ecx
    // mov dword ptr [0xa3004801], eax
    // add dword ptr [eax], ecx
    // mov dword ptr [0xeb004801], eax
    // cld 
    // inc edi
    // add byte ptr [ebx - 3], cl
    // inc edi
    // add byte ptr [esi + 0x560047fd], cl
    // inc byte ptr [edi]
    // aam 0xfe
    // inc edi
    // add al, dl
    // std 
    // inc edi
    // add byte ptr [0xe50047ff], bh
    // inc dword ptr [edi]
    // test byte ptr [ecx + 0xa0], 1
    // if (...) GOTO(0x4801fc)
    // xor eax, eax
    // return;
    // mov ecx, dword ptr [ecx + 0x130]
    // test ecx, ecx
    // if (...) GOTO(0x480210)
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x480210)
    // return;
    // mov eax, 1
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // mov esi, ecx
    // test edi, edi
    // if (...) GOTO(0x48034b)
    // mov eax, dword ptr [esp + 0x14]
    // test eax, eax
    // if (...) GOTO(0x48034b)
    // push ebx
    // push ebp
    // CALL(0x480360)
    // xor ebp, ebp
    // mov dword ptr [0x83aac0], esi
    // xor ebx, ebx
    // push(0x5e)
    // push edi
    // CALL(0x4a6170)
    // mov esi, eax
    // add esp, 8
    // test esi, esi
    // if (...) GOTO(0x480262)
    // mov byte ptr [esi], 0
    // mov ecx, dword ptr [0x83aac8]
    // push(0x4c3f70)  // ptr?
    // CALL(0x4838f0)
    // mov ecx, dword ptr [0x83aac8]
    // mov edx, eax
    // push edi
    // mov dword ptr [esp + 0x14], edx
    // CALL(0x4838f0)
    // mov ecx, dword ptr [esp + 0x10]
    // lea eax, [eax + ecx*2]
    // cmp eax, ebp
    // if (...) GOTO(0x480291)
    // mov ebp, eax
    // test esi, esi
    // if (...) GOTO(0x480298)
    // mov byte ptr [esi], 0x5e
    // inc ebx
    // lea edi, [esi + 1]
    // test esi, esi
    // if (...) GOTO(0x48024e)
    // mov eax, dword ptr [0x83aac8]
    // mov ecx, dword ptr [eax + 8]
    // test ecx, ecx
    // if (...) GOTO(0x4802b3)
    // mov eax, dword ptr [eax + 0x10]
    // add eax, ecx
    // if (...) GOTO(0x4802b6)
    // mov eax, dword ptr [eax + 0xc]
    // imul eax, ebx
    // mov ecx, dword ptr [esp + 0x1c]
    // mov ebx, eax
    // mov edi, dword ptr [ecx + 4]
    // sub edi, ebx
    // jns 0x4802c9
    // mov edi, dword ptr [ecx + 0xc]
    // mov eax, dword ptr [ecx + 8]
    // mov edx, dword ptr [ecx]
    // sub eax, ebp
    // add eax, edx
    // cdq 
    // sub eax, edx
    // mov esi, eax
    // sar esi, 1
    // jns 0x4802df
    // xor esi, esi
    // if (...) GOTO(0x480316)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x4802ed)
    // xor eax, eax
    // if (...) GOTO(0x4802fb)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [0x83ad50]
    // lea edx, [esi + ebp]
    // cmp edx, eax
    // if (...) GOTO(0x480316)
    // test ecx, ecx
    // if (...) GOTO(0x48030a)
    // xor eax, eax
    // if (...) GOTO(0x480312)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // sub eax, ebp
    // mov esi, eax
    // mov ecx, dword ptr [esp + 0x18]
    // mov dword ptr [0x83a2c8], esi
    // mov dword ptr [0x83a2cc], edi
    // add esi, ebp
    // add edi, ebx
    // push(0x83a2c8)  // ptr?
    // mov dword ptr [0x83a2d0], esi
    // mov dword ptr [0x83a2d4], edi
    // mov dword ptr [0x83aac4], ecx
    // CALL(0x47cdb0)
    // add esp, 4
    // pop ebp
    // pop ebx
    // pop edi
    // pop esi
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [0x83aac4]
    // xor eax, eax
    // cmp ecx, eax
    // if (...) GOTO(0x48038e)
    // push eax
    // push(0x83a2c8)  // ptr?
    // mov dword ptr [0x83aac0], eax
    // mov dword ptr [0x83aac4], eax
    // CALL(0x47f8e0)
    // push(0x83a2c8)  // ptr?
    // CALL(0x47cdb0)
    // add esp, 0xc
    // return;
    // // nop
    // push esi
    // mov esi, ecx
    // push edi
    // xor edi, edi
    // mov eax, dword ptr [esi + 4]
    // mov dword ptr [esi], 0x4baa10
    // cmp eax, edi
    // if (...) GOTO(0x480401)
    // mov eax, dword ptr [esi + 0x14]
    // push ebx
    // cmp eax, edi
    // if (...) GOTO(0x4803f1)
    // mov eax, dword ptr [esi + 0xc]
    // xor ebx, ebx
    // cmp eax, edi
    // if (...) GOTO(0x4803f1)
    // mov eax, dword ptr [esi + 4]
    // mov ecx, dword ptr [eax + 0xc]
    // mov dword ptr [esi + 8], ecx
    // mov eax, dword ptr [eax + 8]
    // cmp eax, edi
    // if (...) GOTO(0x4803cd)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov edx, dword ptr [esi + 4]
    // mov dword ptr [edx + 8], edi
    // mov eax, dword ptr [esi + 4]
    // cmp eax, edi
    // if (...) GOTO(0x4803e3)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov eax, dword ptr [esi + 8]
    // inc ebx
    // mov dword ptr [esi + 4], eax
    // mov eax, dword ptr [esi + 0xc]
    // cmp ebx, eax
    // if (...) GOTO(0x4803b4)
    // mov dword ptr [esi + 0x10], edi
    // mov dword ptr [esi + 4], edi
    // mov dword ptr [esi + 0xc], edi
    // mov dword ptr [esi + 0x10], edi
    // pop ebx
    // pop edi
    // pop esi
    // return;
    // mov dword ptr [esi + 0x10], edi
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // push edi
    // xor edi, edi
    // mov eax, dword ptr [esi + 4]
    // mov dword ptr [esi], 0x4baa10
    // cmp eax, edi
    // if (...) GOTO(0x48047b)
    // mov eax, dword ptr [esi + 0x14]
    // push ebx
    // cmp eax, edi
    // if (...) GOTO(0x480471)
    // mov eax, dword ptr [esi + 0xc]
    // xor ebx, ebx
    // cmp eax, edi
    // if (...) GOTO(0x480471)
    // mov eax, dword ptr [esi + 4]
    // mov ecx, dword ptr [eax + 0xc]
    // mov dword ptr [esi + 8], ecx
    // mov eax, dword ptr [eax + 8]
    // cmp eax, edi
    // if (...) GOTO(0x48044d)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov edx, dword ptr [esi + 4]
    // mov dword ptr [edx + 8], edi
    // mov eax, dword ptr [esi + 4]
    // cmp eax, edi
    // if (...) GOTO(0x480463)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov eax, dword ptr [esi + 8]
    // inc ebx
    // mov dword ptr [esi + 4], eax
    // mov eax, dword ptr [esi + 0xc]
    // cmp ebx, eax
    // if (...) GOTO(0x480434)
    // mov dword ptr [esi + 4], edi
    // mov dword ptr [esi + 0x10], edi
    // mov dword ptr [esi + 0xc], edi
    // pop ebx
    // mov al, byte ptr [esp + 0xc]
    // mov dword ptr [esi + 0x10], edi
    // test al, 1
    // if (...) GOTO(0x48048f)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov eax, esi
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push -1
    // push(0x4b7c88)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push ebx
    // push esi
    // mov esi, ecx
    // push edi
    // mov dword ptr [esp + 0xc], esi
    // CALL(0x479c40)
    // lea ebx, [esi + 0x274]
    // xor edi, edi
    // mov ecx, ebx
    // mov dword ptr [esp + 0x18], edi
    // CALL(0x474ae0)
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [esi], 0x4baa30
    // mov dword ptr [ebx], 0x4baa1c
    // mov dword ptr [esi + 0x570], edi
    // mov dword ptr [esi + 0x1a4], edi
    // mov dword ptr [esi + 0x1a8], edi
    // mov dword ptr [esi + 0x52c], edi
    // mov dword ptr [esi + 0x530], edi
    // mov dword ptr [esi + 0x534], edi
    // mov dword ptr [esi + 0x538], edi
    // mov dword ptr [esi + 0x53c], edi
    // mov dword ptr [esi + 0x540], edi
    // mov dword ptr [esi + 0x544], edi
    // mov dword ptr [esi + 0x548], edi
    // mov dword ptr [esi + 0x54c], edi
    // mov dword ptr [esi + 0x550], edi
    // mov dword ptr [esi + 0x554], edi
    // mov dword ptr [esi + 0x558], edi
    // mov dword ptr [esi + 0x55c], edi
    // mov dword ptr [esi + 0x560], edi
    // mov dword ptr [esi + 0x564], edi
    // mov dword ptr [esi + 0x568], edi
    // mov eax, dword ptr [0x83ac18]
    // pop edi
    // mov dword ptr [esi + 0x56c], eax
    // mov eax, esi
    // pop esi
    // pop ebx
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x4805a0)
    // test byte ptr [esp + 8], 1
    // if (...) GOTO(0x480598)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov eax, esi
    // pop esi
    // return;
    // // nop
    // // nop
    // push -1
    // push(0x4b7ca8)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push esi
    // mov esi, ecx
    // mov dword ptr [esp + 4], esi
    // lea eax, [esi + 0x274]
    // mov dword ptr [esi], 0x4baa30
    // mov dword ptr [eax], 0x4baa1c
    // xor ecx, ecx
    // mov dword ptr [esp + 0x10], ecx
    // mov dword ptr [esi + 0x570], ecx
    // mov ecx, esi
    // neg ecx
    // sbb ecx, ecx
    // and ecx, eax
    // CALL(0x474c40)
    // mov ecx, esi
    // mov dword ptr [esp + 0x10], 0xffffffff
    // CALL(0x47a3c0)
    // mov ecx, dword ptr [esp + 8]
    // pop esi
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push esi
    // push edi
    // mov esi, ecx
    // CALL(0x479f30)
    // lea ecx, [esi + 0x274]
    // CALL(0x474cb0)
    // mov ecx, dword ptr [esi + 0x568]
    // xor edi, edi
    // mov dword ptr [esi + 0x570], edi
    // mov dword ptr [esi + 0x1a4], edi
    // mov dword ptr [esi + 0x1a8], edi
    // mov dword ptr [esi + 0x52c], edi
    // mov dword ptr [esi + 0x530], edi
    // mov dword ptr [esi + 0x534], edi
    // mov dword ptr [esi + 0x538], edi
    // mov dword ptr [esi + 0x53c], edi
    // mov dword ptr [esi + 0x540], edi
    // mov dword ptr [esi + 0x544], edi
    // mov dword ptr [esi + 0x548], edi
    // mov dword ptr [esi + 0x54c], edi
    // mov dword ptr [esi + 0x550], edi
    // mov dword ptr [esi + 0x554], edi
    // mov dword ptr [esi + 0x558], edi
    // mov dword ptr [esi + 0x55c], edi
    // mov dword ptr [esi + 0x560], edi
    // mov dword ptr [esi + 0x564], edi
    // mov eax, dword ptr [0x83ac18]
    // cmp ecx, edi
    // mov dword ptr [esi + 0x56c], eax
    // if (...) GOTO(0x4806b4)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x568], edi
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr fs:[0]
    // push -1
    // push(0x4b7ccb)  // ptr?
    // push eax
    // mov dword ptr fs:[0], esp
    // push esi
    // push edi
    // mov esi, ecx
    // CALL(0x480610)
    // mov edi, dword ptr [esp + 0x2c]
    // test edi, 0x30000000
    // if (...) GOTO(0x48076e)
    // mov eax, dword ptr [0x83abe4]
    // mov dword ptr [esi + 0x52c], eax
    // mov ecx, dword ptr [0x83abec]
    // mov dword ptr [esi + 0x534], ecx
    // mov edx, dword ptr [0x83abe8]
    // mov dword ptr [esi + 0x530], edx
    // mov eax, dword ptr [0x83abf0]
    // mov dword ptr [esi + 0x538], eax
    // mov ecx, dword ptr [0x83abf4]
    // mov dword ptr [esi + 0x548], ecx
    // mov edx, dword ptr [0x83abf8]
    // mov dword ptr [esi + 0x544], edx
    // mov eax, dword ptr [0x83abfc]
    // mov dword ptr [esi + 0x53c], eax
    // mov ecx, dword ptr [0x83ac00]
    // mov dword ptr [esi + 0x540], ecx
    // mov edx, dword ptr [0x83ac08]
    // mov dword ptr [esi + 0x54c], edx
    // mov eax, dword ptr [0x83ac04]
    // mov dword ptr [esi + 0x550], eax
    // mov ecx, dword ptr [0x83ac0c]
    // mov dword ptr [esi + 0x554], ecx
    // test edi, 0x40000000
    // if (...) GOTO(0x4807ac)
    // push(0x2b8)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x2c], eax
    // test eax, eax
    // mov dword ptr [esp + 0x10], 0
    // if (...) GOTO(0x48079c)
    // mov ecx, eax
    // CALL(0x474ae0)
    // if (...) GOTO(0x48079e)
    // xor eax, eax
    // mov dword ptr [esp + 0x10], 0xffffffff
    // mov dword ptr [esi + 0x568], eax
    // mov edx, dword ptr [esp + 0x38]
    // mov eax, dword ptr [esp + 0x34]
    // mov ecx, dword ptr [esp + 0x30]
    // push edx
    // mov edx, dword ptr [esp + 0x2c]
    // push eax
    // mov eax, dword ptr [esp + 0x2c]
    // push ecx
    // mov ecx, dword ptr [esp + 0x2c]
    // push edi
    // push edx
    // mov edx, dword ptr [esp + 0x30]
    // push eax
    // mov eax, dword ptr [esp + 0x30]
    // push ecx
    // push edx
    // push eax
    // mov ecx, esi
    // CALL(0x47a4c0)
    // test eax, eax
    // if (...) GOTO(0x480856)
    // mov ecx, esi
    // CALL(0x481760)
    // test edi, 0x800
    // if (...) GOTO(0x480802)
    // lea ecx, [esp + 0x24]
    // lea edx, [esp + 0x20]
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x47cb10)
    // if (...) GOTO(0x48081e)
    // mov eax, dword ptr [esi + 0x9c]
    // mov ecx, dword ptr [0x83ff10]
    // test al, 8
    // if (...) GOTO(0x480816)
    // add dword ptr [esp + 0x20], ecx
    // test al, 4
    // if (...) GOTO(0x48081e)
    // add dword ptr [esp + 0x24], ecx
    // mov eax, dword ptr [esp + 0x24]
    // mov ecx, dword ptr [esp + 0x20]
    // shr edi, 0x1c
    // push 0
    // push 0
    // and edi, 8
    // push 1
    // push edi
    // add esi, 0x274
    // push eax
    // push ecx
    // mov ecx, esi
    // CALL(0x474dd0)
    // test eax, eax
    // if (...) GOTO(0x480856)
    // mov edx, dword ptr [0x83ad10]
    // mov ecx, esi
    // push edx
    // CALL(0x4789f0)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 8]
    // pop edi
    // mov dword ptr fs:[0], ecx
    // pop esi
    // add esp, 0xc
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 4]
    // test eax, eax
    // if (...) GOTO(0x480880)
    // mov eax, 0x10
    // return;
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // mov edx, dword ptr [eax + 4]
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // mov esi, dword ptr [eax]
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // push edi
    // mov edi, dword ptr [eax + 0xc]
    // mov eax, dword ptr [eax + 8]
    // sub edi, edx
    // sub eax, esi
    // push edi
    // push eax
    // push edx
    // push esi
    // CALL(0x4806c0)
    // pop edi
    // pop esi
    // return;
    // CALL(0x405096)
    // // nop
    // // nop
    // // nop
    // sub esp, 0x14
    // push esi
    // mov esi, ecx
    // push edi
    // test dword ptr [esi + 0x9c], 0x80000
    // if (...) GOTO(0x4809ec)
    // mov ecx, dword ptr [esi + 0x130]
    // test ecx, ecx
    // if (...) GOTO(0x4809ec)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4809ec)
    // lea ecx, [esi + 0x1bc]
    // push ebx
    // mov edx, ecx
    // push ebp
    // mov eax, dword ptr [edx]
    // mov ecx, dword ptr [edx + 4]
    // mov edi, dword ptr [edx + 8]
    // mov dword ptr [esp + 0x1c], edi
    // mov edx, dword ptr [edx + 0xc]
    // mov dword ptr [esp + 0x20], edx
    // lea edx, [esi + 0x1ac]
    // mov ebx, edx
    // mov edx, dword ptr [ebx]
    // mov edi, dword ptr [ebx + 4]
    // add edi, ecx
    // mov ebp, dword ptr [ebx + 8]
    // mov dword ptr [esp + 0x1c], ebp
    // lea ebp, [edx + eax]
    // mov ebx, dword ptr [ebx + 0xc]
    // mov eax, dword ptr [esi + 0x130]
    // mov dword ptr [esp + 0x20], ebx
    // xor ebx, ebx
    // cmp esi, ebx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x48094e)
    // lea ecx, [esi + 0x274]
    // mov dword ptr [esp + 0x28], ecx
    // if (...) GOTO(0x480952)
    // mov dword ptr [esp + 0x28], ebx
    // mov ecx, dword ptr [esi + 0x278]
    // add esi, 0x274
    // cmp ecx, ebx
    // if (...) GOTO(0x48096c)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x48097d)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x48097f)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x28]
    // mov edx, dword ptr [esp + 0x10]
    // push ebx
    // push eax
    // push 0
    // push 0
    // push edi
    // push ebp
    // push ecx
    // lea ecx, [edx + 0x274]
    // CALL(0x475c60)
    // mov eax, dword ptr [0x83abe0]
    // pop ebp
    // test eax, eax
    // pop ebx
    // if (...) GOTO(0x4809fc)
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4809b9)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x4809bb)
    // xor edi, edi
    // mov ecx, dword ptr [esi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4809cc)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4809ce)
    // xor eax, eax
    // mov ecx, dword ptr [0x83abe0]
    // dec edi
    // push ecx
    // dec eax
    // push edi
    // push eax
    // push 0
    // push 0
    // mov ecx, esi
    // CALL(0x475da0)
    // pop edi
    // pop esi
    // add esp, 0x14
    // return;
    // mov edx, dword ptr [esp + 0x20]
    // lea ecx, [esi + 0x274]
    // push edx
    // CALL(0x478b30)
    // pop edi
    // pop esi
    // add esp, 0x14
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push edi
    // mov edi, ecx
    // test dword ptr [edi + 0x9c], 0x80000
    // if (...) GOTO(0x480ae5)
    // mov ecx, dword ptr [edi + 0x130]
    // test ecx, ecx
    // if (...) GOTO(0x480ae5)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x480ae5)
    // mov edx, dword ptr [edi + 0x1bc]
    // mov ecx, dword ptr [edi + 0x1b0]
    // push ebx
    // mov ebx, dword ptr [edi + 0x1c0]
    // push ebp
    // push esi
    // mov esi, dword ptr [edi + 0x1ac]
    // add ebx, ecx
    // add edx, esi
    // test edi, edi
    // if (...) GOTO(0x480a70)
    // lea ecx, [edi + 0x274]
    // mov dword ptr [esp + 0x18], ecx
    // if (...) GOTO(0x480a78)
    // mov dword ptr [esp + 0x18], 0
    // mov esi, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esi + 4]
    // mov ebp, dword ptr [esi + 0xc]
    // mov ecx, dword ptr [esi]
    // sub ebp, eax
    // push ebp
    // mov ebp, dword ptr [esi + 8]
    // sub ebp, ecx
    // push ebp
    // push eax
    // add eax, ebx
    // push ecx
    // push eax
    // mov eax, dword ptr [edi + 0x130]
    // add ecx, edx
    // mov edx, dword ptr [esp + 0x2c]
    // push ecx
    // push edx
    // lea ecx, [eax + 0x274]
    // CALL(0x475c60)
    // mov edx, dword ptr [0x83abe0]
    // test edx, edx
    // if (...) GOTO(0x480adc)
    // mov eax, dword ptr [esi + 4]
    // push edx
    // mov edx, dword ptr [esi + 0xc]
    // mov ecx, dword ptr [esi]
    // sub edx, eax
    // lea edx, [edx + eax - 1]
    // push edx
    // mov edx, dword ptr [esi + 8]
    // sub edx, ecx
    // lea edx, [edx + ecx - 1]
    // push edx
    // push eax
    // push ecx
    // lea ecx, [edi + 0x274]
    // CALL(0x475da0)
    // pop esi
    // pop ebp
    // pop ebx
    // xor eax, eax
    // pop edi
    // return;
    // mov eax, dword ptr [esp + 0xc]
    // mov ecx, dword ptr [esp + 8]
    // push eax
    // push ecx
    // lea ecx, [edi + 0x274]
    // CALL(0x478b50)
    // pop edi
    // return;
    // // nop
    // // nop
    // mov eax, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push edx
    // mov edx, dword ptr [esp + 0x10]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push edx
    // push eax
    // add ecx, 0x274
    // CALL(0x478af0)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // sub esp, 8
    // lea edx, [esp + 0x10]
    // push esi
    // mov esi, ecx
    // lea ecx, [esp + 0x18]
    // push edi
    // mov eax, dword ptr [esi]
    // push ecx
    // lea ecx, [esp + 0x18]
    // push edx
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x1c]
    // mov edi, 1
    // test eax, eax
    // if (...) GOTO(0x480b70)
    // cmp dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x480b64)
    // mov dword ptr [esp + 0x14], edi
    // cmp dword ptr [esp + 0x18], edi
    // if (...) GOTO(0x480ba9)
    // mov dword ptr [esp + 0x18], edi
    // if (...) GOTO(0x480ba9)
    // lea edx, [esp + 0xc]
    // lea eax, [esp + 8]
    // push edx
    // push eax
    // mov ecx, esi
    // mov dword ptr [esp + 0x10], edi
    // mov dword ptr [esp + 0x14], edi
    // CALL(0x47ca10)
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 0x14]
    // cmp eax, ecx
    // if (...) GOTO(0x480b99)
    // mov dword ptr [esp + 0x14], eax
    // mov eax, dword ptr [esp + 0xc]
    // mov ecx, dword ptr [esp + 0x18]
    // cmp eax, ecx
    // if (...) GOTO(0x480ba9)
    // mov dword ptr [esp + 0x18], eax
    // mov eax, dword ptr [esp + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x480bc2)
    // lea ecx, [esp + 0x18]
    // lea edx, [esp + 0x14]
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x47cb10)
    // mov ecx, dword ptr [esp + 0x20]
    // mov dword ptr [0x839ab0], edi
    // mov eax, dword ptr [esi + 0x9c]
    // mov edx, dword ptr [esp + 0x18]
    // shr eax, 0x1c
    // and eax, 8
    // push 0
    // push eax
    // mov eax, dword ptr [esp + 0x1c]
    // push 0
    // push ecx
    // push edx
    // push eax
    // lea ecx, [esi + 0x274]
    // CALL(0x474dd0)
    // test eax, eax
    // mov dword ptr [0x839ab0], 0
    // if (...) GOTO(0x480c15)
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x14]
    // push 0
    // push edi
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(0x47b4e0)
    // pop edi
    // pop esi
    // add esp, 8
    // return;
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push esi
    // mov esi, ecx
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x480c78)
    // mov eax, dword ptr [esp + 0x18]
    // mov edx, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esp + 0x1c]
    // mov dword ptr [esp + 4], eax
    // add eax, edx
    // mov dword ptr [esp + 8], ecx
    // mov dword ptr [esp + 0xc], eax
    // mov eax, dword ptr [esp + 0x24]
    // add ecx, eax
    // mov dword ptr [esp + 0x10], ecx
    // lea ecx, [esp + 4]
    // push ecx
    // mov ecx, esi
    // CALL(0x47fa30)
    // lea edx, [esp + 4]
    // mov ecx, esi
    // push edx
    // CALL(0x47b0d0)
    // lea eax, [esp + 4]
    // push eax
    // CALL(0x47cdb0)
    // add esp, 4
    // pop esi
    // add esp, 0x10
    // return;
    // // nop
    // push esi
    // mov esi, ecx
    // push edi
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x480c9a)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x480c9c)
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x480cb0)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x480cb2)
    // xor eax, eax
    // mov ecx, dword ptr [edi + 0xc]
    // mov edx, dword ptr [edi + 4]
    // sub ecx, edx
    // mov edx, dword ptr [eax + 8]
    // push 0
    // push ecx
    // mov ecx, dword ptr [eax]
    // sub edx, ecx
    // mov ecx, esi
    // push edx
    // push 0
    // push 0
    // CALL(0x480c20)
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x18
    // push esi
    // mov esi, ecx
    // CALL(0x4801f0)
    // test eax, eax
    // if (...) GOTO(0x480d67)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x480d06)
    // mov eax, dword ptr [ecx]
    // lea edx, [esp + 0xc]
    // push edx
    // CALL(dword)
    // lea eax, [esp + 8]
    // lea ecx, [esp + 4]
    // push eax
    // push ecx
    // mov ecx, esi
    // mov dword ptr [esp + 0xc], 0
    // mov dword ptr [esp + 0x10], 0
    // CALL(0x47b170)
    // mov eax, dword ptr [esp + 4]
    // mov ecx, dword ptr [esp + 0xc]
    // mov esi, dword ptr [esp + 0x14]
    // mov edx, dword ptr [esp + 0x10]
    // add ecx, eax
    // add esi, eax
    // mov eax, dword ptr [esp + 8]
    // mov dword ptr [esp + 0xc], ecx
    // mov ecx, dword ptr [esp + 0x18]
    // add edx, eax
    // add ecx, eax
    // mov dword ptr [esp + 0x14], esi
    // mov dword ptr [esp + 0x18], ecx
    // mov ecx, dword ptr [0x83ad50]
    // mov dword ptr [esp + 0x10], edx
    // lea eax, [esp + 0xc]
    // mov edx, dword ptr [ecx]
    // push eax
    // CALL(dword)
    // pop esi
    // add esp, 0x18
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // mov eax, dword ptr [esi + 0x220]
    // test al, 1
    // if (...) GOTO(0x480db3)
    // or al, 1
    // mov dword ptr [esi + 0x220], eax
    // mov dword ptr [0x83ab2c], esi
    // mov eax, dword ptr [esi + 0x570]
    // test eax, eax
    // if (...) GOTO(0x480d97)
    // CALL(eax)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x220]
    // mov ecx, esi
    // and al, 0xfe
    // mov dword ptr [esi + 0x220], eax
    // CALL(0x480ce0)
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x18
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x480de0)
    // mov eax, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // lea ecx, [esi + 0x1dc]
    // mov edx, dword ptr [esi + 0x1dc]
    // mov dword ptr [esp + 0x14], edx
    // mov eax, dword ptr [ecx + 4]
    // mov dword ptr [esp + 0x18], eax
    // mov edx, dword ptr [ecx + 8]
    // mov dword ptr [esp + 0x1c], edx
    // mov eax, dword ptr [ecx + 0xc]
    // mov ecx, dword ptr [0x83aadc]
    // test ecx, ecx
    // mov dword ptr [esp + 0x20], eax
    // if (...) GOTO(0x480e4d)
    // mov edx, dword ptr [0x83aae4]
    // mov edi, dword ptr [esp + 0x14]
    // mov eax, dword ptr [0x83aae8]
    // neg edx
    // add edi, edx
    // mov dword ptr [esp + 0x14], edi
    // mov edi, dword ptr [esp + 0x1c]
    // add edi, edx
    // mov edx, dword ptr [esp + 0x20]
    // mov dword ptr [esp + 0x1c], edi
    // mov edi, dword ptr [esp + 0x18]
    // neg eax
    // add edi, eax
    // add edx, eax
    // mov dword ptr [esp + 0x20], edx
    // lea edx, [esp + 0x14]
    // mov dword ptr [esp + 0x18], edi
    // push edx
    // if (...) GOTO(0x480e57)
    // lea eax, [esp + 0x14]
    // mov ecx, 0x83a7b8
    // push eax
    // CALL(0x475b00)
    // lea ecx, [esp + 0x10]
    // lea edx, [esp + 0xc]
    // push ecx
    // push edx
    // mov ecx, esi
    // mov dword ptr [esp + 0x14], 0
    // mov dword ptr [esp + 0x18], 0
    // CALL(0x47b170)
    // mov edi, dword ptr [0x83aadc]
    // test edi, edi
    // if (...) GOTO(0x480ea9)
    // mov eax, dword ptr [esp + 0xc]
    // mov ecx, dword ptr [0x83aae4]
    // mov edx, dword ptr [0x83aae8]
    // sub eax, ecx
    // mov ecx, dword ptr [esp + 0x10]
    // mov dword ptr [esp + 0xc], eax
    // sub ecx, edx
    // mov dword ptr [esp + 0x10], ecx
    // if (...) GOTO(0x480eb6)
    // mov eax, dword ptr [esp + 0xc]
    // mov ecx, dword ptr [esp + 0x10]
    // mov edi, 0x83a7b8
    // test dword ptr [esi + 0x9c], 0x1000000
    // if (...) GOTO(0x480f37)
    // mov edx, dword ptr [esi + 0xa4]
    // test edx, edx
    // if (...) GOTO(0x480ef4)
    // mov ebp, dword ptr [esi + 0xa8]
    // test ebp, ebp
    // if (...) GOTO(0x480ef0)
    // mov ebp, dword ptr [esi + 0xac]
    // test ebp, ebp
    // if (...) GOTO(0x480ef0)
    // push ecx
    // push eax
    // push edi
    // lea ecx, [esi + 0x274]
    // CALL(0x475b60)
    // if (...) GOTO(0x480f67)
    // test edx, edx
    // if (...) GOTO(0x480f05)
    // push edx
    // push ecx
    // push eax
    // push edi
    // lea ecx, [esi + 0x274]
    // CALL(0x475ba0)
    // if (...) GOTO(0x480f67)
    // mov edx, dword ptr [esi + 0xac]
    // test edx, edx
    // if (...) GOTO(0x480f26)
    // mov edx, dword ptr [esi + 0xa8]
    // push edx
    // push ecx
    // push eax
    // push edi
    // lea ecx, [esi + 0x274]
    // CALL(0x475be0)
    // if (...) GOTO(0x480f67)
    // push edx
    // push ecx
    // push eax
    // push edi
    // lea ecx, [esi + 0x274]
    // CALL(0x475c20)
    // if (...) GOTO(0x480f67)
    // mov edx, dword ptr [esi + 0x1b8]
    // mov ebp, dword ptr [esi + 0x1b0]
    // sub edx, ebp
    // mov ebp, dword ptr [esi + 0x1ac]
    // push edx
    // mov edx, dword ptr [esi + 0x1b4]
    // sub edx, ebp
    // push edx
    // push ecx
    // push eax
    // push 0
    // push 0
    // push edi
    // lea ecx, [esi + 0x274]
    // CALL(0x475c60)
    // mov ecx, dword ptr [edi + 4]
    // pop edi
    // pop esi
    // pop ebp
    // test ecx, ecx
    // if (...) GOTO(0x480f79)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // add esp, 0x18
    // return;
    // // nop
    // mov eax, dword ptr [esp + 4]
    // push esi
    // cmp eax, 1
    // mov esi, ecx
    // if (...) GOTO(0x4810b8)
    // push ebx
    // push ebp
    // mov ebp, dword ptr [esp + 0x14]
    // push edi
    // test ebp, ebp
    // if (...) GOTO(0x480fa3)
    // mov ebx, dword ptr [esp + 0x1c]
    // test ebx, ebx
    // if (...) GOTO(0x480fd3)
    // mov ecx, dword ptr [esi + 0x278]
    // test ecx, ecx
    // if (...) GOTO(0x480fb7)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x480fb9)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x278]
    // mov ebp, eax
    // test ecx, ecx
    // if (...) GOTO(0x480fcf)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x480fd1)
    // xor eax, eax
    // mov ebx, eax
    // mov eax, dword ptr [esi + 0x9c]
    // mov ecx, dword ptr [0x83ff10]
    // test al, 8
    // if (...) GOTO(0x480fe5)
    // sub ebp, ecx
    // test al, 4
    // if (...) GOTO(0x480feb)
    // sub ebx, ecx
    // mov eax, dword ptr [esi + 0x294]
    // push 0
    // push 0
    // push 1
    // lea edi, [esi + 0x274]
    // push eax
    // push ebx
    // push ebp
    // mov ecx, edi
    // CALL(0x474dd0)
    // mov ecx, dword ptr [0x83ad10]
    // push ecx
    // mov ecx, edi
    // CALL(0x4789f0)
    // test dword ptr [esi + 0x9c], 0x40000000
    // if (...) GOTO(0x481046)
    // mov ecx, dword ptr [esi + 0x568]
    // test ecx, ecx
    // if (...) GOTO(0x481046)
    // push 0
    // push ebx
    // push ebp
    // CALL(0x474e70)
    // mov edx, dword ptr [0x83ad10]
    // mov ecx, dword ptr [esi + 0x568]
    // push edx
    // CALL(0x4789f0)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov edx, dword ptr [esi]
    // push -1
    // push 0
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [edi + 4]
    // test ecx, ecx
    // if (...) GOTO(0x481071)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov ebx, eax
    // if (...) GOTO(0x481073)
    // xor ebx, ebx
    // mov edi, dword ptr [edi + 4]
    // test edi, edi
    // if (...) GOTO(0x481086)
    // mov edx, dword ptr [edi]
    // mov ecx, edi
    // CALL(dword)
    // if (...) GOTO(0x481088)
    // xor eax, eax
    // mov ecx, dword ptr [ebx + 0xc]
    // mov edx, dword ptr [ebx + 4]
    // mov ebx, dword ptr [eax]
    // sub ecx, edx
    // mov edx, dword ptr [eax + 8]
    // push ecx
    // sub edx, ebx
    // mov ecx, esi
    // push edx
    // CALL(0x47bc60)
    // mov ecx, esi
    // CALL(0x4801f0)
    // pop edi
    // pop ebp
    // test eax, eax
    // pop ebx
    // if (...) GOTO(0x4810b8)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // if (...) GOTO(0x47d610)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // sub esp, 0x10
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // test byte ptr [esi + 0xa0], 2
    // if (...) GOTO(0x48174a)
    // mov ecx, dword ptr [0x83ad50]
    // test ecx, ecx
    // if (...) GOTO(0x4810fe)
    // mov eax, dword ptr [ecx]
    // push 1
    // push 1
    // push 1
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x9c]
    // test cl, 0x10
    // if (...) GOTO(0x481133)
    // test ecx, 0x400000
    // if (...) GOTO(0x481133)
    // mov edx, dword ptr [esi + 0x180]
    // mov edi, dword ptr [esi + 0x52c]
    // mov ebp, dword ptr [esi + 0x548]
    // mov eax, dword ptr [esi + 0x534]
    // mov dword ptr [esp + 0x18], edx
    // mov dword ptr [esp + 0x14], edi
    // if (...) GOTO(0x481153)
    // mov edx, dword ptr [esi + 0x184]
    // mov edi, dword ptr [esi + 0x54c]
    // mov ebp, dword ptr [esi + 0x554]
    // mov eax, dword ptr [esi + 0x550]
    // mov dword ptr [esp + 0x18], edx
    // mov dword ptr [esp + 0x14], edi
    // mov dword ptr [esp + 0x10], eax
    // mov eax, dword ptr [esi + 0x188]
    // cmp eax, -1
    // if (...) GOTO(0x48116e)
    // mov edx, dword ptr [esi + 0x184]
    // mov dword ptr [esp + 0x1c], edx
    // if (...) GOTO(0x481172)
    // mov dword ptr [esp + 0x1c], eax
    // test ecx, 0x10000000
    // if (...) GOTO(0x48173e)
    // mov eax, dword ptr [esi + 0x11c]
    // mov ebx, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x4812cc)
    // cmp ebx, -1
    // if (...) GOTO(0x48119d)
    // test ebx, ebx
    // if (...) GOTO(0x4812cc)
    // mov eax, dword ptr [eax + 4]
    // test eax, eax
    // if (...) GOTO(0x4811b0)
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // if (...) GOTO(0x4811b5)
    // mov eax, 0xff
    // mov ecx, dword ptr [esi + 0x11c]
    // push eax
    // CALL(0x478b30)
    // test edi, edi
    // if (...) GOTO(0x4811d9)
    // mov eax, dword ptr [esi + 0x11c]
    // push 0
    // push 0
    // push 0
    // push eax
    // mov ecx, edi
    // CALL(0x473e60)
    // mov eax, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x481212)
    // mov eax, dword ptr [esi + 0x11c]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4811f8)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4811fa)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x10]
    // push 0
    // push 0
    // sub eax, dword ptr [ecx + 0x18]
    // push eax
    // mov eax, dword ptr [esi + 0x11c]
    // push eax
    // CALL(0x473e60)
    // test ebp, ebp
    // if (...) GOTO(0x481276)
    // mov eax, dword ptr [esp + 0x10]
    // test eax, eax
    // if (...) GOTO(0x481276)
    // test edi, edi
    // if (...) GOTO(0x481276)
    // mov ecx, dword ptr [esp + 0x14]
    // mov edi, dword ptr [esi + 0x1c4]
    // mov edx, eax
    // mov ebx, dword ptr [ecx + 0x18]
    // mov ecx, dword ptr [esi + 0x1bc]
    // mov eax, dword ptr [edx + 0x18]
    // sub edi, ecx
    // sub edi, eax
    // mov eax, dword ptr [esi + 0x11c]
    // sub edi, ebx
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x481257)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x481259)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x11c]
    // push eax
    // push edi
    // push 0
    // push ebx
    // push 0
    // push 0
    // push ebp
    // CALL(0x476140)
    // mov edi, dword ptr [esp + 0x14]
    // mov ebx, dword ptr [esp + 0x24]
    // mov ecx, dword ptr [esi + 0x14c]
    // test ecx, ecx
    // if (...) GOTO(0x4812b9)
    // test byte ptr [esi + 0x9c], 0x10
    // if (...) GOTO(0x4812b9)
    // mov eax, dword ptr [esi + 0x56c]
    // test eax, eax
    // if (...) GOTO(0x4812a1)
    // mov edx, dword ptr [esi + 0x11c]
    // push edx
    // push ecx
    // push esi
    // CALL(eax)
    // add esp, 0xc
    // mov ecx, dword ptr [esi + 0x11c]
    // mov edx, dword ptr [esi + 0x14c]
    // mov eax, dword ptr [esi]
    // push ecx
    // push edx
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x11c]
    // mov eax, dword ptr [esi]
    // push 0
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x128]
    // test eax, eax
    // if (...) GOTO(0x481465)
    // cmp ebx, -1
    // if (...) GOTO(0x4812e8)
    // cmp ebx, 2
    // if (...) GOTO(0x481465)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4812f9)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4812fe)
    // mov eax, 0xff
    // mov ecx, dword ptr [esi + 0x128]
    // push eax
    // CALL(0x478b30)
    // mov eax, dword ptr [esi + 0x530]
    // test eax, eax
    // if (...) GOTO(0x481349)
    // mov eax, dword ptr [esi + 0x128]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x48132b)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x48132d)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x530]
    // push 0
    // mov edx, dword ptr [ecx + 0x1c]
    // sub eax, edx
    // mov edx, dword ptr [esi + 0x128]
    // push eax
    // push 0
    // push edx
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x538]
    // test eax, eax
    // if (...) GOTO(0x4813b3)
    // mov eax, dword ptr [esi + 0x128]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x48136c)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x48136e)
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0x538]
    // mov eax, dword ptr [esi + 0x128]
    // mov ebx, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x48138e)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x481390)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x538]
    // sub edi, ebx
    // push 0
    // push edi
    // sub eax, dword ptr [ecx + 0x18]
    // push eax
    // mov eax, dword ptr [esi + 0x128]
    // push eax
    // CALL(0x473e60)
    // mov edi, dword ptr [esp + 0x14]
    // mov ebx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi + 0x544]
    // test eax, eax
    // if (...) GOTO(0x481452)
    // mov eax, dword ptr [esi + 0x530]
    // test eax, eax
    // if (...) GOTO(0x481452)
    // mov ecx, dword ptr [esi + 0x538]
    // test ecx, ecx
    // if (...) GOTO(0x481452)
    // mov ebx, dword ptr [eax + 0x18]
    // mov eax, dword ptr [esi + 0x128]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4813f3)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4813f5)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x544]
    // sub eax, dword ptr [ecx + 0x1c]
    // mov edi, eax
    // mov eax, dword ptr [esi + 0x128]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x481417)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x481419)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x544]
    // mov edx, dword ptr [ecx + 0x1c]
    // push edx
    // mov edx, dword ptr [esi + 0x538]
    // mov ebp, dword ptr [edx + 0x18]
    // mov edx, dword ptr [esi + 0x530]
    // sub eax, ebp
    // sub eax, dword ptr [edx + 0x18]
    // push eax
    // push edi
    // push ebx
    // push 0
    // push 0
    // push ecx
    // mov ecx, dword ptr [esi + 0x128]
    // CALL(0x476140)
    // mov edi, dword ptr [esp + 0x14]
    // mov ebx, dword ptr [esp + 0x24]
    // mov ecx, dword ptr [esi + 0x128]
    // mov eax, dword ptr [esi]
    // push 2
    // push ecx
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x124]
    // test eax, eax
    // if (...) GOTO(0x481595)
    // cmp ebx, -1
    // if (...) GOTO(0x481481)
    // cmp ebx, 3
    // if (...) GOTO(0x481595)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x481492)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x481497)
    // mov eax, 0xff
    // mov ecx, dword ptr [esi + 0x124]
    // push eax
    // CALL(0x478b30)
    // test edi, edi
    // if (...) GOTO(0x4814c0)
    // mov eax, dword ptr [esp + 0x18]
    // mov ecx, dword ptr [esi + 0x124]
    // neg eax
    // push 0
    // push eax
    // push 0
    // push ecx
    // mov ecx, edi
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x530]
    // test eax, eax
    // if (...) GOTO(0x481503)
    // mov eax, dword ptr [esi + 0x124]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4814e1)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4814e3)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x530]
    // mov ebp, dword ptr [esp + 0x1c]
    // push 0
    // sub eax, dword ptr [ecx + 0x1c]
    // add eax, ebp
    // push eax
    // mov eax, dword ptr [esi + 0x124]
    // push 0
    // push eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x53c]
    // test eax, eax
    // if (...) GOTO(0x481582)
    // test edi, edi
    // if (...) GOTO(0x481582)
    // mov eax, dword ptr [esi + 0x530]
    // test eax, eax
    // if (...) GOTO(0x481582)
    // mov ecx, dword ptr [esp + 0x14]
    // mov eax, dword ptr [esi + 0x124]
    // mov ebp, dword ptr [esp + 0x18]
    // mov ebx, dword ptr [esi + 0x184]
    // mov edi, dword ptr [ecx + 0x1c]
    // mov ecx, dword ptr [eax + 4]
    // sub edi, ebp
    // test ecx, ecx
    // if (...) GOTO(0x481545)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x481547)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x530]
    // mov edx, dword ptr [ecx + 0x1c]
    // sub eax, edx
    // mov edx, dword ptr [esp + 0x14]
    // mov ecx, dword ptr [edx + 0x1c]
    // sub eax, ecx
    // mov ecx, dword ptr [esp + 0x1c]
    // add eax, ecx
    // mov ecx, dword ptr [esi + 0x124]
    // add eax, ebp
    // push eax
    // mov eax, dword ptr [esi + 0x53c]
    // push ebx
    // push edi
    // push 0
    // push 0
    // push 0
    // push eax
    // CALL(0x476140)
    // mov ebx, dword ptr [esp + 0x24]
    // mov eax, dword ptr [esi + 0x124]
    // mov edx, dword ptr [esi]
    // push 3
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // mov eax, dword ptr [esi + 0x120]
    // test eax, eax
    // if (...) GOTO(0x48174a)
    // cmp ebx, -1
    // if (...) GOTO(0x4815b1)
    // cmp ebx, 1
    // if (...) GOTO(0x48174a)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4815c2)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4815c7)
    // mov eax, 0xff
    // mov ecx, dword ptr [esi + 0x120]
    // push eax
    // CALL(0x478b30)
    // mov ebx, dword ptr [esp + 0x10]
    // test ebx, ebx
    // if (...) GOTO(0x481611)
    // mov eax, dword ptr [esi + 0x120]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4815f2)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4815f4)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x18]
    // mov edx, dword ptr [ebx + 0x18]
    // neg ecx
    // push 0
    // sub eax, edx
    // mov edx, dword ptr [esi + 0x120]
    // push ecx
    // push eax
    // push edx
    // mov ecx, ebx
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x538]
    // test eax, eax
    // if (...) GOTO(0x481677)
    // mov eax, dword ptr [esi + 0x120]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x481632)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x481634)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x538]
    // sub eax, dword ptr [ecx + 0x18]
    // mov edi, eax
    // mov eax, dword ptr [esi + 0x120]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x481656)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x481658)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x538]
    // mov ebp, dword ptr [esp + 0x1c]
    // push 0
    // sub eax, dword ptr [ecx + 0x1c]
    // add eax, ebp
    // push eax
    // mov eax, dword ptr [esi + 0x120]
    // push edi
    // push eax
    // CALL(0x473e60)
    // mov eax, dword ptr [esi + 0x540]
    // test eax, eax
    // if (...) GOTO(0x481721)
    // test ebx, ebx
    // if (...) GOTO(0x481721)
    // mov eax, dword ptr [esi + 0x538]
    // test eax, eax
    // if (...) GOTO(0x481721)
    // mov eax, dword ptr [esi + 0x120]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4816b2)
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4816b4)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x540]
    // mov edx, dword ptr [esp + 0x10]
    // mov ebx, dword ptr [ecx + 0x18]
    // mov edi, dword ptr [edx + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // sub eax, ebx
    // mov ebp, eax
    // mov eax, dword ptr [esi + 0x120]
    // sub edi, ecx
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4816e5)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // if (...) GOTO(0x4816e7)
    // xor eax, eax
    // mov ecx, dword ptr [esi + 0x538]
    // mov edx, dword ptr [ecx + 0x1c]
    // sub eax, edx
    // mov edx, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [edx + 0x1c]
    // mov edx, dword ptr [esp + 0x1c]
    // sub eax, ecx
    // mov ecx, dword ptr [esp + 0x18]
    // add eax, edx
    // add eax, ecx
    // mov ecx, dword ptr [esi + 0x120]
    // push eax
    // mov eax, dword ptr [esi + 0x540]
    // push ebx
    // push edi
    // push ebp
    // push 0
    // push 0
    // push eax
    // CALL(0x476140)
    // mov eax, dword ptr [esi + 0x120]
    // mov edx, dword ptr [esi]
    // push 1
    // push eax
    // mov ecx, esi
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10
    // return;
    // mov ecx, dword ptr [esp + 0x24]
    // push ecx
    // mov ecx, esi
    // CALL(0x47d850)
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov al, byte ptr [ecx + 0x9c]
    // push ebx
    // push ebp
    // push esi
    // test al, 0x10
    // push edi
    // if (...) GOTO(0x4817f9)
    // mov eax, dword ptr [ecx + 0x52c]
    // test eax, eax
    // if (...) GOTO(0x48186b)
    // mov ebx, dword ptr [ecx + 0x534]
    // test ebx, ebx
    // if (...) GOTO(0x48186b)
    // mov esi, dword ptr [ecx + 0x530]
    // test esi, esi
    // if (...) GOTO(0x48186b)
    // mov edx, dword ptr [ecx + 0x538]
    // test edx, edx
    // if (...) GOTO(0x48186b)
    // mov edi, dword ptr [ebx + 0x18]
    // mov eax, dword ptr [eax + 0x18]
    // add eax, edi
    // mov dword ptr [ecx + 0x1a4], eax
    // mov edi, dword ptr [edx + 0x18]
    // mov ebp, dword ptr [esi + 0x18]
    // add edi, ebp
    // cmp eax, edi
    // if (...) GOTO(0x4817c6)
    // mov eax, edi
    // mov dword ptr [ecx + 0x1a4], eax
    // mov eax, dword ptr [ecx + 0x52c]
    // mov esi, dword ptr [esi + 0x1c]
    // mov eax, dword ptr [eax + 0x1c]
    // add eax, esi
    // mov dword ptr [ecx + 0x1a8], eax
    // mov edx, dword ptr [edx + 0x1c]
    // mov esi, dword ptr [ebx + 0x1c]
    // add edx, esi
    // cmp eax, edx
    // if (...) GOTO(0x481865)
    // pop edi
    // mov eax, edx
    // pop esi
    // pop ebp
    // mov dword ptr [ecx + 0x1a8], eax
    // pop ebx
    // return;
    // mov eax, dword ptr [ecx + 0x54c]
    // test eax, eax
    // if (...) GOTO(0x48186b)
    // mov ebx, dword ptr [ecx + 0x550]
    // test ebx, ebx
    // if (...) GOTO(0x48186b)
    // mov esi, dword ptr [ecx + 0x530]
    // test esi, esi
    // if (...) GOTO(0x48186b)
    // mov edx, dword ptr [ecx + 0x538]
    // test edx, edx
    // if (...) GOTO(0x48186b)
    // mov edi, dword ptr [ebx + 0x18]
    // mov eax, dword ptr [eax + 0x18]
    // add eax, edi
    // mov dword ptr [ecx + 0x1a4], eax
    // mov edi, dword ptr [edx + 0x18]
    // mov ebp, dword ptr [esi + 0x18]
    // add edi, ebp
    // cmp eax, edi
    // if (...) GOTO(0x48183d)
    // mov eax, edi
    // mov dword ptr [ecx + 0x1a4], eax
    // mov eax, dword ptr [ecx + 0x54c]
    // mov esi, dword ptr [esi + 0x1c]
    // mov eax, dword ptr [eax + 0x1c]
    // add eax, esi
    // mov dword ptr [ecx + 0x1a8], eax
    // mov esi, dword ptr [ebx + 0x1c]
    // mov edx, dword ptr [edx + 0x1c]
    // add edx, esi
    // cmp eax, edx
    // if (...) GOTO(0x481865)
    // mov eax, edx
    // mov dword ptr [ecx + 0x1a8], eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // mov eax, dword ptr [esp + 4]
    // sub esp, 0x28
    // cmp eax, 4
    // push ebp
    // push esi
    // if (...) GOTO(0x481b06)
    // test al, 1
    // if (...) GOTO(0x481b06)
    // mov dword ptr [0x83ac14], eax
    // CALL(0x492450)
    // mov eax, dword ptr [eax + 4]
    // neg eax
    // sbb eax, eax
    // and eax, 0x8000
    // add eax, 0x8000
    // mov dword ptr [0x83abb0], eax
    // imul eax, dword ptr [0x83ac14]
    // shl eax, 1
    // push eax
    // CALL(0x4a504f)
    // xor ebp, ebp
    // add esp, 4
    // cmp eax, ebp
    // mov dword ptr [0x83ac10], eax
    // if (...) GOTO(0x4818d2)
    // pop esi
    // mov eax, 4
    // pop ebp
    // add esp, 0x28
    // return;
    // mov eax, dword ptr [0x83ac14]
    // shl eax, 3
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // add esp, 4
    // cmp esi, ebp
    // if (...) GOTO(0x4818f4)
    // pop esi
    // mov eax, 4
    // pop ebp
    // add esp, 0x28
    // return;
    // fild dword ptr [0x83ac14]
    // mov dword ptr [esi], ebp
    // push ebx
    // mov dword ptr [esi + 4], ebp
    // mov ebx, dword ptr [0x83ac14]
    // fsub qword ptr [0x4ba2a0]
    // mov eax, ebx
    // mov ecx, 1
    // cdq 
    // sub eax, edx
    // push edi
    // sar eax, 1
    // fdivr qword ptr [0x4ba2a0]
    // cmp eax, ecx
    // if (...) GOTO(0x481959)
    // lea edi, [esi + 8]
    // fld st(0)
    // fadd qword ptr [edi - 8]
    // add edi, 8
    // fst qword ptr [edi - 8]
    // fld qword ptr [0x4ba2a0]
    // mov edx, dword ptr [0x83ac14]
    // fsub st(1)
    // sub edx, ecx
    // inc ecx
    // fstp qword ptr [esi + edx*8 - 8]
    // mov ebx, dword ptr [0x83ac14]
    // mov eax, ebx
    // cdq 
    // fstp st(0)
    // sub eax, edx
    // sar eax, 1
    // cmp ecx, eax
    // if (...) GOTO(0x481926)
    // mov dword ptr [esi + ebx*8 - 8], ebp
    // mov eax, dword ptr [0x83ac14]
    // fstp st(0)
    // mov dword ptr [esi + eax*8 - 4], 0x3ff00000
    // CALL(0x492450)
    // mov ecx, eax
    // xor eax, eax
    // mov ax, word ptr [ecx + 8]
    // mov dword ptr [esp + 0x3c], eax
    // CALL(0x492450)
    // mov edx, eax
    // xor eax, eax
    // mov ax, word ptr [edx + 0xa]
    // mov dword ptr [esp + 0x14], eax
    // CALL(0x492450)
    // mov ecx, eax
    // xor eax, eax
    // mov ax, word ptr [ecx + 0xc]
    // mov dword ptr [esp + 0x2c], eax
    // CALL(0x492450)
    // mov edx, eax
    // xor eax, eax
    // mov ax, word ptr [edx + 0xe]
    // mov dword ptr [esp + 0x20], eax
    // CALL(0x492450)
    // mov ecx, eax
    // xor eax, eax
    // mov ax, word ptr [ecx + 0x10]
    // mov dword ptr [esp + 0x24], eax
    // CALL(0x492450)
    // mov edx, eax
    // xor eax, eax
    // mov dword ptr [esp + 0x1c], ebp
    // mov ax, word ptr [edx + 0x12]
    // mov dword ptr [esp + 0x28], eax
    // mov eax, dword ptr [0x83ac14]
    // cdq 
    // sub eax, edx
    // sar eax, 1
    // test eax, eax
    // if (...) GOTO(0x481afc)
    // mov ecx, dword ptr [0x83abb0]
    // mov dword ptr [esp + 0x10], esi
    // xor edi, edi
    // test ecx, ecx
    // if (...) GOTO(0x481ada)
    // mov dword ptr [esp + 0x34], esi
    // mov ecx, dword ptr [esp + 0x20]
    // mov ebp, dword ptr [esp + 0x24]
    // mov ebx, edi
    // mov esi, edi
    // and ebx, ecx
    // mov ecx, dword ptr [esp + 0x3c]
    // and esi, ebp
    // mov ebp, dword ptr [esp + 0x14]
    // sar ebx, cl
    // mov ecx, ebp
    // mov eax, edi
    // sar esi, cl
    // mov ecx, dword ptr [esp + 0x28]
    // and eax, ecx
    // mov ecx, dword ptr [esp + 0x2c]
    // sar eax, cl
    // mov dword ptr [esp + 0x30], esi
    // mov dword ptr [esp + 0x34], ebx
    // mov dword ptr [esp + 0x18], eax
    // mov eax, dword ptr [esp + 0x10]
    // fld qword ptr [eax]
    // fild dword ptr [esp + 0x30]
    // fmul st(1)
    // CALL(0x4a6030)
    // fild dword ptr [esp + 0x34]
    // mov dx, ax
    // mov ecx, ebp
    // shl edx, cl
    // fmul st(1)
    // mov ebp, edx
    // CALL(0x4a6030)
    // mov ecx, dword ptr [esp + 0x3c]
    // fild dword ptr [esp + 0x18]
    // shl eax, cl
    // fmul st(1)
    // or ebp, eax
    // CALL(0x4a6030)
    // mov ecx, dword ptr [0x83abb0]
    // or ebp, eax
    // mov eax, ebp
    // mov ebp, dword ptr [esp + 0x1c]
    // imul ecx, ebp
    // fstp st(0)
    // mov edx, dword ptr [0x83ac10]
    // add ecx, edi
    // mov word ptr [edx + ecx*2], ax
    // mov ecx, dword ptr [esp + 0x14]
    // shl esi, cl
    // mov ecx, dword ptr [esp + 0x3c]
    // mov edx, dword ptr [esp + 0x18]
    // mov eax, dword ptr [0x83abb0]
    // shl ebx, cl
    // mov ecx, dword ptr [0x83ac10]
    // or esi, ebx
    // or esi, edx
    // mov edx, eax
    // imul edx, ebp
    // add edx, edi
    // sub si, word ptr [ecx + edx*2]
    // mov edx, dword ptr [0x83ac14]
    // sub edx, ebp
    // dec edx
    // imul edx, eax
    // add edx, edi
    // inc edi
    // mov word ptr [ecx + edx*2], si
    // mov ecx, dword ptr [0x83abb0]
    // cmp edi, ecx
    // if (...) GOTO(0x481a00)
    // mov eax, dword ptr [0x83ac14]
    // mov esi, dword ptr [esp + 0x10]
    // cdq 
    // sub eax, edx
    // inc ebp
    // sar eax, 1
    // add esi, 8
    // cmp ebp, eax
    // mov dword ptr [esp + 0x1c], ebp
    // mov dword ptr [esp + 0x10], esi
    // if (...) GOTO(0x4819f2)
    // pop edi
    // pop ebx
    // pop esi
    // xor eax, eax
    // pop ebp
    // add esp, 0x28
    // return;
    // pop esi
    // mov eax, 3
    // pop ebp
    // add esp, 0x28
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [0x83ac10]
    // test eax, eax
    // if (...) GOTO(0x481b3c)
    // push eax
    // CALL(0x4a5007)
    // add esp, 4
    // mov dword ptr [0x83ac10], 0
    // return;
    // // nop
    // // nop
    // // nop
    // sub ecx, 0x274
    // if (...) GOTO(0x480580)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push esi
    // mov esi, ecx
    // CALL(0x482b60)
    // xor eax, eax
    // mov dword ptr [esi], 0x4ba2e0
    // mov dword ptr [esi + 0x50], eax
    // mov dword ptr [esi + 0x54], eax
    // mov dword ptr [esi + 0x6c], eax
    // mov dword ptr [esi + 0x70], eax
    // mov dword ptr [esi + 0x5c], eax
    // mov dword ptr [esi + 0x60], eax
    // mov dword ptr [esi + 0x64], eax
    // mov dword ptr [esi + 0x68], eax
    // mov dword ptr [esi + 0x74], eax
    // mov dword ptr [esi + 0x78], eax
    // mov dword ptr [esi + 0x44], eax
    // mov dword ptr [esi + 0x58], eax
    // mov dword ptr [esi + 0x7c], eax
    // mov dword ptr [esi + 0x48], eax
    // mov dword ptr [esi + 0x4c], eax
    // mov eax, esi
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // push edi
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0x54]
    // mov dword ptr [esi + 0x74], edi
    // cmp ecx, edi
    // if (...) GOTO(0x481bbc)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x54], edi
    // mov dword ptr [esi + 0x44], edi
    // mov ecx, dword ptr [esi + 0x6c]
    // cmp ecx, edi
    // if (...) GOTO(0x481bcd)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x6c], edi
    // mov ecx, dword ptr [esi + 0x70]
    // cmp ecx, edi
    // if (...) GOTO(0x481bde)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x70], edi
    // push ebx
    // mov ebx, dword ptr [esi + 0x64]
    // cmp ebx, edi
    // if (...) GOTO(0x481bf9)
    // mov ecx, ebx
    // CALL(0x483010)
    // push ebx
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [esi + 0x64], edi
    // mov ebx, dword ptr [esi + 0x68]
    // cmp ebx, edi
    // if (...) GOTO(0x481c13)
    // mov ecx, ebx
    // CALL(0x483010)
    // push ebx
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [esi + 0x68], edi
    // mov ecx, dword ptr [esi + 0x5c]
    // cmp ecx, edi
    // if (...) GOTO(0x481c23)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x5c], edi
    // mov ecx, dword ptr [esi + 0x60]
    // cmp ecx, edi
    // if (...) GOTO(0x481c33)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [esi + 0x60], edi
    // mov ebx, dword ptr [esi + 0x78]
    // cmp ebx, edi
    // if (...) GOTO(0x481c4d)
    // mov ecx, ebx
    // CALL(0x483010)
    // push ebx
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [esi + 0x78], edi
    // mov eax, dword ptr [esi + 0x44]
    // pop ebx
    // cmp eax, edi
    // if (...) GOTO(0x481c61)
    // push eax
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [esi + 0x44], edi
    // mov eax, dword ptr [esi + 0x48]
    // cmp eax, edi
    // if (...) GOTO(0x481c74)
    // push eax
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [esi + 0x48], edi
    // mov eax, dword ptr [esi + 0x4c]
    // cmp eax, edi
    // if (...) GOTO(0x481c87)
    // push eax
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [esi + 0x4c], edi
    // mov dword ptr [esi + 0x50], edi
    // mov dword ptr [esi + 0x58], edi
    // mov dword ptr [esi + 0x7c], edi
    // pop edi
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, ecx
    // push ebp
    // xor ebp, ebp
    // mov eax, dword ptr [ebx + 0x54]
    // push esi
    // cmp eax, ebp
    // push edi
    // if (...) GOTO(0x481cbb)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 7
    // pop ebx
    // return;
    // mov eax, dword ptr [eax + 8]
    // push ebp
    // push eax
    // CALL(dword)
    // mov edx, dword ptr [ebx + 0x54]
    // mov dword ptr [ebx + 0x7c], eax
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ebx + 0x58], ecx
    // cmp word ptr [ecx + 4], 0xaf12
    // if (...) GOTO(0x481ce6)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 0x16
    // pop ebx
    // return;
    // cmp word ptr [ecx + 0xc], 8
    // if (...) GOTO(0x481cf9)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 0x17
    // pop ebx
    // return;
    // cmp dword ptr [ecx + 0x1a], 0xf1f1f2f2
    // if (...) GOTO(0x481d8c)
    // test byte ptr [esp + 0x14], 4
    // if (...) GOTO(0x481d71)
    // push eax
    // CALL(0x4a57f1)
    // add esp, 4
    // cmp eax, ebp
    // mov dword ptr [ebx + 0x44], eax
    // if (...) GOTO(0x481d30)
    // mov ecx, ebx
    // CALL(0x481ba0)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 4
    // pop ebx
    // return;
    // mov ecx, dword ptr [ebx + 0x7c]
    // mov edx, dword ptr [ebx + 0x54]
    // mov edi, eax
    // mov eax, ecx
    // mov esi, dword ptr [edx + 4]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [ebx + 0x54]
    // cmp ecx, ebp
    // if (...) GOTO(0x481d56)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov ecx, dword ptr [ebx + 0x44]
    // pop edi
    // mov eax, ecx
    // mov dword ptr [ebx + 0x54], ebp
    // neg eax
    // sbb eax, eax
    // pop esi
    // and al, 0xf9
    // mov dword ptr [ebx + 0x58], ecx
    // pop ebp
    // add eax, 7
    // pop ebx
    // return;
    // mov eax, dword ptr [edx + 4]
    // pop edi
    // mov dword ptr [ebx + 0x44], eax
    // mov ecx, eax
    // neg eax
    // sbb eax, eax
    // pop esi
    // and al, 0xf9
    // mov dword ptr [ebx + 0x58], ecx
    // pop ebp
    // add eax, 7
    // pop ebx
    // return;
    // push eax
    // CALL(0x4a57f1)
    // add esp, 4
    // cmp eax, ebp
    // mov dword ptr [ebx + 0x44], eax
    // if (...) GOTO(0x481daf)
    // mov ecx, ebx
    // CALL(0x481ba0)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 4
    // pop ebx
    // return;
    // mov ecx, dword ptr [ebx + 0x7c]
    // mov edx, dword ptr [ebx + 0x54]
    // mov edi, eax
    // mov eax, ecx
    // mov esi, dword ptr [edx + 4]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [ebx + 0x54]
    // cmp ecx, ebp
    // if (...) GOTO(0x481dd5)
    // mov edx, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov eax, dword ptr [ebx + 0x44]
    // mov dword ptr [ebx + 0x54], ebp
    // mov dword ptr [ebx + 0x58], eax
    // pop edi
    // mov dword ptr [eax + 0x58], 0x1c
    // mov eax, dword ptr [ebx + 0x58]
    // pop esi
    // mov cx, word ptr [eax + 6]
    // mov word ptr [eax + 0x62], cx
    // mov edx, dword ptr [ebx + 0x58]
    // mov word ptr [edx + 0x60], 1
    // mov eax, dword ptr [ebx + 0x58]
    // mov dword ptr [eax + 0x5c], ebp
    // mov ecx, dword ptr [ebx + 0x58]
    // mov word ptr [ecx + 0x64], bp
    // mov edx, dword ptr [ebx + 0x58]
    // mov word ptr [edx + 0x66], bp
    // mov eax, dword ptr [ebx + 0x58]
    // pop ebp
    // mov cx, word ptr [eax + 8]
    // mov word ptr [eax + 0x68], cx
    // mov eax, dword ptr [ebx + 0x58]
    // mov dx, word ptr [eax + 0xa]
    // mov word ptr [eax + 0x6a], dx
    // mov eax, dword ptr [ebx + 0x58]
    // mov dword ptr [eax + 0x1a], 0xf1f1f2f2
    // mov eax, dword ptr [ebx + 0x44]
    // neg eax
    // sbb eax, eax
    // pop ebx
    // and al, 0xf9
    // add eax, 7
    // return;
    // push ebx
    // push ebp
    // push esi
    // mov esi, ecx
    // push edi
    // mov eax, dword ptr [esi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x481e59)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 7
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x48]
    // test eax, eax
    // if (...) GOTO(0x481e69)
    // push eax
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov ebp, dword ptr [esp + 0x14]
    // and ebp, 0xffff
    // lea eax, [ebp*4]
    // push eax
    // CALL(0x4a57f1)
    // mov ebx, dword ptr [esp + 0x1c]
    // mov dword ptr [esi + 0x48], eax
    // and ebx, 0xffff
    // mov dword ptr [esp + 0x18], ebx
    // imul ebx, ebp
    // lea ecx, [ebx*4]
    // push ecx
    // CALL(0x4a57f1)
    // mov ecx, ebx
    // mov edi, eax
    // mov edx, ecx
    // xor eax, eax
    // shr ecx, 2
    // mov dword ptr [esi + 0x4c], edi
    // add esp, 8
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, edx
    // xor edx, edx
    // and ecx, 3
    // rep stosb byte ptr es:[edi], al
    // cmp dword ptr [esi + 0x48], edx
    // if (...) GOTO(0x481ece)
    // pop edi
    // pop esi
    // pop ebp
    // mov eax, 4
    // pop ebx
    // return;
    // mov eax, dword ptr [esi + 0x58]
    // mov edi, dword ptr [esi + 0x44]
    // mov dword ptr [esp + 0x18], edx
    // mov eax, dword ptr [eax + 0x50]
    // add eax, edi
    // cmp ebp, edx
    // if (...) GOTO(0x481f34)
    // mov ebx, dword ptr [esp + 0x14]
    // lea edi, [ebx + 1]
    // mov ecx, dword ptr [esi + 0x48]
    // mov dword ptr [ecx + edx*4], eax
    // xor ecx, ecx
    // test edi, edi
    // if (...) GOTO(0x481f2f)
    // cmp ecx, ebx
    // if (...) GOTO(0x481f03)
    // lea ebx, [ebp - 1]
    // cmp edx, ebx
    // mov ebx, dword ptr [esp + 0x14]
    // if (...) GOTO(0x481f2f)
    // mov edi, 0xf1fa
    // add eax, dword ptr [eax]
    // cmp word ptr [eax + 4], di
    // if (...) GOTO(0x481f08)
    // cmp ecx, ebx
    // if (...) GOTO(0x481f27)
    // mov ebx, dword ptr [esi + 0x4c]
    // mov edi, dword ptr [esp + 0x18]
    // mov dword ptr [ebx + edi*4], eax
    // mov ebx, dword ptr [esp + 0x14]
    // inc edi
    // mov dword ptr [esp + 0x18], edi
    // inc ecx
    // lea edi, [ebx + 1]
    // cmp ecx, edi
    // if (...) GOTO(0x481ef4)
    // inc edx
    // cmp edx, ebp
    // if (...) GOTO(0x481ee8)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // push -1
    // push(0x4b7d73)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // mov esi, dword ptr [esp + 0x20]
    // xor ebx, ebx
    // push edi
    // cmp esi, ebx
    // mov edi, ecx
    // mov dword ptr [esp + 0x10], ebx
    // if (...) GOTO(0x482356)
    // CALL(0x481ba0)
    // mov ecx, dword ptr [edi + 0x54]
    // cmp ecx, ebx
    // if (...) GOTO(0x481f83)
    // mov eax, dword ptr [ecx]
    // push 1
    // CALL(dword)
    // mov dword ptr [edi + 0x54], ebx
    // push(0x14)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x24], eax
    // cmp eax, ebx
    // mov dword ptr [esp + 0x1c], ebx
    // if (...) GOTO(0x481fa2)
    // mov ecx, eax
    // CALL(0x492d80)
    // if (...) GOTO(0x481fa4)
    // xor eax, eax
    // or ebp, 0xffffffff
    // push 1
    // push esi
    // mov ecx, eax
    // mov dword ptr [esp + 0x24], ebp
    // mov dword ptr [edi + 0x54], eax
    // CALL(0x492dd0)
    // test eax, eax
    // if (...) GOTO(0x481fcd)
    // mov ecx, edi
    // CALL(0x481ba0)
    // mov eax, 6
    // if (...) GOTO(0x4823a0)
    // mov al, byte ptr [esp + 0x30]
    // test al, 1
    // if (...) GOTO(0x482040)
    // cmp dword ptr [esp + 0x2c], ebx
    // if (...) GOTO(0x481fec)
    // mov ecx, edi
    // CALL(0x481ba0)
    // mov eax, 3
    // if (...) GOTO(0x4823a0)
    // cmp dword ptr [edi + 0x78], ebx
    // if (...) GOTO(0x482032)
    // push(0x58)
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x2c], eax
    // cmp eax, ebx
    // mov dword ptr [esp + 0x1c], 1
    // if (...) GOTO(0x482014)
    // mov ecx, eax
    // CALL(0x482fd0)
    // if (...) GOTO(0x482016)
    // xor eax, eax
    // cmp eax, ebx
    // mov dword ptr [esp + 0x1c], ebp
    // mov dword ptr [edi + 0x78], eax
    // if (...) GOTO(0x482032)
    // mov ecx, edi
    // CALL(0x481ba0)
    // mov eax, 4
    // if (...) GOTO(0x4823a0)
    // mov esi, dword ptr [edi + 0x78]
    // mov ecx, esi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // if (...) GOTO(0x482336)
    // test al, 2
    // if (...) GOTO(0x482328)
    // mov esi, dword ptr [edi + 0x78]
    // cmp esi, ebx
    // if (...) GOTO(0x482062)
    // mov ecx, esi
    // CALL(0x483010)
    // push esi
    // CALL(0x4a4ffc)
    // add esp, 4
    // mov dword ptr [edi + 0x78], ebx
    // mov eax, dword ptr [0x83ac98]
    // mov dword ptr [0x83aca4], ebx
    // cmp eax, ebx
    // mov eax, dword ptr [0x83aca0]
    // if (...) GOTO(0x4821b4)
    // cmp eax, ebx
    // if (...) GOTO(0x4820bb)
    // push eax
    // push(0x1c)
    // CALL(0x4823c0)
    // add esp, 8
    // cmp eax, ebx
    // if (...) GOTO(0x4820b7)
    // mov dword ptr [eax], 0x4ba28c
    // mov dword ptr [eax + 0x14], 0x4ba278
    // mov ecx, dword ptr [0x839650]
    // mov dword ptr [eax + 0x18], ecx
    // mov dword ptr [0x839650], ebx
    // mov edx, dword ptr [eax]
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ecx + eax], 0x4ba288
    // if (...) GOTO(0x4820fa)
    // xor eax, eax
    // if (...) GOTO(0x4820fa)
    // mov edx, dword ptr [0x83ac8c]
    // mov eax, dword ptr [edx + 4]
    // mov eax, dword ptr [eax + 0x83ac90]
    // push eax
    // push(0x1c)
    // mov dword ptr [esp + 0x34], eax
    // CALL(0x4823c0)
    // add esp, 8
    // mov dword ptr [esp + 0x24], eax
    // cmp eax, ebx
    // mov dword ptr [esp + 0x1c], 2
    // if (...) GOTO(0x4820f4)
    // push 1
    // mov ecx, eax
    // CALL(0x482ae0)
    // if (...) GOTO(0x4820f6)
    // xor eax, eax
    // mov dword ptr [esp + 0x1c], ebp
    // cmp eax, ebx
    // mov dword ptr [0x83ac90], eax
    // if (...) GOTO(0x482314)
    // mov dword ptr [eax + 4], ebx
    // mov eax, dword ptr [0x83ac90]
    // mov dword ptr [eax + 0xc], eax
    // mov eax, dword ptr [0x83ac90]
    // mov dword ptr [eax + 0x10], eax
    // mov eax, dword ptr [0x83aca0]
    // cmp eax, ebx
    // if (...) GOTO(0x48213c)
    // push eax
    // push(0x10)
    // CALL(0x4823c0)
    // add esp, 8
    // mov dword ptr [esp + 0x2c], eax
    // mov dword ptr [esp + 0x1c], 3
    // if (...) GOTO(0x482166)
    // mov edx, dword ptr [0x83ac8c]
    // mov eax, dword ptr [edx + 4]
    // mov eax, dword ptr [eax + 0x83ac90]
    // push eax
    // push(0x10)
    // mov dword ptr [esp + 0x34], eax
    // CALL(0x4823c0)
    // add esp, 8
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x1c], 4
    // cmp eax, ebx
    // if (...) GOTO(0x482175)
    // push 1
    // mov ecx, eax
    // CALL(0x482b20)
    // if (...) GOTO(0x482177)
    // xor eax, eax
    // mov ecx, dword ptr [0x83ac90]
    // mov dword ptr [esp + 0x1c], ebp
    // mov dword ptr [ecx + 8], eax
    // mov eax, dword ptr [0x83ac90]
    // mov ecx, dword ptr [eax + 8]
    // cmp ecx, ebx
    // if (...) GOTO(0x482314)
    // mov eax, dword ptr [0x83ac88]
    // mov edx, ecx
    // push edx
    // mov ecx, 0x83ac88
    // CALL(dword)
    // mov ecx, dword ptr [0x83ac90]
    // mov dword ptr [0x83ac94], ecx
    // if (...) GOTO(0x482304)
    // cmp eax, ebx
    // if (...) GOTO(0x4821f2)
    // push eax
    // push(0x1c)
    // CALL(0x4823c0)
    // add esp, 8
    // mov dword ptr [esp + 0x2c], eax
    // cmp eax, ebx
    // mov dword ptr [esp + 0x1c], 5
    // if (...) GOTO(0x4821de)
    // push 1
    // mov ecx, eax
    // CALL(0x482ae0)
    // if (...) GOTO(0x4821e0)
    // xor eax, eax
    // mov edx, dword ptr [0x83ac90]
    // mov dword ptr [esp + 0x1c], ebp
    // mov ecx, dword ptr [edx + 0x10]
    // mov dword ptr [ecx + 0xc], eax
    // if (...) GOTO(0x48223d)
    // mov edx, dword ptr [0x83ac8c]
    // mov eax, dword ptr [edx + 4]
    // mov eax, dword ptr [eax + 0x83ac90]
    // push eax
    // push(0x1c)
    // mov dword ptr [esp + 0x34], eax
    // CALL(0x4823c0)
    // add esp, 8
    // mov dword ptr [esp + 0x24], eax
    // cmp eax, ebx
    // mov dword ptr [esp + 0x1c], 6
    // if (...) GOTO(0x48222b)
    // push 1
    // mov ecx, eax
    // CALL(0x482ae0)
    // if (...) GOTO(0x48222d)
    // xor eax, eax
    // mov ecx, dword ptr [0x83ac90]
    // mov dword ptr [esp + 0x1c], ebp
    // mov edx, dword ptr [ecx + 0x10]
    // mov dword ptr [edx + 0xc], eax
    // mov eax, dword ptr [0x83ac90]
    // mov eax, dword ptr [eax + 0x10]
    // mov ecx, dword ptr [eax + 0xc]
    // cmp ecx, ebx
    // if (...) GOTO(0x482314)
    // mov dword ptr [ecx + 0x10], eax
    // mov eax, dword ptr [0x83ac90]
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [ecx + 0xc]
    // mov dword ptr [edx + 0xc], eax
    // mov eax, dword ptr [0x83ac90]
    // mov ecx, dword ptr [eax + 0x10]
    // mov edx, dword ptr [ecx + 0xc]
    // mov dword ptr [eax + 0x10], edx
    // mov eax, dword ptr [0x83ac90]
    // mov eax, dword ptr [eax + 0x10]
    // mov dword ptr [0x83ac94], eax
    // mov dword ptr [eax + 4], ebx
    // mov eax, dword ptr [0x83aca0]
    // cmp eax, ebx
    // if (...) GOTO(0x4822a1)
    // push eax
    // push(0x10)
    // CALL(0x4823c0)
    // add esp, 8
    // mov dword ptr [esp + 0x2c], eax
    // mov dword ptr [esp + 0x1c], 7
    // if (...) GOTO(0x4822cb)
    // mov edx, dword ptr [0x83ac8c]
    // mov eax, dword ptr [edx + 4]
    // mov eax, dword ptr [eax + 0x83ac90]
    // push eax
    // push(0x10)
    // mov dword ptr [esp + 0x34], eax
    // CALL(0x4823c0)
    // add esp, 8
    // mov dword ptr [esp + 0x24], eax
    // mov dword ptr [esp + 0x1c], 8
    // cmp eax, ebx
    // if (...) GOTO(0x4822da)
    // push 1
    // mov ecx, eax
    // CALL(0x482b20)
    // if (...) GOTO(0x4822dc)
    // xor eax, eax
    // mov ecx, dword ptr [0x83ac94]
    // mov dword ptr [esp + 0x1c], ebp
    // mov dword ptr [ecx + 8], eax
    // mov eax, dword ptr [0x83ac94]
    // mov ecx, dword ptr [eax + 8]
    // cmp ecx, ebx
    // if (...) GOTO(0x482314)
    // mov eax, dword ptr [0x83ac88]
    // mov edx, ecx
    // push edx
    // mov ecx, 0x83ac88
    // CALL(dword)
    // mov eax, dword ptr [0x83ac98]
    // mov dword ptr [0x83ac9c], eax
    // inc eax
    // mov dword ptr [0x83ac98], eax
    // mov esi, dword ptr [0x83aca4]
    // mov ecx, esi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // mov dword ptr [0x83ac24], esi
    // if (...) GOTO(0x482336)
    // mov esi, dword ptr [0x83ac24]
    // test al, 3
    // if (...) GOTO(0x482336)
    // mov esi, dword ptr [esp + 0x2c]
    // mov ebp, dword ptr [esp + 0x28]
    // mov ecx, edi
    // push ebp
    // mov dword ptr [edi + 0x74], esi
    // CALL(0x481ca0)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x48235a)
    // mov ecx, edi
    // CALL(0x481ba0)
    // mov eax, esi
    // if (...) GOTO(0x4823a0)
    // mov ebp, dword ptr [esp + 0x28]
    // cmp dword ptr [edi + 0x44], ebx
    // if (...) GOTO(0x48236d)
    // mov ecx, edi
    // CALL(0x481ba0)
    // mov eax, 7
    // if (...) GOTO(0x4823a0)
    // mov eax, dword ptr [edi + 0x58]
    // mov cx, word ptr [eax + 0x62]
    // mov dx, word ptr [eax + 0x60]
    // push ecx
    // push edx
    // mov ecx, edi
    // CALL(0x481e40)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x482392)
    // mov ecx, edi
    // CALL(0x481ba0)
    // mov eax, esi
    // if (...) GOTO(0x4823a0)
    // and ebp, 2
    // mov ecx, edi
    // push ebp
    // push edi
    // CALL(0x482b90)
    // xor eax, eax
    // mov ecx, dword ptr [esp + 0x14]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // mov dword ptr fs:[0], ecx
    // add esp, 0x10
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // test esi, esi
    // if (...) GOTO(0x4823fc)
    // mov eax, dword ptr [esp + 8]
    // mov ecx, esi
    // push eax
    // CALL(0x474860)
    // test eax, eax
    // if (...) GOTO(0x4823e1)
    // mov dword ptr [0x839650], esi
    // pop esi
    // return;
    // push 0
    // push(0x4c1458)  // ptr?
    // push(0x4c1434)  // ptr?
    // push 0
    // CALL(dword)
    // push 3
    // CALL(0x4a5108)
    // mov ecx, dword ptr [esp + 8]
    // push ecx
    // CALL(0x4a504f)
    // add esp, 4
    // test eax, eax
    // if (...) GOTO(0x48240f)
    // pop esi
    // return;
    // mov dword ptr [0x839650], 0
    // pop esi
    // return;
    // CALL(0x405099)
    // mov eax, dword ptr [esp + 8]
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // mov edi, ecx
    // push eax
    // mov edx, dword ptr [esi + 0x3c]
    // mov ecx, dword ptr [esi + 0x38]
    // push esi
    // inc edx
    // push ecx
    // mov ecx, edi
    // mov dword ptr [esi + 0x3c], edx
    // CALL(0x482570)
    // mov edx, dword ptr [edi + 0x58]
    // mov ecx, dword ptr [esi + 0x3c]
    // xor eax, eax
    // mov ax, word ptr [edx + 0x62]
    // cmp ecx, eax
    // if (...) GOTO(0x482474)
    // mov ecx, dword ptr [esi + 0x40]
    // mov edx, dword ptr [edi + 0x48]
    // pop edi
    // mov eax, dword ptr [edx + ecx*4]
    // mov dword ptr [esi + 0x38], eax
    // mov ecx, eax
    // mov edx, dword ptr [eax]
    // mov dword ptr [esi + 0x3c], 0
    // add ecx, edx
    // lea eax, [esi + 8]
    // mov dword ptr [esi + 0x38], ecx
    // pop esi
    // return;
    // mov eax, dword ptr [esi + 0x38]
    // pop edi
    // mov edx, dword ptr [eax]
    // add edx, eax
    // lea eax, [esi + 8]
    // mov dword ptr [esi + 0x38], edx
    // pop esi
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, ecx
    // push ebp
    // push esi
    // mov esi, dword ptr [ebx + 0x58]
    // push edi
    // test esi, esi
    // if (...) GOTO(0x4824a6)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // mov ebp, dword ptr [esp + 0x18]
    // cmp ebp, -1
    // if (...) GOTO(0x4824b7)
    // mov ecx, dword ptr [esp + 0x14]
    // xor ebp, ebp
    // if (...) GOTO(0x482508)
    // mov eax, dword ptr [esi + 0x70]
    // test eax, eax
    // if (...) GOTO(0x4824f9)
    // mov edx, dword ptr [esp + 0x14]
    // mov edi, 1
    // mov ecx, edx
    // shl edi, cl
    // test eax, edi
    // if (...) GOTO(0x4824d8)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // xor edi, edi
    // xor ecx, ecx
    // test edx, edx
    // if (...) GOTO(0x4824f5)
    // mov ebp, 1
    // shl ebp, cl
    // test eax, ebp
    // if (...) GOTO(0x4824ec)
    // inc edi
    // inc ecx
    // cmp ecx, edx
    // if (...) GOTO(0x4824e0)
    // mov ebp, dword ptr [esp + 0x18]
    // mov ecx, edi
    // if (...) GOTO(0x482508)
    // mov eax, dword ptr [esp + 0x14]
    // xor ecx, ecx
    // mov cx, word ptr [esi + 0x60]
    // cdq 
    // idiv ecx
    // mov ecx, edx
    // mov eax, ebp
    // xor edi, edi
    // mov di, word ptr [esi + 0x62]
    // mov esi, dword ptr [esp + 0x1c]
    // cdq 
    // idiv edi
    // cmp dword ptr [esi + 0x40], ecx
    // mov edi, edx
    // if (...) GOTO(0x482549)
    // mov eax, dword ptr [esp + 0x20]
    // mov dword ptr [esi + 0x40], ecx
    // mov dword ptr [esi + 0x3c], 0
    // mov edx, dword ptr [ebx + 0x48]
    // push eax
    // push esi
    // mov ecx, dword ptr [edx + ecx*4]
    // mov dword ptr [esi + 0x38], ecx
    // push ecx
    // mov ecx, ebx
    // CALL(0x482570)
    // mov eax, dword ptr [esi + 0x38]
    // mov ecx, eax
    // add ecx, dword ptr [eax]
    // mov dword ptr [esi + 0x38], ecx
    // cmp dword ptr [esi + 0x3c], edi
    // if (...) GOTO(0x48255d)
    // push 0
    // push esi
    // mov ecx, ebx
    // CALL(0x482420)
    // cmp dword ptr [esi + 0x3c], edi
    // if (...) GOTO(0x48254e)
    // lea eax, [esi + 8]
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // push ecx
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // xor eax, eax
    // mov edx, ecx
    // mov ax, word ptr [ebx + 4]
    // push ebp
    // cmp eax, 0xd
    // push edi
    // mov dword ptr [esp + 0xc], edx
    // if (...) GOTO(0x482611)
    // if (...) GOTO(0x4825f1)
    // add eax, -4
    // cmp eax, 8
    // if (...) GOTO(0x482681)
    // if (...) GOTO(dword)
    // push ebx
    // mov ecx, edx
    // CALL(0x4826f0)
    // pop edi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // test eax, eax
    // if (...) GOTO(0x4825c0)
    // lea eax, [ecx + 8]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, edx
    // CALL(0x4827d0)
    // pop edi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // test eax, eax
    // if (...) GOTO(0x4825e0)
    // lea eax, [ecx + 8]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, edx
    // CALL(0x487cb0)
    // pop edi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // test eax, eax
    // if (...) GOTO(0x482600)
    // lea eax, [ecx + 8]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, edx
    // CALL(0x482940)
    // pop edi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // sub eax, 0xf
    // if (...) GOTO(0x4826aa)
    // dec eax
    // if (...) GOTO(0x48268a)
    // sub eax, 0xf1ea
    // if (...) GOTO(0x482681)
    // xor ebp, ebp
    // lea edi, [ebx + 0x10]
    // cmp word ptr [ebx + 6], bp
    // jbe 0x482681
    // push esi
    // mov esi, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esi + 0x34]
    // test ecx, ecx
    // if (...) GOTO(0x482661)
    // mov eax, dword ptr [esi + 0x3c]
    // test eax, eax
    // if (...) GOTO(0x482661)
    // mov eax, dword ptr [esp + 0x20]
    // test eax, eax
    // if (...) GOTO(0x482661)
    // mov eax, dword ptr [esi + 0x40]
    // lea edx, [eax + eax*4]
    // lea eax, [eax + edx*2]
    // lea ecx, [ecx + eax*4]
    // push ecx
    // lea ecx, [esi + 8]
    // CALL(0x4744c0)
    // if (...) GOTO(0x482671)
    // mov edx, dword ptr [esp + 0x20]
    // mov ecx, dword ptr [esp + 0x10]
    // push edx
    // push esi
    // push edi
    // CALL(0x482570)
    // mov eax, dword ptr [edi]
    // add edi, eax
    // xor eax, eax
    // mov ax, word ptr [ebx + 6]
    // inc ebp
    // cmp ebp, eax
    // if (...) GOTO(0x482634)
    // pop esi
    // pop edi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // test eax, eax
    // if (...) GOTO(0x482699)
    // lea eax, [ecx + 8]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, edx
    // CALL(0x482a80)
    // pop edi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x18]
    // test eax, eax
    // if (...) GOTO(0x4826b9)
    // lea eax, [ecx + 8]
    // push eax
    // push ecx
    // push ebx
    // mov ecx, edx
    // CALL(0x482990)
    // pop edi
    // pop ebp
    // pop ebx
    // pop ecx
    // return;
    // mov edi, edi
    // mov byte ptr [0x81004825], al
    // dec eax
    // add byte ptr [ecx - 0x4effb7da], al
    // and eax, 0x26810048
    // dec eax
    // add byte ptr [ecx - 0x7effb7da], al
    // dec eax
    // add byte ptr [edx - 0x2effb7db], ah
    // and eax, 0xec810048
    // add al, 3
    // add byte ptr [eax], al
    // push ebx
    // mov ebx, ecx
    // mov eax, dword ptr [ebx + 0x74]
    // test eax, eax
    // if (...) GOTO(0x48270a)
    // pop ebx
    // add esp, 0x304
    // return;
    // mov ecx, dword ptr [esp + 0x30c]
    // push esi
    // lea esi, [ecx + 6]
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x48272d)
    // mov edx, dword ptr [ecx]
    // push(0x100)
    // lea eax, [esp + 0x10]
    // push 0
    // push eax
    // CALL(dword)
    // mov ax, word ptr [esi]
    // add esi, 2
    // mov dx, ax
    // xor cl, cl
    // add eax, 0xffff
    // test dx, dx
    // if (...) GOTO(0x48279f)
    // and eax, 0xffff
    // push ebp
    // inc eax
    // push edi
    // mov ebp, eax
    // mov dl, byte ptr [esi]
    // xor eax, eax
    // mov al, byte ptr [esi + 1]
    // add cl, dl
    // inc esi
    // mov byte ptr [esp + 0x10], cl
    // inc esi
    // test eax, eax
    // if (...) GOTO(0x482764)
    // mov eax, 0x100
    // mov edx, eax
    // dec eax
    // test edx, edx
    // if (...) GOTO(0x48279a)
    // lea edi, [eax + 1]
    // mov eax, dword ptr [esp + 0x10]
    // mov dl, byte ptr [esi]
    // and eax, 0xff
    // inc esi
    // inc esi
    // lea eax, [eax + eax*2]
    // inc esi
    // inc cl
    // dec edi
    // mov byte ptr [esp + eax + 0x14], dl
    // mov dl, byte ptr [esi - 2]
    // mov byte ptr [esp + eax + 0x15], dl
    // mov dl, byte ptr [esi - 1]
    // mov byte ptr [esp + eax + 0x16], dl
    // mov byte ptr [esp + 0x10], cl
    // if (...) GOTO(0x48276e)
    // dec ebp
    // if (...) GOTO(0x48274c)
    // pop edi
    // pop ebp
    // mov esi, dword ptr [ebx + 0x74]
    // mov eax, dword ptr [esi + 4]
    // test eax, eax
    // if (...) GOTO(0x4827af)
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // mov ecx, dword ptr [esi + 4]
    // push(0x100)
    // lea eax, [esp + 0x10]
    // push 0
    // mov edx, dword ptr [ecx]
    // push eax
    // CALL(dword)
    // pop esi
    // xor eax, eax
    // pop ebx
    // add esp, 0x304
    // return;
    // sub esp, 0x10
    // push ebx
    // push esi
    // mov eax, dword ptr [esp + 0x1c]
    // mov esi, ecx
    // mov ecx, dword ptr [esp + 0x24]
    // mov dword ptr [esp + 0x14], esi
    // lea ebx, [eax + 6]
    // mov ecx, dword ptr [ecx + 4]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, eax
    // mov ax, word ptr [ebx]
    // mov dx, ax
    // add ebx, 2
    // add eax, 0xffff
    // mov dword ptr [esp + 0x1c], ecx
    // test dx, dx
    // if (...) GOTO(0x482927)
    // and eax, 0xffff
    // push ebp
    // inc eax
    // push edi
    // mov dword ptr [esp + 0x14], eax
    // mov ax, word ptr [ebx]
    // add ebx, 2
    // mov edx, eax
    // and edx, 0xc000
    // cmp edx, 0xc000
    // if (...) GOTO(0x48284a)
    // movsx eax, ax
    // cdq 
    // xor eax, edx
    // xor edi, edi
    // sub eax, edx
    // mov edx, dword ptr [esi + 0x58]
    // and eax, 0xffff
    // mov di, word ptr [edx + 8]
    // imul eax, edi
    // add ecx, eax
    // if (...) GOTO(0x482817)
    // mov edx, eax
    // mov dword ptr [esp + 0x24], ecx
    // and edx, 0x8000
    // cmp edx, 0x8000
    // if (...) GOTO(0x482872)
    // mov edx, dword ptr [esi + 0x58]
    // xor edi, edi
    // add ebx, 2
    // mov di, word ptr [edx + 8]
    // mov byte ptr [edi + ecx - 1], al
    // mov ax, word ptr [ebx - 2]
    // mov di, ax
    // add eax, 0xffff
    // test di, di
    // mov edx, ecx
    // if (...) GOTO(0x482907)
    // and eax, 0xffff
    // inc eax
    // mov dword ptr [esp + 0x10], eax
    // mov al, byte ptr [ebx]
    // mov cl, byte ptr [ebx + 1]
    // mov byte ptr [esp + 0x18], al
    // inc ebx
    // mov eax, dword ptr [esp + 0x18]
    // inc ebx
    // and eax, 0xff
    // add edx, eax
    // test cl, cl
    // if (...) GOTO(0x4828d5)
    // mov ax, word ptr [ebx]
    // add ebx, 2
    // neg cl
    // movsx esi, cl
    // test esi, esi
    // if (...) GOTO(0x4828f4)
    // mov bp, ax
    // mov ecx, esi
    // shl ebp, 0x10
    // mov bp, ax
    // mov edi, edx
    // mov eax, ebp
    // lea edx, [edx + esi*2]
    // shr ecx, 1
    // rep stosd dword ptr es:[edi], eax
    // adc ecx, ecx
    // rep stosw word ptr es:[edi], ax
    // if (...) GOTO(0x4828f4)
    // if (...) GOTO(0x4828f4)
    // movsx eax, cl
    // shl eax, 1
    // mov ecx, eax
    // mov esi, ebx
    // mov ebp, ecx
    // mov edi, edx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, ebp
    // add edx, eax
    // and ecx, 3
    // add ebx, eax
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov eax, dword ptr [esp + 0x10]
    // dec eax
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x48288f)
    // mov esi, dword ptr [esp + 0x1c]
    // mov ecx, dword ptr [esp + 0x24]
    // mov edx, dword ptr [esi + 0x58]
    // xor eax, eax
    // mov ax, word ptr [edx + 8]
    // add ecx, eax
    // mov eax, dword ptr [esp + 0x14]
    // dec eax
    // mov dword ptr [esp + 0x24], ecx
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x482817)
    // pop edi
    // pop ebp
    // mov ecx, dword ptr [esp + 0x24]
    // push 1
    // mov ecx, dword ptr [ecx + 4]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // xor eax, eax
    // pop ebx
    // add esp, 0x10
    // return;
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push ebp
    // push esi
    // mov ecx, dword ptr [ebx + 4]
    // push edi
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov esi, dword ptr [ebx + 4]
    // mov edi, eax
    // mov ecx, esi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // mov ebp, eax
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // imul ebp, eax
    // mov ecx, ebp
    // xor eax, eax
    // mov edx, ecx
    // push 1
    // shr ecx, 2
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, edx
    // and ecx, 3
    // rep stosb byte ptr es:[edi], al
    // mov ecx, dword ptr [ebx + 4]
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // sub esp, 0xc
    // push ebx
    // push esi
    // mov eax, dword ptr [esp + 0x18]
    // mov esi, ecx
    // mov ecx, dword ptr [esp + 0x20]
    // mov dword ptr [esp + 0x10], esi
    // lea ebx, [eax + 6]
    // mov ecx, dword ptr [ecx + 4]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // mov ecx, dword ptr [esi + 0x58]
    // mov edx, eax
    // xor eax, eax
    // mov dword ptr [esp + 0x18], edx
    // mov ax, word ptr [ecx + 0xa]
    // mov ecx, eax
    // dec eax
    // test ecx, ecx
    // if (...) GOTO(0x482a5b)
    // inc eax
    // push ebp
    // push edi
    // mov dword ptr [esp + 0x14], eax
    // mov ecx, dword ptr [esi + 0x58]
    // xor eax, eax
    // inc ebx
    // mov ax, word ptr [ecx + 8]
    // test eax, eax
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x482a4a)
    // mov cl, byte ptr [ebx]
    // inc ebx
    // test cl, cl
    // if (...) GOTO(0x482a0b)
    // neg cl
    // movsx ebp, cl
    // mov ecx, ebp
    // mov esi, ebx
    // mov eax, ecx
    // mov edi, edx
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // add edx, ebp
    // and ecx, 3
    // mov dword ptr [esp + 0x20], edx
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // add ebx, ebp
    // if (...) GOTO(0x482a3a)
    // movsx eax, byte ptr [ebx]
    // mov edi, edx
    // mov dl, al
    // movsx ebp, cl
    // mov dh, dl
    // mov ecx, ebp
    // mov eax, edx
    // mov esi, ecx
    // shl eax, 0x10
    // mov ax, dx
    // mov edx, dword ptr [esp + 0x20]
    // shr ecx, 2
    // rep stosd dword ptr es:[edi], eax
    // mov ecx, esi
    // inc ebx
    // and ecx, 3
    // add edx, ebp
    // rep stosb byte ptr es:[edi], al
    // mov dword ptr [esp + 0x20], edx
    // mov eax, dword ptr [esp + 0x10]
    // sub eax, ebp
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4829e1)
    // mov esi, dword ptr [esp + 0x18]
    // mov eax, dword ptr [esp + 0x14]
    // dec eax
    // mov dword ptr [esp + 0x14], eax
    // if (...) GOTO(0x4829cf)
    // pop edi
    // pop ebp
    // mov eax, dword ptr [esp + 0x20]
    // push 1
    // mov ecx, dword ptr [eax + 4]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop esi
    // xor eax, eax
    // pop ebx
    // add esp, 0xc
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push ebp
    // push esi
    // mov ecx, dword ptr [ebx + 4]
    // push edi
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov esi, dword ptr [ebx + 4]
    // mov edi, eax
    // mov ecx, esi
    // mov edx, dword ptr [esi]
    // CALL(dword)
    // mov ebp, eax
    // mov eax, dword ptr [esi]
    // mov ecx, esi
    // CALL(dword)
    // imul ebp, eax
    // mov edx, dword ptr [esp + 0x14]
    // mov ecx, ebp
    // mov eax, ecx
    // push 1
    // lea esi, [edx + 6]
    // shr ecx, 2
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // mov ecx, eax
    // and ecx, 3
    // rep movsb byte ptr es:[edi], byte ptr [esi]
    // mov ecx, dword ptr [ebx + 4]
    // mov edx, dword ptr [ecx]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebp
    // xor eax, eax
    // pop ebx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov edx, dword ptr [esp + 8]
    // mov eax, ecx
    // xor ecx, ecx
    // cmp edx, ecx
    // mov dword ptr [esp], ecx
    // if (...) GOTO(0x482b0d)
    // mov dword ptr [eax], 0x4ba28c
    // mov dword ptr [eax + 0x14], 0x4ba278
    // mov edx, dword ptr [0x839650]
    // mov dword ptr [eax + 0x18], edx
    // mov dword ptr [0x839650], ecx
    // mov ecx, dword ptr [eax]
    // mov edx, dword ptr [ecx + 4]
    // mov dword ptr [edx + eax], 0x4ba288
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov edx, dword ptr [esp + 8]
    // mov eax, ecx
    // xor ecx, ecx
    // cmp edx, ecx
    // mov dword ptr [esp], ecx
    // if (...) GOTO(0x482b4d)
    // mov dword ptr [eax], 0x4ba2b8
    // mov dword ptr [eax + 8], 0x4ba278
    // mov edx, dword ptr [0x839650]
    // mov dword ptr [eax + 0xc], edx
    // mov dword ptr [0x839650], ecx
    // mov ecx, dword ptr [eax]
    // mov edx, dword ptr [ecx + 4]
    // mov dword ptr [edx + eax], 0x4ba2b4
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // lea ecx, [esi + 8]
    // CALL(0x473ab0)
    // xor eax, eax
    // mov dword ptr [esi], 0x4ba2dc
    // mov dword ptr [esi + 4], eax
    // mov dword ptr [esi + 0x38], eax
    // mov dword ptr [esi + 0x3c], eax
    // mov dword ptr [esi + 0x34], eax
    // mov dword ptr [esi + 0x40], 0xffffffff
    // mov eax, esi
    // pop esi
    // return;
    // CALL(0x405098)
    // // nop
    // mov eax, dword ptr fs:[0]
    // push -1
    // push(0x4b7d8b)  // ptr?
    // push eax
    // mov dword ptr fs:[0], esp
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x20]
    // test edi, edi
    // mov esi, ecx
    // if (...) GOTO(0x482bbd)
    // mov eax, 0x10
    // if (...) GOTO(0x482da4)
    // mov eax, dword ptr [edi + 0x44]
    // test eax, eax
    // if (...) GOTO(0x482bce)
    // mov eax, 7
    // if (...) GOTO(0x482da4)
    // mov ecx, esi
    // CALL(0x482dd0)
    // mov dword ptr [esi + 4], edi
    // mov eax, dword ptr [edi + 0x58]
    // xor ecx, ecx
    // xor edx, edx
    // mov cx, word ptr [eax + 0xa]
    // mov dx, word ptr [eax + 8]
    // lea ebx, [esi + 8]
    // push ecx
    // push edx
    // mov ecx, ebx
    // CALL(0x474550)
    // mov ebp, eax
    // test ebp, ebp
    // if (...) GOTO(0x482c07)
    // mov ecx, esi
    // CALL(0x482dd0)
    // mov eax, ebp
    // if (...) GOTO(0x482da4)
    // mov eax, dword ptr [edi + 0x58]
    // xor ecx, ecx
    // mov cx, word ptr [eax + 0x64]
    // xor eax, eax
    // mov dword ptr [esi + 0x28], ecx
    // mov edx, dword ptr [edi + 0x58]
    // mov ax, word ptr [edx + 0x66]
    // xor edx, edx
    // mov dword ptr [esi + 0x2c], eax
    // mov ecx, dword ptr [edi + 0x58]
    // mov dx, word ptr [ecx + 0x68]
    // xor ecx, ecx
    // mov dword ptr [esi + 0x20], edx
    // mov eax, dword ptr [edi + 0x58]
    // mov cx, word ptr [eax + 0x6a]
    // mov dword ptr [esi + 0x24], ecx
    // mov eax, dword ptr [edi + 0x74]
    // test eax, eax
    // if (...) GOTO(0x482c4b)
    // mov ebx, dword ptr [ebx + 4]
    // test ebx, ebx
    // if (...) GOTO(0x482c66)
    // test eax, eax
    // if (...) GOTO(0x482c66)
    // if (...) GOTO(0x482c5b)
    // mov ebx, dword ptr [ebx + 4]
    // mov eax, dword ptr [0x83ad0c]
    // test ebx, ebx
    // if (...) GOTO(0x482c66)
    // test eax, eax
    // if (...) GOTO(0x482c66)
    // mov eax, dword ptr [eax + 4]
    // mov edx, dword ptr [ebx]
    // push eax
    // mov ecx, ebx
    // CALL(dword)
    // mov eax, dword ptr [esp + 0x24]
    // test eax, eax
    // if (...) GOTO(0x482d92)
    // mov ecx, dword ptr [edi + 0x58]
    // xor ebx, ebx
    // mov bx, word ptr [ecx + 0x60]
    // lea edx, [ebx + ebx*4]
    // lea eax, [ebx + edx*2]
    // lea ecx, [eax*4 + 4]
    // push ecx
    // CALL(0x4a57f1)
    // add esp, 4
    // mov dword ptr [esp + 0x20], eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 0
    // if (...) GOTO(0x482cbd)
    // push(0x4041f0)  // ptr?
    // push(0x473ab0)  // ptr?
    // lea ebp, [eax + 4]
    // push ebx
    // push(0x2c)
    // push ebp
    // mov dword ptr [eax], ebx
    // CALL(0x4a55d2)
    // mov eax, ebp
    // if (...) GOTO(0x482cbf)
    // xor eax, eax
    // test eax, eax
    // mov dword ptr [esp + 0x18], 0xffffffff
    // mov dword ptr [esi + 0x34], eax
    // if (...) GOTO(0x482d92)
    // mov eax, dword ptr [edi + 0x58]
    // xor ebp, ebp
    // mov edx, dword ptr [eax + 0x70]
    // cmp word ptr [eax + 0x60], bp
    // mov dword ptr [esp + 0x20], edx
    // jbe 0x482d92
    // xor ebx, ebx
    // mov ecx, dword ptr [esp + 0x20]
    // test ecx, ecx
    // if (...) GOTO(0x482d03)
    // mov edx, 1
    // mov ecx, ebp
    // shl edx, cl
    // mov ecx, dword ptr [esp + 0x20]
    // test ecx, edx
    // if (...) GOTO(0x482d7d)
    // xor edx, edx
    // xor ecx, ecx
    // mov dx, word ptr [eax + 0xa]
    // mov cx, word ptr [eax + 8]
    // push edx
    // mov edx, dword ptr [esi + 0x34]
    // push ecx
    // mov ecx, ebx
    // add ecx, edx
    // CALL(0x474550)
    // test eax, eax
    // mov dword ptr [esp + 0x24], eax
    // if (...) GOTO(0x482db9)
    // mov edx, dword ptr [edi + 0x58]
    // mov ecx, dword ptr [esi + 0x34]
    // mov ax, word ptr [edx + 0x64]
    // mov dword ptr [ebx + ecx + 0x20], eax
    // mov edx, dword ptr [edi + 0x58]
    // mov ecx, dword ptr [esi + 0x34]
    // xor eax, eax
    // mov ax, word ptr [edx + 0x66]
    // mov dword ptr [ebx + ecx + 0x24], eax
    // mov edx, dword ptr [edi + 0x58]
    // mov ecx, dword ptr [esi + 0x34]
    // xor eax, eax
    // mov ax, word ptr [edx + 0x68]
    // mov dword ptr [ebx + ecx + 0x18], eax
    // mov edx, dword ptr [edi + 0x58]
    // mov ecx, dword ptr [esi + 0x34]
    // xor eax, eax
    // mov ax, word ptr [edx + 0x6a]
    // mov edx, ebx
    // mov dword ptr [ebx + ecx + 0x1c], eax
    // mov eax, dword ptr [esi + 0x34]
    // add edx, eax
    // mov ecx, esi
    // push edx
    // push -1
    // push ebp
    // CALL(0x482e40)
    // test eax, eax
    // if (...) GOTO(0x482dc6)
    // mov eax, dword ptr [edi + 0x58]
    // xor ecx, ecx
    // inc ebp
    // add ebx, 0x2c
    // mov cx, word ptr [eax + 0x60]
    // cmp ebp, ecx
    // if (...) GOTO(0x482cea)
    // push 0
    // push -1
    // push 0
    // mov ecx, esi
    // CALL(0x482e40)
    // neg eax
    // sbb eax, eax
    // inc eax
    // mov ecx, dword ptr [esp + 0x10]
    // pop edi
    // pop esi
    // pop ebp
    // mov dword ptr fs:[0], ecx
    // pop ebx
    // add esp, 0xc
    // return;
    // mov ecx, esi
    // CALL(0x482dd0)
    // mov eax, dword ptr [esp + 0x24]
    // if (...) GOTO(0x482da4)
    // mov eax, 1
    // if (...) GOTO(0x482da4)
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // push edi
    // xor edi, edi
    // mov ecx, dword ptr [esi + 0x34]
    // mov dword ptr [esi + 4], edi
    // cmp ecx, edi
    // mov dword ptr [esi + 0x38], edi
    // mov dword ptr [esi + 0x3c], edi
    // mov dword ptr [esi + 0x40], 0xffffffff
    // if (...) GOTO(0x482df6)
    // mov eax, dword ptr [ecx]
    // push 3
    // CALL(dword)
    // mov dword ptr [esi + 0x34], edi
    // lea ecx, [esi + 8]
    // CALL(0x473ae0)
    // pop edi
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, dword ptr [ecx + 4]
    // test eax, eax
    // if (...) GOTO(0x482e1a)
    // xor eax, eax
    // return;
    // lea eax, [ecx + 8]
    // return;
    // // nop
    // // nop
    // mov eax, ecx
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x482e2c)
    // xor eax, eax
    // return;
    // push 0
    // push eax
    // CALL(0x482420)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, ecx
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x482e4e)
    // xor eax, eax
    // return;
    // mov edx, dword ptr [esp + 0xc]
    // push edx
    // mov edx, dword ptr [esp + 8]
    // push eax
    // mov eax, dword ptr [esp + 0x10]
    // push eax
    // push edx
    // CALL(0x482490)
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // CALL(0x482e80)
    // if (...) GOTO(0x482e90)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x83acb0
    // if (...) GOTO(0x482fd0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x482ea0)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x83acb0
    // if (...) GOTO(0x483010)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // CALL(0x482ec0)
    // if (...) GOTO(0x482ed0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x83ac30
    // if (...) GOTO(0x482fd0)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push(0x482ee0)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, 0x83ac30
    // if (...) GOTO(0x483010)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // CALL(0x482f00)
    // if (...) GOTO(0x482f10)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push 1
    // mov ecx, 0x83ac88
    // CALL(0x482f60)
    // return;
    // // nop
    // // nop
    // // nop
    // push(0x482f20)  // ptr?
    // CALL(0x4a56d2)
    // pop ecx
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // mov cl, byte ptr [0x83ac28]
    // mov al, 1
    // test al, cl
    // if (...) GOTO(0x482f52)
    // or cl, al
    // mov byte ptr [0x83ac28], cl
    // mov ecx, 0x83aca8
    // CALL(0x4835f0)
    // mov eax, dword ptr [0x83acac]
    // mov dword ptr [0x83aca8], 0x4ba278
    // mov dword ptr [0x839650], eax
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push ecx
    // mov edx, dword ptr [esp + 8]
    // mov eax, ecx
    // xor ecx, ecx
    // cmp edx, ecx
    // mov dword ptr [esp], ecx
    // if (...) GOTO(0x482f8e)
    // mov dword ptr [eax + 4], 0x4babb4
    // mov dword ptr [eax + 0x20], 0x4ba278
    // mov edx, dword ptr [0x839650]
    // mov dword ptr [eax + 0x24], edx
    // mov dword ptr [0x839650], ecx
    // mov edx, dword ptr [eax + 4]
    // mov dword ptr [eax], 0x4ba2ac
    // mov edx, dword ptr [edx + 4]
    // mov dword ptr [edx + eax + 4], 0x4ba2a8
    // mov dword ptr [eax + 8], ecx
    // mov dword ptr [eax + 0xc], ecx
    // mov dword ptr [eax + 0x10], ecx
    // mov dword ptr [eax + 0x14], ecx
    // mov dword ptr [eax + 0x18], ecx
    // mov ecx, dword ptr [eax + 4]
    // mov dword ptr [eax], 0x4babac
    // mov edx, dword ptr [ecx + 4]
    // mov dword ptr [edx + eax + 4], 0x4baba8
    // pop ecx
    // return;
    // CALL(0x405097)
    // // nop
    // // nop
    // push ebx
    // mov eax, ecx
    // xor ebx, ebx
    // mov ecx, 5
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], 0x4babbc
    // lea edx, [eax + 0xc]
    // mov dword ptr [edx - 4], 0xffffffff
    // mov dword ptr [edx], ebx
    // mov byte ptr [edx + 4], bl
    // mov byte ptr [edx + 5], bl
    // mov dword ptr [edx + 8], ebx
    // add edx, 0x10
    // dec ecx
    // if (...) GOTO(0x482fe6)
    // mov dword ptr [eax + 4], ebx
    // pop ebx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov dword ptr [ecx], 0x4babbc
    // if (...) GOTO(0x483070)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov eax, ecx
    // return;
    // CALL(dword)
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // push esi
    // mov esi, ecx
    // CALL(0x483070)
    // mov ecx, dword ptr [0x83ad50]
    // push esi
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // mov dword ptr [esi + 4], eax
    // mov edx, dword ptr [eax]
    // mov ecx, eax
    // CALL(dword)
    // xor eax, eax
    // pop esi
    // return;
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // // nop
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x48306c)
    // mov eax, dword ptr [ecx]
    // CALL(dword)
    // xor eax, eax
    // return;
    // // nop
    // push ebx
    // push esi
    // mov esi, ecx
    // xor ebx, ebx
    // push edi
    // mov eax, dword ptr [esi + 4]
    // cmp eax, ebx
    // if (...) GOTO(0x483094)
    // mov ecx, dword ptr [0x83ad50]
    // cmp ecx, ebx
    // if (...) GOTO(0x483094)
    // mov edx, dword ptr [ecx]
    // push eax
}