;; Ball_MainFunction @ 0x00460cf0
;; Size: 362299 bytes
;; FPU count: 19
;; Call count: 347

  0x00460cf0:  lodsb    al, byte ptr [esi]
  0x00460cf1:  cmpsd    dword ptr [esi], dword ptr es:[edi]
  0x00460cf2:  cli      
  0x00460cf3:  dec      dword ptr [edi]
  0x00460cf5:  mov      edi, 0x58bcba05
  0x00460cfa:  add      byte ptr [edi], cl
  0x00460cfc:  mov      edi, 0x58bcbc0d
  0x00460d01:  add      byte ptr [ebx - 0x167cfb40], al
  0x00460d07:  add      al, 0xa3
  0x00460d09:  mov      al, byte ptr [0x89004c2b]
  0x00460d0e:  or       eax, 0x4c2ba4
  0x00460d13:  mov      edi, 0x4d44e0
  0x00460d18:  or       ecx, 0xffffffff
  0x00460d1b:  xor      eax, eax
  0x00460d1d:  push     -1
  0x00460d1f:  repne scasb al, byte ptr es:[edi]
  0x00460d21:  not      ecx
  0x00460d23:  sub      edi, ecx
  0x00460d25:  push     1
  0x00460d27:  mov      edx, ecx
  0x00460d29:  mov      esi, edi
  0x00460d2b:  mov      edi, 0x51a068
  0x00460d30:  push     0x80002190
  0x00460d35:  shr      ecx, 2
  0x00460d38:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460d3a:  mov      ecx, edx
  0x00460d3c:  mov      dword ptr [0x4c2844], 4
  0x00460d46:  and      ecx, 3
  0x00460d49:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460d4b:  call     0x40cb00 <<< CALL
  0x00460d50:  mov      eax, dword ptr [0x59e7b8]
  0x00460d55:  add      esp, 0x10
  0x00460d58:  and      ah, 0x7f
  0x00460d5b:  mov      dword ptr [0x567a18], 0
  0x00460d65:  mov      dword ptr [0x59e7b8], eax
  0x00460d6a:  pop      edi
  0x00460d6b:  pop      esi
  0x00460d6c:  ret      
  0x00460d6d:  lea      ecx, [ecx]
  0x00460d70:  sbb      al, 5
  0x00460d72:  inc      esi
  0x00460d73:  add      byte ptr [ebp + 5], dl
  0x00460d76:  inc      esi
  0x00460d77:  add      byte ptr [eax], al
  0x00460d79:  push     es
  0x00460d7a:  inc      esi
  0x00460d7b:  add      byte ptr [ecx + 0x1c004606], bh
  0x00460d81:  pop      es
  0x00460d82:  inc      esi
  0x00460d83:  add      byte ptr [edi + 7], bh
  0x00460d86:  inc      esi
  0x00460d87:  add      byte ptr [0x3c004608], cl
  0x00460d8d:  or       byte ptr [esi], al
  0x00460d90:  mov      cl, byte ptr [eax]
  0x00460d92:  inc      esi
  0x00460d93:  add      byte ptr [ecx - 0x15ffb9f8], bh
  0x00460d99:  or       al, 0x46
  0x00460d9b:  add      byte ptr [edx + 0xd], ch
  0x00460d9e:  inc      esi
  0x00460d9f:  add      byte ptr [edx + 0xd], ch
  0x00460da2:  inc      esi
  0x00460da3:  add      byte ptr [edx + 0xd], ch
  0x00460da6:  inc      esi
  0x00460da7:  add      byte ptr [edx + 0xd], ch
  0x00460daa:  inc      esi
  0x00460dab:  add      byte ptr [edx + 0xd], ch
  0x00460dae:  inc      esi
  0x00460daf:  add      byte ptr [edx + 0xd], ch
  0x00460db2:  inc      esi
  0x00460db3:  add      byte ptr [edx + 0xd], ch
  0x00460db6:  inc      esi
  0x00460db7:  add      byte ptr [edx + 0xd], ch
  0x00460dba:  inc      esi
  0x00460dbb:  add      byte ptr [edx + 0xd], ch
  0x00460dbe:  inc      esi
  0x00460dbf:  add      byte ptr [ecx], dl
  0x00460dc1:  or       dword ptr [esi], eax
  0x00460dc4:  or       word ptr [esi], ax
  0x00460dc8:  adc      dword ptr [edx], ecx
  0x00460dca:  inc      esi
  0x00460dcb:  add      byte ptr [ecx - 0x23ffb9f6], dl
  0x00460dd1:  or       al, byte ptr [esi]
  0x00460dd4:  push     ss
  0x00460dd5:  or       eax, dword ptr [esi]
  0x00460dd8:  mov      eax, dword ptr [0x2800460b]
  0x00460ddd:  or       al, 0x46
  0x00460ddf:  add      dl, ch
  0x00460de1:  or       al, 0x46
  0x00460de3:  add      byte ptr [eax - 0x6f6f6f70], dl
  0x00460de9:  nop      
  0x00460dea:  nop      
  0x00460deb:  nop      
  0x00460dec:  nop      
  0x00460ded:  nop      
  0x00460dee:  nop      
  0x00460def:  nop      
  0x00460df0:  push     ebx
  0x00460df1:  push     esi
  0x00460df2:  push     edi
  0x00460df3:  mov      edi, 0x4d5538
  0x00460df8:  or       ecx, 0xffffffff
  0x00460dfb:  xor      eax, eax
  0x00460dfd:  repne scasb al, byte ptr es:[edi]
  0x00460dff:  not      ecx
  0x00460e01:  sub      edi, ecx
  0x00460e03:  mov      ebx, dword ptr [esp + 0x10]
  0x00460e07:  mov      eax, ecx
  0x00460e09:  mov      esi, edi
  0x00460e0b:  mov      edi, 0x51a068
  0x00460e10:  push     0xa
  0x00460e12:  shr      ecx, 2
  0x00460e15:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460e17:  mov      ecx, eax
  0x00460e19:  push     0x824134
  0x00460e1e:  and      ecx, 3
  0x00460e21:  push     ebx
  0x00460e22:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460e24:  call     0x4ad425 <<< CALL
  0x00460e29:  mov      edi, eax
  0x00460e2b:  or       ecx, 0xffffffff
  0x00460e2e:  xor      eax, eax
  0x00460e30:  add      esp, 0xc
  0x00460e33:  repne scasb al, byte ptr es:[edi]
  0x00460e35:  not      ecx
  0x00460e37:  sub      edi, ecx
  0x00460e39:  mov      esi, edi
  0x00460e3b:  mov      edx, ecx
  0x00460e3d:  mov      edi, 0x51a068
  0x00460e42:  or       ecx, 0xffffffff
  0x00460e45:  repne scasb al, byte ptr es:[edi]
  0x00460e47:  mov      ecx, edx
  0x00460e49:  dec      edi
  0x00460e4a:  shr      ecx, 2
  0x00460e4d:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460e4f:  mov      ecx, edx
  0x00460e51:  and      ecx, 3
  0x00460e54:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460e56:  mov      edi, 0x4d5514
  0x00460e5b:  or       ecx, 0xffffffff
  0x00460e5e:  repne scasb al, byte ptr es:[edi]
  0x00460e60:  not      ecx
  0x00460e62:  sub      edi, ecx
  0x00460e64:  mov      esi, edi
  0x00460e66:  mov      edx, ecx
  0x00460e68:  mov      edi, 0x51a068
  0x00460e6d:  or       ecx, 0xffffffff
  0x00460e70:  repne scasb al, byte ptr es:[edi]
  0x00460e72:  mov      ecx, edx
  0x00460e74:  dec      edi
  0x00460e75:  shr      ecx, 2
  0x00460e78:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460e7a:  mov      eax, dword ptr [esp + 0x14]
  0x00460e7e:  mov      ecx, edx
  0x00460e80:  and      ecx, 3
  0x00460e83:  dec      eax
  0x00460e84:  cmp      eax, 6
  0x00460e87:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460e89:  ja       0x4610e3
  0x00460e8f:  jmp      dword ptr [eax*4 + 0x4610e8]
  0x00460e96:  mov      edi, 0x4d54bc
  0x00460e9b:  or       ecx, 0xffffffff
  0x00460e9e:  xor      eax, eax
  0x00460ea0:  repne scasb al, byte ptr es:[edi]
  0x00460ea2:  not      ecx
  0x00460ea4:  sub      edi, ecx
  0x00460ea6:  mov      esi, edi
  0x00460ea8:  mov      edx, ecx
  0x00460eaa:  mov      edi, 0x51a068
  0x00460eaf:  or       ecx, 0xffffffff
  0x00460eb2:  repne scasb al, byte ptr es:[edi]
  0x00460eb4:  mov      ecx, edx
  0x00460eb6:  dec      edi
  0x00460eb7:  shr      ecx, 2
  0x00460eba:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460ebc:  mov      ecx, edx
  0x00460ebe:  and      ecx, 3
  0x00460ec1:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460ec3:  pop      edi
  0x00460ec4:  pop      esi
  0x00460ec5:  pop      ebx
  0x00460ec6:  ret      
  0x00460ec7:  mov      edi, 0x4d5450
  0x00460ecc:  or       ecx, 0xffffffff
  0x00460ecf:  xor      eax, eax
  0x00460ed1:  repne scasb al, byte ptr es:[edi]
  0x00460ed3:  not      ecx
  0x00460ed5:  sub      edi, ecx
  0x00460ed7:  mov      esi, edi
  0x00460ed9:  mov      edx, ecx
  0x00460edb:  mov      edi, 0x51a068
  0x00460ee0:  or       ecx, 0xffffffff
  0x00460ee3:  repne scasb al, byte ptr es:[edi]
  0x00460ee5:  mov      ecx, edx
  0x00460ee7:  dec      edi
  0x00460ee8:  shr      ecx, 2
  0x00460eeb:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460eed:  mov      ecx, edx
  0x00460eef:  and      ecx, 3
  0x00460ef2:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460ef4:  pop      edi
  0x00460ef5:  pop      esi
  0x00460ef6:  pop      ebx
  0x00460ef7:  ret      
  0x00460ef8:  mov      edi, 0x4d53c0
  0x00460efd:  or       ecx, 0xffffffff
  0x00460f00:  xor      eax, eax
  0x00460f02:  repne scasb al, byte ptr es:[edi]
  0x00460f04:  not      ecx
  0x00460f06:  sub      edi, ecx
  0x00460f08:  mov      esi, edi
  0x00460f0a:  mov      edx, ecx
  0x00460f0c:  mov      edi, 0x51a068
  0x00460f11:  or       ecx, 0xffffffff
  0x00460f14:  repne scasb al, byte ptr es:[edi]
  0x00460f16:  mov      ecx, edx
  0x00460f18:  dec      edi
  0x00460f19:  shr      ecx, 2
  0x00460f1c:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460f1e:  mov      eax, dword ptr [0x822c88]
  0x00460f23:  mov      ecx, edx
  0x00460f25:  and      ecx, 3
  0x00460f28:  cmp      eax, 2
  0x00460f2b:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460f2d:  jl       0x4610e3
  0x00460f33:  mov      eax, ebx
  0x00460f35:  shl      eax, 6
  0x00460f38:  add      eax, ebx
  0x00460f3a:  shl      eax, 3
  0x00460f3d:  mov      ecx, dword ptr [eax + 0x575acc]
  0x00460f43:  mov      edx, dword ptr [eax + 0x575ac8]
  0x00460f49:  shl      ecx, 0xa
  0x00460f4c:  shl      edx, 0xa
  0x00460f4f:  add      ecx, 0x200
  0x00460f55:  add      edx, 0x200
  0x00460f5b:  push     ecx
  0x00460f5c:  push     edx
  0x00460f5d:  push     0
  0x00460f5f:  call     0x46e7b0 <<< CALL
  0x00460f64:  add      esp, 0xc
  0x00460f67:  pop      edi
  0x00460f68:  pop      esi
  0x00460f69:  pop      ebx
  0x00460f6a:  ret      
  0x00460f6b:  mov      edi, 0x4d532c
  0x00460f70:  or       ecx, 0xffffffff
  0x00460f73:  xor      eax, eax
  0x00460f75:  repne scasb al, byte ptr es:[edi]
  0x00460f77:  not      ecx
  0x00460f79:  sub      edi, ecx
  0x00460f7b:  mov      esi, edi
  0x00460f7d:  mov      edx, ecx
  0x00460f7f:  mov      edi, 0x51a068
  0x00460f84:  or       ecx, 0xffffffff
  0x00460f87:  repne scasb al, byte ptr es:[edi]
  0x00460f89:  mov      ecx, edx
  0x00460f8b:  dec      edi
  0x00460f8c:  shr      ecx, 2
  0x00460f8f:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460f91:  mov      ecx, edx
  0x00460f93:  and      ecx, 3
  0x00460f96:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460f98:  pop      edi
  0x00460f99:  pop      esi
  0x00460f9a:  pop      ebx
  0x00460f9b:  ret      
  0x00460f9c:  mov      edi, 0x4d52b8
  0x00460fa1:  or       ecx, 0xffffffff
  0x00460fa4:  xor      eax, eax
  0x00460fa6:  repne scasb al, byte ptr es:[edi]
  0x00460fa8:  not      ecx
  0x00460faa:  sub      edi, ecx
  0x00460fac:  mov      esi, edi
  0x00460fae:  mov      edx, ecx
  0x00460fb0:  mov      edi, 0x51a068
  0x00460fb5:  or       ecx, 0xffffffff
  0x00460fb8:  repne scasb al, byte ptr es:[edi]
  0x00460fba:  mov      ecx, edx
  0x00460fbc:  dec      edi
  0x00460fbd:  shr      ecx, 2
  0x00460fc0:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00460fc2:  mov      eax, dword ptr [0x822c88]
  0x00460fc7:  mov      ecx, edx
  0x00460fc9:  and      ecx, 3
  0x00460fcc:  cmp      eax, 2
  0x00460fcf:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00460fd1:  jl       0x4610e3
  0x00460fd7:  mov      eax, ebx
  0x00460fd9:  shl      eax, 6
  0x00460fdc:  add      eax, ebx
  0x00460fde:  shl      eax, 3
  0x00460fe1:  mov      ecx, dword ptr [eax + 0x575acc]
  0x00460fe7:  mov      edx, dword ptr [eax + 0x575ac8]
  0x00460fed:  shl      ecx, 0xa
  0x00460ff0:  shl      edx, 0xa
  0x00460ff3:  add      ecx, 0x200
  0x00460ff9:  add      edx, 0x200
  0x00460fff:  push     ecx
  0x00461000:  push     edx
  0x00461001:  push     1
  0x00461003:  call     0x46e7b0 <<< CALL
  0x00461008:  add      esp, 0xc
  0x0046100b:  pop      edi
  0x0046100c:  pop      esi
  0x0046100d:  pop      ebx
  0x0046100e:  ret      
  0x0046100f:  mov      edi, 0x4d522c
  0x00461014:  or       ecx, 0xffffffff
  0x00461017:  xor      eax, eax
  0x00461019:  repne scasb al, byte ptr es:[edi]
  0x0046101b:  not      ecx
  0x0046101d:  sub      edi, ecx
  0x0046101f:  mov      esi, edi
  0x00461021:  mov      edx, ecx
  0x00461023:  mov      edi, 0x51a068
  0x00461028:  or       ecx, 0xffffffff
  0x0046102b:  repne scasb al, byte ptr es:[edi]
  0x0046102d:  mov      ecx, edx
  0x0046102f:  dec      edi
  0x00461030:  shr      ecx, 2
  0x00461033:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00461035:  mov      eax, dword ptr [0x822c88]
  0x0046103a:  mov      ecx, edx
  0x0046103c:  and      ecx, 3
  0x0046103f:  cmp      eax, 2
  0x00461042:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00461044:  jl       0x4610e3
  0x0046104a:  mov      eax, ebx
  0x0046104c:  shl      eax, 6
  0x0046104f:  add      eax, ebx
  0x00461051:  shl      eax, 3
  0x00461054:  mov      ecx, dword ptr [eax + 0x575acc]
  0x0046105a:  mov      edx, dword ptr [eax + 0x575ac8]
  0x00461060:  shl      ecx, 0xa
  0x00461063:  shl      edx, 0xa
  0x00461066:  add      ecx, 0x200
  0x0046106c:  add      edx, 0x200
  0x00461072:  push     ecx
  0x00461073:  push     edx
  0x00461074:  push     4
  0x00461076:  call     0x46e7b0 <<< CALL
  0x0046107b:  add      esp, 0xc
  0x0046107e:  pop      edi
  0x0046107f:  pop      esi
  0x00461080:  pop      ebx
  0x00461081:  ret      
  0x00461082:  mov      edi, 0x4d51a4
  0x00461087:  or       ecx, 0xffffffff
  0x0046108a:  xor      eax, eax
  0x0046108c:  repne scasb al, byte ptr es:[edi]
  0x0046108e:  not      ecx
  0x00461090:  sub      edi, ecx
  0x00461092:  mov      esi, edi
  0x00461094:  mov      edx, ecx
  0x00461096:  mov      edi, 0x51a068
  0x0046109b:  or       ecx, 0xffffffff
  0x0046109e:  repne scasb al, byte ptr es:[edi]
  0x004610a0:  mov      ecx, edx
  0x004610a2:  dec      edi
  0x004610a3:  shr      ecx, 2
  0x004610a6:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004610a8:  mov      eax, ebx
  0x004610aa:  mov      ecx, edx
  0x004610ac:  shl      eax, 6
  0x004610af:  add      eax, ebx
  0x004610b1:  and      ecx, 3
  0x004610b4:  shl      eax, 3
  0x004610b7:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004610b9:  mov      ecx, dword ptr [eax + 0x575acc]
  0x004610bf:  mov      edx, dword ptr [eax + 0x575ac8]
  0x004610c5:  shl      ecx, 0xa
  0x004610c8:  shl      edx, 0xa
  0x004610cb:  add      ecx, 0x200
  0x004610d1:  add      edx, 0x200
  0x004610d7:  push     ecx
  0x004610d8:  push     edx
  0x004610d9:  push     9
  0x004610db:  call     0x46e7b0 <<< CALL
  0x004610e0:  add      esp, 0xc
  0x004610e3:  pop      edi
  0x004610e4:  pop      esi
  0x004610e5:  pop      ebx
  0x004610e6:  ret      
  0x004610e7:  nop      
  0x004610e8:  xchg     esi, eax
  0x004610e9:  push     cs
  0x004610ea:  inc      esi
  0x004610eb:  add      bh, al
  0x004610ed:  push     cs
  0x004610ee:  inc      esi
  0x004610ef:  add      al, bh
  0x004610f1:  push     cs
  0x004610f2:  inc      esi
  0x004610f3:  add      byte ptr [ebx + 0xf], ch
  0x004610f6:  inc      esi
  0x004610f7:  add      byte ptr [edi + ecx + 0x100f0046], bl
  0x004610fe:  inc      esi
  0x004610ff:  add      byte ptr [edx - 0x6fffb9f0], al
  0x00461105:  nop      
  0x00461106:  nop      
  0x00461107:  nop      
  0x00461108:  nop      
  0x00461109:  nop      
  0x0046110a:  nop      
  0x0046110b:  nop      
  0x0046110c:  nop      
  0x0046110d:  nop      
  0x0046110e:  nop      
  0x0046110f:  nop      
  0x00461110:  sub      esp, 0x14
  0x00461113:  mov      ecx, dword ptr [0x4c1570]
  0x00461119:  push     ebx
  0x0046111a:  push     ebp
  0x0046111b:  push     esi
  0x0046111c:  push     edi
  0x0046111d:  push     0
  0x0046111f:  push     0
  0x00461121:  push     0
  0x00461123:  push     0x519fd8
  0x00461128:  call     0x4762d0 <<< CALL
  0x0046112d:  mov      ebx, dword ptr [esp + 0x28]
  0x00461131:  push     0x80007fff
  0x00461136:  push     0x207
  0x0046113b:  mov      ebp, 0x228
  0x00461140:  push     0x19a
  0x00461145:  push     0x4c88a8
  0x0046114a:  mov      dword ptr [esp + 0x30], ebp
  0x0046114e:  mov      dword ptr [esp + 0x20], ebx
  0x00461152:  mov      dword ptr [esp + 0x2c], 0
  0x0046115a:  call     0x4049d0 <<< CALL
  0x0046115f:  push     0x80007fff
  0x00461164:  push     0x216
  0x00461169:  push     0x19e
  0x0046116e:  push     0x4c88f8
  0x00461173:  call     0x4049d0 <<< CALL
  0x00461178:  mov      ecx, dword ptr [0x4c1570]
  0x0046117e:  add      esp, 0x20
  0x00461181:  push     0
  0x00461183:  push     0
  0x00461185:  push     0
  0x00461187:  push     0x51b360
  0x0046118c:  call     0x4762d0 <<< CALL
  0x00461191:  mov      eax, ebx
  0x00461193:  xor      eax, 1
  0x00461196:  shl      eax, 8
  0x00461199:  mov      cl, byte ptr [eax + 0x5794d0]
  0x0046119f:  and      cl, 0xe0
  0x004611a2:  cmp      cl, 0x20
  0x004611a5:  jne      0x461287
  0x004611ab:  mov      eax, dword ptr [0x59e7b8]
  0x004611b0:  push     0x80000000
  0x004611b5:  test     eax, 0x200000
  0x004611ba:  push     0x20a
  0x004611bf:  je       0x4611f1
  0x004611c1:  push     0x145
  0x004611c6:  push     0x4d55c8
  0x004611cb:  call     0x4049d0 <<< CALL
  0x004611d0:  push     0x80000000
  0x004611d5:  push     0x215
  0x004611da:  push     0x145
  0x004611df:  push     0x4d55bc
  0x004611e4:  call     0x4049d0 <<< CALL
  0x004611e9:  add      esp, 0x20
  0x004611ec:  jmp      0x4612c2
  0x004611f1:  push     0x14e
  0x004611f6:  push     0x4d55b0
  0x004611fb:  call     0x4049d0 <<< CALL
  0x00461200:  mov      edi, 0x4c61e0
  0x00461205:  or       ecx, 0xffffffff
  0x00461208:  xor      eax, eax
  0x0046120a:  repne scasb al, byte ptr es:[edi]
  0x0046120c:  not      ecx
  0x0046120e:  mov      eax, dword ptr [0x59b730]
  0x00461213:  sub      edi, ecx
  0x00461215:  mov      edx, ecx
  0x00461217:  mov      esi, edi
  0x00461219:  mov      edi, 0x51a068
  0x0046121e:  lea      eax, [eax + eax*4]
  0x00461221:  shr      ecx, 2
  0x00461224:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00461226:  lea      eax, [eax + eax*4]
  0x00461229:  mov      ecx, edx
  0x0046122b:  and      ecx, 3
  0x0046122e:  lea      eax, [eax + eax*4]
  0x00461231:  shl      eax, 4
  0x00461234:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00461236:  push     eax
  0x00461237:  call     0x42dc00 <<< CALL
  0x0046123c:  mov      edi, 0x4d55a8
  0x00461241:  or       ecx, 0xffffffff
  0x00461244:  xor      eax, eax
  0x00461246:  push     0x80000000
  0x0046124b:  repne scasb al, byte ptr es:[edi]
  0x0046124d:  not      ecx
  0x0046124f:  sub      edi, ecx
  0x00461251:  push     0x215
  0x00461256:  mov      esi, edi
  0x00461258:  mov      edx, ecx
  0x0046125a:  mov      edi, 0x51a068
  0x0046125f:  or       ecx, 0xffffffff
  0x00461262:  repne scasb al, byte ptr es:[edi]
  0x00461264:  mov      ecx, edx
  0x00461266:  dec      edi
  0x00461267:  shr      ecx, 2
  0x0046126a:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046126c:  mov      ecx, edx
  0x0046126e:  push     0x140
  0x00461273:  and      ecx, 3
  0x00461276:  push     0x51a068
  0x0046127b:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046127d:  call     0x4049d0 <<< CALL
  0x00461282:  add      esp, 0x24
  0x00461285:  jmp      0x4612c2
  0x00461287:  push     0x80000000
  0x0046128c:  push     0x20a
  0x00461291:  push     0x14e
  0x00461296:  push     0x4d559c
  0x0046129b:  call     0x4049d0 <<< CALL
  0x004612a0:  push     0x80000000
  0x004612a5:  push     0x215
  0x004612aa:  push     0x14e
  0x004612af:  push     0x4d5594
  0x004612b4:  call     0x4049d0 <<< CALL
  0x004612b9:  add      esp, 0x20
  0x004612bc:  jmp      0x4612c2
  0x004612be:  mov      ebx, dword ptr [esp + 0x28]
  0x004612c2:  mov      esi, dword ptr [esp + 0x10]
  0x004612c6:  push     0
  0x004612c8:  push     esi
  0x004612c9:  mov      byte ptr [0x51a068], 0
  0x004612d0:  call     0x4676e0 <<< CALL
  0x004612d5:  add      esp, 8
  0x004612d8:  cmp      esi, ebx
  0x004612da:  jne      0x461309
  0x004612dc:  mov      edi, 0x4d558c
  0x004612e1:  or       ecx, 0xffffffff
  0x004612e4:  xor      eax, eax
  0x004612e6:  repne scasb al, byte ptr es:[edi]
  0x004612e8:  not      ecx
  0x004612ea:  sub      edi, ecx
  0x004612ec:  mov      esi, edi
  0x004612ee:  mov      edx, ecx
  0x004612f0:  mov      edi, 0x51a068
  0x004612f5:  or       ecx, 0xffffffff
  0x004612f8:  repne scasb al, byte ptr es:[edi]
  0x004612fa:  mov      ecx, edx
  0x004612fc:  dec      edi
  0x004612fd:  shr      ecx, 2
  0x00461300:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00461302:  mov      ecx, edx
  0x00461304:  and      ecx, 3
  0x00461307:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00461309:  mov      ecx, dword ptr [0x4c1570]
  0x0046130f:  push     0
  0x00461311:  push     0
  0x00461313:  push     0
  0x00461315:  push     0x51b360
  0x0046131a:  call     0x4762d0 <<< CALL
  0x0046131f:  mov      ecx, dword ptr [0x4c1570]
  0x00461325:  push     0x51a068
  0x0046132a:  call     0x477250 <<< CALL
  0x0046132f:  cmp      eax, 0x73
  0x00461332:  jle      0x46134a
  0x00461334:  mov      ecx, dword ptr [0x4c1570]
  0x0046133a:  push     0
  0x0046133c:  push     0
  0x0046133e:  push     0
  0x00461340:  push     0x519fd8
  0x00461345:  call     0x4762d0 <<< CALL
  0x0046134a:  push     0x80000000
  0x0046134f:  push     ebp
  0x00461350:  push     0x140
  0x00461355:  push     0x51a068
  0x0046135a:  call     0x4049d0 <<< CALL
  0x0046135f:  mov      ecx, dword ptr [0x4c1570]
  0x00461365:  add      esp, 0x10
  0x00461368:  push     0
  0x0046136a:  push     0
  0x0046136c:  push     0
  0x0046136e:  push     0x51b360
  0x00461373:  call     0x4762d0 <<< CALL
  0x00461378:  xor      ebx, ebx
  0x0046137a:  mov      dword ptr [esp + 0x14], 0x575ab0
  0x00461382:  mov      dword ptr [esp + 0x18], 0x1aa
  0x0046138a:  jmp      0x461390
  0x0046138c:  mov      ebp, dword ptr [esp + 0x20]
  0x00461390:  mov      eax, dword ptr [esp + 0x14]
  0x00461394:  cmp      byte ptr [eax], 0
  0x00461397:  je       0x461594
  0x0046139d:  mov      ecx, dword ptr [esp + 0x28]
  0x004613a1:  mov      eax, dword ptr [esp + 0x10]
  0x004613a5:  cmp      eax, ecx
  0x004613a7:  jne      0x461463
  0x004613ad:  push     0xa
  0x004613af:  push     0x824134
  0x004613b4:  push     ebx
  0x004613b5:  mov      byte ptr [0x51a068], 0
  0x004613bc:  call     0x4ad425 <<< CALL
  0x004613c1:  mov      edi, eax
  0x004613c3:  or       ecx, 0xffffffff
  0x004613c6:  xor      eax, eax
  0x004613c8:  add      ebp, -0x13
  0x004613cb:  repne scasb al, byte ptr es:[edi]
  0x004613cd:  not      ecx
  0x004613cf:  sub      edi, ecx
  0x004613d1:  push     0x80006318
  0x004613d6:  mov      esi, edi
  0x004613d8:  mov      edx, ecx
  0x004613da:  mov      edi, 0x51a068
  0x004613df:  or       ecx, 0xffffffff
  0x004613e2:  repne scasb al, byte ptr es:[edi]
  0x004613e4:  mov      ecx, edx
  0x004613e6:  dec      edi
  0x004613e7:  shr      ecx, 2
  0x004613ea:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004613ec:  mov      ecx, edx
  0x004613ee:  lea      eax, [ebp - 0xf]
  0x004613f1:  and      ecx, 3
  0x004613f4:  push     eax
  0x004613f5:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004613f7:  mov      ecx, dword ptr [esp + 0x2c]
  0x004613fb:  push     ecx
  0x004613fc:  push     0x51a068
  0x00461401:  call     0x404b70 <<< CALL
  0x00461406:  mov      edx, dword ptr [esp + 0x30]
  0x0046140a:  push     0xa
  0x0046140c:  push     0x824134
  0x00461411:  mov      byte ptr [0x51a068], 0
  0x00461418:  movsx    eax, byte ptr [edx]
  0x0046141b:  push     eax
  0x0046141c:  call     0x4ad425 <<< CALL
  0x00461421:  mov      edi, eax
  0x00461423:  or       ecx, 0xffffffff
  0x00461426:  xor      eax, eax
  0x00461428:  push     0x80006318
  0x0046142d:  repne scasb al, byte ptr es:[edi]
  0x0046142f:  not      ecx
  0x00461431:  sub      edi, ecx
  0x00461433:  push     ebp
  0x00461434:  mov      esi, edi
  0x00461436:  mov      edx, ecx
  0x00461438:  mov      edi, 0x51a068
  0x0046143d:  or       ecx, 0xffffffff
  0x00461440:  repne scasb al, byte ptr es:[edi]
  0x00461442:  mov      ecx, edx
  0x00461444:  dec      edi
  0x00461445:  shr      ecx, 2
  0x00461448:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046144a:  mov      eax, dword ptr [esp + 0x48]
  0x0046144e:  mov      ecx, edx
  0x00461450:  and      ecx, 3
  0x00461453:  push     eax
  0x00461454:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00461456:  push     0x51a068
  0x0046145b:  call     0x404b70 <<< CALL
  0x00461460:  add      esp, 0x38
  0x00461463:  mov      ebp, dword ptr [esp + 0x10]
  0x00461467:  shl      ebp, 8
  0x0046146a:  movsx    eax, byte ptr [ebp + 0x5794d9]
  0x00461471:  cmp      eax, ebx
  0x00461473:  jl       0x461594
  0x00461479:  push     0xa
  0x0046147b:  mov      byte ptr [0x51a068], 0
  0x00461482:  push     0x824134
  0x00461487:  jne      0x4614c5
  0x00461489:  movsx    ecx, byte ptr [ebp + 0x5794da]
  0x00461490:  push     ecx
  0x00461491:  call     0x4ad425 <<< CALL
  0x00461496:  mov      edi, eax
  0x00461498:  or       ecx, 0xffffffff
  0x0046149b:  xor      eax, eax
  0x0046149d:  add      esp, 0xc
  0x004614a0:  repne scasb al, byte ptr es:[edi]
  0x004614a2:  not      ecx
  0x004614a4:  sub      edi, ecx
  0x004614a6:  mov      esi, edi
  0x004614a8:  mov      edx, ecx
  0x004614aa:  mov      edi, 0x51a068
  0x004614af:  or       ecx, 0xffffffff
  0x004614b2:  repne scasb al, byte ptr es:[edi]
  0x004614b4:  mov      ecx, edx
  0x004614b6:  dec      edi
  0x004614b7:  shr      ecx, 2
  0x004614ba:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004614bc:  mov      ecx, edx
  0x004614be:  and      ecx, 3
  0x004614c1:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004614c3:  jmp      0x46152c
  0x004614c5:  movsx    eax, byte ptr [ebx + ebp + 0x5794db]
  0x004614cd:  push     eax
  0x004614ce:  call     0x4ad425 <<< CALL
  0x004614d3:  mov      edi, eax
  0x004614d5:  or       ecx, 0xffffffff
  0x004614d8:  xor      eax, eax
  0x004614da:  add      esp, 0xc
  0x004614dd:  repne scasb al, byte ptr es:[edi]
  0x004614df:  not      ecx
  0x004614e1:  sub      edi, ecx
  0x004614e3:  mov      esi, edi
  0x004614e5:  mov      edx, ecx
  0x004614e7:  mov      edi, 0x51a068
  0x004614ec:  or       ecx, 0xffffffff
  0x004614ef:  repne scasb al, byte ptr es:[edi]
  0x004614f1:  mov      ecx, edx
  0x004614f3:  dec      edi
  0x004614f4:  shr      ecx, 2
  0x004614f7:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004614f9:  mov      eax, dword ptr [esp + 0x28]
  0x004614fd:  mov      ecx, edx
  0x004614ff:  and      ecx, 3
  0x00461502:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00461504:  cmp      dword ptr [esp + 0x10], eax
  0x00461508:  jne      0x46151a
  0x0046150a:  movsx    ecx, byte ptr [ebx + ebp + 0x5794db]
  0x00461512:  mov      eax, dword ptr [esp + 0x1c]
  0x00461516:  sub      eax, ecx
  0x00461518:  jmp      0x461528
  0x0046151a:  movsx    edx, byte ptr [ebx + ebp + 0x5794db]
  0x00461522:  mov      eax, dword ptr [esp + 0x1c]
  0x00461526:  add      eax, edx
  0x00461528:  mov      dword ptr [esp + 0x1c], eax
  0x0046152c:  movsx    eax, byte ptr [ebp + 0x5794d9]
  0x00461533:  cmp      eax, ebx
  0x00461535:  mov      esi, 0x80004210
  0x0046153a:  je       0x46157c
  0x0046153c:  mov      ecx, dword ptr [esp + 0x14]
  0x00461540:  mov      al, byte ptr [ebx + ebp + 0x5794db]
  0x00461547:  mov      esi, 0x80002108
  0x0046154c:  mov      cl, byte ptr [ecx]
  0x0046154e:  cmp      al, cl
  0x00461550:  jge      0x461557
  0x00461552:  mov      esi, 0x80006000
  0x00461557:  movsx    edx, cl
  0x0046155a:  movsx    edi, al
  0x0046155d:  lea      ebp, [edx - 1]
  0x00461560:  cmp      edi, ebp
  0x00461562:  jge      0x461569
  0x00461564:  mov      esi, 0x80007d08
  0x00461569:  cmp      al, cl
  0x0046156b:  jle      0x461572
  0x0046156d:  mov      esi, 0x80000018
  0x00461572:  inc      edx
  0x00461573:  cmp      edi, edx
  0x00461575:  jle      0x46157c
  0x00461577:  mov      esi, 0x80004010
  0x0046157c:  mov      edx, dword ptr [esp + 0x20]
  0x00461580:  mov      eax, dword ptr [esp + 0x18]
  0x00461584:  push     esi
  0x00461585:  push     edx
  0x00461586:  push     eax
  0x00461587:  push     0x51a068
  0x0046158c:  call     0x404b70 <<< CALL
  0x00461591:  add      esp, 0x10
  0x00461594:  mov      eax, dword ptr [esp + 0x18]
  0x00461598:  mov      esi, dword ptr [esp + 0x14]
  0x0046159c:  add      eax, 0x12
  0x0046159f:  inc      ebx
  0x004615a0:  add      esi, 0x208
  0x004615a6:  cmp      eax, 0x300
  0x004615ab:  mov      dword ptr [esp + 0x14], esi
  0x004615af:  mov      dword ptr [esp + 0x18], eax
  0x004615b3:  jl       0x46138c
  0x004615b9:  mov      ecx, dword ptr [esp + 0x10]
  0x004615bd:  mov      ebp, dword ptr [esp + 0x20]
  0x004615c1:  shl      ecx, 8
  0x004615c4:  add      ebp, 0x15
  0x004615c7:  movsx    edx, word ptr [ecx + 0x57955a]
  0x004615ce:  cmp      ebp, 0x24e
  0x004615d4:  mov      dword ptr [esp + 0x10], edx
  0x004615d8:  mov      dword ptr [esp + 0x20], ebp
  0x004615dc:  jl       0x4612be
  0x004615e2:  pop      edi
  0x004615e3:  pop      esi
  0x004615e4:  pop      ebp
  0x004615e5:  pop      ebx
  0x004615e6:  add      esp, 0x14
  0x004615e9:  ret      
  0x004615ea:  call     0x405098 <<< CALL
  0x004615ef:  nop      
  0x004615f0:  sub      esp, 8
  0x004615f3:  mov      eax, dword ptr [esp + 0x14]
  0x004615f7:  push     ebx
  0x004615f8:  push     ebp
  0x004615f9:  push     esi
  0x004615fa:  lea      ecx, [eax + eax]
  0x004615fd:  mov      eax, 0x55555556
  0x00461602:  imul     ecx
  0x00461604:  mov      eax, dword ptr [esp + 0x18]
  0x00461608:  push     edi
  0x00461609:  mov      ecx, edx
  0x0046160b:  mov      dword ptr [esp + 0x24], 0xfffffff9
  0x00461613:  lea      edi, [eax + eax*4 - 0x23]
  0x00461617:  mov      dword ptr [esp + 0x10], 0xffffffeb
  0x0046161f:  shr      ecx, 0x1f
  0x00461622:  add      edx, ecx
  0x00461624:  lea      edi, [edi + edi*4]
  0x00461627:  mov      ebx, edx
  0x00461629:  shl      edi, 1
  0x0046162b:  jmp      0x461631
  0x0046162d:  mov      eax, dword ptr [esp + 0x1c]
  0x00461631:  mov      edx, dword ptr [esp + 0x24]
  0x00461635:  mov      ebp, 0xffffffeb
  0x0046163a:  add      edx, eax
  0x0046163c:  mov      eax, dword ptr [esp + 0x20]
  0x00461640:  mov      dword ptr [esp + 0x14], edx
  0x00461644:  lea      esi, [eax - 7]
  0x00461647:  mov      ecx, dword ptr [esp + 0x14]
  0x0046164b:  push     esi
  0x0046164c:  push     ecx
  0x0046164d:  call     0x40bf60 <<< CALL
  0x00461652:  add      esp, 8
  0x00461655:  test     eax, eax
  0x00461657:  jne      0x4616bb
  0x00461659:  mov      edx, dword ptr [esp + 0x10]
  0x0046165d:  push     ebp
  0x0046165e:  push     edx
  0x0046165f:  call     0x467170 <<< CALL
  0x00461664:  lea      ecx, [eax + 2]
  0x00461667:  add      esp, 8
  0x0046166a:  mov      eax, ebx
  0x0046166c:  test     ebx, ebx
  0x0046166e:  cdq      
  0x0046166f:  jle      0x461697
  0x00461671:  idiv     ecx
  0x00461673:  xor      edx, edx
  0x00461675:  push     0xff
  0x0046167a:  mov      dl, byte ptr [edi + esi + 0x82376c]
  0x00461681:  push     0
  0x00461683:  add      eax, edx
  0x00461685:  push     eax
  0x00461686:  call     0x467130 <<< CALL
  0x0046168b:  add      esp, 0xc
  0x0046168e:  mov      byte ptr [edi + esi + 0x82376c], al
  0x00461695:  jmp      0x4616bb
  0x00461697:  idiv     ecx
  0x00461699:  xor      ecx, ecx
  0x0046169b:  push     0xff
  0x004616a0:  mov      cl, byte ptr [edi + esi + 0x822da0]
  0x004616a7:  push     0
  0x004616a9:  sub      ecx, eax
  0x004616ab:  push     ecx
  0x004616ac:  call     0x467130 <<< CALL
  0x004616b1:  add      esp, 0xc
  0x004616b4:  mov      byte ptr [edi + esi + 0x822da0], al
  0x004616bb:  add      ebp, 3
  0x004616be:  inc      esi
  0x004616bf:  cmp      ebp, 0x15
  0x004616c2:  jle      0x461647
  0x004616c4:  mov      eax, dword ptr [esp + 0x10]
  0x004616c8:  mov      ebp, dword ptr [esp + 0x24]
  0x004616cc:  add      eax, 3
  0x004616cf:  inc      ebp
  0x004616d0:  add      edi, 0x32
  0x004616d3:  cmp      eax, 0x15
  0x004616d6:  mov      dword ptr [esp + 0x24], ebp
  0x004616da:  mov      dword ptr [esp + 0x10], eax
  0x004616de:  jle      0x46162d
  0x004616e4:  pop      edi
  0x004616e5:  pop      esi
  0x004616e6:  pop      ebp
  0x004616e7:  pop      ebx
  0x004616e8:  add      esp, 8
  0x004616eb:  ret      
  0x004616ec:  nop      
  0x004616ed:  nop      
  0x004616ee:  nop      
  0x004616ef:  nop      
  0x004616f0:  push     ecx
  0x004616f1:  push     ebx
  0x004616f2:  push     esi
  0x004616f3:  push     edi
  0x004616f4:  xor      ebx, ebx
  0x004616f6:  mov      esi, 0x53ea24
  0x004616fb:  xor      eax, eax
  0x004616fd:  xor      ecx, ecx
  0x004616ff:  mov      cl, byte ptr [esi + eax]
  0x00461702:  add      ebx, ecx
  0x00461704:  inc      eax
  0x00461705:  cmp      eax, 0x32
  0x00461708:  jl       0x4616fd
  0x0046170a:  add      esi, 0x32
  0x0046170d:  cmp      esi, 0x53f3e8
  0x00461713:  jl       0x4616fb
  0x00461715:  mov      ecx, 0x271
  0x0046171a:  xor      eax, eax
  0x0046171c:  mov      edi, 0x82376c
  0x00461721:  cmp      ebx, 0xa
  0x00461724:  rep stosd dword ptr es:[edi], eax
  0x00461726:  mov      ecx, 0x271
  0x0046172b:  mov      edi, 0x822da0
  0x00461730:  rep stosd dword ptr es:[edi], eax
  0x00461732:  jl       0x4617d8
  0x00461738:  cmp      ebx, 0x6d6
  0x0046173e:  jle      0x461745
  0x00461740:  mov      ebx, 0x6d6
  0x00461745:  push     ebp
  0x00461746:  mov      ebp, 0x5a6378
  0x0046174b:  xor      edi, edi
  0x0046174d:  mov      dword ptr [esp + 0x10], ebp
  0x00461751:  xor      esi, esi
  0x00461753:  sub      ebp, 0x5a6378
  0x00461759:  mov      al, byte ptr [esi + ebp + 0x5a6378]
  0x00461760:  test     al, al
  0x00461762:  je       0x461786
  0x00461764:  and      eax, 0xff
  0x00461769:  lea      eax, [eax + eax*4]
  0x0046176c:  lea      eax, [eax + eax*4]
  0x0046176f:  lea      eax, [eax + eax*4]
  0x00461772:  lea      eax, [eax + eax*4]
  0x00461775:  shl      eax, 5
  0x00461778:  cdq      
  0x00461779:  idiv     ebx
  0x0046177b:  push     eax
  0x0046177c:  push     esi
  0x0046177d:  push     edi
  0x0046177e:  call     0x4615f0 <<< CALL
  0x00461783:  add      esp, 0xc
  0x00461786:  mov      al, byte ptr [esi + ebp + 0x56c7e4]
  0x0046178d:  test     al, al
  0x0046178f:  je       0x4617b9
  0x00461791:  and      eax, 0xff
  0x00461796:  mov      ecx, eax
  0x00461798:  neg      eax
  0x0046179a:  shl      eax, 2
  0x0046179d:  sub      eax, ecx
  0x0046179f:  lea      eax, [eax + eax*4]
  0x004617a2:  lea      eax, [eax + eax*4]
  0x004617a5:  lea      eax, [eax + eax*4]
  0x004617a8:  shl      eax, 6
  0x004617ab:  cdq      
  0x004617ac:  idiv     ebx
  0x004617ae:  push     eax
  0x004617af:  push     esi
  0x004617b0:  push     edi
  0x004617b1:  call     0x4615f0 <<< CALL
  0x004617b6:  add      esp, 0xc
  0x004617b9:  inc      esi
  0x004617ba:  cmp      esi, 0x32
  0x004617bd:  jl       0x461759
  0x004617bf:  mov      ebp, dword ptr [esp + 0x10]
  0x004617c3:  inc      edi
  0x004617c4:  add      ebp, 0x32
  0x004617c7:  cmp      ebp, 0x5a6d3c
  0x004617cd:  mov      dword ptr [esp + 0x10], ebp
  0x004617d1:  jl       0x461751
  0x004617d7:  pop      ebp
  0x004617d8:  pop      edi
  0x004617d9:  pop      esi
  0x004617da:  pop      ebx
  0x004617db:  pop      ecx
  0x004617dc:  ret      
  0x004617dd:  nop      
  0x004617de:  nop      
  0x004617df:  nop      
  0x004617e0:  jmp      0x4617f0
  0x004617e5:  nop      
  0x004617e6:  nop      
  0x004617e7:  nop      
  0x004617e8:  nop      
  0x004617e9:  nop      
  0x004617ea:  nop      
  0x004617eb:  nop      
  0x004617ec:  nop      
  0x004617ed:  nop      
  0x004617ee:  nop      
  0x004617ef:  nop      
  0x004617f0:  push     0x50000
  0x004617f5:  call     0x4a57f1 <<< CALL
  0x004617fa:  add      esp, 4
  0x004617fd:  mov      dword ptr [0x824148], eax
  0x00461802:  ret      
  0x00461803:  call     dword ptr [0x4ba1b4] <<< CALL
  0x00461809:  nop      
  0x0046180a:  nop      
  0x0046180b:  nop      
  0x0046180c:  nop      
  0x0046180d:  nop      
  0x0046180e:  nop      
  0x0046180f:  nop      
  0x00461810:  mov      eax, dword ptr [esp + 4]
  0x00461814:  cmp      eax, 0xdf
  0x00461819:  jge      0x46181f
  0x0046181b:  add      eax, 0x20
  0x0046181e:  ret      
  0x0046181f:  mov      eax, 0xff
  0x00461824:  ret      
  0x00461825:  call     dword ptr [0x4ba23c] <<< CALL
  0x0046182b:  nop      
  0x0046182c:  nop      
  0x0046182d:  nop      
  0x0046182e:  nop      
  0x0046182f:  nop      
  0x00461830:  sub      esp, 0x18
  0x00461833:  push     ebx
  0x00461834:  push     ebp
  0x00461835:  push     esi
  0x00461836:  xor      esi, esi
  0x00461838:  push     edi
  0x00461839:  mov      dword ptr [esp + 0x10], esi
  0x0046183d:  mov      dword ptr [esp + 0x18], esi
  0x00461841:  jmp      0x461847
  0x00461843:  mov      esi, dword ptr [esp + 0x10]
  0x00461847:  mov      eax, dword ptr [esp + 0x18]
  0x0046184b:  xor      ebx, ebx
  0x0046184d:  mov      ecx, ebx
  0x0046184f:  xor      edi, edi
  0x00461851:  sar      eax, 8
  0x00461854:  sar      ecx, 8
  0x00461857:  mov      byte ptr [esp + 0x1c], al
  0x0046185b:  mov      dword ptr [esp + 0x14], ebx
  0x0046185f:  mov      byte ptr [esp + 0x20], cl
  0x00461863:  xor      ebp, ebp
  0x00461865:  jmp      0x461880
  0x00461867:  mov      ecx, dword ptr [esp + 0x14]
  0x0046186b:  mov      esi, dword ptr [esp + 0x10]
  0x0046186f:  sar      ecx, 8
  0x00461872:  xor      edi, edi
  0x00461874:  mov      byte ptr [esp + 0x20], cl
  0x00461878:  xor      ebp, ebp
  0x0046187a:  jmp      0x461880
  0x0046187c:  mov      esi, dword ptr [esp + 0x10]
  0x00461880:  mov      ecx, dword ptr [0x83ad50]
  0x00461886:  mov      edx, dword ptr [ecx]
  0x00461888:  call     dword ptr [edx + 0xb4] <<< CALL
  0x0046188e:  cmp      eax, 1
  0x00461891:  jne      0x4618c3
  0x00461893:  and      esi, 0xff
  0x00461899:  mov      eax, ebx
  0x0046189b:  shr      esi, 3
  0x0046189e:  or       esi, 0xfff00000
  0x004618a4:  and      eax, 0xff
  0x004618a9:  shl      esi, 6
  0x004618ac:  shr      eax, 2
  0x004618af:  mov      ecx, edi
  0x004618b1:  or       esi, eax
  0x004618b3:  and      ecx, 0xff
  0x004618b9:  shl      esi, 5
  0x004618bc:  shr      ecx, 3
  0x004618bf:  or       esi, ecx
  0x004618c1:  jmp      0x4618f1
  0x004618c3:  and      esi, 0xff
  0x004618c9:  mov      edx, ebx
  0x004618cb:  shr      esi, 3
  0x004618ce:  or       esi, 0xffe00000
  0x004618d4:  and      edx, 0xff
  0x004618da:  shl      esi, 5
  0x004618dd:  shr      edx, 3
  0x004618e0:  mov      eax, edi
  0x004618e2:  or       esi, edx
  0x004618e4:  and      eax, 0xff
  0x004618e9:  shl      esi, 5
  0x004618ec:  shr      eax, 3
  0x004618ef:  or       esi, eax
  0x004618f1:  mov      ecx, ebp
  0x004618f3:  sar      ecx, 8
  0x004618f6:  mov      byte ptr [esp + 0x24], cl
  0x004618fa:  mov      ecx, dword ptr [0x83ad50]
  0x00461900:  mov      edx, dword ptr [ecx]
  0x00461902:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461908:  cmp      eax, 1
  0x0046190b:  mov      eax, dword ptr [esp + 0x1c]
  0x0046190f:  jne      0x461930
  0x00461911:  mov      ecx, dword ptr [esp + 0x20]
  0x00461915:  and      eax, 0xff
  0x0046191a:  shr      eax, 3
  0x0046191d:  or       eax, 0xfff00000
  0x00461922:  and      ecx, 0xff
  0x00461928:  shl      eax, 6
  0x0046192b:  shr      ecx, 2
  0x0046192e:  jmp      0x46194d
  0x00461930:  mov      ecx, dword ptr [esp + 0x20]
  0x00461934:  and      eax, 0xff
  0x00461939:  shr      eax, 3
  0x0046193c:  or       eax, 0xffe00000
  0x00461941:  and      ecx, 0xff
  0x00461947:  shl      eax, 5
  0x0046194a:  shr      ecx, 3
  0x0046194d:  mov      edx, dword ptr [esp + 0x24]
  0x00461951:  or       eax, ecx
  0x00461953:  mov      ecx, dword ptr [0x824148]
  0x00461959:  and      edx, 0xff
  0x0046195f:  shl      eax, 5
  0x00461962:  shr      edx, 3
  0x00461965:  and      esi, 0xffff
  0x0046196b:  add      edi, 8
  0x0046196e:  or       eax, edx
  0x00461970:  add      ebp, 0x400
  0x00461976:  cmp      di, 0x100
  0x0046197b:  mov      word ptr [ecx + esi*2], ax
  0x0046197f:  jb       0x46187c
  0x00461985:  mov      ecx, dword ptr [esp + 0x14]
  0x00461989:  add      ebx, 8
  0x0046198c:  add      ecx, 0x400
  0x00461992:  cmp      bx, 0x100
  0x00461997:  mov      dword ptr [esp + 0x14], ecx
  0x0046199b:  jb       0x461867
  0x004619a1:  mov      eax, dword ptr [esp + 0x10]
  0x004619a5:  mov      edx, dword ptr [esp + 0x18]
  0x004619a9:  add      eax, 8
  0x004619ac:  add      edx, 0x400
  0x004619b2:  cmp      ax, 0x100
  0x004619b6:  mov      dword ptr [esp + 0x10], eax
  0x004619ba:  mov      dword ptr [esp + 0x18], edx
  0x004619be:  jb       0x461843
  0x004619c4:  xor      esi, esi
  0x004619c6:  mov      dword ptr [esp + 0x10], esi
  0x004619ca:  mov      dword ptr [esp + 0x14], esi
  0x004619ce:  jmp      0x4619d4
  0x004619d0:  mov      esi, dword ptr [esp + 0x10]
  0x004619d4:  mov      edx, dword ptr [esp + 0x14]
  0x004619d8:  xor      ebx, ebx
  0x004619da:  mov      eax, ebx
  0x004619dc:  xor      edi, edi
  0x004619de:  sar      edx, 8
  0x004619e1:  sar      eax, 8
  0x004619e4:  mov      byte ptr [esp + 0x24], dl
  0x004619e8:  mov      dword ptr [esp + 0x18], ebx
  0x004619ec:  mov      byte ptr [esp + 0x20], al
  0x004619f0:  xor      ebp, ebp
  0x004619f2:  jmp      0x461a0d
  0x004619f4:  mov      eax, dword ptr [esp + 0x18]
  0x004619f8:  mov      esi, dword ptr [esp + 0x10]
  0x004619fc:  sar      eax, 8
  0x004619ff:  xor      edi, edi
  0x00461a01:  mov      byte ptr [esp + 0x20], al
  0x00461a05:  xor      ebp, ebp
  0x00461a07:  jmp      0x461a0d
  0x00461a09:  mov      esi, dword ptr [esp + 0x10]
  0x00461a0d:  mov      ecx, dword ptr [0x83ad50]
  0x00461a13:  mov      edx, dword ptr [ecx]
  0x00461a15:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461a1b:  cmp      eax, 1
  0x00461a1e:  jne      0x461a50
  0x00461a20:  and      esi, 0xff
  0x00461a26:  mov      eax, ebx
  0x00461a28:  shr      esi, 3
  0x00461a2b:  or       esi, 0xfff00000
  0x00461a31:  and      eax, 0xff
  0x00461a36:  shl      esi, 6
  0x00461a39:  shr      eax, 2
  0x00461a3c:  mov      ecx, edi
  0x00461a3e:  or       esi, eax
  0x00461a40:  and      ecx, 0xff
  0x00461a46:  shl      esi, 5
  0x00461a49:  shr      ecx, 3
  0x00461a4c:  or       esi, ecx
  0x00461a4e:  jmp      0x461a7e
  0x00461a50:  and      esi, 0xff
  0x00461a56:  mov      edx, ebx
  0x00461a58:  shr      esi, 3
  0x00461a5b:  or       esi, 0xffe00000
  0x00461a61:  and      edx, 0xff
  0x00461a67:  shl      esi, 5
  0x00461a6a:  shr      edx, 3
  0x00461a6d:  mov      eax, edi
  0x00461a6f:  or       esi, edx
  0x00461a71:  and      eax, 0xff
  0x00461a76:  shl      esi, 5
  0x00461a79:  shr      eax, 3
  0x00461a7c:  or       esi, eax
  0x00461a7e:  mov      ecx, ebp
  0x00461a80:  sar      ecx, 8
  0x00461a83:  mov      byte ptr [esp + 0x1c], cl
  0x00461a87:  mov      ecx, dword ptr [0x83ad50]
  0x00461a8d:  mov      edx, dword ptr [ecx]
  0x00461a8f:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461a95:  cmp      eax, 1
  0x00461a98:  mov      eax, dword ptr [esp + 0x24]
  0x00461a9c:  jne      0x461abd
  0x00461a9e:  mov      ecx, dword ptr [esp + 0x20]
  0x00461aa2:  and      eax, 0xff
  0x00461aa7:  shr      eax, 3
  0x00461aaa:  or       eax, 0xfff00000
  0x00461aaf:  and      ecx, 0xff
  0x00461ab5:  shl      eax, 6
  0x00461ab8:  shr      ecx, 2
  0x00461abb:  jmp      0x461ada
  0x00461abd:  mov      ecx, dword ptr [esp + 0x20]
  0x00461ac1:  and      eax, 0xff
  0x00461ac6:  shr      eax, 3
  0x00461ac9:  or       eax, 0xffe00000
  0x00461ace:  and      ecx, 0xff
  0x00461ad4:  shl      eax, 5
  0x00461ad7:  shr      ecx, 3
  0x00461ada:  mov      edx, dword ptr [esp + 0x1c]
  0x00461ade:  or       eax, ecx
  0x00461ae0:  mov      ecx, dword ptr [0x824148]
  0x00461ae6:  and      edx, 0xff
  0x00461aec:  shl      eax, 5
  0x00461aef:  shr      edx, 3
  0x00461af2:  and      esi, 0xffff
  0x00461af8:  add      edi, 8
  0x00461afb:  or       eax, edx
  0x00461afd:  add      ebp, 0x500
  0x00461b03:  cmp      di, 0x100
  0x00461b08:  mov      word ptr [ecx + esi*2 + 0x10000], ax
  0x00461b10:  jb       0x461a09
  0x00461b16:  mov      ecx, dword ptr [esp + 0x18]
  0x00461b1a:  add      ebx, 8
  0x00461b1d:  add      ecx, 0x500
  0x00461b23:  cmp      bx, 0x100
  0x00461b28:  mov      dword ptr [esp + 0x18], ecx
  0x00461b2c:  jb       0x4619f4
  0x00461b32:  mov      eax, dword ptr [esp + 0x10]
  0x00461b36:  mov      edx, dword ptr [esp + 0x14]
  0x00461b3a:  add      eax, 8
  0x00461b3d:  add      edx, 0x500
  0x00461b43:  cmp      ax, 0x100
  0x00461b47:  mov      dword ptr [esp + 0x10], eax
  0x00461b4b:  mov      dword ptr [esp + 0x14], edx
  0x00461b4f:  jb       0x4619d0
  0x00461b55:  xor      esi, esi
  0x00461b57:  mov      dword ptr [esp + 0x10], esi
  0x00461b5b:  mov      dword ptr [esp + 0x14], esi
  0x00461b5f:  jmp      0x461b65
  0x00461b61:  mov      esi, dword ptr [esp + 0x10]
  0x00461b65:  mov      edx, dword ptr [esp + 0x14]
  0x00461b69:  xor      ebx, ebx
  0x00461b6b:  mov      eax, ebx
  0x00461b6d:  xor      edi, edi
  0x00461b6f:  sar      edx, 8
  0x00461b72:  sar      eax, 8
  0x00461b75:  mov      byte ptr [esp + 0x24], dl
  0x00461b79:  mov      dword ptr [esp + 0x18], ebx
  0x00461b7d:  mov      byte ptr [esp + 0x20], al
  0x00461b81:  xor      ebp, ebp
  0x00461b83:  jmp      0x461b9e
  0x00461b85:  mov      eax, dword ptr [esp + 0x18]
  0x00461b89:  mov      esi, dword ptr [esp + 0x10]
  0x00461b8d:  sar      eax, 8
  0x00461b90:  xor      edi, edi
  0x00461b92:  mov      byte ptr [esp + 0x20], al
  0x00461b96:  xor      ebp, ebp
  0x00461b98:  jmp      0x461b9e
  0x00461b9a:  mov      esi, dword ptr [esp + 0x10]
  0x00461b9e:  mov      ecx, dword ptr [0x83ad50]
  0x00461ba4:  mov      edx, dword ptr [ecx]
  0x00461ba6:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461bac:  cmp      eax, 1
  0x00461baf:  jne      0x461be1
  0x00461bb1:  and      esi, 0xff
  0x00461bb7:  mov      eax, ebx
  0x00461bb9:  shr      esi, 3
  0x00461bbc:  or       esi, 0xfff00000
  0x00461bc2:  and      eax, 0xff
  0x00461bc7:  shl      esi, 6
  0x00461bca:  shr      eax, 2
  0x00461bcd:  mov      ecx, edi
  0x00461bcf:  or       esi, eax
  0x00461bd1:  and      ecx, 0xff
  0x00461bd7:  shl      esi, 5
  0x00461bda:  shr      ecx, 3
  0x00461bdd:  or       esi, ecx
  0x00461bdf:  jmp      0x461c0f
  0x00461be1:  and      esi, 0xff
  0x00461be7:  mov      edx, ebx
  0x00461be9:  shr      esi, 3
  0x00461bec:  or       esi, 0xffe00000
  0x00461bf2:  and      edx, 0xff
  0x00461bf8:  shl      esi, 5
  0x00461bfb:  shr      edx, 3
  0x00461bfe:  mov      eax, edi
  0x00461c00:  or       esi, edx
  0x00461c02:  and      eax, 0xff
  0x00461c07:  shl      esi, 5
  0x00461c0a:  shr      eax, 3
  0x00461c0d:  or       esi, eax
  0x00461c0f:  mov      ecx, ebp
  0x00461c11:  sar      ecx, 8
  0x00461c14:  mov      byte ptr [esp + 0x1c], cl
  0x00461c18:  mov      ecx, dword ptr [0x83ad50]
  0x00461c1e:  mov      edx, dword ptr [ecx]
  0x00461c20:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461c26:  cmp      eax, 1
  0x00461c29:  mov      eax, dword ptr [esp + 0x24]
  0x00461c2d:  jne      0x461c4e
  0x00461c2f:  mov      ecx, dword ptr [esp + 0x20]
  0x00461c33:  and      eax, 0xff
  0x00461c38:  shr      eax, 3
  0x00461c3b:  or       eax, 0xfff00000
  0x00461c40:  and      ecx, 0xff
  0x00461c46:  shl      eax, 6
  0x00461c49:  shr      ecx, 2
  0x00461c4c:  jmp      0x461c6b
  0x00461c4e:  mov      ecx, dword ptr [esp + 0x20]
  0x00461c52:  and      eax, 0xff
  0x00461c57:  shr      eax, 3
  0x00461c5a:  or       eax, 0xffe00000
  0x00461c5f:  and      ecx, 0xff
  0x00461c65:  shl      eax, 5
  0x00461c68:  shr      ecx, 3
  0x00461c6b:  mov      edx, dword ptr [esp + 0x1c]
  0x00461c6f:  or       eax, ecx
  0x00461c71:  mov      ecx, dword ptr [0x824148]
  0x00461c77:  and      edx, 0xff
  0x00461c7d:  shl      eax, 5
  0x00461c80:  shr      edx, 3
  0x00461c83:  and      esi, 0xffff
  0x00461c89:  add      edi, 8
  0x00461c8c:  or       eax, edx
  0x00461c8e:  add      ebp, 0x600
  0x00461c94:  cmp      di, 0x100
  0x00461c99:  mov      word ptr [ecx + esi*2 + 0x20000], ax
  0x00461ca1:  jb       0x461b9a
  0x00461ca7:  mov      ecx, dword ptr [esp + 0x18]
  0x00461cab:  add      ebx, 8
  0x00461cae:  add      ecx, 0x600
  0x00461cb4:  cmp      bx, 0x100
  0x00461cb9:  mov      dword ptr [esp + 0x18], ecx
  0x00461cbd:  jb       0x461b85
  0x00461cc3:  mov      eax, dword ptr [esp + 0x10]
  0x00461cc7:  mov      edx, dword ptr [esp + 0x14]
  0x00461ccb:  add      eax, 8
  0x00461cce:  add      edx, 0x600
  0x00461cd4:  cmp      ax, 0x100
  0x00461cd8:  mov      dword ptr [esp + 0x10], eax
  0x00461cdc:  mov      dword ptr [esp + 0x14], edx
  0x00461ce0:  jb       0x461b61
  0x00461ce6:  xor      esi, esi
  0x00461ce8:  mov      dword ptr [esp + 0x10], esi
  0x00461cec:  mov      dword ptr [esp + 0x14], esi
  0x00461cf0:  jmp      0x461cf6
  0x00461cf2:  mov      esi, dword ptr [esp + 0x10]
  0x00461cf6:  mov      edx, dword ptr [esp + 0x14]
  0x00461cfa:  xor      ebx, ebx
  0x00461cfc:  mov      eax, ebx
  0x00461cfe:  xor      edi, edi
  0x00461d00:  sar      edx, 8
  0x00461d03:  sar      eax, 8
  0x00461d06:  mov      byte ptr [esp + 0x24], dl
  0x00461d0a:  mov      dword ptr [esp + 0x18], ebx
  0x00461d0e:  mov      byte ptr [esp + 0x20], al
  0x00461d12:  xor      ebp, ebp
  0x00461d14:  jmp      0x461d2f
  0x00461d16:  mov      eax, dword ptr [esp + 0x18]
  0x00461d1a:  mov      esi, dword ptr [esp + 0x10]
  0x00461d1e:  sar      eax, 8
  0x00461d21:  xor      edi, edi
  0x00461d23:  mov      byte ptr [esp + 0x20], al
  0x00461d27:  xor      ebp, ebp
  0x00461d29:  jmp      0x461d2f
  0x00461d2b:  mov      esi, dword ptr [esp + 0x10]
  0x00461d2f:  mov      ecx, dword ptr [0x83ad50]
  0x00461d35:  mov      edx, dword ptr [ecx]
  0x00461d37:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461d3d:  cmp      eax, 1
  0x00461d40:  jne      0x461d72
  0x00461d42:  and      esi, 0xff
  0x00461d48:  mov      eax, ebx
  0x00461d4a:  shr      esi, 3
  0x00461d4d:  or       esi, 0xfff00000
  0x00461d53:  and      eax, 0xff
  0x00461d58:  shl      esi, 6
  0x00461d5b:  shr      eax, 2
  0x00461d5e:  mov      ecx, edi
  0x00461d60:  or       esi, eax
  0x00461d62:  and      ecx, 0xff
  0x00461d68:  shl      esi, 5
  0x00461d6b:  shr      ecx, 3
  0x00461d6e:  or       esi, ecx
  0x00461d70:  jmp      0x461da0
  0x00461d72:  and      esi, 0xff
  0x00461d78:  mov      edx, ebx
  0x00461d7a:  shr      esi, 3
  0x00461d7d:  or       esi, 0xffe00000
  0x00461d83:  and      edx, 0xff
  0x00461d89:  shl      esi, 5
  0x00461d8c:  shr      edx, 3
  0x00461d8f:  mov      eax, edi
  0x00461d91:  or       esi, edx
  0x00461d93:  and      eax, 0xff
  0x00461d98:  shl      esi, 5
  0x00461d9b:  shr      eax, 3
  0x00461d9e:  or       esi, eax
  0x00461da0:  mov      ecx, ebp
  0x00461da2:  sar      ecx, 8
  0x00461da5:  mov      byte ptr [esp + 0x1c], cl
  0x00461da9:  mov      ecx, dword ptr [0x83ad50]
  0x00461daf:  mov      edx, dword ptr [ecx]
  0x00461db1:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461db7:  cmp      eax, 1
  0x00461dba:  mov      eax, dword ptr [esp + 0x24]
  0x00461dbe:  jne      0x461ddf
  0x00461dc0:  mov      ecx, dword ptr [esp + 0x20]
  0x00461dc4:  and      eax, 0xff
  0x00461dc9:  shr      eax, 3
  0x00461dcc:  or       eax, 0xfff00000
  0x00461dd1:  and      ecx, 0xff
  0x00461dd7:  shl      eax, 6
  0x00461dda:  shr      ecx, 2
  0x00461ddd:  jmp      0x461dfc
  0x00461ddf:  mov      ecx, dword ptr [esp + 0x20]
  0x00461de3:  and      eax, 0xff
  0x00461de8:  shr      eax, 3
  0x00461deb:  or       eax, 0xffe00000
  0x00461df0:  and      ecx, 0xff
  0x00461df6:  shl      eax, 5
  0x00461df9:  shr      ecx, 3
  0x00461dfc:  mov      edx, dword ptr [esp + 0x1c]
  0x00461e00:  or       eax, ecx
  0x00461e02:  mov      ecx, dword ptr [0x824148]
  0x00461e08:  and      edx, 0xff
  0x00461e0e:  shl      eax, 5
  0x00461e11:  shr      edx, 3
  0x00461e14:  and      esi, 0xffff
  0x00461e1a:  add      edi, 8
  0x00461e1d:  or       eax, edx
  0x00461e1f:  add      ebp, 0x700
  0x00461e25:  cmp      di, 0x100
  0x00461e2a:  mov      word ptr [ecx + esi*2 + 0x30000], ax
  0x00461e32:  jb       0x461d2b
  0x00461e38:  mov      ecx, dword ptr [esp + 0x18]
  0x00461e3c:  add      ebx, 8
  0x00461e3f:  add      ecx, 0x700
  0x00461e45:  cmp      bx, 0x100
  0x00461e4a:  mov      dword ptr [esp + 0x18], ecx
  0x00461e4e:  jb       0x461d16
  0x00461e54:  mov      eax, dword ptr [esp + 0x10]
  0x00461e58:  mov      edx, dword ptr [esp + 0x14]
  0x00461e5c:  add      eax, 8
  0x00461e5f:  add      edx, 0x700
  0x00461e65:  cmp      ax, 0x100
  0x00461e69:  mov      dword ptr [esp + 0x10], eax
  0x00461e6d:  mov      dword ptr [esp + 0x14], edx
  0x00461e71:  jb       0x461cf2
  0x00461e77:  xor      esi, esi
  0x00461e79:  xor      ebx, ebx
  0x00461e7b:  xor      edi, edi
  0x00461e7d:  mov      dword ptr [esp + 0x10], esi
  0x00461e81:  mov      dword ptr [esp + 0x14], esi
  0x00461e85:  mov      dword ptr [esp + 0x18], ebx
  0x00461e89:  xor      ebp, ebp
  0x00461e8b:  jmp      0x461eab
  0x00461e8d:  mov      esi, dword ptr [esp + 0x10]
  0x00461e91:  xor      ebx, ebx
  0x00461e93:  xor      edi, edi
  0x00461e95:  mov      dword ptr [esp + 0x18], ebx
  0x00461e99:  xor      ebp, ebp
  0x00461e9b:  jmp      0x461eab
  0x00461e9d:  mov      esi, dword ptr [esp + 0x10]
  0x00461ea1:  xor      edi, edi
  0x00461ea3:  xor      ebp, ebp
  0x00461ea5:  jmp      0x461eab
  0x00461ea7:  mov      esi, dword ptr [esp + 0x10]
  0x00461eab:  mov      ecx, dword ptr [0x83ad50]
  0x00461eb1:  mov      edx, dword ptr [ecx]
  0x00461eb3:  call     dword ptr [edx + 0xb4] <<< CALL
  0x00461eb9:  cmp      eax, 1
  0x00461ebc:  jne      0x461eee
  0x00461ebe:  and      esi, 0xff
  0x00461ec4:  mov      eax, ebx
  0x00461ec6:  shr      esi, 3
  0x00461ec9:  or       esi, 0xfff00000
  0x00461ecf:  and      eax, 0xff
  0x00461ed4:  shl      esi, 6
  0x00461ed7:  shr      eax, 2
  0x00461eda:  mov      ecx, edi
  0x00461edc:  or       esi, eax
  0x00461ede:  and      ecx, 0xff
  0x00461ee4:  shl      esi, 5
  0x00461ee7:  shr      ecx, 3
  0x00461eea:  or       esi, ecx
  0x00461eec:  jmp      0x461f1c
  0x00461eee:  and      esi, 0xff
  0x00461ef4:  mov      edx, ebx
  0x00461ef6:  shr      esi, 3
  0x00461ef9:  or       esi, 0xffe00000
  0x00461eff:  and      edx, 0xff
  0x00461f05:  shl      esi, 5
  0x00461f08:  shr      edx, 3
  0x00461f0b:  mov      eax, edi
  0x00461f0d:  or       esi, edx
  0x00461f0f:  and      eax, 0xff
  0x00461f14:  shl      esi, 5
  0x00461f17:  shr      eax, 3
  0x00461f1a:  or       esi, eax
  0x00461f1c:  push     ebp
  0x00461f1d:  call     0x461810 <<< CALL
  0x00461f22:  mov      ecx, dword ptr [esp + 0x1c]
  0x00461f26:  mov      byte ptr [esp + 0x20], al
  0x00461f2a:  push     ecx
  0x00461f2b:  call     0x461810 <<< CALL
  0x00461f30:  mov      edx, dword ptr [esp + 0x1c]
  0x00461f34:  mov      byte ptr [esp + 0x28], al
  0x00461f38:  push     edx
  0x00461f39:  call     0x461810 <<< CALL
  0x00461f3e:  mov      ecx, dword ptr [0x83ad50]
  0x00461f44:  mov      byte ptr [esp + 0x30], al
  0x00461f48:  add      esp, 0xc
  0x00461f4b:  mov      eax, dword ptr [ecx]
  0x00461f4d:  call     dword ptr [eax + 0xb4] <<< CALL
  0x00461f53:  cmp      eax, 1
  0x00461f56:  mov      eax, dword ptr [esp + 0x24]
  0x00461f5a:  jne      0x461f7b
  0x00461f5c:  mov      ecx, dword ptr [esp + 0x20]
  0x00461f60:  and      eax, 0xff
  0x00461f65:  shr      eax, 3
  0x00461f68:  or       eax, 0xfff00000
  0x00461f6d:  and      ecx, 0xff
  0x00461f73:  shl      eax, 6
  0x00461f76:  shr      ecx, 2
  0x00461f79:  jmp      0x461f98
  0x00461f7b:  mov      ecx, dword ptr [esp + 0x20]
  0x00461f7f:  and      eax, 0xff
  0x00461f84:  shr      eax, 3
  0x00461f87:  or       eax, 0xffe00000
  0x00461f8c:  and      ecx, 0xff
  0x00461f92:  shl      eax, 5
  0x00461f95:  shr      ecx, 3
  0x00461f98:  mov      edx, dword ptr [esp + 0x1c]
  0x00461f9c:  or       eax, ecx
  0x00461f9e:  mov      ecx, dword ptr [0x824148]
  0x00461fa4:  and      edx, 0xff
  0x00461faa:  shl      eax, 5
  0x00461fad:  shr      edx, 3
  0x00461fb0:  and      esi, 0xffff
  0x00461fb6:  add      edi, 8
  0x00461fb9:  or       eax, edx
  0x00461fbb:  add      ebp, 8
  0x00461fbe:  cmp      di, 0x100
  0x00461fc3:  mov      word ptr [ecx + esi*2 + 0x40000], ax
  0x00461fcb:  jb       0x461ea7
  0x00461fd1:  mov      ecx, dword ptr [esp + 0x18]
  0x00461fd5:  add      ebx, 8
  0x00461fd8:  add      ecx, 8
  0x00461fdb:  cmp      bx, 0x100
  0x00461fe0:  mov      dword ptr [esp + 0x18], ecx
  0x00461fe4:  jb       0x461e9d
  0x00461fea:  mov      eax, dword ptr [esp + 0x10]
  0x00461fee:  mov      edx, dword ptr [esp + 0x14]
  0x00461ff2:  add      eax, 8
  0x00461ff5:  add      edx, 8
  0x00461ff8:  cmp      ax, 0x100
  0x00461ffc:  mov      dword ptr [esp + 0x10], eax
  0x00462000:  mov      dword ptr [esp + 0x14], edx
  0x00462004:  jb       0x461e8d
  0x0046200a:  pop      edi
  0x0046200b:  pop      esi
  0x0046200c:  pop      ebp
  0x0046200d:  xor      eax, eax
  0x0046200f:  pop      ebx
  0x00462010:  add      esp, 0x18
  0x00462013:  ret      
  0x00462014:  call     dword ptr [0x4ba184] <<< CALL
  0x0046201a:  nop      
  0x0046201b:  nop      
  0x0046201c:  nop      
  0x0046201d:  nop      
  0x0046201e:  nop      
  0x0046201f:  nop      
  0x00462020:  sub      esp, 0x31c
  0x00462026:  push     ebx
  0x00462027:  push     ebp
  0x00462028:  mov      ebp, dword ptr [esp + 0x328]
  0x0046202f:  mov      ecx, 1
  0x00462034:  push     esi
  0x00462035:  cmp      ebp, 0x9c
  0x0046203b:  push     edi
  0x0046203c:  mov      dword ptr [esp + 0x24], 0
  0x00462044:  mov      dword ptr [esp + 0x28], ecx
  0x00462048:  jge      0x4620b8
  0x0046204a:  push     ebp
  0x0046204b:  call     0x46c940 <<< CALL
  0x00462050:  add      esp, 4
  0x00462053:  mov      edi, eax
  0x00462055:  cmp      ebp, 0xff
  0x0046205b:  mov      dword ptr [esp + 0x28], edi
  0x0046205f:  jne      0x462063
  0x00462061:  xor      ebp, ebp
  0x00462063:  mov      esi, ebp
  0x00462065:  mov      ebx, 0xa
  0x0046206a:  shl      esi, 8
  0x0046206d:  movsx    ecx, word ptr [esi + 0x57956e]
  0x00462074:  mov      eax, ecx
  0x00462076:  cdq      
  0x00462077:  idiv     ebx
  0x00462079:  lea      eax, [ecx + ecx*2]
  0x0046207c:  mov      dword ptr [esp + 0x1c], edx
  0x00462080:  cdq      
  0x00462081:  idiv     ebx
  0x00462083:  lea      eax, [ecx*8]
  0x0046208a:  sub      eax, ecx
  0x0046208c:  lea      eax, [eax + eax*4]
  0x0046208f:  shl      eax, 4
  0x00462092:  mov      al, byte ptr [eax + 0x4d60aa]
  0x00462098:  cmp      al, 0x13
  0x0046209a:  mov      dword ptr [esp + 0x10], edx
  0x0046209e:  jge      0x4620d1
  0x004620a0:  movsx    eax, al
  0x004620a3:  test     edi, edi
  0x004620a5:  mov      ebx, eax
  0x004620a7:  je       0x4620c2
  0x004620a9:  shl      ebx, 4
  0x004620ac:  add      ebx, eax
  0x004620ae:  movsx    eax, byte ptr [ebx*4 + 0x4d55e8]
  0x004620b6:  jmp      0x4620df
  0x004620b8:  mov      dword ptr [esp + 0x24], ecx
  0x004620bc:  mov      ebx, dword ptr [esp + 0x24]
  0x004620c0:  jmp      0x462128
  0x004620c2:  shl      ebx, 4
  0x004620c5:  add      ebx, eax
  0x004620c7:  movsx    eax, byte ptr [ebx*4 + 0x4d5b38]
  0x004620cf:  jmp      0x4620df
  0x004620d1:  mov      eax, ecx
  0x004620d3:  and      eax, 0x80000003
  0x004620d8:  jns      0x4620df
  0x004620da:  dec      eax
  0x004620db:  or       eax, 0xfffffffc
  0x004620de:  inc      eax
  0x004620df:  mov      dword ptr [esp + 0x14], eax
  0x004620e3:  mov      al, byte ptr [esi + 0x5794d1]
  0x004620e9:  test     al, 4
  0x004620eb:  mov      ebx, edx
  0x004620ed:  jne      0x4620fb
  0x004620ef:  mov      ebx, edi
  0x004620f1:  neg      ebx
  0x004620f3:  sbb      ebx, ebx
  0x004620f5:  and      ebx, 0xfffffff7
  0x004620f8:  add      ebx, 9
  0x004620fb:  mov      edx, dword ptr [esp + 0x14]
  0x004620ff:  test     al, 2
  0x00462101:  mov      dword ptr [esp + 0x18], edx
  0x00462105:  je       0x46210f
  0x00462107:  mov      dword ptr [esp + 0x18], 4
  0x0046210f:  test     edi, edi
  0x00462111:  jne      0x462123
  0x00462113:  lea      eax, [ecx + ecx]
  0x00462116:  mov      ecx, 3
  0x0046211b:  cdq      
  0x0046211c:  idiv     ecx
  0x0046211e:  inc      edx
  0x0046211f:  mov      dword ptr [esp + 0x10], edx
  0x00462123:  mov      ecx, 1
  0x00462128:  cmp      ebp, 0x9c
  0x0046212e:  jl       0x462459
  0x00462134:  lea      edx, [ebp + ebp*8 - 0x57c]
  0x0046213b:  mov      dword ptr [esp + 0x24], ecx
  0x0046213f:  mov      dword ptr [esp + 0x18], 4
  0x00462147:  mov      dword ptr [esp + 0x28], ecx
  0x0046214b:  lea      eax, [ebp + edx*4 - 0x9c]
  0x00462152:  movsx    edx, byte ptr [eax + 0x55d759]
  0x00462159:  movsx    ebx, byte ptr [eax + 0x55d75a]
  0x00462160:  mov      dword ptr [esp + 0x14], edx
  0x00462164:  add      ebx, 5
  0x00462167:  movsx    edx, byte ptr [eax + 0x55d75b]
  0x0046216e:  movsx    eax, byte ptr [eax + 0x55d75c]
  0x00462175:  mov      dword ptr [esp + 0x10], edx
  0x00462179:  mov      dword ptr [esp + 0x1c], eax
  0x0046217d:  mov      ecx, dword ptr [0x81ca6c]
  0x00462183:  test     ecx, ecx
  0x00462185:  je       0x462195
  0x00462187:  mov      eax, dword ptr [ecx]
  0x00462189:  push     0x78
  0x0046218b:  lea      edx, [esp + 0x30]
  0x0046218f:  push     0
  0x00462191:  push     edx
  0x00462192:  call     dword ptr [eax + 0x10] <<< CALL
  0x00462195:  mov      ecx, dword ptr [0x81ca14]
  0x0046219b:  test     ecx, ecx
  0x0046219d:  jne      0x4621b1
  0x0046219f:  mov      eax, dword ptr [0x81ca10]
  0x004621a4:  mov      ecx, 0x81ca10
  0x004621a9:  call     dword ptr [eax] <<< CALL
  0x004621ab:  mov      ecx, dword ptr [0x81ca14]
  0x004621b1:  mov      edx, dword ptr [ecx]
  0x004621b3:  push     0x78
  0x004621b5:  lea      eax, [esp + 0x30]
  0x004621b9:  push     0
  0x004621bb:  push     eax
  0x004621bc:  call     dword ptr [edx + 0x14] <<< CALL
  0x004621bf:  mov      eax, dword ptr [esp + 0x10]
  0x004621c3:  lea      ecx, [eax + eax*4]
  0x004621c6:  lea      eax, [eax + ecx*2]
  0x004621c9:  mov      dword ptr [esp + 0x10], eax
  0x004621cd:  mov      ecx, dword ptr [eax*8 + 0x81ca6c]
  0x004621d4:  test     ecx, ecx
  0x004621d6:  je       0x4621e6
  0x004621d8:  mov      edx, dword ptr [ecx]
  0x004621da:  push     0x14
  0x004621dc:  lea      eax, [esp + 0x30]
  0x004621e0:  push     0
  0x004621e2:  push     eax
  0x004621e3:  call     dword ptr [edx + 0x10] <<< CALL
  0x004621e6:  mov      ecx, dword ptr [0x81ca14]
  0x004621ec:  test     ecx, ecx
  0x004621ee:  jne      0x462203
  0x004621f0:  mov      edx, dword ptr [0x81ca10]
  0x004621f6:  mov      ecx, 0x81ca10
  0x004621fb:  call     dword ptr [edx] <<< CALL
  0x004621fd:  mov      ecx, dword ptr [0x81ca14]
  0x00462203:  mov      eax, dword ptr [ecx]
  0x00462205:  push     0x14
  0x00462207:  lea      edx, [esp + 0x30]
  0x0046220b:  push     0
  0x0046220d:  push     edx
  0x0046220e:  call     dword ptr [eax + 0x14] <<< CALL
  0x00462211:  mov      eax, dword ptr [esp + 0x1c]
  0x00462215:  lea      ecx, [eax + eax*4]
  0x00462218:  lea      edi, [eax + ecx*2]
  0x0046221b:  mov      ecx, dword ptr [edi*8 + 0x81ca6c]
  0x00462222:  test     ecx, ecx
  0x00462224:  je       0x462234
  0x00462226:  mov      edx, dword ptr [ecx]
  0x00462228:  push     0x28
  0x0046222a:  lea      eax, [esp + 0x30]
  0x0046222e:  push     0
  0x00462230:  push     eax
  0x00462231:  call     dword ptr [edx + 0x10] <<< CALL
  0x00462234:  mov      ecx, dword ptr [0x81ca14]
  0x0046223a:  test     ecx, ecx
  0x0046223c:  jne      0x462251
  0x0046223e:  mov      edx, dword ptr [0x81ca10]
  0x00462244:  mov      ecx, 0x81ca10
  0x00462249:  call     dword ptr [edx] <<< CALL
  0x0046224b:  mov      ecx, dword ptr [0x81ca14]
  0x00462251:  mov      eax, dword ptr [ecx]
  0x00462253:  push     0x14
  0x00462255:  lea      edx, [esp + 0x6c]
  0x00462259:  push     0x14
  0x0046225b:  push     edx
  0x0046225c:  call     dword ptr [eax + 0x14] <<< CALL
  0x0046225f:  mov      eax, dword ptr [esp + 0x14]
  0x00462263:  lea      ecx, [eax + eax*4]
  0x00462266:  lea      esi, [eax + ecx*2]
  0x00462269:  mov      ecx, dword ptr [esi*8 + 0x81ca6c]
  0x00462270:  test     ecx, ecx
  0x00462272:  je       0x462282
  0x00462274:  mov      edx, dword ptr [ecx]
  0x00462276:  push     0x3c
  0x00462278:  lea      eax, [esp + 0x30]
  0x0046227c:  push     0
  0x0046227e:  push     eax
  0x0046227f:  call     dword ptr [edx + 0x10] <<< CALL
  0x00462282:  mov      ecx, dword ptr [0x81ca14]
  0x00462288:  test     ecx, ecx
  0x0046228a:  jne      0x46229f
  0x0046228c:  mov      edx, dword ptr [0x81ca10]
  0x00462292:  mov      ecx, 0x81ca10
  0x00462297:  call     dword ptr [edx] <<< CALL
  0x00462299:  mov      ecx, dword ptr [0x81ca14]
  0x0046229f:  mov      eax, dword ptr [ecx]
  0x004622a1:  push     0x14
  0x004622a3:  lea      edx, [esp + 0xa8]
  0x004622aa:  push     0x28
  0x004622ac:  push     edx
  0x004622ad:  call     dword ptr [eax + 0x14] <<< CALL
  0x004622b0:  lea      eax, [ebx + ebx*4]
  0x004622b3:  lea      ecx, [ebx + eax*2]
  0x004622b6:  lea      eax, [ecx*8 + 0x81ca68]
  0x004622bd:  mov      ecx, dword ptr [ecx*8 + 0x81ca6c]
  0x004622c4:  test     ecx, ecx
  0x004622c6:  je       0x4622d6
  0x004622c8:  mov      edx, dword ptr [ecx]
  0x004622ca:  push     0x50
  0x004622cc:  lea      eax, [esp + 0x30]
  0x004622d0:  push     0
  0x004622d2:  push     eax
  0x004622d3:  call     dword ptr [edx + 0x10] <<< CALL
  0x004622d6:  mov      ecx, dword ptr [0x81ca14]
  0x004622dc:  test     ecx, ecx
  0x004622de:  jne      0x4622f3
  0x004622e0:  mov      edx, dword ptr [0x81ca10]
  0x004622e6:  mov      ecx, 0x81ca10
  0x004622eb:  call     dword ptr [edx] <<< CALL
  0x004622ed:  mov      ecx, dword ptr [0x81ca14]
  0x004622f3:  mov      eax, dword ptr [ecx]
  0x004622f5:  push     0x14
  0x004622f7:  lea      edx, [esp + 0xe4]
  0x004622fe:  push     0x3c
  0x00462300:  push     edx
  0x00462301:  call     dword ptr [eax + 0x14] <<< CALL
  0x00462304:  mov      eax, dword ptr [esp + 0x28]
  0x00462308:  test     eax, eax
  0x0046230a:  je       0x462619
  0x00462310:  mov      eax, dword ptr [esp + 0x10]
  0x00462314:  mov      ecx, dword ptr [eax*8 + 0x81ca6c]
  0x0046231b:  test     ecx, ecx
  0x0046231d:  je       0x46232d
  0x0046231f:  mov      edx, dword ptr [ecx]
  0x00462321:  push     0x79
  0x00462323:  lea      eax, [esp + 0x30]
  0x00462327:  push     0
  0x00462329:  push     eax
  0x0046232a:  call     dword ptr [edx + 0x10] <<< CALL
  0x0046232d:  mov      ecx, dword ptr [0x81ca14]
  0x00462333:  test     ecx, ecx
  0x00462335:  jne      0x46234a
  0x00462337:  mov      edx, dword ptr [0x81ca10]
  0x0046233d:  mov      ecx, 0x81ca10
  0x00462342:  call     dword ptr [edx] <<< CALL
  0x00462344:  mov      ecx, dword ptr [0x81ca14]
  0x0046234a:  mov      eax, dword ptr [ecx]
  0x0046234c:  push     0xf
  0x0046234e:  lea      edx, [esp + 0x171]
  0x00462355:  push     0x6b
  0x00462357:  push     edx
  0x00462358:  call     dword ptr [eax + 0x14] <<< CALL
  0x0046235b:  mov      ecx, dword ptr [edi*8 + 0x81ca6c]
  0x00462362:  test     ecx, ecx
  0x00462364:  je       0x462377
  0x00462366:  mov      eax, dword ptr [ecx]
  0x00462368:  push     0x83
  0x0046236d:  lea      edx, [esp + 0x30]
  0x00462371:  push     0
  0x00462373:  push     edx
  0x00462374:  call     dword ptr [eax + 0x10] <<< CALL
  0x00462377:  mov      ecx, dword ptr [0x81ca14]
  0x0046237d:  test     ecx, ecx
  0x0046237f:  jne      0x462393
  0x00462381:  mov      eax, dword ptr [0x81ca10]
  0x00462386:  mov      ecx, 0x81ca10
  0x0046238b:  call     dword ptr [eax] <<< CALL
  0x0046238d:  mov      ecx, dword ptr [0x81ca14]
  0x00462393:  mov      edx, dword ptr [ecx]
  0x00462395:  push     0xa
  0x00462397:  lea      eax, [esp + 0x19e]
  0x0046239e:  push     0x7a
  0x004623a0:  push     eax
  0x004623a1:  call     dword ptr [edx + 0x14] <<< CALL
  0x004623a4:  mov      ecx, dword ptr [esi*8 + 0x81ca6c]
  0x004623ab:  test     ecx, ecx
  0x004623ad:  je       0x4623c0
  0x004623af:  mov      edx, dword ptr [ecx]
  0x004623b1:  push     0x88
  0x004623b6:  lea      eax, [esp + 0x30]
  0x004623ba:  push     0
  0x004623bc:  push     eax
  0x004623bd:  call     dword ptr [edx + 0x10] <<< CALL
  0x004623c0:  mov      ecx, dword ptr [0x81ca14]
  0x004623c6:  test     ecx, ecx
  0x004623c8:  jne      0x4623dd
  0x004623ca:  mov      edx, dword ptr [0x81ca10]
  0x004623d0:  mov      ecx, 0x81ca10
  0x004623d5:  call     dword ptr [edx] <<< CALL
  0x004623d7:  mov      ecx, dword ptr [0x81ca14]
  0x004623dd:  mov      eax, dword ptr [ecx]
  0x004623df:  push     0x32
  0x004623e1:  lea      edx, [esp + 0x1bc]
  0x004623e8:  push     0x84
  0x004623ed:  push     edx
  0x004623ee:  call     dword ptr [eax + 0x14] <<< CALL
  0x004623f1:  mov      eax, dword ptr [esp + 0x24]
  0x004623f5:  test     eax, eax
  0x004623f7:  jne      0x4626f5
  0x004623fd:  mov      eax, dword ptr [esp + 0x18]
  0x00462401:  lea      ecx, [eax + eax*4]
  0x00462404:  lea      edx, [eax + ecx*2]
  0x00462407:  mov      ecx, dword ptr [edx*8 + 0x81ca6c]
  0x0046240e:  test     ecx, ecx
  0x00462410:  lea      eax, [edx*8 + 0x81ca68]
  0x00462417:  je       0x462427
  0x00462419:  mov      eax, dword ptr [ecx]
  0x0046241b:  push     0x5a
  0x0046241d:  lea      edx, [esp + 0x30]
  0x00462421:  push     0
  0x00462423:  push     edx
  0x00462424:  call     dword ptr [eax + 0x10] <<< CALL
  0x00462427:  mov      ecx, dword ptr [0x81ca14]
  0x0046242d:  test     ecx, ecx
  0x0046242f:  jne      0x462443
  0x00462431:  mov      eax, dword ptr [0x81ca10]
  0x00462436:  mov      ecx, 0x81ca10
  0x0046243b:  call     dword ptr [eax] <<< CALL
  0x0046243d:  mov      ecx, dword ptr [0x81ca14]
  0x00462443:  mov      edx, dword ptr [ecx]
  0x00462445:  push     7
  0x00462447:  lea      eax, [esp + 0x120]
  0x0046244e:  push     0x50
  0x00462450:  push     eax
  0x00462451:  call     dword ptr [edx + 0x14] <<< CALL
  0x00462454:  jmp      0x4626f5
  0x00462459:  mov      edi, ebp
  0x0046245b:  push     ebp
  0x0046245c:  shl      edi, 8
  0x0046245f:  movsx    eax, word ptr [edi + 0x57956e]
  0x00462466:  lea      esi, [eax*8]
  0x0046246d:  sub      esi, eax
  0x0046246f:  lea      esi, [esi + esi*4]
  0x00462472:  shl      esi, 4
  0x00462475:  call     0x46c940 <<< CALL
  0x0046247a:  movsx    ecx, byte ptr [esi + 0x4d60aa]
  0x00462481:  add      esp, 4
  0x00462484:  neg      eax
  0x00462486:  sbb      eax, eax
  0x00462488:  and      al, 0xec
  0x0046248a:  add      eax, 0x14
  0x0046248d:  add      eax, ecx
  0x0046248f:  mov      edx, eax
  0x00462491:  shl      edx, 4
  0x00462494:  add      edx, eax
  0x00462496:  movsx    eax, byte ptr [edx*4 + 0x4d55eb]
  0x0046249e:  mov      dword ptr [esp + 0x20], eax
  0x004624a2:  mov      eax, dword ptr [esi + 0x4d60b4]
  0x004624a8:  test     eax, eax
  0x004624aa:  je       0x4624ec
  0x004624ac:  movsx    ecx, byte ptr [esi + 0x4d60ac]
  0x004624b3:  movsx    edx, byte ptr [esi + 0x4d60ad]
  0x004624ba:  movsx    eax, byte ptr [esi + 0x4d60af]
  0x004624c1:  mov      bl, byte ptr [esi + 0x4d60ab]
  0x004624c7:  mov      dword ptr [esp + 0x10], ecx
  0x004624cb:  movsx    ecx, byte ptr [esi + 0x4d60ae]
  0x004624d2:  mov      dword ptr [esp + 0x1c], edx
  0x004624d6:  and      ebx, 0xf
  0x004624d9:  movsx    edx, byte ptr [esi + 0x4d60b0]
  0x004624e0:  mov      dword ptr [esp + 0x14], eax
  0x004624e4:  mov      dword ptr [esp + 0x18], ecx
  0x004624e8:  mov      dword ptr [esp + 0x20], edx
  0x004624ec:  cmp      byte ptr [edi + 0x5794d0], 0x20
  0x004624f3:  jne      0x462541
  0x004624f5:  xor      ecx, ecx
  0x004624f7:  mov      dword ptr [esp + 0x18], 4
  0x004624ff:  mov      cl, byte ptr [edi + 0x579573]
  0x00462505:  mov      dword ptr [esp + 0x28], 1
  0x0046250d:  lea      eax, [ecx*8]
  0x00462514:  sub      eax, ecx
  0x00462516:  shl      eax, 3
  0x00462519:  movsx    ebx, byte ptr [eax + 0x58dd72]
  0x00462520:  movsx    ecx, byte ptr [eax + 0x58dd71]
  0x00462527:  movsx    edx, byte ptr [eax + 0x58dd73]
  0x0046252e:  movsx    eax, byte ptr [eax + 0x58dd74]
  0x00462535:  mov      dword ptr [esp + 0x14], ecx
  0x00462539:  mov      dword ptr [esp + 0x10], edx
  0x0046253d:  mov      dword ptr [esp + 0x1c], eax
  0x00462541:  mov      eax, dword ptr [esp + 0x24]
  0x00462545:  test     eax, eax
  0x00462547:  jne      0x46258c
  0x00462549:  mov      cl, byte ptr [esi + 0x4d60ab]
  0x0046254f:  mov      dl, byte ptr [esp + 0x10]
  0x00462553:  mov      al, byte ptr [esp + 0x1c]
  0x00462557:  and      cl, 0xf0
  0x0046255a:  or       cl, bl
  0x0046255c:  mov      byte ptr [esi + 0x4d60ab], cl
  0x00462562:  mov      cl, byte ptr [esp + 0x14]
  0x00462566:  mov      byte ptr [esi + 0x4d60ac], dl
  0x0046256c:  mov      dl, byte ptr [esp + 0x18]
  0x00462570:  mov      byte ptr [esi + 0x4d60ad], al
  0x00462576:  mov      al, byte ptr [esp + 0x20]
  0x0046257a:  mov      byte ptr [esi + 0x4d60af], cl
  0x00462580:  mov      byte ptr [esi + 0x4d60ae], dl
  0x00462586:  mov      byte ptr [esi + 0x4d60b0], al
  0x0046258c:  mov      eax, dword ptr [esp + 0x28]
  0x00462590:  test     eax, eax
  0x00462592:  jne      0x46217d
  0x00462598:  mov      ecx, dword ptr [esp + 0x14]
  0x0046259c:  mov      edx, dword ptr [esp + 0x1c]
  0x004625a0:  mov      eax, 0x8b
  0x004625a5:  mov      esi, dword ptr [esp + 0x18]
  0x004625a9:  add      ecx, eax
  0x004625ab:  add      edx, eax
  0x004625ad:  mov      dword ptr [esp + 0x14], ecx
  0x004625b1:  mov      ecx, dword ptr [esp + 0x20]
  0x004625b5:  add      ecx, eax
  0x004625b7:  mov      dword ptr [esp + 0x1c], edx
  0x004625bb:  mov      edx, dword ptr [esp + 0x10]
  0x004625bf:  mov      dword ptr [esp + 0x20], ecx
  0x004625c3:  mov      ecx, dword ptr [0x81fa34]
  0x004625c9:  add      ebx, eax
  0x004625cb:  add      esi, eax
  0x004625cd:  add      edx, eax
  0x004625cf:  test     ecx, ecx
  0x004625d1:  mov      dword ptr [esp + 0x18], esi
  0x004625d5:  mov      dword ptr [esp + 0x10], edx
  0x004625d9:  je       0x4625e9
  0x004625db:  mov      edx, dword ptr [ecx]
  0x004625dd:  push     0x78
  0x004625df:  lea      eax, [esp + 0x30]
  0x004625e3:  push     0
  0x004625e5:  push     eax
  0x004625e6:  call     dword ptr [edx + 0x10] <<< CALL
  0x004625e9:  mov      ecx, dword ptr [0x81ca14]
  0x004625ef:  test     ecx, ecx
  0x004625f1:  jne      0x462606
  0x004625f3:  mov      edx, dword ptr [0x81ca10]
  0x004625f9:  mov      ecx, 0x81ca10
  0x004625fe:  call     dword ptr [edx] <<< CALL
  0x00462600:  mov      ecx, dword ptr [0x81ca14]
  0x00462606:  mov      eax, dword ptr [ecx]
  0x00462608:  push     0x78
  0x0046260a:  lea      edx, [esp + 0x30]
  0x0046260e:  push     0
  0x00462610:  push     edx
  0x00462611:  call     dword ptr [eax + 0x14] <<< CALL
  0x00462614:  jmp      0x4621bf
  0x00462619:  mov      eax, dword ptr [esp + 0x20]
  0x0046261d:  lea      ecx, [eax + eax*4]
  0x00462620:  lea      edx, [eax + ecx*2]
  0x00462623:  mov      ecx, dword ptr [edx*8 + 0x81ca6c]
  0x0046262a:  test     ecx, ecx
  0x0046262c:  lea      eax, [edx*8 + 0x81ca68]
  0x00462633:  je       0x462643
  0x00462635:  mov      eax, dword ptr [ecx]
  0x00462637:  push     0x5a
  0x00462639:  lea      edx, [esp + 0x30]
  0x0046263d:  push     0
  0x0046263f:  push     edx
  0x00462640:  call     dword ptr [eax + 0x10] <<< CALL
  0x00462643:  mov      ecx, dword ptr [0x81ca14]
  0x00462649:  test     ecx, ecx
  0x0046264b:  jne      0x46265f
  0x0046264d:  mov      eax, dword ptr [0x81ca10]
  0x00462652:  mov      ecx, 0x81ca10
  0x00462657:  call     dword ptr [eax] <<< CALL
  0x00462659:  mov      ecx, dword ptr [0x81ca14]
  0x0046265f:  mov      edx, dword ptr [ecx]
  0x00462661:  push     0xa
  0x00462663:  lea      eax, [esp + 0x120]
  0x0046266a:  push     0x50
  0x0046266c:  push     eax
  0x0046266d:  call     dword ptr [edx + 0x14] <<< CALL
  0x00462670:  mov      eax, dword ptr [esp + 0x18]
  0x00462674:  lea      ecx, [eax + eax*4]
  0x00462677:  lea      edx, [eax + ecx*2]
  0x0046267a:  mov      ecx, dword ptr [edx*8 + 0x81ca6c]
  0x00462681:  test     ecx, ecx
  0x00462683:  lea      eax, [edx*8 + 0x81ca68]
  0x0046268a:  je       0x46269a
  0x0046268c:  mov      eax, dword ptr [ecx]
  0x0046268e:  push     0x64
  0x00462690:  lea      edx, [esp + 0x30]
  0x00462694:  push     0
  0x00462696:  push     edx
  0x00462697:  call     dword ptr [eax + 0x10] <<< CALL
  0x0046269a:  mov      ecx, dword ptr [0x81ca14]
  0x004626a0:  test     ecx, ecx
  0x004626a2:  jne      0x4626b6
  0x004626a4:  mov      eax, dword ptr [0x81ca10]
  0x004626a9:  mov      ecx, 0x81ca10
  0x004626ae:  call     dword ptr [eax] <<< CALL
  0x004626b0:  mov      ecx, dword ptr [0x81ca14]
  0x004626b6:  mov      edx, dword ptr [ecx]
  0x004626b8:  push     7
  0x004626ba:  lea      eax, [esp + 0x13e]
  0x004626c1:  push     0x5a
  0x004626c3:  push     eax
  0x004626c4:  call     dword ptr [edx + 0x14] <<< CALL
  0x004626c7:  mov      eax, ebp
  0x004626c9:  and      eax, 1
  0x004626cc:  lea      ecx, [eax + eax*4]
  0x004626cf:  lea      edx, [eax + ecx*2]
  0x004626d2:  mov      ecx, dword ptr [edx*8 + 0x81fa34]
  0x004626d9:  test     ecx, ecx
  0x004626db:  lea      eax, [edx*8 + 0x81fa30]
  0x004626e2:  je       0x4626f5
  0x004626e4:  mov      eax, dword ptr [ecx]
  0x004626e6:  push     0xac
  0x004626eb:  lea      edx, [esp + 0x30]
  0x004626ef:  push     0
  0x004626f1:  push     edx
  0x004626f2:  call     dword ptr [eax + 0x10] <<< CALL
  0x004626f5:  test     ebp, ebp
  0x004626f7:  jl       0x462775
  0x004626f9:  cmp      ebp, 0x98
  0x004626ff:  jge      0x462775
  0x00462701:  shl      ebp, 8
  0x00462704:  movsx    eax, word ptr [ebp + 0x57956e]
  0x0046270b:  lea      ecx, [eax + eax*4]
  0x0046270e:  lea      edx, [eax + ecx*2]
  0x00462711:  mov      al, byte ptr [edx*4 + 0x5849e2]
  0x00462718:  and      al, 7
  0x0046271a:  cmp      al, 4
  0x0046271c:  jl       0x462775
  0x0046271e:  mov      ecx, dword ptr [0x81fa8c]
  0x00462724:  test     ecx, ecx
  0x00462726:  je       0x462739
  0x00462728:  mov      edx, dword ptr [ecx]
  0x0046272a:  push     0xac
  0x0046272f:  lea      eax, [esp + 0x30]
  0x00462733:  push     0
  0x00462735:  push     eax
  0x00462736:  call     dword ptr [edx + 0x10] <<< CALL
  0x00462739:  mov      ecx, dword ptr [0x81ca14]
  0x0046273f:  test     ecx, ecx
  0x00462741:  jne      0x462756
  0x00462743:  mov      edx, dword ptr [0x81ca10]
  0x00462749:  mov      ecx, 0x81ca10
  0x0046274e:  call     dword ptr [edx] <<< CALL
  0x00462750:  mov      ecx, dword ptr [0x81ca14]
  0x00462756:  mov      eax, dword ptr [ecx]
  0x00462758:  push     0x1c
  0x0046275a:  lea      edx, [esp + 0x1e0]
  0x00462761:  push     0x90
  0x00462766:  push     edx
  0x00462767:  call     dword ptr [eax + 0x14] <<< CALL
  0x0046276a:  pop      edi
  0x0046276b:  pop      esi
  0x0046276c:  pop      ebp
  0x0046276d:  pop      ebx
  0x0046276e:  add      esp, 0x31c
  0x00462774:  ret      
  0x00462775:  mov      ecx, dword ptr [0x81fa34]
  0x0046277b:  test     ecx, ecx
  0x0046277d:  je       0x462790
  0x0046277f:  mov      eax, dword ptr [ecx]
  0x00462781:  push     0xac
  0x00462786:  lea      edx, [esp + 0x30]
  0x0046278a:  push     0
  0x0046278c:  push     edx
  0x0046278d:  call     dword ptr [eax + 0x10] <<< CALL
  0x00462790:  mov      ecx, dword ptr [0x81ca14]
  0x00462796:  test     ecx, ecx
  0x00462798:  jne      0x4627ac
  0x0046279a:  mov      eax, dword ptr [0x81ca10]
  0x0046279f:  mov      ecx, 0x81ca10
  0x004627a4:  call     dword ptr [eax] <<< CALL
  0x004627a6:  mov      ecx, dword ptr [0x81ca14]
  0x004627ac:  mov      edx, dword ptr [ecx]
  0x004627ae:  push     0x1c
  0x004627b0:  lea      eax, [esp + 0x1e0]
  0x004627b7:  push     0x90
  0x004627bc:  push     eax
  0x004627bd:  call     dword ptr [edx + 0x14] <<< CALL
  0x004627c0:  pop      edi
  0x004627c1:  pop      esi
  0x004627c2:  pop      ebp
  0x004627c3:  pop      ebx
  0x004627c4:  add      esp, 0x31c
  0x004627ca:  ret      
  0x004627cb:  call     0x405099 <<< CALL
  0x004627d0:  xor      eax, eax
  0x004627d2:  or       ecx, 0xffffffff
  0x004627d5:  mov      dword ptr [0x838200], eax
  0x004627da:  mov      dword ptr [0x834174], eax
  0x004627df:  mov      dword ptr [0x8371fc], eax
  0x004627e4:  mov      dword ptr [0x82c160], ecx
  0x004627ea:  mov      eax, 0x400
  0x004627ef:  dec      eax
  0x004627f0:  mov      dword ptr [0x8371f4], ecx
  0x004627f6:  jne      0x4627ef
  0x004627f8:  ret      
  0x004627f9:  call     0x405097 <<< CALL
  0x004627fe:  nop      
  0x004627ff:  nop      
  0x00462800:  push     esi
  0x00462801:  push     edi
  0x00462802:  mov      ecx, 0x400
  0x00462807:  mov      esi, 0x830164
  0x0046280c:  mov      edi, 0x832164
  0x00462811:  mov      eax, dword ptr [0x838200]
  0x00462816:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462818:  mov      ecx, 0x400
  0x0046281d:  mov      esi, 0x831164
  0x00462822:  mov      edi, 0x833164
  0x00462827:  mov      dword ptr [0x82b15c], eax
  0x0046282c:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046282e:  mov      ecx, 0x400
  0x00462833:  mov      esi, 0x82b160
  0x00462838:  mov      edi, 0x82615c
  0x0046283d:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046283f:  mov      ecx, 0x400
  0x00462844:  mov      esi, 0x82c164
  0x00462849:  mov      edi, 0x82715c
  0x0046284e:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462850:  mov      ecx, 0x400
  0x00462855:  mov      esi, 0x82415c
  0x0046285a:  mov      edi, 0x82d164
  0x0046285f:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462861:  mov      ecx, 0x400
  0x00462866:  mov      esi, 0x82915c
  0x0046286b:  mov      edi, 0x82f164
  0x00462870:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462872:  mov      ecx, 0x400
  0x00462877:  mov      esi, 0x8361f4
  0x0046287c:  mov      edi, 0x82515c
  0x00462881:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462883:  mov      ecx, 0x400
  0x00462888:  mov      esi, 0x82a15c
  0x0046288d:  mov      edi, 0x8351f4
  0x00462892:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462894:  mov      ecx, 0x400
  0x00462899:  mov      esi, 0x834174
  0x0046289e:  mov      edi, 0x8371fc
  0x004628a3:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004628a5:  mov      ecx, 0x400
  0x004628aa:  mov      esi, 0x82815c
  0x004628af:  mov      edi, 0x82e164
  0x004628b4:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004628b6:  mov      ecx, dword ptr [0x82c160]
  0x004628bc:  pop      edi
  0x004628bd:  mov      dword ptr [0x8371f4], ecx
  0x004628c3:  pop      esi
  0x004628c4:  ret      
  0x004628c5:  call     dword ptr [0x4ba114] <<< CALL
  0x004628cb:  nop      
  0x004628cc:  nop      
  0x004628cd:  nop      
  0x004628ce:  nop      
  0x004628cf:  nop      
  0x004628d0:  mov      eax, dword ptr [0x822c8c]
  0x004628d5:  push     ebx
  0x004628d6:  push     ebp
  0x004628d7:  push     esi
  0x004628d8:  cmp      eax, 0x3e8
  0x004628dd:  push     edi
  0x004628de:  mov      ebx, 0x10
  0x004628e3:  jle      0x4628ea
  0x004628e5:  mov      ebx, 0xd
  0x004628ea:  cmp      eax, 0x4b0
  0x004628ef:  jl       0x4628f6
  0x004628f1:  mov      ebx, 0xa
  0x004628f6:  mov      eax, dword ptr [esp + 0x30]
  0x004628fa:  test     ah, 1
  0x004628fd:  je       0x462904
  0x004628ff:  mov      ebx, 0x10
  0x00462904:  mov      ecx, dword ptr [esp + 0x2c]
  0x00462908:  test     ecx, ecx
  0x0046290a:  jne      0x46295b
  0x0046290c:  mov      ebx, dword ptr [0x4c2844]
  0x00462912:  mov      edi, dword ptr [esp + 0x14]
  0x00462916:  mov      eax, ebx
  0x00462918:  mov      esi, dword ptr [0x838200]
  0x0046291e:  imul     eax, dword ptr [esp + 0x20]
  0x00462923:  cdq      
  0x00462924:  and      edx, 3
  0x00462927:  add      eax, edx
  0x00462929:  mov      edx, edi
  0x0046292b:  sar      eax, 2
  0x0046292e:  sub      edx, eax
  0x00462930:  mov      eax, ebx
  0x00462932:  imul     eax, dword ptr [esp + 0x24]
  0x00462937:  mov      dword ptr [esi*4 + 0x830164], edx
  0x0046293e:  cdq      
  0x0046293f:  and      edx, 3
  0x00462942:  add      eax, edx
  0x00462944:  mov      edx, dword ptr [esp + 0x18]
  0x00462948:  sar      eax, 2
  0x0046294b:  mov      ebx, edx
  0x0046294d:  sub      ebx, eax
  0x0046294f:  mov      dword ptr [esi*4 + 0x831164], ebx
  0x00462956:  jmp      0x4629e5
  0x0046295b:  jle      0x4629a3
  0x0046295d:  mov      ebp, dword ptr [0x4c2844]
  0x00462963:  mov      edi, dword ptr [esp + 0x14]
  0x00462967:  mov      eax, ebp
  0x00462969:  mov      esi, dword ptr [0x838200]
  0x0046296f:  imul     eax, dword ptr [esp + 0x20]
  0x00462974:  imul     eax, ecx
  0x00462977:  cdq      
  0x00462978:  idiv     ebx
  0x0046297a:  mov      edx, edi
  0x0046297c:  sub      edx, eax
  0x0046297e:  mov      eax, ebp
  0x00462980:  imul     eax, dword ptr [esp + 0x24]
  0x00462985:  imul     eax, ecx
  0x00462988:  mov      dword ptr [esi*4 + 0x830164], edx
  0x0046298f:  cdq      
  0x00462990:  idiv     ebx
  0x00462992:  mov      edx, dword ptr [esp + 0x18]
  0x00462996:  mov      ebx, edx
  0x00462998:  sub      ebx, eax
  0x0046299a:  mov      dword ptr [esi*4 + 0x831164], ebx
  0x004629a1:  jmp      0x4629e5
  0x004629a3:  mov      ebp, dword ptr [0x4c2844]
  0x004629a9:  add      ebx, ebx
  0x004629ab:  mov      eax, ebp
  0x004629ad:  mov      edi, dword ptr [esp + 0x14]
  0x004629b1:  imul     eax, dword ptr [esp + 0x20]
  0x004629b6:  imul     eax, ecx
  0x004629b9:  cdq      
  0x004629ba:  idiv     ebx
  0x004629bc:  mov      esi, dword ptr [0x838200]
  0x004629c2:  add      eax, edi
  0x004629c4:  mov      dword ptr [esi*4 + 0x830164], eax
  0x004629cb:  mov      eax, ebp
  0x004629cd:  imul     eax, dword ptr [esp + 0x24]
  0x004629d2:  imul     eax, ecx
  0x004629d5:  cdq      
  0x004629d6:  idiv     ebx
  0x004629d8:  mov      edx, dword ptr [esp + 0x18]
  0x004629dc:  add      eax, edx
  0x004629de:  mov      dword ptr [esi*4 + 0x831164], eax
  0x004629e5:  mov      eax, dword ptr [esp + 0x1c]
  0x004629e9:  mov      dword ptr [esi*4 + 0x82c164], edx
  0x004629f0:  mov      edx, dword ptr [esp + 0x30]
  0x004629f4:  mov      dword ptr [esi*4 + 0x82915c], ecx
  0x004629fb:  mov      ecx, dword ptr [esp + 0x28]
  0x004629ff:  push     esi
  0x00462a00:  mov      dword ptr [esi*4 + 0x82b160], edi
  0x00462a07:  mov      dword ptr [esi*4 + 0x82415c], eax
  0x00462a0e:  mov      dword ptr [esi*4 + 0x82a15c], ecx
  0x00462a15:  mov      dword ptr [esi*4 + 0x82815c], edx
  0x00462a1c:  call     0x462be0 <<< CALL
  0x00462a21:  add      esp, 4
  0x00462a24:  pop      edi
  0x00462a25:  pop      esi
  0x00462a26:  pop      ebp
  0x00462a27:  pop      ebx
  0x00462a28:  ret      
  0x00462a29:  call     0x405097 <<< CALL
  0x00462a2e:  nop      
  0x00462a2f:  nop      
  0x00462a30:  push     ebp
  0x00462a31:  mov      ebp, dword ptr [0x838200]
  0x00462a37:  cmp      ebp, 0x3ff
  0x00462a3d:  jge      0x462bde
  0x00462a43:  mov      eax, dword ptr [0x822c8c]
  0x00462a48:  push     ebx
  0x00462a49:  push     esi
  0x00462a4a:  push     edi
  0x00462a4b:  cmp      eax, 0x3e8
  0x00462a50:  mov      edi, 0x10
  0x00462a55:  jle      0x462a5c
  0x00462a57:  mov      edi, 0xd
  0x00462a5c:  cmp      eax, 0x4b0
  0x00462a61:  jl       0x462a68
  0x00462a63:  mov      edi, 0xa
  0x00462a68:  mov      eax, dword ptr [esp + 0x30]
  0x00462a6c:  test     ah, 1
  0x00462a6f:  je       0x462a76
  0x00462a71:  mov      edi, 0x10
  0x00462a76:  mov      ecx, dword ptr [esp + 0x2c]
  0x00462a7a:  test     ecx, ecx
  0x00462a7c:  jne      0x462ac4
  0x00462a7e:  mov      edi, dword ptr [0x4c2844]
  0x00462a84:  mov      esi, dword ptr [esp + 0x14]
  0x00462a88:  mov      eax, edi
  0x00462a8a:  imul     eax, dword ptr [esp + 0x20]
  0x00462a8f:  cdq      
  0x00462a90:  and      edx, 3
  0x00462a93:  add      eax, edx
  0x00462a95:  mov      edx, esi
  0x00462a97:  sar      eax, 2
  0x00462a9a:  sub      edx, eax
  0x00462a9c:  mov      eax, edi
  0x00462a9e:  imul     eax, dword ptr [esp + 0x24]
  0x00462aa3:  mov      dword ptr [ebp*4 + 0x830164], edx
  0x00462aaa:  cdq      
  0x00462aab:  and      edx, 3
  0x00462aae:  add      eax, edx
  0x00462ab0:  mov      edx, dword ptr [esp + 0x18]
  0x00462ab4:  sar      eax, 2
  0x00462ab7:  mov      edi, edx
  0x00462ab9:  sub      edi, eax
  0x00462abb:  mov      dword ptr [ebp*4 + 0x831164], edi
  0x00462ac2:  jmp      0x462b42
  0x00462ac4:  jle      0x462b06
  0x00462ac6:  mov      ebx, dword ptr [0x4c2844]
  0x00462acc:  mov      esi, dword ptr [esp + 0x14]
  0x00462ad0:  mov      eax, ebx
  0x00462ad2:  imul     eax, dword ptr [esp + 0x20]
  0x00462ad7:  imul     eax, ecx
  0x00462ada:  cdq      
  0x00462adb:  idiv     edi
  0x00462add:  mov      edx, esi
  0x00462adf:  sub      edx, eax
  0x00462ae1:  mov      eax, ebx
  0x00462ae3:  imul     eax, dword ptr [esp + 0x24]
  0x00462ae8:  imul     eax, ecx
  0x00462aeb:  mov      dword ptr [ebp*4 + 0x830164], edx
  0x00462af2:  cdq      
  0x00462af3:  idiv     edi
  0x00462af5:  mov      edx, dword ptr [esp + 0x18]
  0x00462af9:  mov      edi, edx
  0x00462afb:  sub      edi, eax
  0x00462afd:  mov      dword ptr [ebp*4 + 0x831164], edi
  0x00462b04:  jmp      0x462b42
  0x00462b06:  mov      ebx, dword ptr [0x4c2844]
  0x00462b0c:  add      edi, edi
  0x00462b0e:  mov      eax, ebx
  0x00462b10:  mov      esi, dword ptr [esp + 0x14]
  0x00462b14:  imul     eax, dword ptr [esp + 0x20]
  0x00462b19:  imul     eax, ecx
  0x00462b1c:  cdq      
  0x00462b1d:  idiv     edi
  0x00462b1f:  add      eax, esi
  0x00462b21:  mov      dword ptr [ebp*4 + 0x830164], eax
  0x00462b28:  mov      eax, ebx
  0x00462b2a:  imul     eax, dword ptr [esp + 0x24]
  0x00462b2f:  imul     eax, ecx
  0x00462b32:  cdq      
  0x00462b33:  idiv     edi
  0x00462b35:  mov      edx, dword ptr [esp + 0x18]
  0x00462b39:  add      eax, edx
  0x00462b3b:  mov      dword ptr [ebp*4 + 0x831164], eax
  0x00462b42:  mov      eax, dword ptr [esp + 0x28]
  0x00462b46:  mov      dword ptr [ebp*4 + 0x82915c], ecx
  0x00462b4d:  mov      ecx, dword ptr [esp + 0x30]
  0x00462b51:  mov      dword ptr [ebp*4 + 0x82c164], edx
  0x00462b58:  mov      edx, dword ptr [esp + 0x1c]
  0x00462b5c:  mov      dword ptr [ebp*4 + 0x82815c], ecx
  0x00462b63:  mov      ecx, dword ptr [0x82c160]
  0x00462b69:  mov      dword ptr [ebp*4 + 0x82a15c], eax
  0x00462b70:  cmp      ecx, -1
  0x00462b73:  mov      dword ptr [ebp*4 + 0x82b160], esi
  0x00462b7a:  mov      dword ptr [ebp*4 + 0x82415c], edx
  0x00462b81:  mov      eax, ecx
  0x00462b83:  je       0x462ba4
  0x00462b85:  mov      esi, dword ptr [esp + 0x20]
  0x00462b89:  cmp      dword ptr [eax*4 + 0x82415c], edx
  0x00462b90:  jge      0x462ba0
  0x00462b92:  mov      esi, eax
  0x00462b94:  mov      eax, dword ptr [eax*4 + 0x8361f4]
  0x00462b9b:  cmp      eax, -1
  0x00462b9e:  jne      0x462b89
  0x00462ba0:  cmp      eax, ecx
  0x00462ba2:  jne      0x462bb3
  0x00462ba4:  mov      dword ptr [ebp*4 + 0x8361f4], ecx
  0x00462bab:  mov      dword ptr [0x82c160], ebp
  0x00462bb1:  jmp      0x462bc1
  0x00462bb3:  mov      dword ptr [ebp*4 + 0x8361f4], eax
  0x00462bba:  mov      dword ptr [esi*4 + 0x8361f4], ebp
  0x00462bc1:  inc      ebp
  0x00462bc2:  pop      edi
  0x00462bc3:  pop      esi
  0x00462bc4:  cmp      ebp, 0x400
  0x00462bca:  mov      dword ptr [0x838200], ebp
  0x00462bd0:  pop      ebx
  0x00462bd1:  jge      0x462bde
  0x00462bd3:  mov      dword ptr [ebp*4 + 0x834174], 0
  0x00462bde:  pop      ebp
  0x00462bdf:  ret      
  0x00462be0:  push     -1
  0x00462be2:  push     0x4b7a38
  0x00462be7:  mov      eax, dword ptr fs:[0]
  0x00462bed:  push     eax
  0x00462bee:  mov      dword ptr fs:[0], esp
  0x00462bf5:  sub      esp, 0x5c
  0x00462bf8:  push     ebx
  0x00462bf9:  push     ebp
  0x00462bfa:  push     esi
  0x00462bfb:  push     edi
  0x00462bfc:  lea      ecx, [esp + 0x14]
  0x00462c00:  call     0x482fd0 <<< CALL
  0x00462c05:  mov      ebp, dword ptr [esp + 0x7c]
  0x00462c09:  mov      eax, dword ptr [0x822c8c]
  0x00462c0e:  cmp      eax, 0x3e8
  0x00462c13:  mov      dword ptr [esp + 0x74], 0
  0x00462c1b:  mov      ecx, dword ptr [ebp*4 + 0x82815c]
  0x00462c22:  mov      edi, 0x10
  0x00462c27:  jle      0x462c2e
  0x00462c29:  mov      edi, 0xd
  0x00462c2e:  cmp      eax, 0x4b0
  0x00462c33:  jl       0x462c3a
  0x00462c35:  mov      edi, 0xa
  0x00462c3a:  test     ch, 1
  0x00462c3d:  je       0x462c44
  0x00462c3f:  mov      edi, 0x10
  0x00462c44:  mov      ecx, dword ptr [ebp*4 + 0x82a15c]
  0x00462c4b:  mov      eax, dword ptr [ecx + 0x1c]
  0x00462c4e:  mov      dword ptr [esp + 0x7c], eax
  0x00462c52:  lea      eax, [ebp*4 + 0x82915c]
  0x00462c59:  mov      dword ptr [esp + 0x10], eax
  0x00462c5d:  mov      eax, dword ptr [eax]
  0x00462c5f:  test     eax, eax
  0x00462c61:  je       0x46306b
  0x00462c67:  jle      0x462c89
  0x00462c69:  imul     eax, dword ptr [0x4c2844]
  0x00462c70:  mov      ecx, dword ptr [0x83ad50]
  0x00462c76:  mov      esi, eax
  0x00462c78:  test     ecx, ecx
  0x00462c7a:  je       0x462cab
  0x00462c7c:  mov      edx, dword ptr [ecx]
  0x00462c7e:  push     edi
  0x00462c7f:  push     esi
  0x00462c80:  push     esi
  0x00462c81:  call     dword ptr [edx + 0x9c] <<< CALL
  0x00462c87:  jmp      0x462cab
  0x00462c89:  imul     eax, dword ptr [0x4c2844]
  0x00462c90:  mov      ecx, dword ptr [0x83ad50]
  0x00462c96:  add      edi, edi
  0x00462c98:  neg      eax
  0x00462c9a:  test     ecx, ecx
  0x00462c9c:  mov      esi, eax
  0x00462c9e:  je       0x462cab
  0x00462ca0:  mov      eax, dword ptr [ecx]
  0x00462ca2:  push     edi
  0x00462ca3:  push     esi
  0x00462ca4:  push     esi
  0x00462ca5:  call     dword ptr [eax + 0x9c] <<< CALL
  0x00462cab:  mov      eax, dword ptr [ebp*4 + 0x82815c]
  0x00462cb2:  cmp      eax, -1
  0x00462cb5:  je       0x463042
  0x00462cbb:  mov      ebx, eax
  0x00462cbd:  test     bh, 1
  0x00462cc0:  je       0x462f4e
  0x00462cc6:  and      ebx, 0xff
  0x00462ccc:  push     ebx
  0x00462ccd:  call     0x462020 <<< CALL
  0x00462cd2:  mov      ecx, dword ptr [0x824148]
  0x00462cd8:  mov      edx, dword ptr [ebp*4 + 0x831164]
  0x00462cdf:  mov      eax, dword ptr [ebp*4 + 0x830164]
  0x00462ce6:  add      esp, 4
  0x00462ce9:  push     0x81ca10
  0x00462cee:  push     ecx
  0x00462cef:  mov      ecx, dword ptr [0x4c1570]
  0x00462cf5:  push     edx
  0x00462cf6:  push     eax
  0x00462cf7:  push     ecx
  0x00462cf8:  mov      ecx, dword ptr [ebp*4 + 0x82a15c]
  0x00462cff:  call     0x4741b0 <<< CALL
  0x00462d04:  cmp      ebx, 0xff
  0x00462d0a:  je       0x46308f
  0x00462d10:  cmp      ebx, 0x98
  0x00462d16:  jge      0x46308f
  0x00462d1c:  push     0
  0x00462d1e:  push     ebx
  0x00462d1f:  mov      byte ptr [0x51a068], 0
  0x00462d26:  call     0x4676e0 <<< CALL
  0x00462d2b:  mov      esi, ebx
  0x00462d2d:  add      esp, 8
  0x00462d30:  shl      esi, 8
  0x00462d33:  mov      dword ptr [esp + 0x7c], esi
  0x00462d37:  mov      eax, dword ptr [esi + 0x5794c8]
  0x00462d3d:  test     ah, 0x40
  0x00462d40:  je       0x462d73
  0x00462d42:  mov      edi, 0x4c4e60
  0x00462d47:  or       ecx, 0xffffffff
  0x00462d4a:  xor      eax, eax
  0x00462d4c:  repne scasb al, byte ptr es:[edi]
  0x00462d4e:  not      ecx
  0x00462d50:  sub      edi, ecx
  0x00462d52:  mov      esi, edi
  0x00462d54:  mov      edx, ecx
  0x00462d56:  mov      edi, 0x51a068
  0x00462d5b:  or       ecx, 0xffffffff
  0x00462d5e:  repne scasb al, byte ptr es:[edi]
  0x00462d60:  mov      ecx, edx
  0x00462d62:  dec      edi
  0x00462d63:  shr      ecx, 2
  0x00462d66:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462d68:  mov      ecx, edx
  0x00462d6a:  and      ecx, 3
  0x00462d6d:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00462d6f:  mov      esi, dword ptr [esp + 0x7c]
  0x00462d73:  test     byte ptr [0x59e7b8], 0x20
  0x00462d7a:  je       0x462dba
  0x00462d7c:  push     0xa
  0x00462d7e:  push     0x834164
  0x00462d83:  push     ebx
  0x00462d84:  call     0x4ad425 <<< CALL
  0x00462d89:  mov      edi, eax
  0x00462d8b:  or       ecx, 0xffffffff
  0x00462d8e:  xor      eax, eax
  0x00462d90:  add      esp, 0xc
  0x00462d93:  repne scasb al, byte ptr es:[edi]
  0x00462d95:  not      ecx
  0x00462d97:  sub      edi, ecx
  0x00462d99:  mov      esi, edi
  0x00462d9b:  mov      edx, ecx
  0x00462d9d:  mov      edi, 0x51a068
  0x00462da2:  or       ecx, 0xffffffff
  0x00462da5:  repne scasb al, byte ptr es:[edi]
  0x00462da7:  mov      ecx, edx
  0x00462da9:  dec      edi
  0x00462daa:  shr      ecx, 2
  0x00462dad:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00462daf:  mov      ecx, edx
  0x00462db1:  and      ecx, 3
  0x00462db4:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00462db6:  mov      esi, dword ptr [esp + 0x7c]
  0x00462dba:  cmp      dword ptr [0x567afc], 3
  0x00462dc1:  jne      0x462dd5
  0x00462dc3:  mov      eax, dword ptr [esi + 0x5794c8]
  0x00462dc9:  test     ah, 2
  0x00462dcc:  jne      0x462dd5
  0x00462dce:  mov      byte ptr [0x51a068], 0
  0x00462dd5:  mov      eax, dword ptr [0x4c2844]
  0x00462dda:  mov      edi, 4
  0x00462ddf:  cmp      eax, edi
  0x00462de1:  mov      eax, 0x51b360
  0x00462de6:  jg       0x462ded
  0x00462de8:  mov      eax, 0x519fd8
  0x00462ded:  mov      ecx, dword ptr [0x4c1570]
  0x00462df3:  push     0
  0x00462df5:  push     0
  0x00462df7:  push     0
  0x00462df9:  push     eax
  0x00462dfa:  call     0x4762d0 <<< CALL
  0x00462dff:  test     byte ptr [0x5a5a00], 1
  0x00462e06:  je       0x462e57
  0x00462e08:  cmp      dword ptr [0x4c2844], edi
  0x00462e0e:  jl       0x462e57
  0x00462e10:  mov      al, byte ptr [esi + 0x57953c]
  0x00462e16:  test     al, al
  0x00462e18:  je       0x462e2a
  0x00462e1a:  mov      eax, dword ptr [0x4c2e0c]
  0x00462e1f:  cmp      ebx, eax
  0x00462e21:  je       0x462e2a
  0x00462e23:  xor      eax, 1
  0x00462e26:  cmp      ebx, eax
  0x00462e28:  jne      0x462e57
  0x00462e2a:  mov      al, byte ptr [esi + 0x5794d5]
  0x00462e30:  cmp      al, 6
  0x00462e32:  jl       0x462e57
  0x00462e34:  cmp      al, 0x10
  0x00462e36:  je       0x462e57
  0x00462e38:  mov      esi, dword ptr [esi + 0x5794c8]
  0x00462e3e:  test     esi, 0x20000000
  0x00462e44:  je       0x462e4f
  0x00462e46:  test     byte ptr [0x834170], 6
  0x00462e4d:  je       0x462e57
  0x00462e4f:  test     esi, 0x8000
  0x00462e55:  je       0x462e64
  0x00462e57:  test     byte ptr [0x59e7b8], 0x20
  0x00462e5e:  je       0x46308f
  0x00462e64:  mov      ebx, dword ptr [esp + 0x7c]
  0x00462e68:  mov      ecx, dword ptr [ebp*4 + 0x82c164]
  0x00462e6f:  mov      edx, dword ptr [ebp*4 + 0x82b160]
  0x00462e76:  lea      esi, [ebp*4 + 0x82c164]
  0x00462e7d:  mov      eax, dword ptr [ebx + 0x5794c8]
  0x00462e83:  lea      edi, [ebp*4 + 0x82b160]
  0x00462e8a:  and      eax, 0x20000000
  0x00462e8f:  neg      eax
  0x00462e91:  sbb      eax, eax
  0x00462e93:  and      eax, 0xfffffd09
  0x00462e98:  add      eax, 0x80007fff
  0x00462e9d:  push     eax
  0x00462e9e:  push     ecx
  0x00462e9f:  push     edx
  0x00462ea0:  push     0x51a068
  0x00462ea5:  call     0x404b70 <<< CALL
  0x00462eaa:  mov      ax, word ptr [ebx + 0x57955c]
  0x00462eb1:  add      esp, 0x10
  0x00462eb4:  cmp      ax, 2
  0x00462eb8:  mov      ebp, 0x80007d08
  0x00462ebd:  jle      0x462ec4
  0x00462ebf:  mov      ebp, 0x80006300
  0x00462ec4:  cmp      ax, 4
  0x00462ec8:  jle      0x462ecf
  0x00462eca:  mov      ebp, 0x80001304
  0x00462ecf:  cmp      ax, 6
  0x00462ed3:  jle      0x462eda
  0x00462ed5:  mov      ebp, 0x800023e8
  0x00462eda:  test     ax, ax
  0x00462edd:  jge      0x462ee4
  0x00462edf:  mov      ebp, 0x80000000
  0x00462ee4:  cmp      dword ptr [0x567afc], 2
  0x00462eeb:  jne      0x46308f
  0x00462ef1:  test     dword ptr [0x59e7b8], 0x200000
  0x00462efb:  jne      0x46308f
  0x00462f01:  mov      eax, dword ptr [esi]
  0x00462f03:  mov      ecx, dword ptr [edi]
  0x00462f05:  add      eax, 9
  0x00462f08:  push     0x80000000
  0x00462f0d:  lea      edx, [ecx + 0xc]
  0x00462f10:  push     eax
  0x00462f11:  push     edx
  0x00462f12:  add      ecx, -0xc
  0x00462f15:  push     eax
  0x00462f16:  push     ecx
  0x00462f17:  mov      ecx, 0x519cd4
  0x00462f1c:  call     0x478b80 <<< CALL
  0x00462f21:  movsx    eax, word ptr [ebx + 0x57955c]
  0x00462f28:  mov      esi, dword ptr [esi]
  0x00462f2a:  mov      edx, dword ptr [edi]
  0x00462f2c:  sub      eax, 4
  0x00462f2f:  push     ebp
  0x00462f30:  lea      ecx, [esi + 9]
  0x00462f33:  lea      esi, [edx + eax*2]
  0x00462f36:  push     ecx
  0x00462f37:  add      eax, esi
  0x00462f39:  add      edx, -0xc
  0x00462f3c:  push     eax
  0x00462f3d:  push     ecx
  0x00462f3e:  push     edx
  0x00462f3f:  mov      ecx, 0x519cd4
  0x00462f44:  call     0x478b80 <<< CALL
  0x00462f49:  jmp      0x46308f
  0x00462f4e:  test     bh, 8
  0x00462f51:  je       0x462f9a
  0x00462f53:  and      eax, 0xff
  0x00462f58:  push     0xf8
  0x00462f5d:  lea      ecx, [eax + eax*4]
  0x00462f60:  lea      edx, [eax + ecx*2]
  0x00462f63:  lea      eax, [edx*8 + 0x81ca10]
  0x00462f6a:  push     eax
  0x00462f6b:  push     edi
  0x00462f6c:  push     esi
  0x00462f6d:  push     esi
  0x00462f6e:  push     0x80007c00
  0x00462f73:  mov      ecx, dword ptr [ebp*4 + 0x831164]
  0x00462f7a:  mov      edx, dword ptr [ebp*4 + 0x830164]
  0x00462f81:  mov      eax, dword ptr [0x4c1570]
  0x00462f86:  push     ecx
  0x00462f87:  mov      ecx, dword ptr [ebp*4 + 0x82a15c]
  0x00462f8e:  push     edx
  0x00462f8f:  push     eax
  0x00462f90:  call     0x474260 <<< CALL
  0x00462f95:  jmp      0x46308f
  0x00462f9a:  test     bh, 4
  0x00462f9d:  je       0x462fc1
  0x00462f9f:  and      eax, 0xff
  0x00462fa4:  push     0xf8
  0x00462fa9:  lea      ecx, [eax + eax*4]
  0x00462fac:  lea      edx, [eax + ecx*2]
  0x00462faf:  lea      eax, [edx*8 + 0x81ca10]
  0x00462fb6:  push     eax
  0x00462fb7:  push     edi
  0x00462fb8:  push     esi
  0x00462fb9:  push     esi
  0x00462fba:  push     0x80007fff
  0x00462fbf:  jmp      0x462f73
  0x00462fc1:  test     bh, 2
  0x00462fc4:  je       0x463008
  0x00462fc6:  and      ebx, 0x1ff
  0x00462fcc:  push     1
  0x00462fce:  lea      ecx, [ebx + ebx*4]
  0x00462fd1:  lea      edx, [ebx + ecx*2]
  0x00462fd4:  mov      ecx, dword ptr [ebp*4 + 0x831164]
  0x00462fdb:  lea      eax, [edx*8 + 0x81ca10]
  0x00462fe2:  mov      edx, dword ptr [ebp*4 + 0x830164]
  0x00462fe9:  push     eax
  0x00462fea:  mov      eax, dword ptr [0x4c1570]
  0x00462fef:  push     0x3f19999a
  0x00462ff4:  push     ecx
  0x00462ff5:  mov      ecx, dword ptr [ebp*4 + 0x82a15c]
  0x00462ffc:  push     edx
  0x00462ffd:  push     eax
  0x00462ffe:  call     0x474440 <<< CALL
  0x00463003:  jmp      0x46308f
  0x00463008:  lea      ecx, [eax + eax*4]
  0x0046300b:  lea      edx, [eax + ecx*2]
  0x0046300e:  mov      ecx, dword ptr [0x824148]
  0x00463014:  lea      eax, [edx*8 + 0x81ca10]
  0x0046301b:  mov      edx, dword ptr [ebp*4 + 0x831164]
  0x00463022:  push     eax
  0x00463023:  mov      eax, dword ptr [ebp*4 + 0x830164]
  0x0046302a:  push     ecx
  0x0046302b:  mov      ecx, dword ptr [0x4c1570]
  0x00463031:  push     edx
  0x00463032:  push     eax
  0x00463033:  push     ecx
  0x00463034:  mov      ecx, dword ptr [ebp*4 + 0x82a15c]
  0x0046303b:  call     0x4741b0 <<< CALL
  0x00463040:  jmp      0x46308f
  0x00463042:  mov      edx, dword ptr [0x822c74]
  0x00463048:  mov      eax, dword ptr [ebp*4 + 0x831164]
  0x0046304f:  mov      ecx, dword ptr [ebp*4 + 0x830164]
  0x00463056:  push     0
  0x00463058:  push     edx
  0x00463059:  mov      edx, dword ptr [0x4c1570]
  0x0046305f:  push     eax
  0x00463060:  push     ecx
  0x00463061:  mov      ecx, dword ptr [ebp*4 + 0x82a15c]
  0x00463068:  push     edx
  0x00463069:  jmp      0x46308a
  0x0046306b:  mov      eax, dword ptr [0x822c74]
  0x00463070:  mov      edx, dword ptr [ebp*4 + 0x831164]
  0x00463077:  push     0
  0x00463079:  push     eax
  0x0046307a:  mov      eax, dword ptr [ebp*4 + 0x830164]
  0x00463081:  push     edx
  0x00463082:  mov      edx, dword ptr [0x4c1570]
  0x00463088:  push     eax
  0x00463089:  push     edx
  0x0046308a:  call     0x4740f0 <<< CALL
  0x0046308f:  mov      eax, dword ptr [esp + 0x10]
  0x00463093:  pop      edi
  0x00463094:  pop      esi
  0x00463095:  pop      ebp
  0x00463096:  mov      ecx, dword ptr [eax]
  0x00463098:  pop      ebx
  0x00463099:  test     ecx, ecx
  0x0046309b:  je       0x4630d6
  0x0046309d:  mov      eax, dword ptr [0x8371f8]
  0x004630a2:  test     eax, eax
  0x004630a4:  je       0x4630bb
  0x004630a6:  mov      ecx, dword ptr [0x83ad50]
  0x004630ac:  test     ecx, ecx
  0x004630ae:  je       0x4630d6
  0x004630b0:  mov      edx, dword ptr [ecx]
  0x004630b2:  mov      eax, dword ptr [0x4c2844]
  0x004630b7:  push     4
  0x004630b9:  jmp      0x4630ce
  0x004630bb:  mov      ecx, dword ptr [0x83ad50]
  0x004630c1:  mov      eax, dword ptr [0x58b384]
  0x004630c6:  test     ecx, ecx
  0x004630c8:  je       0x4630d6
  0x004630ca:  mov      edx, dword ptr [ecx]
  0x004630cc:  push     4
  0x004630ce:  push     eax
  0x004630cf:  push     eax
  0x004630d0:  call     dword ptr [edx + 0x9c] <<< CALL
  0x004630d6:  lea      ecx, [esp + 4]
  0x004630da:  mov      dword ptr [esp + 0x64], 0xffffffff
  0x004630e2:  call     0x483010 <<< CALL
  0x004630e7:  mov      ecx, dword ptr [esp + 0x5c]
  0x004630eb:  mov      dword ptr fs:[0], ecx
  0x004630f2:  add      esp, 0x68
  0x004630f5:  ret      
  0x004630f6:  call     dword ptr [0x4ba240] <<< CALL
  0x004630fc:  nop      
  0x004630fd:  nop      
  0x004630fe:  nop      
  0x004630ff:  nop      
  0x00463100:  push     -1
  0x00463102:  push     0x4b7a58
  0x00463107:  mov      eax, dword ptr fs:[0]
  0x0046310d:  push     eax
  0x0046310e:  mov      dword ptr fs:[0], esp
  0x00463115:  sub      esp, 0x58
  0x00463118:  push     esi
  0x00463119:  lea      ecx, [esp + 4]
  0x0046311d:  call     0x482fd0 <<< CALL
  0x00463122:  mov      esi, dword ptr [0x82c160]
  0x00463128:  mov      dword ptr [esp + 0x64], 0
  0x00463130:  cmp      esi, -1
  0x00463133:  je       0x46314a
  0x00463135:  push     esi
  0x00463136:  call     0x462be0 <<< CALL
  0x0046313b:  mov      esi, dword ptr [esi*4 + 0x8361f4]
  0x00463142:  add      esp, 4
  0x00463145:  cmp      esi, -1
  0x00463148:  jne      0x463135
  0x0046314a:  lea      ecx, [esp + 4]
  0x0046314e:  mov      dword ptr [esp + 0x64], 0xffffffff
  0x00463156:  call     0x483010 <<< CALL
  0x0046315b:  mov      ecx, dword ptr [esp + 0x5c]
  0x0046315f:  pop      esi
  0x00463160:  mov      dword ptr fs:[0], ecx
  0x00463167:  add      esp, 0x64
  0x0046316a:  ret      
  0x0046316b:  call     0x405099 <<< CALL
  0x00463170:  mov      eax, dword ptr [esp + 4]
  0x00463174:  mov      ecx, dword ptr [esp + 8]
  0x00463178:  cmp      eax, ecx
  0x0046317a:  jl       0x46317f
  0x0046317c:  or       eax, 0xffffffff
  0x0046317f:  ret      
  0x00463180:  sub      esp, 0x40
  0x00463183:  mov      eax, dword ptr [0x4c2844]
  0x00463188:  push     ebx
  0x00463189:  push     ebp
  0x0046318a:  push     esi
  0x0046318b:  lea      eax, [eax + eax*4]
  0x0046318e:  mov      esi, dword ptr [esp + 0x68]
  0x00463192:  shl      eax, 2
  0x00463195:  cdq      
  0x00463196:  and      edx, 3
  0x00463199:  push     edi
  0x0046319a:  add      eax, edx
  0x0046319c:  mov      edx, dword ptr [0x834170]
  0x004631a2:  mov      ebx, eax
  0x004631a4:  mov      eax, dword ptr [esp + 0x54]
  0x004631a8:  mov      ecx, eax
  0x004631aa:  mov      dword ptr [esp + 0x18], 4
  0x004631b2:  shl      ecx, 4
  0x004631b5:  add      edx, ecx
  0x004631b7:  mov      ecx, 0x3e8
  0x004631bc:  add      eax, edx
  0x004631be:  mov      dword ptr [esp + 0x24], 0
  0x004631c6:  cdq      
  0x004631c7:  idiv     ecx
  0x004631c9:  shl      esi, 4
  0x004631cc:  sar      ebx, 2
  0x004631cf:  movsx    edi, word ptr [esi + 0x58bcba]
  0x004631d6:  movsx    ebp, word ptr [esi + 0x58bcbc]
  0x004631dd:  mov      dword ptr [esp + 0x20], ebx
  0x004631e1:  mov      dword ptr [esp + 0x14], edi
  0x004631e5:  mov      dword ptr [esp + 0x6c], ebp
  0x004631e9:  mov      dword ptr [esp + 0x28], 0x64
  0x004631f1:  mov      dword ptr [esp + 0x2c], 0xb4
  0x004631f9:  mov      dword ptr [esp + 0x30], 0x12c
  0x00463201:  mov      dword ptr [esp + 0x34], 0x1ae
  0x00463209:  mov      dword ptr [esp + 0x38], 0x1f4
  0x00463211:  mov      dword ptr [esp + 0x3c], 0x226
  0x00463219:  mov      dword ptr [esp + 0x40], 0x2bc
  0x00463221:  mov      dword ptr [esp + 0x44], 0x32a
  0x00463229:  mov      dword ptr [esp + 0x48], 0x384
  0x00463231:  mov      dword ptr [esp + 0x4c], 0x3e8
  0x00463239:  xor      eax, eax
  0x0046323b:  lea      ecx, [esp + 0x24]
  0x0046323f:  mov      dword ptr [esp + 0x1c], edx
  0x00463243:  cmp      dword ptr [ecx], edx
  0x00463245:  jg       0x463252
  0x00463247:  inc      eax
  0x00463248:  add      ecx, 4
  0x0046324b:  cmp      eax, 0xa
  0x0046324e:  jle      0x463243
  0x00463250:  jmp      0x46325a
  0x00463252:  sub      edx, dword ptr [esp + eax*4 + 0x20]
  0x00463256:  mov      dword ptr [esp + 0x1c], edx
  0x0046325a:  mov      al, 0xfc
  0x0046325c:  mov      byte ptr [esp + 0x24], 0xc9
  0x00463261:  mov      byte ptr [esp + 0x2f], al
  0x00463265:  mov      byte ptr [esp + 0x33], al
  0x00463269:  lea      eax, [edi + edi*4]
  0x0046326c:  mov      byte ptr [esp + 0x25], 0xca
  0x00463271:  mov      byte ptr [esp + 0x26], 0xcc
  0x00463276:  mov      byte ptr [esp + 0x27], 0xcf
  0x0046327b:  lea      edx, [eax + eax*4]
  0x0046327e:  mov      byte ptr [esp + 0x28], 0xd3
  0x00463283:  mov      byte ptr [esp + 0x29], 0xd8
  0x00463288:  mov      byte ptr [esp + 0x2a], 0xde
  0x0046328d:  lea      ebp, [ebp + edx*2]
  0x00463291:  mov      byte ptr [esp + 0x2b], 0xe5
  0x00463296:  mov      byte ptr [esp + 0x2c], 0xed
  0x0046329b:  mov      byte ptr [esp + 0x2d], 0xf6
  0x004632a0:  mov      ax, word ptr [ebp*2 + 0x53caf0]
  0x004632a8:  mov      byte ptr [esp + 0x2e], 0
  0x004632ad:  mov      ecx, eax
  0x004632af:  mov      byte ptr [esp + 0x30], 0xf9
  0x004632b4:  and      ecx, 0x4000
  0x004632ba:  mov      byte ptr [esp + 0x31], 0xf8
  0x004632bf:  test     cx, cx
  0x004632c2:  mov      byte ptr [esp + 0x32], 0xf9
  0x004632c7:  mov      byte ptr [esp + 0x34], 0
  0x004632cc:  mov      byte ptr [esp + 0x35], 0xfe
  0x004632d1:  mov      byte ptr [esp + 0x36], 0
  0x004632d6:  mov      byte ptr [esp + 0x37], 0
  0x004632db:  mov      byte ptr [esp + 0x38], 0
  0x004632e0:  mov      byte ptr [esp + 0x39], 0
  0x004632e5:  mov      byte ptr [esp + 0x3a], 0
  0x004632ea:  je       0x463313
  0x004632ec:  mov      cl, byte ptr [ebp + 0x578804]
  0x004632f2:  mov      edx, ecx
  0x004632f4:  and      edx, 0xff
  0x004632fa:  cmp      cl, 0x14
  0x004632fd:  movsx    edx, byte ptr [esp + edx + 0x24]
  0x00463302:  mov      dword ptr [esp + 0x10], edx
  0x00463306:  jb       0x463313
  0x00463308:  and      ah, 0xbf
  0x0046330b:  mov      word ptr [ebp*2 + 0x53caf0], ax
  0x00463313:  mov      ecx, dword ptr [0x4c1570]
  0x00463319:  push     0
  0x0046331b:  push     0
  0x0046331d:  push     0
  0x0046331f:  push     0x51b360
  0x00463324:  call     0x4762d0 <<< CALL
  0x00463329:  mov      eax, dword ptr [esp + 0x54]
  0x0046332d:  mov      ecx, eax
  0x0046332f:  lea      edi, [eax + 0x90]
  0x00463335:  lea      eax, [ecx - 3]
  0x00463338:  cmp      eax, 0xf
  0x0046333b:  ja       0x465504
  0x00463341:  jmp      dword ptr [eax*4 + 0x46550c]
  0x00463348:  mov      edx, dword ptr [0x834170]
  0x0046334e:  mov      eax, dword ptr [esp + 0x14]
  0x00463352:  mov      edi, dword ptr [esi + 0x58bcc0]
  0x00463358:  add      eax, edx
  0x0046335a:  cdq      
  0x0046335b:  lea      ecx, [edi + 0x168]
  0x00463361:  idiv     dword ptr [ecx*4 + 0x53f3e8]
  0x00463368:  cmp      edi, 3
  0x0046336b:  mov      dword ptr [esp + 0x58], edx
  0x0046336f:  je       0x46338d
  0x00463371:  mov      eax, dword ptr [0x5685f4]
  0x00463376:  mov      bl, byte ptr [esi + 0x58bcbe]
  0x0046337c:  cdq      
  0x0046337d:  sub      eax, edx
  0x0046337f:  mov      edx, dword ptr [esp + 0x58]
  0x00463383:  sar      eax, 1
  0x00463385:  add      ebx, eax
  0x00463387:  and      ebx, 3
  0x0046338a:  push     ebx
  0x0046338b:  jmp      0x46339f
  0x0046338d:  mov      al, byte ptr [esi + 0x58bcbe]
  0x00463393:  mov      ebx, dword ptr [0x5685f4]
  0x00463399:  add      eax, ebx
  0x0046339b:  and      eax, 3
  0x0046339e:  push     eax
  0x0046339f:  push     edx
  0x004633a0:  push     ecx
  0x004633a1:  call     0x43d6f0 <<< CALL
  0x004633a6:  mov      cx, word ptr [ebp*2 + 0x53caf0]
  0x004633ae:  add      esp, 0xc
  0x004633b1:  and      ecx, 0x4000
  0x004633b7:  mov      dword ptr [0x838204], eax
  0x004633bc:  test     cx, cx
  0x004633bf:  je       0x4633f2
  0x004633c1:  lea      edx, [edi + edi*4]
  0x004633c4:  push     1
  0x004633c6:  lea      ecx, [edi + edx*2]
  0x004633c9:  lea      edx, [ecx*8 + 0x81ec70]
  0x004633d0:  xor      ecx, ecx
  0x004633d2:  mov      cl, byte ptr [ebp + 0x578804]
  0x004633d8:  push     edx
  0x004633d9:  mov      dword ptr [esp + 0x60], ecx
  0x004633dd:  fild     dword ptr [esp + 0x60] <<< FPU
  0x004633e1:  fmul     qword ptr [0x4ba480] <<< FPU
  0x004633e7:  fadd     qword ptr [0x4ba478] <<< FPU
  0x004633ed:  jmp      0x46504a
  0x004633f2:  mov      edx, dword ptr [esp + 0x5c]
  0x004633f6:  add      edi, 0x64
  0x004633f9:  push     edi
  0x004633fa:  push     4
  0x004633fc:  push     eax
  0x004633fd:  mov      eax, dword ptr [esp + 0x6c]
  0x00463401:  push     0x8c
  0x00463406:  push     0x8c
  0x0046340b:  push     eax
  0x0046340c:  push     eax
  0x0046340d:  push     edx
  0x0046340e:  call     0x462a30 <<< CALL
  0x00463413:  add      esp, 0x20
  0x00463416:  pop      edi
  0x00463417:  pop      esi
  0x00463418:  pop      ebp
  0x00463419:  pop      ebx
  0x0046341a:  add      esp, 0x40
  0x0046341d:  ret      
  0x0046341e:  mov      ax, word ptr [ebp*2 + 0x53caf0]
  0x00463426:  xor      edi, edi
  0x00463428:  mov      ecx, eax
  0x0046342a:  and      ecx, 0x4000
  0x00463430:  test     cx, cx
  0x00463433:  je       0x463456
  0x00463435:  mov      ecx, dword ptr [0x53f9f4]
  0x0046343b:  xor      edx, edx
  0x0046343d:  mov      dl, byte ptr [ebp + 0x578804]
  0x00463443:  mov      edi, edx
  0x00463445:  cmp      edi, ecx
  0x00463447:  jl       0x463456
  0x00463449:  xor      edi, edi
  0x0046344b:  and      ah, 0xbf
  0x0046344e:  mov      word ptr [ebp*2 + 0x53caf0], ax
  0x00463456:  mov      eax, dword ptr [0x5685f4]
  0x0046345b:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463461:  cdq      
  0x00463462:  sub      eax, edx
  0x00463464:  sar      eax, 1
  0x00463466:  add      ecx, eax
  0x00463468:  and      ecx, 3
  0x0046346b:  push     ecx
  0x0046346c:  push     edi
  0x0046346d:  push     0x183
  0x00463472:  call     0x43d6f0 <<< CALL
  0x00463477:  mov      edx, dword ptr [esp + 0x68]
  0x0046347b:  push     0x3d
  0x0046347d:  push     4
  0x0046347f:  mov      dword ptr [0x838204], eax
  0x00463484:  push     eax
  0x00463485:  mov      eax, dword ptr [esp + 0x78]
  0x00463489:  push     0x28
  0x0046348b:  push     0x1e
  0x0046348d:  push     eax
  0x0046348e:  push     eax
  0x0046348f:  push     edx
  0x00463490:  call     0x462a30 <<< CALL
  0x00463495:  add      esp, 0x2c
  0x00463498:  pop      edi
  0x00463499:  pop      esi
  0x0046349a:  pop      ebp
  0x0046349b:  pop      ebx
  0x0046349c:  add      esp, 0x40
  0x0046349f:  ret      
  0x004634a0:  mov      ax, word ptr [ebp*2 + 0x53caf0]
  0x004634a8:  and      eax, 0x4000
  0x004634ad:  test     ax, ax
  0x004634b0:  je       0x463509
  0x004634b2:  mov      eax, dword ptr [0x5685f4]
  0x004634b7:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004634bd:  cdq      
  0x004634be:  sub      eax, edx
  0x004634c0:  sar      eax, 1
  0x004634c2:  add      ecx, eax
  0x004634c4:  and      ecx, 3
  0x004634c7:  push     ecx
  0x004634c8:  push     0
  0x004634ca:  push     0x1f6
  0x004634cf:  call     0x43d6f0 <<< CALL
  0x004634d4:  add      esp, 0xc
  0x004634d7:  xor      edx, edx
  0x004634d9:  mov      dl, byte ptr [ebp + 0x578804]
  0x004634df:  mov      dword ptr [0x838204], eax
  0x004634e4:  push     1
  0x004634e6:  mov      dword ptr [esp + 0x5c], edx
  0x004634ea:  fild     dword ptr [esp + 0x5c] <<< FPU
  0x004634ee:  push     0x81d2a8
  0x004634f3:  fmul     qword ptr [0x4ba818] <<< FPU
  0x004634f9:  push     ecx
  0x004634fa:  mov      ecx, dword ptr [esp + 0x1c]
  0x004634fe:  lea      edx, [ecx - 0x1c]
  0x00463501:  fstp     dword ptr [esp] <<< FPU
  0x00463504:  jmp      0x465055
  0x00463509:  mov      ecx, dword ptr [0x5685f0]
  0x0046350f:  xor      edx, edx
  0x00463511:  cmp      ecx, 0xa
  0x00463514:  setg     dl
  0x00463517:  mov      esi, edx
  0x00463519:  test     esi, esi
  0x0046351b:  jne      0x463522
  0x0046351d:  mov      edi, 0x19
  0x00463522:  mov      al, byte ptr [0x5a34e0]
  0x00463527:  cmp      al, 2
  0x00463529:  jne      0x463531
  0x0046352b:  test     esi, esi
  0x0046352d:  je       0x46357e
  0x0046352f:  jmp      0x463539
  0x00463531:  cmp      al, 1
  0x00463533:  jne      0x463539
  0x00463535:  test     esi, esi
  0x00463537:  jne      0x46357e
  0x00463539:  mov      eax, dword ptr [0x5685f4]
  0x0046353e:  cdq      
  0x0046353f:  sub      eax, edx
  0x00463541:  sar      eax, 1
  0x00463543:  push     eax
  0x00463544:  mov      eax, esi
  0x00463546:  neg      eax
  0x00463548:  sbb      eax, eax
  0x0046354a:  push     0
  0x0046354c:  add      eax, 0x1f9
  0x00463551:  push     eax
  0x00463552:  call     0x43d6f0 <<< CALL
  0x00463557:  mov      ecx, dword ptr [esp + 0x6c]
  0x0046355b:  mov      edx, dword ptr [esp + 0x68]
  0x0046355f:  push     edi
  0x00463560:  push     4
  0x00463562:  push     eax
  0x00463563:  push     0x8c
  0x00463568:  push     0x8c
  0x0046356d:  push     0
  0x0046356f:  push     ecx
  0x00463570:  push     edx
  0x00463571:  mov      dword ptr [0x838204], eax
  0x00463576:  call     0x462a30 <<< CALL
  0x0046357b:  add      esp, 0x2c
  0x0046357e:  mov      eax, dword ptr [0x5685f4]
  0x00463583:  cdq      
  0x00463584:  sub      eax, edx
  0x00463586:  sar      eax, 1
  0x00463588:  push     eax
  0x00463589:  lea      eax, [esi + 0x1f6]
  0x0046358f:  push     0
  0x00463591:  push     eax
  0x00463592:  call     0x43d6f0 <<< CALL
  0x00463597:  push     edi
  0x00463598:  mov      edx, dword ptr [esp + 0x6c]
  0x0046359c:  push     4
  0x0046359e:  mov      dword ptr [0x838204], eax
  0x004635a3:  push     eax
  0x004635a4:  mov      eax, dword ptr [esp + 0x78]
  0x004635a8:  push     0x8c
  0x004635ad:  push     0x8c
  0x004635b2:  lea      ecx, [ebx + eax]
  0x004635b5:  push     ecx
  0x004635b6:  push     eax
  0x004635b7:  push     edx
  0x004635b8:  call     0x462a30 <<< CALL
  0x004635bd:  mov      al, byte ptr [0x5a34e0]
  0x004635c2:  add      esp, 0x2c
  0x004635c5:  cmp      al, 1
  0x004635c7:  je       0x465504
  0x004635cd:  mov      eax, dword ptr [0x5685f4]
  0x004635d2:  add      esi, 0x1fa
  0x004635d8:  cdq      
  0x004635d9:  sub      eax, edx
  0x004635db:  sar      eax, 1
  0x004635dd:  push     eax
  0x004635de:  mov      eax, dword ptr [0x834170]
  0x004635e3:  cdq      
  0x004635e4:  idiv     dword ptr [esi*4 + 0x53f3e8]
  0x004635eb:  push     edx
  0x004635ec:  push     esi
  0x004635ed:  call     0x43d6f0 <<< CALL
  0x004635f2:  push     edi
  0x004635f3:  mov      edx, dword ptr [esp + 0x6c]
  0x004635f7:  push     4
  0x004635f9:  mov      dword ptr [0x838204], eax
  0x004635fe:  push     eax
  0x004635ff:  mov      eax, dword ptr [esp + 0x78]
  0x00463603:  push     0x8c
  0x00463608:  push     0x8c
  0x0046360d:  lea      ecx, [ebx + eax + 1]
  0x00463611:  push     ecx
  0x00463612:  push     eax
  0x00463613:  push     edx
  0x00463614:  call     0x462a30 <<< CALL
  0x00463619:  add      esp, 0x2c
  0x0046361c:  pop      edi
  0x0046361d:  pop      esi
  0x0046361e:  pop      ebp
  0x0046361f:  pop      ebx
  0x00463620:  add      esp, 0x40
  0x00463623:  ret      
  0x00463624:  mov      eax, dword ptr [0x5685f4]
  0x00463629:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x0046362f:  cdq      
  0x00463630:  sub      eax, edx
  0x00463632:  sar      eax, 1
  0x00463634:  sub      eax, ecx
  0x00463636:  dec      eax
  0x00463637:  and      eax, 3
  0x0046363a:  push     eax
  0x0046363b:  push     0
  0x0046363d:  push     0x246
  0x00463642:  call     0x43d6f0 <<< CALL
  0x00463647:  mov      edx, dword ptr [esp + 0x68]
  0x0046364b:  push     0xb3
  0x00463650:  push     4
  0x00463652:  mov      dword ptr [0x838204], eax
  0x00463657:  push     eax
  0x00463658:  mov      eax, dword ptr [esp + 0x78]
  0x0046365c:  push     0x50
  0x0046365e:  push     0x50
  0x00463660:  push     eax
  0x00463661:  push     eax
  0x00463662:  push     edx
  0x00463663:  call     0x462a30 <<< CALL
  0x00463668:  mov      eax, dword ptr [0x834170]
  0x0046366d:  mov      ecx, dword ptr [0x53fd04]
  0x00463673:  cdq      
  0x00463674:  sub      eax, edx
  0x00463676:  mov      edx, dword ptr [esp + 0x98]
  0x0046367d:  sar      eax, 1
  0x0046367f:  lea      edi, [edx + edx*2]
  0x00463682:  add      esp, 0x2c
  0x00463685:  lea      edx, [edx + edi*4]
  0x00463688:  add      eax, edx
  0x0046368a:  mov      edx, dword ptr [esp + 0x14]
  0x0046368e:  lea      edi, [edx*8]
  0x00463695:  sub      edi, edx
  0x00463697:  add      eax, edi
  0x00463699:  lea      edi, [ecx*4]
  0x004636a0:  cdq      
  0x004636a1:  idiv     edi
  0x004636a3:  lea      eax, [ecx + ecx]
  0x004636a6:  cmp      edx, eax
  0x004636a8:  jl       0x4636b2
  0x004636aa:  lea      eax, [ecx + ecx*2]
  0x004636ad:  sub      eax, edx
  0x004636af:  dec      eax
  0x004636b0:  mov      edx, eax
  0x004636b2:  dec      ecx
  0x004636b3:  push     ecx
  0x004636b4:  push     0
  0x004636b6:  push     edx
  0x004636b7:  call     0x467130 <<< CALL
  0x004636bc:  mov      ecx, eax
  0x004636be:  mov      eax, dword ptr [0x5685f4]
  0x004636c3:  cdq      
  0x004636c4:  sub      eax, edx
  0x004636c6:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x004636cc:  sar      eax, 1
  0x004636ce:  sub      eax, edx
  0x004636d0:  dec      eax
  0x004636d1:  and      eax, 3
  0x004636d4:  push     eax
  0x004636d5:  push     ecx
  0x004636d6:  push     0x247
  0x004636db:  call     0x43d6f0 <<< CALL
  0x004636e0:  push     0xb3
  0x004636e5:  push     4
  0x004636e7:  push     eax
  0x004636e8:  push     0x50
  0x004636ea:  mov      dword ptr [0x838204], eax
  0x004636ef:  push     0x50
  0x004636f1:  jmp      0x4637c3
  0x004636f6:  mov      eax, dword ptr [0x5685f4]
  0x004636fb:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463701:  cdq      
  0x00463702:  sub      eax, edx
  0x00463704:  sar      eax, 1
  0x00463706:  sub      eax, ecx
  0x00463708:  dec      eax
  0x00463709:  and      eax, 3
  0x0046370c:  push     eax
  0x0046370d:  push     0
  0x0046370f:  push     0x248
  0x00463714:  call     0x43d6f0 <<< CALL
  0x00463719:  mov      edx, dword ptr [esp + 0x68]
  0x0046371d:  push     0xb3
  0x00463722:  push     4
  0x00463724:  mov      dword ptr [0x838204], eax
  0x00463729:  push     eax
  0x0046372a:  mov      eax, dword ptr [esp + 0x78]
  0x0046372e:  push     0x3c
  0x00463730:  push     0x3c
  0x00463732:  push     eax
  0x00463733:  push     eax
  0x00463734:  push     edx
  0x00463735:  call     0x462a30 <<< CALL
  0x0046373a:  mov      eax, dword ptr [0x834170]
  0x0046373f:  mov      ecx, dword ptr [0x53fd0c]
  0x00463745:  cdq      
  0x00463746:  sub      eax, edx
  0x00463748:  mov      edx, dword ptr [esp + 0x98]
  0x0046374f:  sar      eax, 1
  0x00463751:  lea      edi, [edx + edx*2]
  0x00463754:  add      esp, 0x2c
  0x00463757:  lea      edx, [edx + edi*4]
  0x0046375a:  add      eax, edx
  0x0046375c:  mov      edx, dword ptr [esp + 0x14]
  0x00463760:  lea      edi, [edx*8]
  0x00463767:  sub      edi, edx
  0x00463769:  add      eax, edi
  0x0046376b:  lea      edi, [ecx*4]
  0x00463772:  cdq      
  0x00463773:  idiv     edi
  0x00463775:  lea      eax, [ecx + ecx]
  0x00463778:  cmp      edx, eax
  0x0046377a:  jl       0x463784
  0x0046377c:  lea      eax, [ecx + ecx*2]
  0x0046377f:  sub      eax, edx
  0x00463781:  dec      eax
  0x00463782:  mov      edx, eax
  0x00463784:  dec      ecx
  0x00463785:  push     ecx
  0x00463786:  push     0
  0x00463788:  push     edx
  0x00463789:  call     0x467130 <<< CALL
  0x0046378e:  mov      ecx, eax
  0x00463790:  mov      eax, dword ptr [0x5685f4]
  0x00463795:  cdq      
  0x00463796:  sub      eax, edx
  0x00463798:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x0046379e:  sar      eax, 1
  0x004637a0:  sub      eax, edx
  0x004637a2:  dec      eax
  0x004637a3:  and      eax, 3
  0x004637a6:  push     eax
  0x004637a7:  push     ecx
  0x004637a8:  push     0x249
  0x004637ad:  call     0x43d6f0 <<< CALL
  0x004637b2:  push     0xb3
  0x004637b7:  push     4
  0x004637b9:  push     eax
  0x004637ba:  push     0x3c
  0x004637bc:  mov      dword ptr [0x838204], eax
  0x004637c1:  push     0x3c
  0x004637c3:  mov      eax, dword ptr [esp + 0x8c]
  0x004637ca:  mov      edx, dword ptr [esp + 0x88]
  0x004637d1:  lea      ecx, [eax + 1]
  0x004637d4:  push     ecx
  0x004637d5:  push     eax
  0x004637d6:  push     edx
  0x004637d7:  call     0x462a30 <<< CALL
  0x004637dc:  add      esp, 0x38
  0x004637df:  pop      edi
  0x004637e0:  pop      esi
  0x004637e1:  pop      ebp
  0x004637e2:  pop      ebx
  0x004637e3:  add      esp, 0x40
  0x004637e6:  ret      
  0x004637e7:  mov      ax, word ptr [ebp*2 + 0x53caf0]
  0x004637ef:  and      eax, 0x4000
  0x004637f4:  test     ax, ax
  0x004637f7:  je       0x46383f
  0x004637f9:  mov      eax, dword ptr [0x5685f4]
  0x004637fe:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463804:  cdq      
  0x00463805:  sub      eax, edx
  0x00463807:  sar      eax, 1
  0x00463809:  add      ecx, eax
  0x0046380b:  and      ecx, 3
  0x0046380e:  push     ecx
  0x0046380f:  push     0
  0x00463811:  push     0x1ec
  0x00463816:  call     0x43d6f0 <<< CALL
  0x0046381b:  add      esp, 0xc
  0x0046381e:  xor      edx, edx
  0x00463820:  mov      dl, byte ptr [ebp + 0x578804]
  0x00463826:  mov      dword ptr [0x838204], eax
  0x0046382b:  push     1
  0x0046382d:  mov      dword ptr [esp + 0x5c], edx
  0x00463831:  fild     dword ptr [esp + 0x5c] <<< FPU
  0x00463835:  push     0x81cf90
  0x0046383a:  jmp      0x4634f3
  0x0046383f:  mov      eax, dword ptr [0x5685f0]
  0x00463844:  cmp      eax, 0xa
  0x00463847:  mov      al, byte ptr [0x5a34e0]
  0x0046384c:  jg       0x463939
  0x00463852:  cmp      al, 2
  0x00463854:  je       0x46389f
  0x00463856:  mov      eax, dword ptr [0x5685f4]
  0x0046385b:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463861:  cdq      
  0x00463862:  sub      eax, edx
  0x00463864:  sar      eax, 1
  0x00463866:  add      ecx, eax
  0x00463868:  and      ecx, 3
  0x0046386b:  push     ecx
  0x0046386c:  push     0
  0x0046386e:  push     0x1ed
  0x00463873:  call     0x43d6f0 <<< CALL
  0x00463878:  mov      edx, dword ptr [esp + 0x68]
  0x0046387c:  push     0x10
  0x0046387e:  push     4
  0x00463880:  mov      dword ptr [0x838204], eax
  0x00463885:  push     eax
  0x00463886:  mov      eax, dword ptr [esp + 0x78]
  0x0046388a:  push     0x8c
  0x0046388f:  push     0x8c
  0x00463894:  push     eax
  0x00463895:  push     eax
  0x00463896:  push     edx
  0x00463897:  call     0x4628d0 <<< CALL
  0x0046389c:  add      esp, 0x2c
  0x0046389f:  mov      eax, dword ptr [0x5685f4]
  0x004638a4:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004638aa:  cdq      
  0x004638ab:  sub      eax, edx
  0x004638ad:  sar      eax, 1
  0x004638af:  add      eax, ecx
  0x004638b1:  and      eax, 3
  0x004638b4:  push     eax
  0x004638b5:  mov      eax, dword ptr [0x834170]
  0x004638ba:  cdq      
  0x004638bb:  idiv     dword ptr [0x53fb98]
  0x004638c1:  push     edx
  0x004638c2:  push     0x1ec
  0x004638c7:  call     0x43d6f0 <<< CALL
  0x004638cc:  mov      edx, dword ptr [esp + 0x68]
  0x004638d0:  push     0x10
  0x004638d2:  push     4
  0x004638d4:  mov      dword ptr [0x838204], eax
  0x004638d9:  push     eax
  0x004638da:  mov      eax, dword ptr [esp + 0x78]
  0x004638de:  push     0x8c
  0x004638e3:  push     0x8c
  0x004638e8:  push     eax
  0x004638e9:  push     eax
  0x004638ea:  push     edx
  0x004638eb:  call     0x462a30 <<< CALL
  0x004638f0:  mov      al, byte ptr [0x5a34e0]
  0x004638f5:  add      esp, 0x2c
  0x004638f8:  test     al, al
  0x004638fa:  jne      0x465504
  0x00463900:  mov      eax, dword ptr [0x5685f4]
  0x00463905:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x0046390b:  cdq      
  0x0046390c:  sub      eax, edx
  0x0046390e:  sar      eax, 1
  0x00463910:  add      eax, ecx
  0x00463912:  and      eax, 3
  0x00463915:  push     eax
  0x00463916:  mov      eax, dword ptr [0x834170]
  0x0046391b:  cdq      
  0x0046391c:  idiv     dword ptr [0x53fb34]
  0x00463922:  push     edx
  0x00463923:  push     0x1d3
  0x00463928:  call     0x43d6f0 <<< CALL
  0x0046392d:  mov      dword ptr [0x838204], eax
  0x00463932:  push     0x10
  0x00463934:  jmp      0x4653af
  0x00463939:  cmp      al, 2
  0x0046393b:  je       0x46398d
  0x0046393d:  cmp      al, 1
  0x0046393f:  je       0x46398d
  0x00463941:  mov      eax, dword ptr [0x5685f4]
  0x00463946:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x0046394c:  cdq      
  0x0046394d:  sub      eax, edx
  0x0046394f:  sar      eax, 1
  0x00463951:  add      ecx, eax
  0x00463953:  and      ecx, 3
  0x00463956:  push     ecx
  0x00463957:  push     0
  0x00463959:  push     0x1ef
  0x0046395e:  call     0x43d6f0 <<< CALL
  0x00463963:  mov      edx, dword ptr [esp + 0x68]
  0x00463967:  push     0x97
  0x0046396c:  push     4
  0x0046396e:  mov      dword ptr [0x838204], eax
  0x00463973:  push     eax
  0x00463974:  mov      eax, dword ptr [esp + 0x78]
  0x00463978:  push     0x8c
  0x0046397d:  push     0x8c
  0x00463982:  push     eax
  0x00463983:  push     eax
  0x00463984:  push     edx
  0x00463985:  call     0x4628d0 <<< CALL
  0x0046398a:  add      esp, 0x2c
  0x0046398d:  mov      eax, dword ptr [0x5685f4]
  0x00463992:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463998:  cdq      
  0x00463999:  sub      eax, edx
  0x0046399b:  sar      eax, 1
  0x0046399d:  add      eax, ecx
  0x0046399f:  and      eax, 3
  0x004639a2:  push     eax
  0x004639a3:  mov      eax, dword ptr [0x834170]
  0x004639a8:  cdq      
  0x004639a9:  idiv     dword ptr [0x53fb98]
  0x004639af:  push     edx
  0x004639b0:  push     0x1ee
  0x004639b5:  call     0x43d6f0 <<< CALL
  0x004639ba:  mov      edx, dword ptr [esp + 0x68]
  0x004639be:  push     0x97
  0x004639c3:  push     4
  0x004639c5:  mov      dword ptr [0x838204], eax
  0x004639ca:  push     eax
  0x004639cb:  mov      eax, dword ptr [esp + 0x78]
  0x004639cf:  push     0x8c
  0x004639d4:  push     0x8c
  0x004639d9:  push     eax
  0x004639da:  push     eax
  0x004639db:  push     edx
  0x004639dc:  call     0x462a30 <<< CALL
  0x004639e1:  mov      al, byte ptr [0x5a34e0]
  0x004639e6:  add      esp, 0x2c
  0x004639e9:  cmp      al, 2
  0x004639eb:  jne      0x463a4a
  0x004639ed:  mov      eax, dword ptr [0x5685f4]
  0x004639f2:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004639f8:  cdq      
  0x004639f9:  sub      eax, edx
  0x004639fb:  sar      eax, 1
  0x004639fd:  add      eax, ecx
  0x004639ff:  and      eax, 3
  0x00463a02:  push     eax
  0x00463a03:  mov      eax, dword ptr [0x834170]
  0x00463a08:  cdq      
  0x00463a09:  idiv     dword ptr [0x53fba4]
  0x00463a0f:  push     edx
  0x00463a10:  push     0x1ef
  0x00463a15:  call     0x43d6f0 <<< CALL
  0x00463a1a:  push     0x97
  0x00463a1f:  push     4
  0x00463a21:  mov      dword ptr [0x838204], eax
  0x00463a26:  push     eax
  0x00463a27:  mov      eax, dword ptr [esp + 0x78]
  0x00463a2b:  push     0x8c
  0x00463a30:  push     0x8c
  0x00463a35:  lea      edx, [eax + 1]
  0x00463a38:  push     edx
  0x00463a39:  push     eax
  0x00463a3a:  mov      eax, dword ptr [esp + 0x84]
  0x00463a41:  push     eax
  0x00463a42:  call     0x462a30 <<< CALL
  0x00463a47:  add      esp, 0x2c
  0x00463a4a:  mov      al, byte ptr [0x5a34e0]
  0x00463a4f:  test     al, al
  0x00463a51:  jne      0x465504
  0x00463a57:  mov      eax, dword ptr [0x5685f4]
  0x00463a5c:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463a62:  cdq      
  0x00463a63:  sub      eax, edx
  0x00463a65:  sar      eax, 1
  0x00463a67:  add      eax, ecx
  0x00463a69:  and      eax, 3
  0x00463a6c:  push     eax
  0x00463a6d:  mov      eax, dword ptr [0x834170]
  0x00463a72:  cdq      
  0x00463a73:  idiv     dword ptr [0x53fb28]
  0x00463a79:  push     edx
  0x00463a7a:  push     0x1d0
  0x00463a7f:  call     0x43d6f0 <<< CALL
  0x00463a84:  push     0x97
  0x00463a89:  push     4
  0x00463a8b:  mov      dword ptr [0x838204], eax
  0x00463a90:  push     eax
  0x00463a91:  mov      eax, dword ptr [esp + 0x78]
  0x00463a95:  push     0x8c
  0x00463a9a:  push     0x8c
  0x00463a9f:  lea      edx, [eax + 1]
  0x00463aa2:  push     edx
  0x00463aa3:  push     eax
  0x00463aa4:  mov      eax, dword ptr [esp + 0x84]
  0x00463aab:  push     eax
  0x00463aac:  call     0x462a30 <<< CALL
  0x00463ab1:  add      esp, 0x2c
  0x00463ab4:  pop      edi
  0x00463ab5:  pop      esi
  0x00463ab6:  pop      ebp
  0x00463ab7:  pop      ebx
  0x00463ab8:  add      esp, 0x40
  0x00463abb:  ret      
  0x00463abc:  mov      ebx, dword ptr [esp + 0x58]
  0x00463ac0:  test     ebx, ebx
  0x00463ac2:  jne      0x463ac9
  0x00463ac4:  mov      edi, 0x11
  0x00463ac9:  mov      cx, word ptr [ebp*2 + 0x53caf0]
  0x00463ad1:  and      ecx, 0x4000
  0x00463ad7:  test     cx, cx
  0x00463ada:  je       0x463b68
  0x00463ae0:  mov      eax, dword ptr [0x5685f4]
  0x00463ae5:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463aeb:  cdq      
  0x00463aec:  sub      eax, edx
  0x00463aee:  add      ebx, 0x1e6
  0x00463af4:  sar      eax, 1
  0x00463af6:  add      ecx, eax
  0x00463af8:  and      ecx, 3
  0x00463afb:  push     ecx
  0x00463afc:  push     0
  0x00463afe:  push     ebx
  0x00463aff:  call     0x43d6f0 <<< CALL
  0x00463b04:  lea      edx, [edi + edi*4]
  0x00463b07:  add      esp, 0xc
  0x00463b0a:  mov      dword ptr [0x838204], eax
  0x00463b0f:  lea      ecx, [edi + edx*2]
  0x00463b12:  push     1
  0x00463b14:  lea      edx, [ecx*8 + 0x81ca10]
  0x00463b1b:  xor      ecx, ecx
  0x00463b1d:  mov      cl, byte ptr [ebp + 0x578804]
  0x00463b23:  push     edx
  0x00463b24:  mov      edx, dword ptr [esp + 0x18]
  0x00463b28:  mov      dword ptr [esp + 0x60], ecx
  0x00463b2c:  fild     dword ptr [esp + 0x60] <<< FPU
  0x00463b30:  push     ecx
  0x00463b31:  mov      ecx, dword ptr [esp + 0x6c]
  0x00463b35:  add      edx, -0x30
  0x00463b38:  fmul     qword ptr [0x4ba818] <<< FPU
  0x00463b3e:  lea      ecx, [ecx + edx*4]
  0x00463b41:  add      edx, ecx
  0x00463b43:  mov      ecx, dword ptr [0x4c1570]
  0x00463b49:  fstp     dword ptr [esp] <<< FPU
  0x00463b4c:  push     edx
  0x00463b4d:  mov      edx, dword ptr [esp + 0x6c]
  0x00463b51:  add      edx, 0xffffff10
  0x00463b57:  push     edx
  0x00463b58:  push     ecx
  0x00463b59:  mov      ecx, eax
  0x00463b5b:  call     0x474440 <<< CALL
  0x00463b60:  pop      edi
  0x00463b61:  pop      esi
  0x00463b62:  pop      ebp
  0x00463b63:  pop      ebx
  0x00463b64:  add      esp, 0x40
  0x00463b67:  ret      
  0x00463b68:  mov      eax, dword ptr [0x5685f4]
  0x00463b6d:  cdq      
  0x00463b6e:  sub      eax, edx
  0x00463b70:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00463b76:  sar      eax, 1
  0x00463b78:  add      eax, edx
  0x00463b7a:  and      eax, 3
  0x00463b7d:  push     eax
  0x00463b7e:  lea      eax, [ebx + 0x1e9]
  0x00463b84:  push     0
  0x00463b86:  push     eax
  0x00463b87:  call     0x43d6f0 <<< CALL
  0x00463b8c:  mov      ecx, dword ptr [esp + 0x6c]
  0x00463b90:  mov      edx, dword ptr [esp + 0x68]
  0x00463b94:  push     edi
  0x00463b95:  push     4
  0x00463b97:  push     eax
  0x00463b98:  push     0xf0
  0x00463b9d:  push     0xf0
  0x00463ba2:  push     0
  0x00463ba4:  push     ecx
  0x00463ba5:  push     edx
  0x00463ba6:  mov      dword ptr [0x838204], eax
  0x00463bab:  call     0x462a30 <<< CALL
  0x00463bb0:  mov      eax, dword ptr [0x5685f4]
  0x00463bb5:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463bbb:  cdq      
  0x00463bbc:  sub      eax, edx
  0x00463bbe:  lea      edx, [ebx + 0x1e6]
  0x00463bc4:  sar      eax, 1
  0x00463bc6:  add      eax, ecx
  0x00463bc8:  and      eax, 3
  0x00463bcb:  push     eax
  0x00463bcc:  push     0
  0x00463bce:  push     edx
  0x00463bcf:  call     0x43d6f0 <<< CALL
  0x00463bd4:  push     edi
  0x00463bd5:  push     4
  0x00463bd7:  mov      dword ptr [0x838204], eax
  0x00463bdc:  push     eax
  0x00463bdd:  mov      eax, dword ptr [esp + 0xa4]
  0x00463be4:  push     0xf0
  0x00463be9:  push     0xf0
  0x00463bee:  push     eax
  0x00463bef:  push     eax
  0x00463bf0:  mov      eax, dword ptr [esp + 0xb0]
  0x00463bf7:  push     eax
  0x00463bf8:  call     0x462a30 <<< CALL
  0x00463bfd:  mov      al, byte ptr [0x5a34e0]
  0x00463c02:  add      esp, 0x58
  0x00463c05:  test     al, al
  0x00463c07:  jne      0x463c6e
  0x00463c09:  mov      eax, dword ptr [0x5685f4]
  0x00463c0e:  mov      ecx, ebx
  0x00463c10:  neg      ecx
  0x00463c12:  cdq      
  0x00463c13:  sbb      ecx, ecx
  0x00463c15:  sub      eax, edx
  0x00463c17:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00463c1d:  and      ecx, 3
  0x00463c20:  sar      eax, 1
  0x00463c22:  add      eax, edx
  0x00463c24:  add      ecx, 2
  0x00463c27:  and      eax, 3
  0x00463c2a:  add      ecx, 0x1e6
  0x00463c30:  push     eax
  0x00463c31:  mov      eax, dword ptr [0x834170]
  0x00463c36:  cdq      
  0x00463c37:  idiv     dword ptr [ecx*4 + 0x53f3e8]
  0x00463c3e:  push     edx
  0x00463c3f:  push     ecx
  0x00463c40:  call     0x43d6f0 <<< CALL
  0x00463c45:  push     edi
  0x00463c46:  mov      edx, dword ptr [esp + 0x6c]
  0x00463c4a:  push     4
  0x00463c4c:  mov      dword ptr [0x838204], eax
  0x00463c51:  push     eax
  0x00463c52:  mov      eax, dword ptr [esp + 0x78]
  0x00463c56:  push     0xf0
  0x00463c5b:  push     0xf0
  0x00463c60:  lea      ecx, [eax + 1]
  0x00463c63:  push     ecx
  0x00463c64:  push     eax
  0x00463c65:  push     edx
  0x00463c66:  call     0x462a30 <<< CALL
  0x00463c6b:  add      esp, 0x2c
  0x00463c6e:  cmp      byte ptr [0x5a34e0], 2
  0x00463c75:  jne      0x463cd8
  0x00463c77:  test     ebx, ebx
  0x00463c79:  je       0x465504
  0x00463c7f:  mov      eax, dword ptr [0x5685f4]
  0x00463c84:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463c8a:  cdq      
  0x00463c8b:  sub      eax, edx
  0x00463c8d:  sar      eax, 1
  0x00463c8f:  add      eax, ecx
  0x00463c91:  and      eax, 3
  0x00463c94:  push     eax
  0x00463c95:  mov      eax, dword ptr [0x834170]
  0x00463c9a:  cdq      
  0x00463c9b:  idiv     dword ptr [0x53fb94]
  0x00463ca1:  push     edx
  0x00463ca2:  push     0x1eb
  0x00463ca7:  call     0x43d6f0 <<< CALL
  0x00463cac:  push     edi
  0x00463cad:  push     4
  0x00463caf:  mov      dword ptr [0x838204], eax
  0x00463cb4:  push     eax
  0x00463cb5:  mov      eax, dword ptr [esp + 0x78]
  0x00463cb9:  push     0xf0
  0x00463cbe:  push     0xf0
  0x00463cc3:  lea      edx, [eax + 1]
  0x00463cc6:  push     edx
  0x00463cc7:  push     eax
  0x00463cc8:  mov      eax, dword ptr [esp + 0x84]
  0x00463ccf:  push     eax
  0x00463cd0:  call     0x462a30 <<< CALL
  0x00463cd5:  add      esp, 0x2c
  0x00463cd8:  cmp      byte ptr [0x5a34e0], 1
  0x00463cdf:  jne      0x463e3b
  0x00463ce5:  test     ebx, ebx
  0x00463ce7:  jne      0x463d47
  0x00463ce9:  mov      eax, dword ptr [0x5685f4]
  0x00463cee:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463cf4:  cdq      
  0x00463cf5:  sub      eax, edx
  0x00463cf7:  sar      eax, 1
  0x00463cf9:  add      eax, ecx
  0x00463cfb:  and      eax, 3
  0x00463cfe:  push     eax
  0x00463cff:  mov      eax, dword ptr [0x834170]
  0x00463d04:  cdq      
  0x00463d05:  idiv     dword ptr [0x53fb88]
  0x00463d0b:  push     edx
  0x00463d0c:  push     0x1e8
  0x00463d11:  call     0x43d6f0 <<< CALL
  0x00463d16:  push     edi
  0x00463d17:  push     4
  0x00463d19:  mov      dword ptr [0x838204], eax
  0x00463d1e:  push     eax
  0x00463d1f:  mov      eax, dword ptr [esp + 0x78]
  0x00463d23:  push     0xf0
  0x00463d28:  push     0xf0
  0x00463d2d:  lea      edx, [eax + 1]
  0x00463d30:  push     edx
  0x00463d31:  push     eax
  0x00463d32:  mov      eax, dword ptr [esp + 0x84]
  0x00463d39:  push     eax
  0x00463d3a:  call     0x462a30 <<< CALL
  0x00463d3f:  add      esp, 0x2c
  0x00463d42:  jmp      0x463e3b
  0x00463d47:  mov      eax, dword ptr [esp + 0x6c]
  0x00463d4b:  mov      ecx, dword ptr [0x53fb94]
  0x00463d51:  lea      edx, [eax + eax*2]
  0x00463d54:  mov      eax, dword ptr [0x834170]
  0x00463d59:  lea      ebp, [eax + edx*4]
  0x00463d5c:  mov      edx, dword ptr [esp + 0x14]
  0x00463d60:  lea      eax, [edx*8]
  0x00463d67:  sub      eax, edx
  0x00463d69:  mov      edx, dword ptr [esp + 0x6c]
  0x00463d6d:  add      ebp, edx
  0x00463d6f:  add      eax, ebp
  0x00463d71:  lea      ebp, [ecx + ecx*4]
  0x00463d74:  cdq      
  0x00463d75:  shl      ebp, 1
  0x00463d77:  idiv     ebp
  0x00463d79:  lea      eax, [ecx*4]
  0x00463d80:  cmp      edx, eax
  0x00463d82:  jl       0x463d8c
  0x00463d84:  lea      eax, [ecx + ecx*4]
  0x00463d87:  sub      eax, edx
  0x00463d89:  dec      eax
  0x00463d8a:  mov      edx, eax
  0x00463d8c:  dec      ecx
  0x00463d8d:  push     ecx
  0x00463d8e:  push     0
  0x00463d90:  push     edx
  0x00463d91:  call     0x467130 <<< CALL
  0x00463d96:  mov      ecx, eax
  0x00463d98:  mov      eax, dword ptr [0x5685f4]
  0x00463d9d:  cdq      
  0x00463d9e:  sub      eax, edx
  0x00463da0:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00463da6:  sar      eax, 1
  0x00463da8:  add      eax, edx
  0x00463daa:  and      eax, 3
  0x00463dad:  push     eax
  0x00463dae:  push     ecx
  0x00463daf:  push     0x1eb
  0x00463db4:  call     0x43d6f0 <<< CALL
  0x00463db9:  push     edi
  0x00463dba:  mov      edx, dword ptr [esp + 0x78]
  0x00463dbe:  push     4
  0x00463dc0:  mov      dword ptr [0x838204], eax
  0x00463dc5:  push     eax
  0x00463dc6:  mov      eax, dword ptr [esp + 0x84]
  0x00463dcd:  push     0xf0
  0x00463dd2:  push     0xf0
  0x00463dd7:  lea      ecx, [eax + 1]
  0x00463dda:  push     ecx
  0x00463ddb:  push     eax
  0x00463ddc:  push     edx
  0x00463ddd:  call     0x462a30 <<< CALL
  0x00463de2:  mov      eax, dword ptr [0x5685f4]
  0x00463de7:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463ded:  cdq      
  0x00463dee:  sub      eax, edx
  0x00463df0:  sar      eax, 1
  0x00463df2:  add      eax, ecx
  0x00463df4:  and      eax, 3
  0x00463df7:  push     eax
  0x00463df8:  mov      eax, dword ptr [0x834170]
  0x00463dfd:  cdq      
  0x00463dfe:  idiv     dword ptr [0x53fb90]
  0x00463e04:  push     edx
  0x00463e05:  push     0x1ea
  0x00463e0a:  call     0x43d6f0 <<< CALL
  0x00463e0f:  add      esp, 0x44
  0x00463e12:  mov      dword ptr [0x838204], eax
  0x00463e17:  push     edi
  0x00463e18:  push     4
  0x00463e1a:  push     eax
  0x00463e1b:  mov      eax, dword ptr [esp + 0x6c]
  0x00463e1f:  push     0xf0
  0x00463e24:  push     0xf0
  0x00463e29:  lea      edx, [eax + 1]
  0x00463e2c:  push     edx
  0x00463e2d:  push     eax
  0x00463e2e:  mov      eax, dword ptr [esp + 0x78]
  0x00463e32:  push     eax
  0x00463e33:  call     0x462a30 <<< CALL
  0x00463e38:  add      esp, 0x20
  0x00463e3b:  cmp      byte ptr [0x5a34e0], 3
  0x00463e42:  jne      0x465504
  0x00463e48:  mov      eax, dword ptr [0x5685f4]
  0x00463e4d:  test     ebx, ebx
  0x00463e4f:  cdq      
  0x00463e50:  jne      0x463e79
  0x00463e52:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463e58:  sub      eax, edx
  0x00463e5a:  sar      eax, 1
  0x00463e5c:  add      eax, ecx
  0x00463e5e:  and      eax, 3
  0x00463e61:  push     eax
  0x00463e62:  mov      eax, dword ptr [0x834170]
  0x00463e67:  cdq      
  0x00463e68:  idiv     dword ptr [0x53fb88]
  0x00463e6e:  push     edx
  0x00463e6f:  push     0x1e8
  0x00463e74:  jmp      0x464f9b
  0x00463e79:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463e7f:  sub      eax, edx
  0x00463e81:  sar      eax, 1
  0x00463e83:  add      eax, ecx
  0x00463e85:  and      eax, 3
  0x00463e88:  push     eax
  0x00463e89:  mov      eax, dword ptr [0x834170]
  0x00463e8e:  cdq      
  0x00463e8f:  idiv     dword ptr [0x53fb94]
  0x00463e95:  push     edx
  0x00463e96:  push     0x1eb
  0x00463e9b:  jmp      0x464f9b
  0x00463ea0:  mov      ebx, dword ptr [esp + 0x58]
  0x00463ea4:  test     ebx, ebx
  0x00463ea6:  jne      0x463ead
  0x00463ea8:  mov      edi, 0x1c
  0x00463ead:  mov      cx, word ptr [ebp*2 + 0x53caf0]
  0x00463eb5:  and      ecx, 0x4000
  0x00463ebb:  test     cx, cx
  0x00463ebe:  je       0x463f11
  0x00463ec0:  mov      eax, dword ptr [0x5685f4]
  0x00463ec5:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463ecb:  cdq      
  0x00463ecc:  sub      eax, edx
  0x00463ece:  add      ebx, 0x1d4
  0x00463ed4:  sar      eax, 1
  0x00463ed6:  add      ecx, eax
  0x00463ed8:  and      ecx, 3
  0x00463edb:  push     ecx
  0x00463edc:  push     0
  0x00463ede:  push     ebx
  0x00463edf:  call     0x43d6f0 <<< CALL
  0x00463ee4:  lea      edx, [edi + edi*4]
  0x00463ee7:  add      esp, 0xc
  0x00463eea:  mov      dword ptr [0x838204], eax
  0x00463eef:  lea      ecx, [edi + edx*2]
  0x00463ef2:  push     1
  0x00463ef4:  lea      edx, [ecx*8 + 0x81ca10]
  0x00463efb:  xor      ecx, ecx
  0x00463efd:  mov      cl, byte ptr [ebp + 0x578804]
  0x00463f03:  push     edx
  0x00463f04:  mov      dword ptr [esp + 0x60], ecx
  0x00463f08:  fild     dword ptr [esp + 0x60] <<< FPU
  0x00463f0c:  jmp      0x465044
  0x00463f11:  mov      al, byte ptr [0x5a34e0]
  0x00463f16:  test     al, al
  0x00463f18:  je       0x463f89
  0x00463f1a:  cmp      al, 1
  0x00463f1c:  je       0x463f89
  0x00463f1e:  mov      eax, dword ptr [0x5685f4]
  0x00463f23:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463f29:  cdq      
  0x00463f2a:  sub      eax, edx
  0x00463f2c:  sar      eax, 1
  0x00463f2e:  add      ecx, eax
  0x00463f30:  mov      eax, dword ptr [0x834170]
  0x00463f35:  cdq      
  0x00463f36:  idiv     dword ptr [ebx*4 + 0x53fb44]
  0x00463f3d:  and      ecx, 3
  0x00463f40:  push     ecx
  0x00463f41:  push     edx
  0x00463f42:  lea      edx, [ebx + 0x1d7]
  0x00463f48:  push     edx
  0x00463f49:  call     0x43d6f0 <<< CALL
  0x00463f4e:  mov      cl, byte ptr [0x5a34e0]
  0x00463f54:  mov      edx, dword ptr [esp + 0x6c]
  0x00463f58:  add      esp, 0xc
  0x00463f5b:  cmp      cl, 2
  0x00463f5e:  mov      dword ptr [0x838204], eax
  0x00463f63:  jne      0x463f6a
  0x00463f65:  lea      ecx, [edx + 1]
  0x00463f68:  jmp      0x463f6c
  0x00463f6a:  xor      ecx, ecx
  0x00463f6c:  push     edi
  0x00463f6d:  push     4
  0x00463f6f:  push     eax
  0x00463f70:  mov      eax, dword ptr [esp + 0x68]
  0x00463f74:  push     0x8c
  0x00463f79:  push     0x8c
  0x00463f7e:  push     ecx
  0x00463f7f:  push     edx
  0x00463f80:  push     eax
  0x00463f81:  call     0x462a30 <<< CALL
  0x00463f86:  add      esp, 0x20
  0x00463f89:  mov      eax, dword ptr [0x5685f4]
  0x00463f8e:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00463f94:  cdq      
  0x00463f95:  sub      eax, edx
  0x00463f97:  sar      eax, 1
  0x00463f99:  add      eax, ecx
  0x00463f9b:  and      eax, 3
  0x00463f9e:  push     eax
  0x00463f9f:  mov      eax, dword ptr [0x834170]
  0x00463fa4:  cdq      
  0x00463fa5:  idiv     dword ptr [ebx*4 + 0x53fb38]
  0x00463fac:  push     edx
  0x00463fad:  lea      edx, [ebx + 0x1d4]
  0x00463fb3:  push     edx
  0x00463fb4:  call     0x43d6f0 <<< CALL
  0x00463fb9:  push     edi
  0x00463fba:  push     4
  0x00463fbc:  mov      dword ptr [0x838204], eax
  0x00463fc1:  push     eax
  0x00463fc2:  mov      eax, dword ptr [esp + 0x78]
  0x00463fc6:  push     0x8c
  0x00463fcb:  push     0x8c
  0x00463fd0:  push     eax
  0x00463fd1:  push     eax
  0x00463fd2:  mov      eax, dword ptr [esp + 0x84]
  0x00463fd9:  push     eax
  0x00463fda:  call     0x462a30 <<< CALL
  0x00463fdf:  mov      al, byte ptr [0x5a34e0]
  0x00463fe4:  add      esp, 0x2c
  0x00463fe7:  cmp      al, 3
  0x00463fe9:  jne      0x465504
  0x00463fef:  test     ebx, ebx
  0x00463ff1:  je       0x465504
  0x00463ff7:  mov      eax, dword ptr [0x5685f4]
  0x00463ffc:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464002:  cdq      
  0x00464003:  sub      eax, edx
  0x00464005:  sar      eax, 1
  0x00464007:  add      eax, ecx
  0x00464009:  and      eax, 3
  0x0046400c:  push     eax
  0x0046400d:  mov      eax, dword ptr [0x834170]
  0x00464012:  cdq      
  0x00464013:  idiv     dword ptr [0x53fb4c]
  0x00464019:  push     edx
  0x0046401a:  push     0x1d9
  0x0046401f:  call     0x43d6f0 <<< CALL
  0x00464024:  push     edi
  0x00464025:  mov      dword ptr [0x838204], eax
  0x0046402a:  push     4
  0x0046402c:  jmp      0x46434a
  0x00464031:  mov      ebx, dword ptr [esp + 0x58]
  0x00464035:  test     ebx, ebx
  0x00464037:  jne      0x46403e
  0x00464039:  mov      edi, 0xe
  0x0046403e:  lea      eax, [ebx + ebx*4]
  0x00464041:  lea      ecx, [eax + eax*4]
  0x00464044:  mov      al, byte ptr [ecx*2 + 0x81b490]
  0x0046404b:  test     al, al
  0x0046404d:  jne      0x464059
  0x0046404f:  xor      ebx, ebx
  0x00464051:  mov      dword ptr [esp + 0x18], 5
  0x00464059:  mov      dx, word ptr [ebp*2 + 0x53caf0]
  0x00464061:  and      edx, 0x4000
  0x00464067:  test     dx, dx
  0x0046406a:  je       0x4640bd
  0x0046406c:  mov      eax, dword ptr [0x5685f4]
  0x00464071:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464077:  cdq      
  0x00464078:  sub      eax, edx
  0x0046407a:  add      ebx, 0x1e0
  0x00464080:  sar      eax, 1
  0x00464082:  add      ecx, eax
  0x00464084:  and      ecx, 3
  0x00464087:  push     ecx
  0x00464088:  push     0
  0x0046408a:  push     ebx
  0x0046408b:  call     0x43d6f0 <<< CALL
  0x00464090:  lea      edx, [edi + edi*4]
  0x00464093:  add      esp, 0xc
  0x00464096:  mov      dword ptr [0x838204], eax
  0x0046409b:  lea      ecx, [edi + edx*2]
  0x0046409e:  push     1
  0x004640a0:  lea      edx, [ecx*8 + 0x81ca10]
  0x004640a7:  xor      ecx, ecx
  0x004640a9:  mov      cl, byte ptr [ebp + 0x578804]
  0x004640af:  push     edx
  0x004640b0:  mov      dword ptr [esp + 0x60], ecx
  0x004640b4:  fild     dword ptr [esp + 0x60] <<< FPU
  0x004640b8:  jmp      0x465044
  0x004640bd:  lea      eax, [ebx + ebx*4]
  0x004640c0:  lea      edx, [eax + eax*4]
  0x004640c3:  mov      al, byte ptr [edx*2 + 0x81b526]
  0x004640ca:  test     al, al
  0x004640cc:  je       0x464154
  0x004640d2:  cmp      byte ptr [0x5a34e0], 2
  0x004640d9:  jne      0x4640df
  0x004640db:  test     ebx, ebx
  0x004640dd:  jne      0x464154
  0x004640df:  mov      eax, dword ptr [0x5685f4]
  0x004640e4:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004640ea:  cdq      
  0x004640eb:  sub      eax, edx
  0x004640ed:  sar      eax, 1
  0x004640ef:  add      ecx, eax
  0x004640f1:  mov      eax, dword ptr [0x834170]
  0x004640f6:  cdq      
  0x004640f7:  idiv     dword ptr [ebx*4 + 0x53fb74]
  0x004640fe:  and      ecx, 3
  0x00464101:  push     ecx
  0x00464102:  push     edx
  0x00464103:  lea      edx, [ebx + 0x1e3]
  0x00464109:  push     edx
  0x0046410a:  call     0x43d6f0 <<< CALL
  0x0046410f:  mov      cl, byte ptr [0x5a34e0]
  0x00464115:  mov      edx, dword ptr [esp + 0x6c]
  0x00464119:  add      esp, 0xc
  0x0046411c:  cmp      cl, 2
  0x0046411f:  mov      dword ptr [0x838204], eax
  0x00464124:  jne      0x464132
  0x00464126:  test     ebx, ebx
  0x00464128:  je       0x464132
  0x0046412a:  mov      ecx, dword ptr [esp + 0x20]
  0x0046412e:  add      ecx, edx
  0x00464130:  jmp      0x464134
  0x00464132:  xor      ecx, ecx
  0x00464134:  mov      ebp, dword ptr [esp + 0x18]
  0x00464138:  push     edi
  0x00464139:  push     ebp
  0x0046413a:  push     eax
  0x0046413b:  push     0x8c
  0x00464140:  push     0x8c
  0x00464145:  push     ecx
  0x00464146:  push     edx
  0x00464147:  mov      edx, dword ptr [esp + 0x78]
  0x0046414b:  push     edx
  0x0046414c:  call     0x462a30 <<< CALL
  0x00464151:  add      esp, 0x20
  0x00464154:  mov      eax, dword ptr [0x5685f4]
  0x00464159:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x0046415f:  cdq      
  0x00464160:  sub      eax, edx
  0x00464162:  sar      eax, 1
  0x00464164:  add      eax, ecx
  0x00464166:  and      eax, 3
  0x00464169:  push     eax
  0x0046416a:  mov      eax, dword ptr [0x834170]
  0x0046416f:  cdq      
  0x00464170:  idiv     dword ptr [ebx*4 + 0x53fb68]
  0x00464177:  push     edx
  0x00464178:  lea      edx, [ebx + 0x1e0]
  0x0046417e:  push     edx
  0x0046417f:  call     0x43d6f0 <<< CALL
  0x00464184:  mov      ebp, dword ptr [esp + 0x24]
  0x00464188:  push     edi
  0x00464189:  push     ebp
  0x0046418a:  mov      dword ptr [0x838204], eax
  0x0046418f:  push     eax
  0x00464190:  mov      eax, dword ptr [esp + 0x78]
  0x00464194:  push     0x8c
  0x00464199:  push     0x8c
  0x0046419e:  push     eax
  0x0046419f:  push     eax
  0x004641a0:  mov      eax, dword ptr [esp + 0x84]
  0x004641a7:  push     eax
  0x004641a8:  call     0x462a30 <<< CALL
  0x004641ad:  mov      al, byte ptr [0x5a34e0]
  0x004641b2:  add      esp, 0x2c
  0x004641b5:  test     al, al
  0x004641b7:  jne      0x464277
  0x004641bd:  test     ebx, ebx
  0x004641bf:  je       0x465504
  0x004641c5:  mov      eax, dword ptr [0x5685f4]
  0x004641ca:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004641d0:  cdq      
  0x004641d1:  sub      eax, edx
  0x004641d3:  sar      eax, 1
  0x004641d5:  add      eax, ecx
  0x004641d7:  and      eax, 3
  0x004641da:  push     eax
  0x004641db:  mov      eax, dword ptr [0x834170]
  0x004641e0:  cdq      
  0x004641e1:  idiv     dword ptr [0x53fb70]
  0x004641e7:  push     edx
  0x004641e8:  push     0x1e2
  0x004641ed:  call     0x43d6f0 <<< CALL
  0x004641f2:  push     edi
  0x004641f3:  push     4
  0x004641f5:  mov      dword ptr [0x838204], eax
  0x004641fa:  push     eax
  0x004641fb:  mov      eax, dword ptr [esp + 0x78]
  0x004641ff:  push     0x8c
  0x00464204:  push     0x8c
  0x00464209:  lea      edx, [eax + 1]
  0x0046420c:  push     edx
  0x0046420d:  push     eax
  0x0046420e:  mov      eax, dword ptr [esp + 0x84]
  0x00464215:  push     eax
  0x00464216:  call     0x462a30 <<< CALL
  0x0046421b:  mov      eax, dword ptr [0x5685f4]
  0x00464220:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464226:  cdq      
  0x00464227:  sub      eax, edx
  0x00464229:  sar      eax, 1
  0x0046422b:  add      eax, ecx
  0x0046422d:  and      eax, 3
  0x00464230:  push     eax
  0x00464231:  mov      eax, dword ptr [0x834170]
  0x00464236:  cdq      
  0x00464237:  idiv     dword ptr [0x53fb7c]
  0x0046423d:  push     edx
  0x0046423e:  push     0x1e5
  0x00464243:  call     0x43d6f0 <<< CALL
  0x00464248:  push     edi
  0x00464249:  push     4
  0x0046424b:  mov      dword ptr [0x838204], eax
  0x00464250:  push     eax
  0x00464251:  mov      eax, dword ptr [esp + 0xa4]
  0x00464258:  push     0x8c
  0x0046425d:  push     0x8c
  0x00464262:  lea      edx, [eax + 1]
  0x00464265:  push     edx
  0x00464266:  push     eax
  0x00464267:  mov      eax, dword ptr [esp + 0xb0]
  0x0046426e:  push     eax
  0x0046426f:  call     0x462a30 <<< CALL
  0x00464274:  add      esp, 0x58
  0x00464277:  cmp      byte ptr [0x5a34e0], 2
  0x0046427e:  jne      0x4642e1
  0x00464280:  test     ebx, ebx
  0x00464282:  jne      0x465504
  0x00464288:  mov      eax, dword ptr [0x5685f4]
  0x0046428d:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464293:  cdq      
  0x00464294:  sub      eax, edx
  0x00464296:  sar      eax, 1
  0x00464298:  add      eax, ecx
  0x0046429a:  and      eax, 3
  0x0046429d:  push     eax
  0x0046429e:  mov      eax, dword ptr [0x834170]
  0x004642a3:  cdq      
  0x004642a4:  idiv     dword ptr [0x53fb78]
  0x004642aa:  push     edx
  0x004642ab:  push     0x1e4
  0x004642b0:  call     0x43d6f0 <<< CALL
  0x004642b5:  push     edi
  0x004642b6:  push     4
  0x004642b8:  mov      dword ptr [0x838204], eax
  0x004642bd:  push     eax
  0x004642be:  mov      eax, dword ptr [esp + 0x78]
  0x004642c2:  push     0x8c
  0x004642c7:  push     0x8c
  0x004642cc:  lea      edx, [eax + 1]
  0x004642cf:  push     edx
  0x004642d0:  push     eax
  0x004642d1:  mov      eax, dword ptr [esp + 0x84]
  0x004642d8:  push     eax
  0x004642d9:  call     0x462a30 <<< CALL
  0x004642de:  add      esp, 0x2c
  0x004642e1:  cmp      byte ptr [0x5a34e0], 3
  0x004642e8:  jne      0x465504
  0x004642ee:  mov      eax, dword ptr [0x5685f4]
  0x004642f3:  test     ebx, ebx
  0x004642f5:  cdq      
  0x004642f6:  jne      0x46431c
  0x004642f8:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004642fe:  sub      eax, edx
  0x00464300:  sar      eax, 1
  0x00464302:  add      eax, ecx
  0x00464304:  and      eax, 3
  0x00464307:  push     eax
  0x00464308:  mov      eax, dword ptr [0x834170]
  0x0046430d:  cdq      
  0x0046430e:  idiv     dword ptr [0x53fb70]
  0x00464314:  push     edx
  0x00464315:  push     0x1e2
  0x0046431a:  jmp      0x46433e
  0x0046431c:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464322:  sub      eax, edx
  0x00464324:  sar      eax, 1
  0x00464326:  add      eax, ecx
  0x00464328:  and      eax, 3
  0x0046432b:  push     eax
  0x0046432c:  mov      eax, dword ptr [0x834170]
  0x00464331:  cdq      
  0x00464332:  idiv     dword ptr [0x53fb7c]
  0x00464338:  push     edx
  0x00464339:  push     0x1e5
  0x0046433e:  call     0x43d6f0 <<< CALL
  0x00464343:  push     edi
  0x00464344:  mov      dword ptr [0x838204], eax
  0x00464349:  push     ebp
  0x0046434a:  push     eax
  0x0046434b:  mov      eax, dword ptr [esp + 0x78]
  0x0046434f:  push     0x8c
  0x00464354:  push     0x8c
  0x00464359:  lea      edx, [eax + 2]
  0x0046435c:  push     edx
  0x0046435d:  push     eax
  0x0046435e:  mov      eax, dword ptr [esp + 0x84]
  0x00464365:  push     eax
  0x00464366:  call     0x462a30 <<< CALL
  0x0046436b:  add      esp, 0x2c
  0x0046436e:  pop      edi
  0x0046436f:  pop      esi
  0x00464370:  pop      ebp
  0x00464371:  pop      ebx
  0x00464372:  add      esp, 0x40
  0x00464375:  ret      
  0x00464376:  mov      edi, dword ptr [0x5a8c50]
  0x0046437c:  mov      eax, dword ptr [0x5685f4]
  0x00464381:  xor      ecx, ecx
  0x00464383:  cmp      edi, 2
  0x00464386:  cdq      
  0x00464387:  setne    cl
  0x0046438a:  sub      eax, edx
  0x0046438c:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00464392:  sar      eax, 1
  0x00464394:  add      eax, edx
  0x00464396:  dec      ecx
  0x00464397:  and      eax, 3
  0x0046439a:  and      ecx, 3
  0x0046439d:  push     eax
  0x0046439e:  mov      eax, dword ptr [0x834170]
  0x004643a3:  mov      edi, ecx
  0x004643a5:  cdq      
  0x004643a6:  idiv     dword ptr [edi*4 + 0x53fbac]
  0x004643ad:  lea      eax, [edi + 0x1f1]
  0x004643b3:  push     edx
  0x004643b4:  push     eax
  0x004643b5:  call     0x43d6f0 <<< CALL
  0x004643ba:  mov      cl, byte ptr [0x5a34e0]
  0x004643c0:  mov      ebp, dword ptr [esp + 0x74]
  0x004643c4:  add      esp, 0xc
  0x004643c7:  cmp      cl, 1
  0x004643ca:  mov      dword ptr [0x838204], eax
  0x004643cf:  je       0x4643da
  0x004643d1:  cmp      cl, 3
  0x004643d4:  je       0x4643da
  0x004643d6:  add      ebx, ebp
  0x004643d8:  jmp      0x4643dc
  0x004643da:  xor      ebx, ebx
  0x004643dc:  push     0x14
  0x004643de:  push     4
  0x004643e0:  push     eax
  0x004643e1:  push     0x28
  0x004643e3:  push     0x28
  0x004643e5:  push     ebx
  0x004643e6:  mov      ebx, dword ptr [esp + 0x7c]
  0x004643ea:  push     ebp
  0x004643eb:  push     ebx
  0x004643ec:  call     0x462a30 <<< CALL
  0x004643f1:  mov      eax, dword ptr [0x5685f4]
  0x004643f6:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004643fc:  cdq      
  0x004643fd:  sub      eax, edx
  0x004643ff:  lea      edx, [edi + 0x1f0]
  0x00464405:  sar      eax, 1
  0x00464407:  add      eax, ecx
  0x00464409:  and      eax, 3
  0x0046440c:  push     eax
  0x0046440d:  push     0
  0x0046440f:  push     edx
  0x00464410:  call     0x43d6f0 <<< CALL
  0x00464415:  push     0x14
  0x00464417:  push     4
  0x00464419:  push     eax
  0x0046441a:  push     0x28
  0x0046441c:  push     0x28
  0x0046441e:  push     ebp
  0x0046441f:  push     ebp
  0x00464420:  push     ebx
  0x00464421:  mov      dword ptr [0x838204], eax
  0x00464426:  call     0x462a30 <<< CALL
  0x0046442b:  add      esp, 0x4c
  0x0046442e:  test     edi, edi
  0x00464430:  je       0x4644be
  0x00464436:  mov      edx, dword ptr [esp + 0x6c]
  0x0046443a:  lea      eax, [esp + 0x58]
  0x0046443e:  push     eax
  0x0046443f:  mov      eax, dword ptr [esp + 0x18]
  0x00464443:  lea      ecx, [esp + 0x58]
  0x00464447:  inc      edx
  0x00464448:  push     ecx
  0x00464449:  inc      eax
  0x0046444a:  push     edx
  0x0046444b:  push     eax
  0x0046444c:  call     0x42f940 <<< CALL
  0x00464451:  mov      eax, dword ptr [0x5685f4]
  0x00464456:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x0046445c:  cdq      
  0x0046445d:  sub      eax, edx
  0x0046445f:  sar      eax, 1
  0x00464461:  add      eax, ecx
  0x00464463:  and      eax, 3
  0x00464466:  push     eax
  0x00464467:  mov      eax, dword ptr [0x834170]
  0x0046446c:  cdq      
  0x0046446d:  idiv     dword ptr [0x53fbbc]
  0x00464473:  push     edx
  0x00464474:  push     0x1f5
  0x00464479:  call     0x43d6f0 <<< CALL
  0x0046447e:  mov      cl, byte ptr [0x5a34e0]
  0x00464484:  add      esp, 0x1c
  0x00464487:  cmp      cl, 1
  0x0046448a:  mov      dword ptr [0x838204], eax
  0x0046448f:  push     0x14
  0x00464491:  push     4
  0x00464493:  push     eax
  0x00464494:  je       0x4644a7
  0x00464496:  mov      eax, dword ptr [esp + 0x64]
  0x0046449a:  mov      edx, dword ptr [esp + 0x60]
  0x0046449e:  push     0x28
  0x004644a0:  push     0x28
  0x004644a2:  push     eax
  0x004644a3:  push     eax
  0x004644a4:  push     edx
  0x004644a5:  jmp      0x4644b6
  0x004644a7:  mov      eax, dword ptr [esp + 0x64]
  0x004644ab:  push     0x78
  0x004644ad:  push     0x78
  0x004644af:  push     eax
  0x004644b0:  push     eax
  0x004644b1:  mov      eax, dword ptr [esp + 0x70]
  0x004644b5:  push     eax
  0x004644b6:  call     0x462a30 <<< CALL
  0x004644bb:  add      esp, 0x20
  0x004644be:  mov      ecx, dword ptr [0x5a8c50]
  0x004644c4:  lea      edx, [ecx + ecx + 3]
  0x004644c8:  test     edx, edx
  0x004644ca:  jle      0x465504
  0x004644d0:  xor      ebx, ebx
  0x004644d2:  mov      edi, 3
  0x004644d7:  mov      eax, edi
  0x004644d9:  imul     eax, dword ptr [0x4c2844]
  0x004644e0:  shl      eax, 1
  0x004644e2:  push     eax
  0x004644e3:  push     ebx
  0x004644e4:  call     0x467270 <<< CALL
  0x004644e9:  mov      ecx, edi
  0x004644eb:  mov      ebp, eax
  0x004644ed:  imul     ecx, dword ptr [0x4c2844]
  0x004644f4:  mov      eax, dword ptr [esp + 0x64]
  0x004644f8:  push     ecx
  0x004644f9:  push     ebx
  0x004644fa:  add      ebp, eax
  0x004644fc:  call     0x4672b0 <<< CALL
  0x00464501:  mov      esi, eax
  0x00464503:  mov      eax, dword ptr [esp + 0x70]
  0x00464507:  add      esi, eax
  0x00464509:  mov      eax, dword ptr [0x834170]
  0x0046450e:  cdq      
  0x0046450f:  idiv     dword ptr [0x53fa2c]
  0x00464515:  push     0
  0x00464517:  push     edx
  0x00464518:  push     0x191
  0x0046451d:  call     0x43d6f0 <<< CALL
  0x00464522:  push     0x14
  0x00464524:  push     4
  0x00464526:  push     eax
  0x00464527:  push     0x28
  0x00464529:  push     0x28
  0x0046452b:  push     esi
  0x0046452c:  push     esi
  0x0046452d:  push     ebp
  0x0046452e:  mov      dword ptr [0x838204], eax
  0x00464533:  call     0x462a30 <<< CALL
  0x00464538:  mov      edx, dword ptr [0x5a8c50]
  0x0046453e:  add      esp, 0x3c
  0x00464541:  inc      edi
  0x00464542:  add      ebx, 0x4aaaaaa6
  0x00464548:  lea      eax, [edx + edx + 3]
  0x0046454c:  lea      ecx, [edi - 3]
  0x0046454f:  cmp      ecx, eax
  0x00464551:  jl       0x4644d7
  0x00464553:  pop      edi
  0x00464554:  pop      esi
  0x00464555:  pop      ebp
  0x00464556:  pop      ebx
  0x00464557:  add      esp, 0x40
  0x0046455a:  ret      
  0x0046455b:  mov      ebx, dword ptr [esp + 0x58]
  0x0046455f:  test     ebx, ebx
  0x00464561:  jne      0x464568
  0x00464563:  mov      edi, 0x1a
  0x00464568:  lea      eax, [ebx + 5]
  0x0046456b:  mov      byte ptr [esi + 0x58bcbe], 0
  0x00464572:  test     eax, eax
  0x00464574:  mov      dword ptr [esp + 0x58], 0
  0x0046457c:  jle      0x465504
  0x00464582:  mov      ecx, dword ptr [esp + 0x58]
  0x00464586:  lea      eax, [ebx + 5]
  0x00464589:  xor      ebp, ebp
  0x0046458b:  test     eax, eax
  0x0046458d:  jle      0x464922
  0x00464593:  mov      edx, dword ptr [esp + 0x14]
  0x00464597:  lea      eax, [ecx + edx]
  0x0046459a:  mov      dword ptr [esp + 0x68], eax
  0x0046459e:  shl      eax, 0xa
  0x004645a1:  mov      dword ptr [esp + 0x54], eax
  0x004645a5:  mov      edx, dword ptr [esp + 0x6c]
  0x004645a9:  lea      eax, [esp + 0x60]
  0x004645ad:  push     0
  0x004645af:  push     eax
  0x004645b0:  lea      eax, [edx + ebp]
  0x004645b3:  lea      ecx, [esp + 0x64]
  0x004645b7:  shl      eax, 0xa
  0x004645ba:  push     ecx
  0x004645bb:  mov      ecx, dword ptr [esp + 0x60]
  0x004645bf:  add      eax, 0x200
  0x004645c4:  push     eax
  0x004645c5:  lea      eax, [ecx + 0x200]
  0x004645cb:  push     eax
  0x004645cc:  call     0x42fb90 <<< CALL
  0x004645d1:  add      esp, 0x14
  0x004645d4:  test     eax, eax
  0x004645d6:  je       0x464912
  0x004645dc:  mov      eax, dword ptr [esp + 0x58]
  0x004645e0:  test     eax, eax
  0x004645e2:  jne      0x464749
  0x004645e8:  mov      eax, dword ptr [0x5685f4]
  0x004645ed:  test     ebp, ebp
  0x004645ef:  cdq      
  0x004645f0:  jne      0x4646aa
  0x004645f6:  sub      eax, edx
  0x004645f8:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x004645fe:  sar      eax, 1
  0x00464600:  add      eax, edx
  0x00464602:  and      eax, 3
  0x00464605:  push     eax
  0x00464606:  lea      eax, [ebx + 0x1b6]
  0x0046460c:  push     0
  0x0046460e:  push     eax
  0x0046460f:  call     0x43d6f0 <<< CALL
  0x00464614:  mov      ecx, dword ptr [esp + 0x68]
  0x00464618:  push     edi
  0x00464619:  push     4
  0x0046461b:  mov      dword ptr [0x838204], eax
  0x00464620:  push     eax
  0x00464621:  mov      eax, dword ptr [esp + 0x78]
  0x00464625:  push     0x8c
  0x0046462a:  push     0x8c
  0x0046462f:  push     eax
  0x00464630:  push     eax
  0x00464631:  push     ecx
  0x00464632:  call     0x462a30 <<< CALL
  0x00464637:  add      esp, 0x2c
  0x0046463a:  test     ebx, ebx
  0x0046463c:  je       0x464816
  0x00464642:  cmp      byte ptr [0x5a34e0], 1
  0x00464649:  je       0x464816
  0x0046464f:  mov      eax, dword ptr [0x5685f4]
  0x00464654:  cdq      
  0x00464655:  sub      eax, edx
  0x00464657:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x0046465d:  sar      eax, 1
  0x0046465f:  add      eax, edx
  0x00464661:  and      eax, 3
  0x00464664:  push     eax
  0x00464665:  mov      eax, dword ptr [0x834170]
  0x0046466a:  cdq      
  0x0046466b:  idiv     dword ptr [0x53fae4]
  0x00464671:  push     edx
  0x00464672:  push     0x1bf
  0x00464677:  call     0x43d6f0 <<< CALL
  0x0046467c:  push     edi
  0x0046467d:  mov      edx, dword ptr [esp + 0x6c]
  0x00464681:  push     4
  0x00464683:  mov      dword ptr [0x838204], eax
  0x00464688:  push     eax
  0x00464689:  mov      eax, dword ptr [esp + 0x78]
  0x0046468d:  push     0x8c
  0x00464692:  push     0x8c
  0x00464697:  lea      ecx, [eax + 1]
  0x0046469a:  push     ecx
  0x0046469b:  push     eax
  0x0046469c:  push     edx
  0x0046469d:  call     0x462a30 <<< CALL
  0x004646a2:  add      esp, 0x2c
  0x004646a5:  jmp      0x464816
  0x004646aa:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004646b0:  sub      eax, edx
  0x004646b2:  sar      eax, 1
  0x004646b4:  add      eax, ecx
  0x004646b6:  mov      edx, ebx
  0x004646b8:  and      eax, 3
  0x004646bb:  neg      edx
  0x004646bd:  sbb      edx, edx
  0x004646bf:  push     eax
  0x004646c0:  and      edx, 8
  0x004646c3:  push     0
  0x004646c5:  add      edx, 0x1b8
  0x004646cb:  push     edx
  0x004646cc:  call     0x43d6f0 <<< CALL
  0x004646d1:  push     edi
  0x004646d2:  push     4
  0x004646d4:  mov      dword ptr [0x838204], eax
  0x004646d9:  push     eax
  0x004646da:  mov      eax, dword ptr [esp + 0x78]
  0x004646de:  push     0x28
  0x004646e0:  push     0x28
  0x004646e2:  push     eax
  0x004646e3:  push     eax
  0x004646e4:  mov      eax, dword ptr [esp + 0x84]
  0x004646eb:  push     eax
  0x004646ec:  call     0x462a30 <<< CALL
  0x004646f1:  mov      eax, dword ptr [0x5685f4]
  0x004646f6:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004646fc:  cdq      
  0x004646fd:  sub      eax, edx
  0x004646ff:  mov      edx, ebx
  0x00464701:  sar      eax, 1
  0x00464703:  add      eax, ecx
  0x00464705:  and      eax, 3
  0x00464708:  neg      edx
  0x0046470a:  sbb      edx, edx
  0x0046470c:  push     eax
  0x0046470d:  and      edx, 8
  0x00464710:  push     0
  0x00464712:  add      edx, 0x1b9
  0x00464718:  push     edx
  0x00464719:  call     0x43d6f0 <<< CALL
  0x0046471e:  push     edi
  0x0046471f:  push     4
  0x00464721:  mov      dword ptr [0x838204], eax
  0x00464726:  push     eax
  0x00464727:  mov      eax, dword ptr [esp + 0xa4]
  0x0046472e:  push     0x28
  0x00464730:  push     0x28
  0x00464732:  push     eax
  0x00464733:  push     eax
  0x00464734:  mov      eax, dword ptr [esp + 0xb0]
  0x0046473b:  push     eax
  0x0046473c:  call     0x4628d0 <<< CALL
  0x00464741:  add      esp, 0x58
  0x00464744:  jmp      0x464816
  0x00464749:  test     ebp, ebp
  0x0046474b:  je       0x464762
  0x0046474d:  lea      ecx, [ebx + 4]
  0x00464750:  cmp      ebp, ecx
  0x00464752:  jne      0x464816
  0x00464758:  mov      edx, dword ptr [esp + 0x6c]
  0x0046475c:  lea      eax, [edx + ebx + 5]
  0x00464760:  jmp      0x464766
  0x00464762:  mov      eax, dword ptr [esp + 0x6c]
  0x00464766:  lea      ecx, [esp + 0x60]
  0x0046476a:  push     0
  0x0046476c:  lea      edx, [esp + 0x60]
  0x00464770:  push     ecx
  0x00464771:  shl      eax, 0xa
  0x00464774:  push     edx
  0x00464775:  push     eax
  0x00464776:  mov      eax, dword ptr [esp + 0x64]
  0x0046477a:  add      eax, 0x200
  0x0046477f:  push     eax
  0x00464780:  call     0x42fb90 <<< CALL
  0x00464785:  mov      eax, dword ptr [0x5685f4]
  0x0046478a:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464790:  cdq      
  0x00464791:  sub      eax, edx
  0x00464793:  sar      eax, 1
  0x00464795:  add      eax, ecx
  0x00464797:  and      eax, 3
  0x0046479a:  push     eax
  0x0046479b:  push     0
  0x0046479d:  push     0x1be
  0x004647a2:  call     0x43d6f0 <<< CALL
  0x004647a7:  mov      edx, dword ptr [esp + 0x7c]
  0x004647ab:  push     0x1a
  0x004647ad:  push     4
  0x004647af:  mov      dword ptr [0x838204], eax
  0x004647b4:  push     eax
  0x004647b5:  mov      eax, dword ptr [esp + 0x8c]
  0x004647bc:  push     0x28
  0x004647be:  push     0x28
  0x004647c0:  push     eax
  0x004647c1:  push     eax
  0x004647c2:  push     edx
  0x004647c3:  call     0x462a30 <<< CALL
  0x004647c8:  mov      eax, dword ptr [esp + 0xac]
  0x004647cf:  add      esp, 0x40
  0x004647d2:  test     ebp, ebp
  0x004647d4:  je       0x4647da
  0x004647d6:  lea      eax, [eax + ebx + 5]
  0x004647da:  lea      ecx, [esp + 0x60]
  0x004647de:  push     0
  0x004647e0:  lea      edx, [esp + 0x60]
  0x004647e4:  push     ecx
  0x004647e5:  shl      eax, 0xa
  0x004647e8:  push     edx
  0x004647e9:  push     eax
  0x004647ea:  mov      eax, dword ptr [esp + 0x64]
  0x004647ee:  push     eax
  0x004647ef:  call     0x42fb90 <<< CALL
  0x004647f4:  mov      ecx, dword ptr [0x838204]
  0x004647fa:  mov      eax, dword ptr [esp + 0x74]
  0x004647fe:  mov      edx, dword ptr [esp + 0x70]
  0x00464802:  push     0x1a
  0x00464804:  push     4
  0x00464806:  push     ecx
  0x00464807:  push     0x28
  0x00464809:  push     0x28
  0x0046480b:  push     eax
  0x0046480c:  push     eax
  0x0046480d:  push     edx
  0x0046480e:  call     0x462a30 <<< CALL
  0x00464813:  add      esp, 0x34
  0x00464816:  mov      eax, dword ptr [esp + 0x68]
  0x0046481a:  mov      edx, dword ptr [esp + 0x6c]
  0x0046481e:  lea      eax, [eax + eax*4]
  0x00464821:  lea      eax, [eax + eax*4]
  0x00464824:  lea      ecx, [ebp + eax*2]
  0x00464828:  cmp      byte ptr [ecx + edx + 0x5722e8], 1
  0x00464830:  jne      0x464872
  0x00464832:  mov      eax, dword ptr [esp + 0x58]
  0x00464836:  mov      ecx, dword ptr [0x834170]
  0x0046483c:  add      eax, ebp
  0x0046483e:  push     0
  0x00464840:  add      eax, ecx
  0x00464842:  cdq      
  0x00464843:  idiv     dword ptr [0x53fadc]
  0x00464849:  push     edx
  0x0046484a:  push     0x1bd
  0x0046484f:  call     0x43d6f0 <<< CALL
  0x00464854:  mov      ecx, dword ptr [esp + 0x68]
  0x00464858:  push     0x1a
  0x0046485a:  push     3
  0x0046485c:  mov      dword ptr [0x838204], eax
  0x00464861:  push     eax
  0x00464862:  mov      eax, dword ptr [esp + 0x78]
  0x00464866:  push     0x28
  0x00464868:  push     0x28
  0x0046486a:  push     eax
  0x0046486b:  push     eax
  0x0046486c:  push     ecx
  0x0046486d:  jmp      0x46490a
  0x00464872:  mov      eax, dword ptr [esp + 0x58]
  0x00464876:  lea      edx, [ebp + ebp - 2]
  0x0046487a:  cmp      edx, eax
  0x0046487c:  jne      0x464912
  0x00464882:  cmp      eax, 2
  0x00464885:  jne      0x4648a6
  0x00464887:  mov      eax, dword ptr [0x5685f4]
  0x0046488c:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464892:  cdq      
  0x00464893:  sub      eax, edx
  0x00464895:  sar      eax, 1
  0x00464897:  add      eax, ecx
  0x00464899:  and      eax, 3
  0x0046489c:  push     eax
  0x0046489d:  push     0
  0x0046489f:  push     0x1ba
  0x004648a4:  jmp      0x4648ec
  0x004648a6:  cmp      eax, 4
  0x004648a9:  jne      0x4648ca
  0x004648ab:  mov      eax, dword ptr [0x5685f4]
  0x004648b0:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004648b6:  cdq      
  0x004648b7:  sub      eax, edx
  0x004648b9:  sar      eax, 1
  0x004648bb:  add      eax, ecx
  0x004648bd:  and      eax, 3
  0x004648c0:  push     eax
  0x004648c1:  push     0
  0x004648c3:  push     0x1bb
  0x004648c8:  jmp      0x4648ec
  0x004648ca:  cmp      eax, 6
  0x004648cd:  jne      0x464912
  0x004648cf:  mov      eax, dword ptr [0x5685f4]
  0x004648d4:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004648da:  cdq      
  0x004648db:  sub      eax, edx
  0x004648dd:  sar      eax, 1
  0x004648df:  add      eax, ecx
  0x004648e1:  and      eax, 3
  0x004648e4:  push     eax
  0x004648e5:  push     0
  0x004648e7:  push     0x1bc
  0x004648ec:  call     0x43d6f0 <<< CALL
  0x004648f1:  mov      edx, dword ptr [esp + 0x68]
  0x004648f5:  push     0x1a
  0x004648f7:  push     4
  0x004648f9:  mov      dword ptr [0x838204], eax
  0x004648fe:  push     eax
  0x004648ff:  mov      eax, dword ptr [esp + 0x78]
  0x00464903:  push     0x28
  0x00464905:  push     0x28
  0x00464907:  push     eax
  0x00464908:  push     eax
  0x00464909:  push     edx
  0x0046490a:  call     0x462a30 <<< CALL
  0x0046490f:  add      esp, 0x2c
  0x00464912:  inc      ebp
  0x00464913:  lea      eax, [ebx + 5]
  0x00464916:  cmp      ebp, eax
  0x00464918:  jl       0x4645a5
  0x0046491e:  mov      ecx, dword ptr [esp + 0x58]
  0x00464922:  inc      ecx
  0x00464923:  lea      eax, [ebx + 5]
  0x00464926:  cmp      ecx, eax
  0x00464928:  mov      dword ptr [esp + 0x58], ecx
  0x0046492c:  jl       0x464586
  0x00464932:  pop      edi
  0x00464933:  pop      esi
  0x00464934:  pop      ebp
  0x00464935:  pop      ebx
  0x00464936:  add      esp, 0x40
  0x00464939:  ret      
  0x0046493a:  mov      ebx, dword ptr [esp + 0x58]
  0x0046493e:  test     ebx, ebx
  0x00464940:  jne      0x464947
  0x00464942:  mov      edi, 0x17
  0x00464947:  mov      ax, word ptr [ebp*2 + 0x53caf0]
  0x0046494f:  and      eax, 0x4000
  0x00464954:  test     ax, ax
  0x00464957:  je       0x4649aa
  0x00464959:  mov      eax, dword ptr [0x5685f4]
  0x0046495e:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464964:  cdq      
  0x00464965:  sub      eax, edx
  0x00464967:  add      ebx, 0x1c2
  0x0046496d:  sar      eax, 1
  0x0046496f:  add      ecx, eax
  0x00464971:  and      ecx, 3
  0x00464974:  push     ecx
  0x00464975:  push     0
  0x00464977:  push     ebx
  0x00464978:  call     0x43d6f0 <<< CALL
  0x0046497d:  lea      edx, [edi + edi*4]
  0x00464980:  add      esp, 0xc
  0x00464983:  mov      dword ptr [0x838204], eax
  0x00464988:  lea      ecx, [edi + edx*2]
  0x0046498b:  push     1
  0x0046498d:  lea      edx, [ecx*8 + 0x81ca10]
  0x00464994:  xor      ecx, ecx
  0x00464996:  mov      cl, byte ptr [ebp + 0x578804]
  0x0046499c:  push     edx
  0x0046499d:  mov      dword ptr [esp + 0x60], ecx
  0x004649a1:  fild     dword ptr [esp + 0x60] <<< FPU
  0x004649a5:  jmp      0x465044
  0x004649aa:  mov      eax, dword ptr [0x5685f4]
  0x004649af:  cdq      
  0x004649b0:  sub      eax, edx
  0x004649b2:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x004649b8:  sar      eax, 1
  0x004649ba:  add      eax, edx
  0x004649bc:  and      eax, 3
  0x004649bf:  push     eax
  0x004649c0:  lea      eax, [ebx + 0x1c5]
  0x004649c6:  push     0
  0x004649c8:  push     eax
  0x004649c9:  call     0x43d6f0 <<< CALL
  0x004649ce:  mov      ecx, dword ptr [esp + 0x68]
  0x004649d2:  push     edi
  0x004649d3:  push     -7
  0x004649d5:  mov      dword ptr [0x838204], eax
  0x004649da:  push     eax
  0x004649db:  mov      eax, dword ptr [esp + 0x78]
  0x004649df:  push     0x8c
  0x004649e4:  push     0x8c
  0x004649e9:  push     eax
  0x004649ea:  push     eax
  0x004649eb:  push     ecx
  0x004649ec:  call     0x4628d0 <<< CALL
  0x004649f1:  mov      eax, dword ptr [0x5685f4]
  0x004649f6:  cdq      
  0x004649f7:  sub      eax, edx
  0x004649f9:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x004649ff:  sar      eax, 1
  0x00464a01:  add      eax, edx
  0x00464a03:  and      eax, 3
  0x00464a06:  push     eax
  0x00464a07:  lea      eax, [ebx + 0x1c2]
  0x00464a0d:  push     0
  0x00464a0f:  push     eax
  0x00464a10:  call     0x43d6f0 <<< CALL
  0x00464a15:  mov      ecx, dword ptr [esp + 0x94]
  0x00464a1c:  push     edi
  0x00464a1d:  push     4
  0x00464a1f:  mov      dword ptr [0x838204], eax
  0x00464a24:  push     eax
  0x00464a25:  mov      eax, dword ptr [esp + 0xa4]
  0x00464a2c:  push     0x8c
  0x00464a31:  push     0x8c
  0x00464a36:  push     eax
  0x00464a37:  push     eax
  0x00464a38:  push     ecx
  0x00464a39:  call     0x462a30 <<< CALL
  0x00464a3e:  mov      al, byte ptr [0x5a34e0]
  0x00464a43:  add      esp, 0x58
  0x00464a46:  test     al, al
  0x00464a48:  jne      0x464aaf
  0x00464a4a:  mov      eax, dword ptr [0x5685f4]
  0x00464a4f:  mov      ecx, ebx
  0x00464a51:  neg      ecx
  0x00464a53:  cdq      
  0x00464a54:  sbb      ecx, ecx
  0x00464a56:  sub      eax, edx
  0x00464a58:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00464a5e:  and      ecx, 3
  0x00464a61:  sar      eax, 1
  0x00464a63:  add      eax, edx
  0x00464a65:  add      ecx, 2
  0x00464a68:  and      eax, 3
  0x00464a6b:  add      ecx, 0x1c2
  0x00464a71:  push     eax
  0x00464a72:  mov      eax, dword ptr [0x834170]
  0x00464a77:  cdq      
  0x00464a78:  idiv     dword ptr [ecx*4 + 0x53f3e8]
  0x00464a7f:  push     edx
  0x00464a80:  push     ecx
  0x00464a81:  call     0x43d6f0 <<< CALL
  0x00464a86:  push     edi
  0x00464a87:  mov      edx, dword ptr [esp + 0x6c]
  0x00464a8b:  push     4
  0x00464a8d:  mov      dword ptr [0x838204], eax
  0x00464a92:  push     eax
  0x00464a93:  mov      eax, dword ptr [esp + 0x78]
  0x00464a97:  push     0x8c
  0x00464a9c:  push     0x8c
  0x00464aa1:  lea      ecx, [eax + 1]
  0x00464aa4:  push     ecx
  0x00464aa5:  push     eax
  0x00464aa6:  push     edx
  0x00464aa7:  call     0x462a30 <<< CALL
  0x00464aac:  add      esp, 0x2c
  0x00464aaf:  cmp      byte ptr [0x5a34e0], 1
  0x00464ab6:  jne      0x465504
  0x00464abc:  test     ebx, ebx
  0x00464abe:  je       0x465504
  0x00464ac4:  mov      eax, dword ptr [0x5685f4]
  0x00464ac9:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464acf:  cdq      
  0x00464ad0:  sub      eax, edx
  0x00464ad2:  sar      eax, 1
  0x00464ad4:  add      eax, ecx
  0x00464ad6:  and      eax, 3
  0x00464ad9:  push     eax
  0x00464ada:  mov      eax, dword ptr [0x834170]
  0x00464adf:  cdq      
  0x00464ae0:  idiv     dword ptr [0x53fb04]
  0x00464ae6:  push     edx
  0x00464ae7:  push     0x1c7
  0x00464aec:  call     0x43d6f0 <<< CALL
  0x00464af1:  push     edi
  0x00464af2:  push     4
  0x00464af4:  mov      dword ptr [0x838204], eax
  0x00464af9:  push     eax
  0x00464afa:  mov      eax, dword ptr [esp + 0x78]
  0x00464afe:  push     0x8c
  0x00464b03:  push     0x8c
  0x00464b08:  lea      edx, [eax + 1]
  0x00464b0b:  push     edx
  0x00464b0c:  push     eax
  0x00464b0d:  mov      eax, dword ptr [esp + 0x84]
  0x00464b14:  push     eax
  0x00464b15:  call     0x462a30 <<< CALL
  0x00464b1a:  add      esp, 0x2c
  0x00464b1d:  pop      edi
  0x00464b1e:  pop      esi
  0x00464b1f:  pop      ebp
  0x00464b20:  pop      ebx
  0x00464b21:  add      esp, 0x40
  0x00464b24:  ret      
  0x00464b25:  mov      ebx, dword ptr [esp + 0x58]
  0x00464b29:  test     ebx, ebx
  0x00464b2b:  jne      0x464b32
  0x00464b2d:  mov      edi, 0x12
  0x00464b32:  mov      cx, word ptr [ebp*2 + 0x53caf0]
  0x00464b3a:  and      ecx, 0x4000
  0x00464b40:  test     cx, cx
  0x00464b43:  je       0x464bd1
  0x00464b49:  mov      eax, dword ptr [0x5685f4]
  0x00464b4e:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464b54:  cdq      
  0x00464b55:  sub      eax, edx
  0x00464b57:  add      ebx, 0x1da
  0x00464b5d:  sar      eax, 1
  0x00464b5f:  add      ecx, eax
  0x00464b61:  and      ecx, 3
  0x00464b64:  push     ecx
  0x00464b65:  push     0
  0x00464b67:  push     ebx
  0x00464b68:  call     0x43d6f0 <<< CALL
  0x00464b6d:  lea      edx, [edi + edi*4]
  0x00464b70:  add      esp, 0xc
  0x00464b73:  mov      dword ptr [0x838204], eax
  0x00464b78:  lea      ecx, [edi + edx*2]
  0x00464b7b:  push     1
  0x00464b7d:  lea      edx, [ecx*8 + 0x81ca10]
  0x00464b84:  xor      ecx, ecx
  0x00464b86:  mov      cl, byte ptr [ebp + 0x578804]
  0x00464b8c:  push     edx
  0x00464b8d:  mov      edx, dword ptr [esp + 0x18]
  0x00464b91:  mov      dword ptr [esp + 0x60], ecx
  0x00464b95:  fild     dword ptr [esp + 0x60] <<< FPU
  0x00464b99:  push     ecx
  0x00464b9a:  mov      ecx, dword ptr [esp + 0x6c]
  0x00464b9e:  add      edx, -0x30
  0x00464ba1:  fmul     qword ptr [0x4ba818] <<< FPU
  0x00464ba7:  lea      ecx, [ecx + edx*4]
  0x00464baa:  add      edx, ecx
  0x00464bac:  mov      ecx, dword ptr [0x4c1570]
  0x00464bb2:  fstp     dword ptr [esp] <<< FPU
  0x00464bb5:  push     edx
  0x00464bb6:  mov      edx, dword ptr [esp + 0x6c]
  0x00464bba:  add      edx, 0xffffff10
  0x00464bc0:  push     edx
  0x00464bc1:  push     ecx
  0x00464bc2:  mov      ecx, eax
  0x00464bc4:  call     0x474440 <<< CALL
  0x00464bc9:  pop      edi
  0x00464bca:  pop      esi
  0x00464bcb:  pop      ebp
  0x00464bcc:  pop      ebx
  0x00464bcd:  add      esp, 0x40
  0x00464bd0:  ret      
  0x00464bd1:  cmp      byte ptr [0x5a34e0], 2
  0x00464bd8:  je       0x464c25
  0x00464bda:  mov      eax, dword ptr [0x5685f4]
  0x00464bdf:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464be5:  cdq      
  0x00464be6:  sub      eax, edx
  0x00464be8:  lea      edx, [ebx + 0x1dd]
  0x00464bee:  sar      eax, 1
  0x00464bf0:  add      ecx, eax
  0x00464bf2:  and      ecx, 3
  0x00464bf5:  push     ecx
  0x00464bf6:  push     0
  0x00464bf8:  push     edx
  0x00464bf9:  call     0x43d6f0 <<< CALL
  0x00464bfe:  mov      ecx, dword ptr [esp + 0x68]
  0x00464c02:  push     edi
  0x00464c03:  push     4
  0x00464c05:  push     eax
  0x00464c06:  mov      dword ptr [0x838204], eax
  0x00464c0b:  mov      eax, dword ptr [esp + 0x78]
  0x00464c0f:  push     0xf0
  0x00464c14:  push     0xf0
  0x00464c19:  push     0
  0x00464c1b:  push     eax
  0x00464c1c:  push     ecx
  0x00464c1d:  call     0x462a30 <<< CALL
  0x00464c22:  add      esp, 0x2c
  0x00464c25:  mov      eax, dword ptr [0x5685f4]
  0x00464c2a:  cdq      
  0x00464c2b:  sub      eax, edx
  0x00464c2d:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00464c33:  sar      eax, 1
  0x00464c35:  add      eax, edx
  0x00464c37:  and      eax, 3
  0x00464c3a:  push     eax
  0x00464c3b:  lea      eax, [ebx + 0x1da]
  0x00464c41:  push     0
  0x00464c43:  push     eax
  0x00464c44:  call     0x43d6f0 <<< CALL
  0x00464c49:  mov      ecx, dword ptr [esp + 0x68]
  0x00464c4d:  push     edi
  0x00464c4e:  push     4
  0x00464c50:  mov      dword ptr [0x838204], eax
  0x00464c55:  push     eax
  0x00464c56:  mov      eax, dword ptr [esp + 0x78]
  0x00464c5a:  push     0xf0
  0x00464c5f:  push     0xf0
  0x00464c64:  push     eax
  0x00464c65:  push     eax
  0x00464c66:  push     ecx
  0x00464c67:  call     0x462a30 <<< CALL
  0x00464c6c:  mov      al, byte ptr [0x5a34e0]
  0x00464c71:  add      esp, 0x2c
  0x00464c74:  test     al, al
  0x00464c76:  jne      0x464cdd
  0x00464c78:  mov      eax, dword ptr [0x5685f4]
  0x00464c7d:  mov      ecx, ebx
  0x00464c7f:  neg      ecx
  0x00464c81:  cdq      
  0x00464c82:  sbb      ecx, ecx
  0x00464c84:  sub      eax, edx
  0x00464c86:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00464c8c:  and      ecx, 3
  0x00464c8f:  sar      eax, 1
  0x00464c91:  add      eax, edx
  0x00464c93:  add      ecx, 2
  0x00464c96:  and      eax, 3
  0x00464c99:  add      ecx, 0x1da
  0x00464c9f:  push     eax
  0x00464ca0:  mov      eax, dword ptr [0x834170]
  0x00464ca5:  cdq      
  0x00464ca6:  idiv     dword ptr [ecx*4 + 0x53f3e8]
  0x00464cad:  push     edx
  0x00464cae:  push     ecx
  0x00464caf:  call     0x43d6f0 <<< CALL
  0x00464cb4:  push     edi
  0x00464cb5:  mov      edx, dword ptr [esp + 0x6c]
  0x00464cb9:  push     4
  0x00464cbb:  mov      dword ptr [0x838204], eax
  0x00464cc0:  push     eax
  0x00464cc1:  mov      eax, dword ptr [esp + 0x78]
  0x00464cc5:  push     0xf0
  0x00464cca:  push     0xf0
  0x00464ccf:  lea      ecx, [eax + 1]
  0x00464cd2:  push     ecx
  0x00464cd3:  push     eax
  0x00464cd4:  push     edx
  0x00464cd5:  call     0x462a30 <<< CALL
  0x00464cda:  add      esp, 0x2c
  0x00464cdd:  cmp      byte ptr [0x5a34e0], 2
  0x00464ce4:  jne      0x464df0
  0x00464cea:  test     ebx, ebx
  0x00464cec:  jne      0x464d05
  0x00464cee:  mov      eax, dword ptr [0x53fb58]
  0x00464cf3:  mov      ecx, dword ptr [esp + 0x1c]
  0x00464cf7:  push     eax
  0x00464cf8:  push     ecx
  0x00464cf9:  call     0x463170 <<< CALL
  0x00464cfe:  add      esp, 8
  0x00464d01:  mov      ecx, eax
  0x00464d03:  jmp      0x464d14
  0x00464d05:  mov      eax, dword ptr [0x834170]
  0x00464d0a:  cdq      
  0x00464d0b:  idiv     dword ptr [ebx*4 + 0x53fb58]
  0x00464d12:  mov      ecx, edx
  0x00464d14:  cmp      ecx, -1
  0x00464d17:  je       0x464d65
  0x00464d19:  mov      eax, dword ptr [0x5685f4]
  0x00464d1e:  cdq      
  0x00464d1f:  sub      eax, edx
  0x00464d21:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00464d27:  sar      eax, 1
  0x00464d29:  add      eax, edx
  0x00464d2b:  and      eax, 3
  0x00464d2e:  push     eax
  0x00464d2f:  lea      eax, [ebx + 0x1dc]
  0x00464d35:  push     ecx
  0x00464d36:  push     eax
  0x00464d37:  call     0x43d6f0 <<< CALL
  0x00464d3c:  push     edi
  0x00464d3d:  mov      edx, dword ptr [esp + 0x6c]
  0x00464d41:  push     4
  0x00464d43:  mov      dword ptr [0x838204], eax
  0x00464d48:  push     eax
  0x00464d49:  mov      eax, dword ptr [esp + 0x78]
  0x00464d4d:  push     0xf0
  0x00464d52:  push     0xf0
  0x00464d57:  lea      ecx, [eax + 1]
  0x00464d5a:  push     ecx
  0x00464d5b:  push     eax
  0x00464d5c:  push     edx
  0x00464d5d:  call     0x462a30 <<< CALL
  0x00464d62:  add      esp, 0x2c
  0x00464d65:  mov      eax, dword ptr [ebx*4 + 0x53fb60]
  0x00464d6c:  mov      ecx, dword ptr [esp + 0x1c]
  0x00464d70:  push     eax
  0x00464d71:  push     ecx
  0x00464d72:  call     0x463170 <<< CALL
  0x00464d77:  add      esp, 8
  0x00464d7a:  mov      ecx, eax
  0x00464d7c:  test     ebx, ebx
  0x00464d7e:  jne      0x464d9f
  0x00464d80:  mov      edx, dword ptr [0x53fb60]
  0x00464d86:  mov      eax, dword ptr [0x834170]
  0x00464d8b:  push     edx
  0x00464d8c:  mov      ecx, 0x28
  0x00464d91:  cdq      
  0x00464d92:  idiv     ecx
  0x00464d94:  push     edx
  0x00464d95:  call     0x463170 <<< CALL
  0x00464d9a:  add      esp, 8
  0x00464d9d:  mov      ecx, eax
  0x00464d9f:  cmp      ecx, -1
  0x00464da2:  je       0x464df0
  0x00464da4:  mov      eax, dword ptr [0x5685f4]
  0x00464da9:  cdq      
  0x00464daa:  sub      eax, edx
  0x00464dac:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x00464db2:  sar      eax, 1
  0x00464db4:  add      eax, edx
  0x00464db6:  and      eax, 3
  0x00464db9:  push     eax
  0x00464dba:  lea      eax, [ebx + 0x1de]
  0x00464dc0:  push     ecx
  0x00464dc1:  push     eax
  0x00464dc2:  call     0x43d6f0 <<< CALL
  0x00464dc7:  push     edi
  0x00464dc8:  mov      edx, dword ptr [esp + 0x6c]
  0x00464dcc:  push     4
  0x00464dce:  mov      dword ptr [0x838204], eax
  0x00464dd3:  push     eax
  0x00464dd4:  mov      eax, dword ptr [esp + 0x78]
  0x00464dd8:  push     0xf0
  0x00464ddd:  push     0xf0
  0x00464de2:  lea      ecx, [eax + 1]
  0x00464de5:  push     ecx
  0x00464de6:  push     eax
  0x00464de7:  push     edx
  0x00464de8:  call     0x462a30 <<< CALL
  0x00464ded:  add      esp, 0x2c
  0x00464df0:  cmp      byte ptr [0x5a34e0], 3
  0x00464df7:  jne      0x464e5b
  0x00464df9:  cmp      ebx, 1
  0x00464dfc:  jne      0x465504
  0x00464e02:  mov      eax, dword ptr [0x5685f4]
  0x00464e07:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464e0d:  cdq      
  0x00464e0e:  sub      eax, edx
  0x00464e10:  sar      eax, 1
  0x00464e12:  add      eax, ecx
  0x00464e14:  and      eax, 3
  0x00464e17:  push     eax
  0x00464e18:  mov      eax, dword ptr [0x834170]
  0x00464e1d:  cdq      
  0x00464e1e:  idiv     dword ptr [0x53fb58]
  0x00464e24:  push     edx
  0x00464e25:  push     0x1dc
  0x00464e2a:  call     0x43d6f0 <<< CALL
  0x00464e2f:  push     edi
  0x00464e30:  push     4
  0x00464e32:  mov      dword ptr [0x838204], eax
  0x00464e37:  push     eax
  0x00464e38:  mov      eax, dword ptr [esp + 0x78]
  0x00464e3c:  push     0xf0
  0x00464e41:  push     0xf0
  0x00464e46:  lea      edx, [eax + 1]
  0x00464e49:  push     edx
  0x00464e4a:  push     eax
  0x00464e4b:  mov      eax, dword ptr [esp + 0x84]
  0x00464e52:  push     eax
  0x00464e53:  call     0x462a30 <<< CALL
  0x00464e58:  add      esp, 0x2c
  0x00464e5b:  cmp      byte ptr [0x5a34e0], 1
  0x00464e62:  jne      0x465504
  0x00464e68:  mov      eax, dword ptr [0x5685f4]
  0x00464e6d:  test     ebx, ebx
  0x00464e6f:  cdq      
  0x00464e70:  jne      0x464ecd
  0x00464e72:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464e78:  sub      eax, edx
  0x00464e7a:  sar      eax, 1
  0x00464e7c:  add      eax, ecx
  0x00464e7e:  and      eax, 3
  0x00464e81:  push     eax
  0x00464e82:  mov      eax, dword ptr [0x834170]
  0x00464e87:  cdq      
  0x00464e88:  idiv     dword ptr [0x53fb58]
  0x00464e8e:  push     edx
  0x00464e8f:  push     0x1dc
  0x00464e94:  call     0x43d6f0 <<< CALL
  0x00464e99:  push     edi
  0x00464e9a:  push     4
  0x00464e9c:  mov      dword ptr [0x838204], eax
  0x00464ea1:  push     eax
  0x00464ea2:  mov      eax, dword ptr [esp + 0x78]
  0x00464ea6:  push     0xf0
  0x00464eab:  push     0xf0
  0x00464eb0:  lea      edx, [eax + 1]
  0x00464eb3:  push     edx
  0x00464eb4:  push     eax
  0x00464eb5:  mov      eax, dword ptr [esp + 0x84]
  0x00464ebc:  push     eax
  0x00464ebd:  call     0x462a30 <<< CALL
  0x00464ec2:  add      esp, 0x2c
  0x00464ec5:  pop      edi
  0x00464ec6:  pop      esi
  0x00464ec7:  pop      ebp
  0x00464ec8:  pop      ebx
  0x00464ec9:  add      esp, 0x40
  0x00464ecc:  ret      
  0x00464ecd:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464ed3:  sub      eax, edx
  0x00464ed5:  sar      eax, 1
  0x00464ed7:  add      eax, ecx
  0x00464ed9:  and      eax, 3
  0x00464edc:  push     eax
  0x00464edd:  mov      eax, dword ptr [0x834170]
  0x00464ee2:  cdq      
  0x00464ee3:  idiv     dword ptr [0x53fb60]
  0x00464ee9:  push     edx
  0x00464eea:  push     0x1de
  0x00464eef:  call     0x43d6f0 <<< CALL
  0x00464ef4:  mov      edx, dword ptr [esp + 0x68]
  0x00464ef8:  push     edi
  0x00464ef9:  push     4
  0x00464efb:  mov      dword ptr [0x838204], eax
  0x00464f00:  push     eax
  0x00464f01:  mov      eax, dword ptr [esp + 0x78]
  0x00464f05:  push     0xf0
  0x00464f0a:  push     0xf0
  0x00464f0f:  push     eax
  0x00464f10:  push     eax
  0x00464f11:  push     edx
  0x00464f12:  call     0x4628d0 <<< CALL
  0x00464f17:  mov      eax, dword ptr [0x5685f4]
  0x00464f1c:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464f22:  cdq      
  0x00464f23:  sub      eax, edx
  0x00464f25:  sar      eax, 1
  0x00464f27:  add      eax, ecx
  0x00464f29:  and      eax, 3
  0x00464f2c:  push     eax
  0x00464f2d:  mov      eax, dword ptr [0x834170]
  0x00464f32:  cdq      
  0x00464f33:  idiv     dword ptr [0x53fb64]
  0x00464f39:  push     edx
  0x00464f3a:  push     0x1df
  0x00464f3f:  call     0x43d6f0 <<< CALL
  0x00464f44:  push     edi
  0x00464f45:  push     4
  0x00464f47:  mov      dword ptr [0x838204], eax
  0x00464f4c:  push     eax
  0x00464f4d:  mov      eax, dword ptr [esp + 0xa4]
  0x00464f54:  push     0xf0
  0x00464f59:  push     0xf0
  0x00464f5e:  lea      edx, [eax + 1]
  0x00464f61:  push     edx
  0x00464f62:  push     eax
  0x00464f63:  mov      eax, dword ptr [esp + 0xb0]
  0x00464f6a:  push     eax
  0x00464f6b:  call     0x462a30 <<< CALL
  0x00464f70:  mov      eax, dword ptr [0x5685f4]
  0x00464f75:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00464f7b:  cdq      
  0x00464f7c:  sub      eax, edx
  0x00464f7e:  add      esp, 0x58
  0x00464f81:  sar      eax, 1
  0x00464f83:  add      eax, ecx
  0x00464f85:  and      eax, 3
  0x00464f88:  push     eax
  0x00464f89:  mov      eax, dword ptr [0x834170]
  0x00464f8e:  cdq      
  0x00464f8f:  idiv     dword ptr [0x53fb4c]
  0x00464f95:  push     edx
  0x00464f96:  push     0x1d9
  0x00464f9b:  call     0x43d6f0 <<< CALL
  0x00464fa0:  push     edi
  0x00464fa1:  push     4
  0x00464fa3:  mov      dword ptr [0x838204], eax
  0x00464fa8:  push     eax
  0x00464fa9:  mov      eax, dword ptr [esp + 0x78]
  0x00464fad:  push     0xf0
  0x00464fb2:  push     0xf0
  0x00464fb7:  lea      edx, [eax + 2]
  0x00464fba:  push     edx
  0x00464fbb:  push     eax
  0x00464fbc:  mov      eax, dword ptr [esp + 0x84]
  0x00464fc3:  push     eax
  0x00464fc4:  call     0x462a30 <<< CALL
  0x00464fc9:  add      esp, 0x2c
  0x00464fcc:  pop      edi
  0x00464fcd:  pop      esi
  0x00464fce:  pop      ebp
  0x00464fcf:  pop      ebx
  0x00464fd0:  add      esp, 0x40
  0x00464fd3:  ret      
  0x00464fd4:  mov      ebx, dword ptr [esp + 0x58]
  0x00464fd8:  test     ebx, ebx
  0x00464fda:  jne      0x464fe1
  0x00464fdc:  mov      edi, 0x1b
  0x00464fe1:  mov      cx, word ptr [ebp*2 + 0x53caf0]
  0x00464fe9:  and      ecx, 0x4000
  0x00464fef:  test     cx, cx
  0x00464ff2:  je       0x465080
  0x00464ff8:  mov      eax, dword ptr [0x5685f4]
  0x00464ffd:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00465003:  cdq      
  0x00465004:  sub      eax, edx
  0x00465006:  add      ebx, 0x1ce
  0x0046500c:  sar      eax, 1
  0x0046500e:  add      ecx, eax
  0x00465010:  and      ecx, 3
  0x00465013:  push     ecx
  0x00465014:  push     0
  0x00465016:  push     ebx
  0x00465017:  call     0x43d6f0 <<< CALL
  0x0046501c:  lea      edx, [edi + edi*4]
  0x0046501f:  add      esp, 0xc
  0x00465022:  mov      dword ptr [0x838204], eax
  0x00465027:  lea      ecx, [edi + edx*2]
  0x0046502a:  push     1
  0x0046502c:  lea      edx, [ecx*8 + 0x81ca10]
  0x00465033:  xor      ecx, ecx
  0x00465035:  mov      cl, byte ptr [ebp + 0x578804]
  0x0046503b:  push     edx
  0x0046503c:  mov      dword ptr [esp + 0x60], ecx
  0x00465040:  fild     dword ptr [esp + 0x60] <<< FPU
  0x00465044:  fmul     qword ptr [0x4ba818] <<< FPU
  0x0046504a:  mov      edx, dword ptr [esp + 0x18]
  0x0046504e:  push     ecx
  0x0046504f:  add      edx, -0x1c
  0x00465052:  fstp     dword ptr [esp] <<< FPU
  0x00465055:  mov      ecx, dword ptr [esp + 0x6c]
  0x00465059:  lea      ecx, [ecx + edx*4]
  0x0046505c:  add      edx, ecx
  0x0046505e:  mov      ecx, dword ptr [0x4c1570]
  0x00465064:  push     edx
  0x00465065:  mov      edx, dword ptr [esp + 0x6c]
  0x00465069:  add      edx, 0xffffff74
  0x0046506f:  push     edx
  0x00465070:  push     ecx
  0x00465071:  mov      ecx, eax
  0x00465073:  call     0x474440 <<< CALL
  0x00465078:  pop      edi
  0x00465079:  pop      esi
  0x0046507a:  pop      ebp
  0x0046507b:  pop      ebx
  0x0046507c:  add      esp, 0x40
  0x0046507f:  ret      
  0x00465080:  mov      al, byte ptr [0x5a34e0]
  0x00465085:  test     al, al
  0x00465087:  je       0x4650e2
  0x00465089:  mov      eax, dword ptr [0x5685f4]
  0x0046508e:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00465094:  cdq      
  0x00465095:  sub      eax, edx
  0x00465097:  sar      eax, 1
  0x00465099:  add      ecx, eax
  0x0046509b:  mov      eax, dword ptr [0x834170]
  0x004650a0:  cdq      
  0x004650a1:  idiv     dword ptr [ebx*4 + 0x53fb2c]
  0x004650a8:  and      ecx, 3
  0x004650ab:  push     ecx
  0x004650ac:  push     edx
  0x004650ad:  lea      edx, [ebx + 0x1d1]
  0x004650b3:  push     edx
  0x004650b4:  call     0x43d6f0 <<< CALL
  0x004650b9:  push     edi
  0x004650ba:  push     4
  0x004650bc:  mov      dword ptr [0x838204], eax
  0x004650c1:  push     eax
  0x004650c2:  mov      eax, dword ptr [esp + 0x78]
  0x004650c6:  push     0x8c
  0x004650cb:  push     0x8c
  0x004650d0:  push     eax
  0x004650d1:  push     eax
  0x004650d2:  mov      eax, dword ptr [esp + 0x84]
  0x004650d9:  push     eax
  0x004650da:  call     0x4628d0 <<< CALL
  0x004650df:  add      esp, 0x2c
  0x004650e2:  mov      eax, dword ptr [0x5685f4]
  0x004650e7:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x004650ed:  cdq      
  0x004650ee:  sub      eax, edx
  0x004650f0:  lea      edx, [ebx + 0x1ce]
  0x004650f6:  sar      eax, 1
  0x004650f8:  add      eax, ecx
  0x004650fa:  and      eax, 3
  0x004650fd:  push     eax
  0x004650fe:  push     0
  0x00465100:  push     edx
  0x00465101:  call     0x43d6f0 <<< CALL
  0x00465106:  push     edi
  0x00465107:  push     4
  0x00465109:  mov      dword ptr [0x838204], eax
  0x0046510e:  push     eax
  0x0046510f:  mov      eax, dword ptr [esp + 0x78]
  0x00465113:  push     0x8c
  0x00465118:  push     0x8c
  0x0046511d:  push     eax
  0x0046511e:  push     eax
  0x0046511f:  mov      eax, dword ptr [esp + 0x84]
  0x00465126:  push     eax
  0x00465127:  call     0x462a30 <<< CALL
  0x0046512c:  mov      al, byte ptr [0x5a34e0]
  0x00465131:  add      esp, 0x2c
  0x00465134:  cmp      al, 1
  0x00465136:  jne      0x46523e
  0x0046513c:  test     ebx, ebx
  0x0046513e:  je       0x465504
  0x00465144:  mov      eax, dword ptr [0x5685f4]
  0x00465149:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x0046514f:  cdq      
  0x00465150:  sub      eax, edx
  0x00465152:  sar      eax, 1
  0x00465154:  add      eax, ecx
  0x00465156:  and      eax, 3
  0x00465159:  push     eax
  0x0046515a:  mov      eax, dword ptr [0x834170]
  0x0046515f:  cdq      
  0x00465160:  idiv     dword ptr [0x53fb28]
  0x00465166:  push     edx
  0x00465167:  push     0x1d0
  0x0046516c:  call     0x43d6f0 <<< CALL
  0x00465171:  push     edi
  0x00465172:  push     4
  0x00465174:  mov      dword ptr [0x838204], eax
  0x00465179:  push     eax
  0x0046517a:  mov      eax, dword ptr [esp + 0x78]
  0x0046517e:  push     0x8c
  0x00465183:  push     0x8c
  0x00465188:  lea      edx, [eax + 1]
  0x0046518b:  push     edx
  0x0046518c:  push     eax
  0x0046518d:  mov      eax, dword ptr [esp + 0x84]
  0x00465194:  push     eax
  0x00465195:  call     0x462a30 <<< CALL
  0x0046519a:  mov      eax, dword ptr [esp + 0x98]
  0x004651a1:  mov      ecx, dword ptr [0x53fb34]
  0x004651a7:  add      esp, 0x2c
  0x004651aa:  lea      edx, [eax + eax*2]
  0x004651ad:  mov      eax, dword ptr [0x834170]
  0x004651b2:  lea      ebp, [eax + edx*4]
  0x004651b5:  mov      edx, dword ptr [esp + 0x14]
  0x004651b9:  lea      eax, [edx*8]
  0x004651c0:  sub      eax, edx
  0x004651c2:  mov      edx, dword ptr [esp + 0x6c]
  0x004651c6:  add      ebp, edx
  0x004651c8:  add      eax, ebp
  0x004651ca:  lea      ebp, [ecx + ecx*4]
  0x004651cd:  cdq      
  0x004651ce:  shl      ebp, 1
  0x004651d0:  idiv     ebp
  0x004651d2:  lea      eax, [ecx*4]
  0x004651d9:  cmp      edx, eax
  0x004651db:  jl       0x4651e5
  0x004651dd:  lea      eax, [ecx + ecx*4]
  0x004651e0:  sub      eax, edx
  0x004651e2:  dec      eax
  0x004651e3:  mov      edx, eax
  0x004651e5:  dec      ecx
  0x004651e6:  push     ecx
  0x004651e7:  push     0
  0x004651e9:  push     edx
  0x004651ea:  call     0x467130 <<< CALL
  0x004651ef:  mov      ecx, eax
  0x004651f1:  mov      eax, dword ptr [0x5685f4]
  0x004651f6:  cdq      
  0x004651f7:  sub      eax, edx
  0x004651f9:  mov      dl, byte ptr [esi + 0x58bcbe]
  0x004651ff:  sar      eax, 1
  0x00465201:  add      eax, edx
  0x00465203:  and      eax, 3
  0x00465206:  push     eax
  0x00465207:  push     ecx
  0x00465208:  push     0x1d3
  0x0046520d:  call     0x43d6f0 <<< CALL
  0x00465212:  push     edi
  0x00465213:  mov      edx, dword ptr [esp + 0x78]
  0x00465217:  push     4
  0x00465219:  mov      dword ptr [0x838204], eax
  0x0046521e:  push     eax
  0x0046521f:  mov      eax, dword ptr [esp + 0x84]
  0x00465226:  push     0x8c
  0x0046522b:  push     0x8c
  0x00465230:  lea      ecx, [eax + 2]
  0x00465233:  push     ecx
  0x00465234:  push     eax
  0x00465235:  push     edx
  0x00465236:  call     0x462a30 <<< CALL
  0x0046523b:  add      esp, 0x38
  0x0046523e:  mov      al, byte ptr [0x5a34e0]
  0x00465243:  test     al, al
  0x00465245:  jne      0x465504
  0x0046524b:  mov      eax, dword ptr [0x5685f4]
  0x00465250:  mov      cl, byte ptr [esi + 0x58bcbe]
  0x00465256:  cdq      
  0x00465257:  sub      eax, edx
  0x00465259:  add      ebx, 0x1d1
  0x0046525f:  sar      eax, 1
  0x00465261:  add      eax, ecx
  0x00465263:  and      eax, 3
  0x00465266:  push     eax
  0x00465267:  mov      eax, dword ptr [0x834170]
  0x0046526c:  cdq      
  0x0046526d:  idiv     dword ptr [ebx*4 + 0x53f3e8]
  0x00465274:  push     edx
  0x00465275:  push     ebx
  0x00465276:  call     0x43d6f0 <<< CALL
  0x0046527b:  mov      edx, dword ptr [esp + 0x68]
  0x0046527f:  push     edi
  0x00465280:  push     4
  0x00465282:  mov      dword ptr [0x838204], eax
  0x00465287:  push     eax
  0x00465288:  mov      eax, dword ptr [esp + 0x78]
  0x0046528c:  push     0x8c
  0x00465291:  push     0x8c
  0x00465296:  push     eax
  0x00465297:  push     eax
  0x00465298:  push     edx
  0x00465299:  call     0x4628d0 <<< CALL
  0x0046529e:  add      esp, 0x2c
  0x004652a1:  pop      edi
  0x004652a2:  pop      esi
  0x004652a3:  pop      ebp
  0x004652a4:  pop      ebx
  0x004652a5:  add      esp, 0x40
  0x004652a8:  ret      
  0x004652a9:  mov      eax, dword ptr [esp + 0x6c]
  0x004652ad:  mov      ebp, dword ptr [esp + 0x14]
  0x004652b1:  push     eax
  0x004652b2:  push     ebp
  0x004652b3:  call     0x40df80 <<< CALL
  0x004652b8:  shl      eax, 4
  0x004652bb:  add      esp, 8
  0x004652be:  mov      dword ptr [esp + 0x58], eax
  0x004652c2:  mov      ecx, dword ptr [eax + 0x58bcc0]
  0x004652c8:  test     ecx, ecx
  0x004652ca:  jne      0x465504
  0x004652d0:  mov      ecx, eax
  0x004652d2:  push     0xa
  0x004652d4:  push     0x834164
  0x004652d9:  mov      byte ptr [0x51a068], 0
  0x004652e0:  mov      edx, dword ptr [ecx + 0x58bcc4]
  0x004652e6:  push     edx
  0x004652e7:  call     0x4ad425 <<< CALL
  0x004652ec:  mov      edi, eax
  0x004652ee:  or       ecx, 0xffffffff
  0x004652f1:  xor      eax, eax
  0x004652f3:  add      esp, 0xc
  0x004652f6:  repne scasb al, byte ptr es:[edi]
  0x004652f8:  not      ecx
  0x004652fa:  sub      edi, ecx
  0x004652fc:  mov      esi, edi
  0x004652fe:  mov      edx, ecx
  0x00465300:  mov      edi, 0x51a068
  0x00465305:  or       ecx, 0xffffffff
  0x00465308:  repne scasb al, byte ptr es:[edi]
  0x0046530a:  mov      ecx, edx
  0x0046530c:  dec      edi
  0x0046530d:  shr      ecx, 2
  0x00465310:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465312:  mov      al, byte ptr [0x59e7b8]
  0x00465317:  mov      ecx, edx
  0x00465319:  and      ecx, 3
  0x0046531c:  test     al, 0x20
  0x0046531e:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465320:  je       0x465341
  0x00465322:  mov      eax, dword ptr [esp + 0x60]
  0x00465326:  mov      ecx, dword ptr [esp + 0x5c]
  0x0046532a:  add      eax, 0xe
  0x0046532d:  push     0x800023e8
  0x00465332:  push     eax
  0x00465333:  push     ecx
  0x00465334:  push     0x51a068
  0x00465339:  call     0x404bc0 <<< CALL
  0x0046533e:  add      esp, 0x10
  0x00465341:  mov      edx, dword ptr [esp + 0x58]
  0x00465345:  mov      eax, dword ptr [edx + 0x58bcc4]
  0x0046534b:  push     eax
  0x0046534c:  call     0x40e5b0 <<< CALL
  0x00465351:  add      esp, 4
  0x00465354:  cmp      eax, 4
  0x00465357:  ja       0x465504
  0x0046535d:  jmp      dword ptr [eax*4 + 0x46554c]
  0x00465364:  mov      eax, dword ptr [0x5685f4]
  0x00465369:  cdq      
  0x0046536a:  sub      eax, edx
  0x0046536c:  sar      eax, 1
  0x0046536e:  add      eax, ebp
  0x00465370:  and      eax, 3
  0x00465373:  push     eax
  0x00465374:  push     0
  0x00465376:  push     0x1c8
  0x0046537b:  call     0x43d6f0 <<< CALL
  0x00465380:  mov      dword ptr [0x838204], eax
  0x00465385:  push     0xf
  0x00465387:  jmp      0x4654e4
  0x0046538c:  mov      eax, dword ptr [0x5685f4]
  0x00465391:  cdq      
  0x00465392:  sub      eax, edx
  0x00465394:  sar      eax, 1
  0x00465396:  add      eax, ebp
  0x00465398:  and      eax, 3
  0x0046539b:  push     eax
  0x0046539c:  push     0
  0x0046539e:  push     0x1c9
  0x004653a3:  call     0x43d6f0 <<< CALL
  0x004653a8:  mov      dword ptr [0x838204], eax
  0x004653ad:  push     0x13
  0x004653af:  mov      edx, dword ptr [esp + 0x6c]
  0x004653b3:  push     4
  0x004653b5:  push     eax
  0x004653b6:  mov      eax, dword ptr [esp + 0x78]
  0x004653ba:  push     0x8c
  0x004653bf:  push     0x8c
  0x004653c4:  push     eax
  0x004653c5:  push     eax
  0x004653c6:  push     edx
  0x004653c7:  call     0x462a30 <<< CALL
  0x004653cc:  add      esp, 0x2c
  0x004653cf:  pop      edi
  0x004653d0:  pop      esi
  0x004653d1:  pop      ebp
  0x004653d2:  pop      ebx
  0x004653d3:  add      esp, 0x40
  0x004653d6:  ret      
  0x004653d7:  mov      eax, dword ptr [0x5685f4]
  0x004653dc:  cdq      
  0x004653dd:  sub      eax, edx
  0x004653df:  sar      eax, 1
  0x004653e1:  add      eax, ebp
  0x004653e3:  and      eax, 3
  0x004653e6:  push     eax
  0x004653e7:  push     0
  0x004653e9:  push     0x1ca
  0x004653ee:  call     0x43d6f0 <<< CALL
  0x004653f3:  push     0x60
  0x004653f5:  push     4
  0x004653f7:  mov      dword ptr [0x838204], eax
  0x004653fc:  push     eax
  0x004653fd:  mov      eax, dword ptr [esp + 0x78]
  0x00465401:  push     0x8c
  0x00465406:  push     0x8c
  0x0046540b:  push     eax
  0x0046540c:  push     eax
  0x0046540d:  mov      eax, dword ptr [esp + 0x84]
  0x00465414:  push     eax
  0x00465415:  call     0x462a30 <<< CALL
  0x0046541a:  add      esp, 0x2c
  0x0046541d:  pop      edi
  0x0046541e:  pop      esi
  0x0046541f:  pop      ebp
  0x00465420:  pop      ebx
  0x00465421:  add      esp, 0x40
  0x00465424:  ret      
  0x00465425:  mov      eax, dword ptr [esp + 0x60]
  0x00465429:  mov      edx, dword ptr [esp + 0x5c]
  0x0046542d:  push     -1
  0x0046542f:  push     8
  0x00465431:  push     0x53ba48
  0x00465436:  push     0xd
  0x00465438:  push     0x13
  0x0046543a:  push     eax
  0x0046543b:  push     eax
  0x0046543c:  mov      eax, dword ptr [0x4c2840]
  0x00465441:  sub      edx, eax
  0x00465443:  push     edx
  0x00465444:  call     0x4628d0 <<< CALL
  0x00465449:  mov      eax, dword ptr [esp + 0x80]
  0x00465450:  mov      ecx, dword ptr [0x4c2840]
  0x00465456:  push     -1
  0x00465458:  push     8
  0x0046545a:  push     0x53ba48
  0x0046545f:  push     0xd
  0x00465461:  push     0x13
  0x00465463:  push     eax
  0x00465464:  push     eax
  0x00465465:  mov      eax, dword ptr [esp + 0x98]
  0x0046546c:  add      ecx, eax
  0x0046546e:  push     ecx
  0x0046546f:  call     0x4628d0 <<< CALL
  0x00465474:  mov      eax, dword ptr [esp + 0xa0]
  0x0046547b:  add      esp, 0x40
  0x0046547e:  mov      edx, dword ptr [esp + 0x5c]
  0x00465482:  push     -1
  0x00465484:  push     8
  0x00465486:  push     0x53ba48
  0x0046548b:  push     0xd
  0x0046548d:  push     0x13
  0x0046548f:  push     eax
  0x00465490:  sub      eax, ebx
  0x00465492:  push     eax
  0x00465493:  push     edx
  0x00465494:  call     0x4628d0 <<< CALL
  0x00465499:  mov      eax, dword ptr [esp + 0x80]
  0x004654a0:  push     -1
  0x004654a2:  push     8
  0x004654a4:  push     0x53ba48
  0x004654a9:  push     0xd
  0x004654ab:  push     0x13
  0x004654ad:  push     eax
  0x004654ae:  add      ebx, eax
  0x004654b0:  mov      eax, dword ptr [esp + 0x94]
  0x004654b7:  push     ebx
  0x004654b8:  push     eax
  0x004654b9:  call     0x4628d0 <<< CALL
  0x004654be:  add      esp, 0x40
  0x004654c1:  mov      eax, dword ptr [0x5685f4]
  0x004654c6:  cdq      
  0x004654c7:  sub      eax, edx
  0x004654c9:  sar      eax, 1
  0x004654cb:  add      eax, ebp
  0x004654cd:  and      eax, 3
  0x004654d0:  push     eax
  0x004654d1:  push     0
  0x004654d3:  push     0x1ca
  0x004654d8:  call     0x43d6f0 <<< CALL
  0x004654dd:  mov      dword ptr [0x838204], eax
  0x004654e2:  push     0x60
  0x004654e4:  mov      ecx, dword ptr [esp + 0x6c]
  0x004654e8:  push     4
  0x004654ea:  push     eax
  0x004654eb:  mov      eax, dword ptr [esp + 0x78]
  0x004654ef:  push     0x8c
  0x004654f4:  push     0x8c
  0x004654f9:  push     eax
  0x004654fa:  push     eax
  0x004654fb:  push     ecx
  0x004654fc:  call     0x462a30 <<< CALL
  0x00465501:  add      esp, 0x2c
  0x00465504:  pop      edi
  0x00465505:  pop      esi
  0x00465506:  pop      ebp
  0x00465507:  pop      ebx
  0x00465508:  add      esp, 0x40
  0x0046550b:  ret      
  0x0046550c:  push     ds
  0x0046550d:  xor      al, 0x46
  0x0046550f:  add      byte ptr [eax + 0x33], cl
  0x00465512:  inc      esi
  0x00465513:  add      byte ptr [ecx + 0x76004652], ch
  0x00465519:  inc      ebx
  0x0046551a:  inc      esi
  0x0046551b:  add      bh, ah
  0x0046551d:  aaa      
  0x0046551e:  inc      esi
  0x0046551f:  add      byte ptr [ecx], dh
  0x00465521:  inc      eax
  0x00465522:  inc      esi
  0x00465523:  add      byte ptr [eax + 0x5b00463e], ah
  0x00465529:  inc      ebp
  0x0046552a:  inc      esi
  0x0046552b:  add      byte ptr [edx], bh
  0x0046552d:  dec      ecx
  0x0046552e:  inc      esi
  0x0046552f:  add      ah, dl
  0x00465531:  dec      edi
  0x00465532:  inc      esi
  0x00465533:  add      byte ptr [edx + edi + 0x4b250046], bh
  0x0046553a:  inc      esi
  0x0046553b:  add      byte ptr [eax + 0x4004634], ah
  0x00465541:  push     ebp
  0x00465542:  inc      esi
  0x00465543:  add      byte ptr [esi + esi], ah
  0x00465546:  inc      esi
  0x00465547:  add      dh, dh
  0x00465549:  inc      esi
  0x0046554b:  add      byte ptr [ebx + edx*2 + 0x46], ah
  0x0046554f:  add      byte ptr [ebx + edx*2 + 0x53d70046], cl
  0x00465556:  inc      esi
  0x00465557:  add      cl, al
  0x00465559:  push     esp
  0x0046555a:  inc      esi
  0x0046555b:  add      byte ptr [0xe8004654], ah
  0x00465561:  retf     
  0x00465562:  out      1, eax
  0x00465564:  add      byte ptr [ebx], dh
  0x00465566:  shl      byte ptr [ebx + 0x822d68], 0xa3
  0x0046556d:  pushfd   
  0x0046556e:  sub      eax, dword ptr [edx + 0x2b98a300]
  0x00465574:  add      byte ptr [eax], 0xc3
  0x00465577:  call     0x405095 <<< CALL
  0x0046557c:  nop      
  0x0046557d:  nop      
  0x0046557e:  nop      
  0x0046557f:  nop      
  0x00465580:  push     esi
  0x00465581:  push     edi
  0x00465582:  push     2
  0x00465584:  call     0x404970 <<< CALL
  0x00465589:  mov      esi, dword ptr [esp + 0x10]
  0x0046558d:  mov      ecx, eax
  0x0046558f:  push     2
  0x00465591:  lea      eax, [esi + esi]
  0x00465594:  cdq      
  0x00465595:  idiv     ecx
  0x00465597:  mov      dword ptr [0x822d58], eax
  0x0046559c:  call     0x404970 <<< CALL
  0x004655a1:  mov      ecx, dword ptr [esp + 0x18]
  0x004655a5:  mov      edi, eax
  0x004655a7:  add      esp, 8
  0x004655aa:  mov      dword ptr [0x822d60], esi
  0x004655b0:  lea      eax, [ecx + ecx]
  0x004655b3:  mov      esi, dword ptr [0x4ba1f0]
  0x004655b9:  cdq      
  0x004655ba:  idiv     edi
  0x004655bc:  push     0x11
  0x004655be:  mov      dword ptr [0x822d64], ecx
  0x004655c4:  mov      dword ptr [0x822d5c], eax
  0x004655c9:  call     esi <<< CALL
  0x004655cb:  xor      edx, edx
  0x004655cd:  push     0x10
  0x004655cf:  mov      dl, ah
  0x004655d1:  and      edx, 0xff
  0x004655d7:  mov      dword ptr [0x822d70], edx
  0x004655dd:  call     esi <<< CALL
  0x004655df:  xor      ecx, ecx
  0x004655e1:  pop      edi
  0x004655e2:  mov      cl, ah
  0x004655e4:  mov      eax, 1
  0x004655e9:  and      ecx, 0xff
  0x004655ef:  mov      dword ptr [0x822d68], eax
  0x004655f4:  mov      dword ptr [0x822d6c], ecx
  0x004655fa:  mov      dword ptr [0x822d74], eax
  0x004655ff:  mov      dword ptr [0x822d78], 0
  0x00465609:  pop      esi
  0x0046560a:  ret      8
  0x0046560d:  nop      
  0x0046560e:  nop      
  0x0046560f:  nop      
  0x00465610:  mov      eax, dword ptr [esp + 4]
  0x00465614:  mov      ecx, dword ptr [esp + 8]
  0x00465618:  mov      dword ptr [0x822d8c], eax
  0x0046561d:  mov      eax, dword ptr [0x5aa774]
  0x00465622:  test     eax, eax
  0x00465624:  mov      dword ptr [0x822d90], ecx
  0x0046562a:  je       0x46563a
  0x0046562c:  call     dword ptr [0x4ba21c] <<< CALL
  0x00465632:  cmp      eax, dword ptr [0x5aa774]
  0x00465638:  jbe      0x465641
  0x0046563a:  mov      byte ptr [0x83ab9c], 0
  0x00465641:  ret      8
  0x00465644:  call     dword ptr [0x4ba1a8] <<< CALL
  0x0046564a:  nop      
  0x0046564b:  nop      
  0x0046564c:  nop      
  0x0046564d:  nop      
  0x0046564e:  nop      
  0x0046564f:  nop      
  0x00465650:  mov      eax, dword ptr [0x5aa774]
  0x00465655:  mov      dword ptr [0x822d8c], 0xffffffff
  0x0046565f:  test     eax, eax
  0x00465661:  je       0x465671
  0x00465663:  call     dword ptr [0x4ba21c] <<< CALL
  0x00465669:  cmp      eax, dword ptr [0x5aa774]
  0x0046566f:  jbe      0x465678
  0x00465671:  mov      byte ptr [0x83ab9c], 0
  0x00465678:  ret      8
  0x0046567b:  call     0x405099 <<< CALL
  0x00465680:  push     esi
  0x00465681:  push     edi
  0x00465682:  push     2
  0x00465684:  call     0x404970 <<< CALL
  0x00465689:  mov      esi, dword ptr [esp + 0x10]
  0x0046568d:  mov      ecx, eax
  0x0046568f:  push     2
  0x00465691:  lea      eax, [esi + esi]
  0x00465694:  cdq      
  0x00465695:  idiv     ecx
  0x00465697:  mov      dword ptr [0x822d58], eax
  0x0046569c:  call     0x404970 <<< CALL
  0x004656a1:  mov      ecx, dword ptr [esp + 0x18]
  0x004656a5:  mov      edi, eax
  0x004656a7:  add      esp, 8
  0x004656aa:  mov      dword ptr [0x822d60], esi
  0x004656b0:  lea      eax, [ecx + ecx]
  0x004656b3:  mov      esi, dword ptr [0x4ba1f0]
  0x004656b9:  cdq      
  0x004656ba:  idiv     edi
  0x004656bc:  push     0x11
  0x004656be:  mov      dword ptr [0x822d64], ecx
  0x004656c4:  mov      dword ptr [0x822d68], 2
  0x004656ce:  mov      dword ptr [0x822d5c], eax
  0x004656d3:  call     esi <<< CALL
  0x004656d5:  xor      edx, edx
  0x004656d7:  push     0x10
  0x004656d9:  mov      dl, ah
  0x004656db:  and      edx, 0xff
  0x004656e1:  mov      dword ptr [0x822d70], edx
  0x004656e7:  call     esi <<< CALL
  0x004656e9:  xor      ecx, ecx
  0x004656eb:  pop      edi
  0x004656ec:  mov      cl, ah
  0x004656ee:  mov      dword ptr [0x822d74], 1
  0x004656f8:  and      ecx, 0xff
  0x004656fe:  mov      dword ptr [0x822d78], 0
  0x00465708:  mov      dword ptr [0x822d6c], ecx
  0x0046570e:  pop      esi
  0x0046570f:  ret      8
  0x00465712:  nop      
  0x00465713:  nop      
  0x00465714:  nop      
  0x00465715:  nop      
  0x00465716:  nop      
  0x00465717:  nop      
  0x00465718:  nop      
  0x00465719:  nop      
  0x0046571a:  nop      
  0x0046571b:  nop      
  0x0046571c:  nop      
  0x0046571d:  nop      
  0x0046571e:  nop      
  0x0046571f:  nop      
  0x00465720:  mov      eax, dword ptr [esp + 4]
  0x00465724:  mov      ecx, dword ptr [esp + 8]
  0x00465728:  mov      dword ptr [0x822d8c], eax
  0x0046572d:  mov      dword ptr [0x822d90], ecx
  0x00465733:  ret      8
  0x00465736:  call     dword ptr [0x4ba0f0] <<< CALL
  0x0046573c:  nop      
  0x0046573d:  nop      
  0x0046573e:  nop      
  0x0046573f:  nop      
  0x00465740:  mov      dword ptr [0x822d8c], 0xffffffff
  0x0046574a:  ret      8
  0x0046574d:  nop      
  0x0046574e:  nop      
  0x0046574f:  nop      
  0x00465750:  mov      eax, dword ptr [esp + 8]
  0x00465754:  cmp      eax, 0x60
  0x00465757:  jl       0x46576a
  0x00465759:  cmp      eax, 0x69
  0x0046575c:  jg       0x46576a
  0x0046575e:  mov      dword ptr [0x822b9c], 0
  0x00465768:  jmp      0x465774
  0x0046576a:  mov      ecx, dword ptr [esp + 4]
  0x0046576e:  mov      dword ptr [0x822b9c], ecx
  0x00465774:  xor      edx, edx
  0x00465776:  mov      dword ptr [0x822b98], eax
  0x0046577b:  cmp      eax, 0x1000d
  0x00465780:  mov      eax, dword ptr [0x5aa774]
  0x00465785:  sete     dl
  0x00465788:  test     eax, eax
  0x0046578a:  mov      dword ptr [0x838208], edx
  0x00465790:  je       0x4657a0
  0x00465792:  call     dword ptr [0x4ba21c] <<< CALL
  0x00465798:  cmp      eax, dword ptr [0x5aa774]
  0x0046579e:  jbe      0x4657a7
  0x004657a0:  mov      byte ptr [0x83ab9c], 0
  0x004657a7:  mov      eax, 1
  0x004657ac:  ret      8
  0x004657af:  nop      
  0x004657b0:  mov      eax, dword ptr [esp + 4]
  0x004657b4:  mov      dword ptr [0x822b98], eax
  0x004657b9:  mov      dword ptr [0x83821c], eax
  0x004657be:  xor      eax, eax
  0x004657c0:  ret      4
  0x004657c3:  call     dword ptr [0x4ba234] <<< CALL
  0x004657c9:  nop      
  0x004657ca:  nop      
  0x004657cb:  nop      
  0x004657cc:  nop      
  0x004657cd:  nop      
  0x004657ce:  nop      
  0x004657cf:  nop      
  0x004657d0:  mov      dword ptr [0x83821c], 0
  0x004657da:  xor      eax, eax
  0x004657dc:  ret      4
  0x004657df:  nop      
  0x004657e0:  push     esi
  0x004657e1:  push     edi
  0x004657e2:  push     2
  0x004657e4:  call     0x404970 <<< CALL
  0x004657e9:  mov      esi, dword ptr [esp + 0x10]
  0x004657ed:  mov      ecx, eax
  0x004657ef:  push     2
  0x004657f1:  lea      eax, [esi + esi]
  0x004657f4:  cdq      
  0x004657f5:  idiv     ecx
  0x004657f7:  mov      dword ptr [0x822d58], eax
  0x004657fc:  call     0x404970 <<< CALL
  0x00465801:  mov      ecx, dword ptr [esp + 0x18]
  0x00465805:  mov      edi, eax
  0x00465807:  add      esp, 8
  0x0046580a:  mov      dword ptr [0x822d60], esi
  0x00465810:  lea      eax, [ecx + ecx]
  0x00465813:  mov      dword ptr [0x822d64], ecx
  0x00465819:  cdq      
  0x0046581a:  idiv     edi
  0x0046581c:  pop      edi
  0x0046581d:  pop      esi
  0x0046581e:  mov      dword ptr [0x822d5c], eax
  0x00465823:  mov      eax, 1
  0x00465828:  mov      dword ptr [0x822d68], eax
  0x0046582d:  mov      dword ptr [0x822d78], eax
  0x00465832:  mov      dword ptr [0x822d74], eax
  0x00465837:  ret      8
  0x0046583a:  call     0x405098 <<< CALL
  0x0046583f:  nop      
  0x00465840:  push     esi
  0x00465841:  push     edi
  0x00465842:  push     2
  0x00465844:  call     0x404970 <<< CALL
  0x00465849:  mov      esi, dword ptr [esp + 0x10]
  0x0046584d:  mov      ecx, eax
  0x0046584f:  push     2
  0x00465851:  lea      eax, [esi + esi]
  0x00465854:  cdq      
  0x00465855:  idiv     ecx
  0x00465857:  mov      dword ptr [0x822d58], eax
  0x0046585c:  call     0x404970 <<< CALL
  0x00465861:  mov      ecx, dword ptr [esp + 0x18]
  0x00465865:  mov      edi, eax
  0x00465867:  add      esp, 8
  0x0046586a:  mov      dword ptr [0x822d60], esi
  0x00465870:  lea      eax, [ecx + ecx]
  0x00465873:  mov      dword ptr [0x822d64], ecx
  0x00465879:  cdq      
  0x0046587a:  idiv     edi
  0x0046587c:  pop      edi
  0x0046587d:  mov      dword ptr [0x822d68], 2
  0x00465887:  pop      esi
  0x00465888:  mov      dword ptr [0x822d5c], eax
  0x0046588d:  mov      eax, 1
  0x00465892:  mov      dword ptr [0x822d78], eax
  0x00465897:  mov      dword ptr [0x822d74], eax
  0x0046589c:  ret      8
  0x0046589f:  nop      
  0x004658a0:  push     3
  0x004658a2:  call     0x4a5108 <<< CALL
  0x004658a7:  nop      
  0x004658a8:  nop      
  0x004658a9:  nop      
  0x004658aa:  nop      
  0x004658ab:  nop      
  0x004658ac:  nop      
  0x004658ad:  nop      
  0x004658ae:  nop      
  0x004658af:  nop      
  0x004658b0:  push     ebp
  0x004658b1:  push     esi
  0x004658b2:  push     edi
  0x004658b3:  call     0x4659a0 <<< CALL
  0x004658b8:  mov      eax, dword ptr [esp + 0x10]
  0x004658bc:  test     eax, eax
  0x004658be:  je       0x46598e
  0x004658c4:  or       ecx, 0xffffffff
  0x004658c7:  mov      edi, 0x4c84e8
  0x004658cc:  xor      eax, eax
  0x004658ce:  push     0x4e9a84
  0x004658d3:  repne scasb al, byte ptr es:[edi]
  0x004658d5:  not      ecx
  0x004658d7:  sub      edi, ecx
  0x004658d9:  push     0x4e9a84
  0x004658de:  mov      eax, ecx
  0x004658e0:  mov      esi, edi
  0x004658e2:  mov      edi, 0x51a068
  0x004658e7:  push     0x51a068
  0x004658ec:  shr      ecx, 2
  0x004658ef:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004658f1:  mov      ecx, eax
  0x004658f3:  xor      eax, eax
  0x004658f5:  and      ecx, 3
  0x004658f8:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004658fa:  mov      edi, 0x567328
  0x004658ff:  or       ecx, 0xffffffff
  0x00465902:  repne scasb al, byte ptr es:[edi]
  0x00465904:  not      ecx
  0x00465906:  sub      edi, ecx
  0x00465908:  mov      esi, edi
  0x0046590a:  mov      edx, ecx
  0x0046590c:  mov      edi, 0x51a068
  0x00465911:  or       ecx, 0xffffffff
  0x00465914:  repne scasb al, byte ptr es:[edi]
  0x00465916:  mov      ecx, edx
  0x00465918:  dec      edi
  0x00465919:  shr      ecx, 2
  0x0046591c:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046591e:  mov      ecx, edx
  0x00465920:  and      ecx, 3
  0x00465923:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465925:  mov      edi, 0x4c856c
  0x0046592a:  or       ecx, 0xffffffff
  0x0046592d:  repne scasb al, byte ptr es:[edi]
  0x0046592f:  not      ecx
  0x00465931:  sub      edi, ecx
  0x00465933:  mov      esi, edi
  0x00465935:  mov      edx, ecx
  0x00465937:  mov      edi, 0x51a068
  0x0046593c:  or       ecx, 0xffffffff
  0x0046593f:  repne scasb al, byte ptr es:[edi]
  0x00465941:  mov      ecx, edx
  0x00465943:  dec      edi
  0x00465944:  shr      ecx, 2
  0x00465947:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465949:  mov      ecx, edx
  0x0046594b:  and      ecx, 3
  0x0046594e:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465950:  call     0x43d2a0 <<< CALL
  0x00465955:  mov      ebp, eax
  0x00465957:  add      esp, 0xc
  0x0046595a:  xor      eax, eax
  0x0046595c:  test     ebp, ebp
  0x0046595e:  jle      0x46598e
  0x00465960:  push     ebx
  0x00465961:  mov      ebx, 0x80b130
  0x00465966:  mov      esi, 0x584a0e
  0x0046596b:  mov      cl, byte ptr [esi]
  0x0046596d:  lea      edi, [eax + 1]
  0x00465970:  push     -1
  0x00465972:  or       cl, 1
  0x00465975:  push     edi
  0x00465976:  push     ebx
  0x00465977:  mov      byte ptr [esi], cl
  0x00465979:  call     0x437fa0 <<< CALL
  0x0046597e:  mov      eax, edi
  0x00465980:  add      esp, 0xc
  0x00465983:  add      esi, 0x2c
  0x00465986:  add      ebx, 0x64
  0x00465989:  cmp      eax, ebp
  0x0046598b:  jl       0x46596b
  0x0046598d:  pop      ebx
  0x0046598e:  pop      edi
  0x0046598f:  pop      esi
  0x00465990:  pop      ebp
  0x00465991:  ret      
  0x00465992:  nop      
  0x00465993:  nop      
  0x00465994:  nop      
  0x00465995:  nop      
  0x00465996:  nop      
  0x00465997:  nop      
  0x00465998:  nop      
  0x00465999:  nop      
  0x0046599a:  nop      
  0x0046599b:  nop      
  0x0046599c:  nop      
  0x0046599d:  nop      
  0x0046599e:  nop      
  0x0046599f:  nop      
  0x004659a0:  sub      esp, 0x108
  0x004659a6:  push     ebx
  0x004659a7:  push     ebp
  0x004659a8:  push     esi
  0x004659a9:  push     edi
  0x004659aa:  push     -1
  0x004659ac:  push     0x4c
  0x004659ae:  push     0x4e1920
  0x004659b3:  call     0x437fa0 <<< CALL
  0x004659b8:  push     -1
  0x004659ba:  push     0x4d
  0x004659bc:  push     0x4e1910
  0x004659c1:  call     0x437fa0 <<< CALL
  0x004659c6:  push     -1
  0x004659c8:  push     0x4e
  0x004659ca:  push     0x4e18fc
  0x004659cf:  call     0x437fa0 <<< CALL
  0x004659d4:  push     -1
  0x004659d6:  push     0x4f
  0x004659d8:  push     0x4e18ec
  0x004659dd:  call     0x437fa0 <<< CALL
  0x004659e2:  mov      esi, dword ptr [0x59e7b8]
  0x004659e8:  mov      ecx, 0x4e2
  0x004659ed:  xor      eax, eax
  0x004659ef:  mov      edi, 0x53a454
  0x004659f4:  rep stosd dword ptr es:[edi], eax
  0x004659f6:  or       ecx, 0xffffffff
  0x004659f9:  mov      edi, 0x4c84e8
  0x004659fe:  and      esi, 0xefffffff
  0x00465a04:  push     0x4e9a84
  0x00465a09:  repne scasb al, byte ptr es:[edi]
  0x00465a0b:  not      ecx
  0x00465a0d:  sub      edi, ecx
  0x00465a0f:  mov      dword ptr [0x59e7b8], esi
  0x00465a15:  mov      eax, ecx
  0x00465a17:  mov      esi, edi
  0x00465a19:  mov      edi, 0x51a068
  0x00465a1e:  push     0x4e9a84
  0x00465a23:  shr      ecx, 2
  0x00465a26:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465a28:  mov      ecx, eax
  0x00465a2a:  xor      eax, eax
  0x00465a2c:  and      ecx, 3
  0x00465a2f:  push     0x51a068
  0x00465a34:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465a36:  mov      edi, 0x567328
  0x00465a3b:  or       ecx, 0xffffffff
  0x00465a3e:  repne scasb al, byte ptr es:[edi]
  0x00465a40:  not      ecx
  0x00465a42:  sub      edi, ecx
  0x00465a44:  mov      esi, edi
  0x00465a46:  mov      edx, ecx
  0x00465a48:  mov      edi, 0x51a068
  0x00465a4d:  or       ecx, 0xffffffff
  0x00465a50:  repne scasb al, byte ptr es:[edi]
  0x00465a52:  mov      ecx, edx
  0x00465a54:  dec      edi
  0x00465a55:  shr      ecx, 2
  0x00465a58:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465a5a:  mov      ecx, edx
  0x00465a5c:  and      ecx, 3
  0x00465a5f:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465a61:  mov      edi, 0x4e18e4
  0x00465a66:  or       ecx, 0xffffffff
  0x00465a69:  repne scasb al, byte ptr es:[edi]
  0x00465a6b:  not      ecx
  0x00465a6d:  sub      edi, ecx
  0x00465a6f:  mov      esi, edi
  0x00465a71:  mov      edx, ecx
  0x00465a73:  mov      edi, 0x51a068
  0x00465a78:  or       ecx, 0xffffffff
  0x00465a7b:  repne scasb al, byte ptr es:[edi]
  0x00465a7d:  mov      ecx, edx
  0x00465a7f:  dec      edi
  0x00465a80:  shr      ecx, 2
  0x00465a83:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465a85:  mov      ecx, edx
  0x00465a87:  and      ecx, 3
  0x00465a8a:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465a8c:  call     0x43d2a0 <<< CALL
  0x00465a91:  add      esp, 0x3c
  0x00465a94:  test     eax, eax
  0x00465a96:  jne      0x465abe
  0x00465a98:  push     0x4e9a84
  0x00465a9d:  push     0x4e9a84
  0x00465aa2:  push     0x4e18cc
  0x00465aa7:  call     0x43d2a0 <<< CALL
  0x00465aac:  mov      eax, dword ptr [0x59e7b8]
  0x00465ab1:  add      esp, 0xc
  0x00465ab4:  or       eax, 0x10000000
  0x00465ab9:  mov      dword ptr [0x59e7b8], eax
  0x00465abe:  mov      ecx, 0x4e2
  0x00465ac3:  mov      esi, 0x80b130
  0x00465ac8:  mov      edi, 0x53a454
  0x00465acd:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465acf:  xor      edi, edi
  0x00465ad1:  mov      esi, 0x80b130
  0x00465ad6:  push     0x4e18c0
  0x00465adb:  push     esi
  0x00465adc:  call     0x4a64f0 <<< CALL
  0x00465ae1:  add      esp, 8
  0x00465ae4:  test     eax, eax
  0x00465ae6:  jne      0x465af6
  0x00465ae8:  add      esi, 0x64
  0x00465aeb:  inc      edi
  0x00465aec:  cmp      esi, 0x80d840
  0x00465af2:  jl       0x465ad6
  0x00465af4:  jmp      0x465afc
  0x00465af6:  mov      dword ptr [0x838a9c], edi
  0x00465afc:  mov      eax, 0x838228
  0x00465b01:  mov      dword ptr [eax], 0xffffffff
  0x00465b07:  add      eax, 0x10c
  0x00465b0c:  cmp      eax, 0x838a88
  0x00465b11:  jl       0x465b01
  0x00465b13:  or       ecx, 0xffffffff
  0x00465b16:  mov      edi, 0x4c84e8
  0x00465b1b:  xor      eax, eax
  0x00465b1d:  push     0x4d3884
  0x00465b22:  repne scasb al, byte ptr es:[edi]
  0x00465b24:  not      ecx
  0x00465b26:  sub      edi, ecx
  0x00465b28:  push     0x51a068
  0x00465b2d:  mov      eax, ecx
  0x00465b2f:  mov      esi, edi
  0x00465b31:  mov      edi, 0x51a068
  0x00465b36:  mov      word ptr [0x838220], 0
  0x00465b3f:  shr      ecx, 2
  0x00465b42:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465b44:  mov      ecx, eax
  0x00465b46:  xor      eax, eax
  0x00465b48:  and      ecx, 3
  0x00465b4b:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465b4d:  mov      edi, 0x567328
  0x00465b52:  or       ecx, 0xffffffff
  0x00465b55:  repne scasb al, byte ptr es:[edi]
  0x00465b57:  not      ecx
  0x00465b59:  sub      edi, ecx
  0x00465b5b:  mov      esi, edi
  0x00465b5d:  mov      edx, ecx
  0x00465b5f:  mov      edi, 0x51a068
  0x00465b64:  or       ecx, 0xffffffff
  0x00465b67:  repne scasb al, byte ptr es:[edi]
  0x00465b69:  mov      ecx, edx
  0x00465b6b:  dec      edi
  0x00465b6c:  shr      ecx, 2
  0x00465b6f:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465b71:  mov      ecx, edx
  0x00465b73:  and      ecx, 3
  0x00465b76:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465b78:  mov      edi, 0x4e18ac
  0x00465b7d:  or       ecx, 0xffffffff
  0x00465b80:  repne scasb al, byte ptr es:[edi]
  0x00465b82:  not      ecx
  0x00465b84:  sub      edi, ecx
  0x00465b86:  mov      esi, edi
  0x00465b88:  mov      edx, ecx
  0x00465b8a:  mov      edi, 0x51a068
  0x00465b8f:  or       ecx, 0xffffffff
  0x00465b92:  repne scasb al, byte ptr es:[edi]
  0x00465b94:  mov      ecx, edx
  0x00465b96:  dec      edi
  0x00465b97:  shr      ecx, 2
  0x00465b9a:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465b9c:  mov      ecx, edx
  0x00465b9e:  and      ecx, 3
  0x00465ba1:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465ba3:  call     0x4a614d <<< CALL
  0x00465ba8:  mov      ebx, eax
  0x00465baa:  add      esp, 8
  0x00465bad:  test     ebx, ebx
  0x00465baf:  jne      0x465c0a
  0x00465bb1:  push     0x4d3884
  0x00465bb6:  push     0x4e188c
  0x00465bbb:  call     0x4a614d <<< CALL
  0x00465bc0:  mov      ebx, eax
  0x00465bc2:  add      esp, 8
  0x00465bc5:  test     ebx, ebx
  0x00465bc7:  jne      0x465c0a
  0x00465bc9:  mov      edi, 0x4e1878
  0x00465bce:  or       ecx, 0xffffffff
  0x00465bd1:  repne scasb al, byte ptr es:[edi]
  0x00465bd3:  not      ecx
  0x00465bd5:  sub      edi, ecx
  0x00465bd7:  push     0x32
  0x00465bd9:  mov      esi, edi
  0x00465bdb:  mov      edx, ecx
  0x00465bdd:  mov      edi, 0x51a068
  0x00465be2:  or       ecx, 0xffffffff
  0x00465be5:  repne scasb al, byte ptr es:[edi]
  0x00465be7:  mov      ecx, edx
  0x00465be9:  dec      edi
  0x00465bea:  shr      ecx, 2
  0x00465bed:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465bef:  mov      ecx, edx
  0x00465bf1:  push     0x64
  0x00465bf3:  and      ecx, 3
  0x00465bf6:  push     0x51a068
  0x00465bfb:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465bfd:  call     0x46de70 <<< CALL
  0x00465c02:  add      esp, 0xc
  0x00465c05:  jmp      0x465e49
  0x00465c0a:  mov      eax, 0x55d758
  0x00465c0f:  mov      byte ptr [eax], 0xff
  0x00465c12:  add      eax, 0x25
  0x00465c15:  cmp      eax, 0x55e5cc
  0x00465c1a:  jl       0x465c0f
  0x00465c1c:  push     ebx
  0x00465c1d:  lea      eax, [esp + 0x1c]
  0x00465c21:  push     0xfa
  0x00465c26:  push     eax
  0x00465c27:  call     0x4a65ee <<< CALL
  0x00465c2c:  add      esp, 0xc
  0x00465c2f:  test     eax, eax
  0x00465c31:  je       0x465e40
  0x00465c37:  mov      ebp, 0x55d759
  0x00465c3c:  cmp      byte ptr [esp + 0x18], 0x2a
  0x00465c41:  je       0x465e25
  0x00465c47:  lea      edi, [esp + 0x18]
  0x00465c4b:  or       ecx, 0xffffffff
  0x00465c4e:  xor      eax, eax
  0x00465c50:  repne scasb al, byte ptr es:[edi]
  0x00465c52:  not      ecx
  0x00465c54:  dec      ecx
  0x00465c55:  cmp      ecx, 0xa
  0x00465c58:  jb       0x465e25
  0x00465c5e:  lea      edi, [esp + 0x18]
  0x00465c62:  or       ecx, 0xffffffff
  0x00465c65:  repne scasb al, byte ptr es:[edi]
  0x00465c67:  not      ecx
  0x00465c69:  dec      ecx
  0x00465c6a:  push     0x4c76a8
  0x00465c6f:  mov      byte ptr [esp + ecx + 0x1b], al
  0x00465c73:  lea      ecx, [esp + 0x1c]
  0x00465c77:  push     ecx
  0x00465c78:  call     0x4a678b <<< CALL
  0x00465c7d:  mov      edi, eax
  0x00465c7f:  or       ecx, 0xffffffff
  0x00465c82:  xor      eax, eax
  0x00465c84:  push     0x4c76a8
  0x00465c89:  repne scasb al, byte ptr es:[edi]
  0x00465c8b:  not      ecx
  0x00465c8d:  sub      edi, ecx
  0x00465c8f:  push     0
  0x00465c91:  mov      edx, ecx
  0x00465c93:  mov      esi, edi
  0x00465c95:  mov      edi, 0x51a068
  0x00465c9a:  shr      ecx, 2
  0x00465c9d:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465c9f:  mov      ecx, edx
  0x00465ca1:  lea      edx, [ebp - 0x21]
  0x00465ca4:  and      ecx, 3
  0x00465ca7:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465ca9:  mov      edi, 0x51a068
  0x00465cae:  or       ecx, 0xffffffff
  0x00465cb1:  repne scasb al, byte ptr es:[edi]
  0x00465cb3:  not      ecx
  0x00465cb5:  sub      edi, ecx
  0x00465cb7:  mov      eax, ecx
  0x00465cb9:  mov      esi, edi
  0x00465cbb:  mov      edi, edx
  0x00465cbd:  shr      ecx, 2
  0x00465cc0:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465cc2:  mov      ecx, eax
  0x00465cc4:  and      ecx, 3
  0x00465cc7:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465cc9:  call     0x4a678b <<< CALL
  0x00465cce:  mov      edi, eax
  0x00465cd0:  or       ecx, 0xffffffff
  0x00465cd3:  xor      eax, eax
  0x00465cd5:  push     0x4c76a8
  0x00465cda:  repne scasb al, byte ptr es:[edi]
  0x00465cdc:  not      ecx
  0x00465cde:  sub      edi, ecx
  0x00465ce0:  push     0
  0x00465ce2:  mov      edx, ecx
  0x00465ce4:  mov      esi, edi
  0x00465ce6:  mov      edi, 0x51a068
  0x00465ceb:  shr      ecx, 2
  0x00465cee:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465cf0:  mov      ecx, edx
  0x00465cf2:  and      ecx, 3
  0x00465cf5:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465cf7:  movsx    eax, byte ptr [0x51a068]
  0x00465cfe:  sub      eax, 0x41
  0x00465d01:  mov      ecx, 0xb
  0x00465d06:  cdq      
  0x00465d07:  idiv     ecx
  0x00465d09:  mov      byte ptr [ebp - 1], dl
  0x00465d0c:  call     0x4a678b <<< CALL
  0x00465d11:  mov      edi, eax
  0x00465d13:  or       ecx, 0xffffffff
  0x00465d16:  xor      eax, eax
  0x00465d18:  add      esp, 0x18
  0x00465d1b:  repne scasb al, byte ptr es:[edi]
  0x00465d1d:  not      ecx
  0x00465d1f:  sub      edi, ecx
  0x00465d21:  mov      edx, ecx
  0x00465d23:  mov      esi, edi
  0x00465d25:  mov      edi, 0x51a068
  0x00465d2a:  shr      ecx, 2
  0x00465d2d:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465d2f:  mov      ecx, edx
  0x00465d31:  and      ecx, 3
  0x00465d34:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465d36:  mov      al, byte ptr [0x51a068]
  0x00465d3b:  cmp      al, 0x31
  0x00465d3d:  jl       0x465d4a
  0x00465d3f:  cmp      al, 0x33
  0x00465d41:  jg       0x465d4a
  0x00465d43:  sub      al, 0x30
  0x00465d45:  mov      byte ptr [ebp], al
  0x00465d48:  jmp      0x465d4e
  0x00465d4a:  mov      byte ptr [ebp], 0
  0x00465d4e:  push     0x4c76a8
  0x00465d53:  push     0
  0x00465d55:  call     0x4a678b <<< CALL
  0x00465d5a:  mov      edi, eax
  0x00465d5c:  or       ecx, 0xffffffff
  0x00465d5f:  xor      eax, eax
  0x00465d61:  push     0x4c76a8
  0x00465d66:  repne scasb al, byte ptr es:[edi]
  0x00465d68:  not      ecx
  0x00465d6a:  sub      edi, ecx
  0x00465d6c:  push     0
  0x00465d6e:  mov      eax, ecx
  0x00465d70:  mov      esi, edi
  0x00465d72:  mov      edi, 0x51a068
  0x00465d77:  shr      ecx, 2
  0x00465d7a:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465d7c:  mov      ecx, eax
  0x00465d7e:  and      ecx, 3
  0x00465d81:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465d83:  movsx    eax, byte ptr [0x51a068]
  0x00465d8a:  sub      eax, 0x30
  0x00465d8d:  mov      ecx, 0xa
  0x00465d92:  cdq      
  0x00465d93:  idiv     ecx
  0x00465d95:  mov      byte ptr [ebp + 1], dl
  0x00465d98:  call     0x4a678b <<< CALL
  0x00465d9d:  mov      edi, eax
  0x00465d9f:  or       ecx, 0xffffffff
  0x00465da2:  xor      eax, eax
  0x00465da4:  push     0x4c76a8
  0x00465da9:  repne scasb al, byte ptr es:[edi]
  0x00465dab:  not      ecx
  0x00465dad:  sub      edi, ecx
  0x00465daf:  push     0
  0x00465db1:  mov      edx, ecx
  0x00465db3:  mov      esi, edi
  0x00465db5:  mov      edi, 0x51a068
  0x00465dba:  shr      ecx, 2
  0x00465dbd:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465dbf:  mov      ecx, edx
  0x00465dc1:  and      ecx, 3
  0x00465dc4:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465dc6:  movsx    eax, byte ptr [0x51a068]
  0x00465dcd:  sub      eax, 0x30
  0x00465dd0:  mov      ecx, 0xa
  0x00465dd5:  cdq      
  0x00465dd6:  idiv     ecx
  0x00465dd8:  mov      byte ptr [ebp + 2], dl
  0x00465ddb:  call     0x4a678b <<< CALL
  0x00465de0:  mov      edi, eax
  0x00465de2:  or       ecx, 0xffffffff
  0x00465de5:  xor      eax, eax
  0x00465de7:  add      esp, 0x18
  0x00465dea:  repne scasb al, byte ptr es:[edi]
  0x00465dec:  not      ecx
  0x00465dee:  sub      edi, ecx
  0x00465df0:  add      ebp, 0x25
  0x00465df3:  mov      edx, ecx
  0x00465df5:  mov      esi, edi
  0x00465df7:  mov      edi, 0x51a068
  0x00465dfc:  shr      ecx, 2
  0x00465dff:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465e01:  mov      ecx, edx
  0x00465e03:  and      ecx, 3
  0x00465e06:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465e08:  movsx    eax, byte ptr [0x51a068]
  0x00465e0f:  sub      eax, 0x30
  0x00465e12:  mov      ecx, 0xa
  0x00465e17:  cdq      
  0x00465e18:  idiv     ecx
  0x00465e1a:  cmp      ebp, 0x55e5cd
  0x00465e20:  mov      byte ptr [ebp - 0x22], dl
  0x00465e23:  jge      0x465e40
  0x00465e25:  push     ebx
  0x00465e26:  lea      edx, [esp + 0x1c]
  0x00465e2a:  push     0xfa
  0x00465e2f:  push     edx
  0x00465e30:  call     0x4a65ee <<< CALL
  0x00465e35:  add      esp, 0xc
  0x00465e38:  test     eax, eax
  0x00465e3a:  jne      0x465c3c
  0x00465e40:  push     ebx
  0x00465e41:  call     0x4a609f <<< CALL
  0x00465e46:  add      esp, 4
  0x00465e49:  or       ecx, 0xffffffff
  0x00465e4c:  mov      edi, 0x4c84e8
  0x00465e51:  xor      eax, eax
  0x00465e53:  push     0x4d3884
  0x00465e58:  repne scasb al, byte ptr es:[edi]
  0x00465e5a:  not      ecx
  0x00465e5c:  sub      edi, ecx
  0x00465e5e:  push     0x51a068
  0x00465e63:  mov      eax, ecx
  0x00465e65:  mov      esi, edi
  0x00465e67:  mov      edi, 0x51a068
  0x00465e6c:  shr      ecx, 2
  0x00465e6f:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465e71:  mov      ecx, eax
  0x00465e73:  xor      eax, eax
  0x00465e75:  and      ecx, 3
  0x00465e78:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465e7a:  mov      edi, 0x567328
  0x00465e7f:  or       ecx, 0xffffffff
  0x00465e82:  repne scasb al, byte ptr es:[edi]
  0x00465e84:  not      ecx
  0x00465e86:  sub      edi, ecx
  0x00465e88:  mov      esi, edi
  0x00465e8a:  mov      edx, ecx
  0x00465e8c:  mov      edi, 0x51a068
  0x00465e91:  or       ecx, 0xffffffff
  0x00465e94:  repne scasb al, byte ptr es:[edi]
  0x00465e96:  mov      ecx, edx
  0x00465e98:  dec      edi
  0x00465e99:  shr      ecx, 2
  0x00465e9c:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465e9e:  mov      ecx, edx
  0x00465ea0:  and      ecx, 3
  0x00465ea3:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465ea5:  mov      edi, 0x4e1868
  0x00465eaa:  or       ecx, 0xffffffff
  0x00465ead:  repne scasb al, byte ptr es:[edi]
  0x00465eaf:  not      ecx
  0x00465eb1:  sub      edi, ecx
  0x00465eb3:  mov      esi, edi
  0x00465eb5:  mov      edx, ecx
  0x00465eb7:  mov      edi, 0x51a068
  0x00465ebc:  or       ecx, 0xffffffff
  0x00465ebf:  repne scasb al, byte ptr es:[edi]
  0x00465ec1:  mov      ecx, edx
  0x00465ec3:  dec      edi
  0x00465ec4:  shr      ecx, 2
  0x00465ec7:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465ec9:  mov      ecx, edx
  0x00465ecb:  and      ecx, 3
  0x00465ece:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465ed0:  call     0x4a614d <<< CALL
  0x00465ed5:  mov      esi, eax
  0x00465ed7:  xor      ebx, ebx
  0x00465ed9:  add      esp, 8
  0x00465edc:  cmp      esi, ebx
  0x00465ede:  mov      dword ptr [esp + 0x14], esi
  0x00465ee2:  jne      0x465f43
  0x00465ee4:  push     0x4d3884
  0x00465ee9:  push     0x4e1848
  0x00465eee:  call     0x4a614d <<< CALL
  0x00465ef3:  mov      esi, eax
  0x00465ef5:  add      esp, 8
  0x00465ef8:  cmp      esi, ebx
  0x00465efa:  mov      dword ptr [esp + 0x14], eax
  0x00465efe:  jne      0x465f43
  0x00465f00:  mov      edi, 0x4e1878
  0x00465f05:  or       ecx, 0xffffffff
  0x00465f08:  xor      eax, eax
  0x00465f0a:  push     0x32
  0x00465f0c:  repne scasb al, byte ptr es:[edi]
  0x00465f0e:  not      ecx
  0x00465f10:  sub      edi, ecx
  0x00465f12:  push     0x64
  0x00465f14:  mov      esi, edi
  0x00465f16:  mov      edx, ecx
  0x00465f18:  mov      edi, 0x51a068
  0x00465f1d:  or       ecx, 0xffffffff
  0x00465f20:  repne scasb al, byte ptr es:[edi]
  0x00465f22:  mov      ecx, edx
  0x00465f24:  dec      edi
  0x00465f25:  shr      ecx, 2
  0x00465f28:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465f2a:  mov      ecx, edx
  0x00465f2c:  push     0x51a068
  0x00465f31:  and      ecx, 3
  0x00465f34:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465f36:  call     0x46de70 <<< CALL
  0x00465f3b:  add      esp, 0xc
  0x00465f3e:  jmp      0x46621d
  0x00465f43:  mov      eax, 0x58dd70
  0x00465f48:  mov      byte ptr [eax], 0xff
  0x00465f4b:  add      eax, 0x38
  0x00465f4e:  cmp      eax, 0x58f350
  0x00465f53:  jl       0x465f48
  0x00465f55:  push     esi
  0x00465f56:  lea      eax, [esp + 0x1c]
  0x00465f5a:  push     0xfa
  0x00465f5f:  push     eax
  0x00465f60:  mov      dword ptr [esp + 0x1c], ebx
  0x00465f64:  call     0x4a65ee <<< CALL
  0x00465f69:  add      esp, 0xc
  0x00465f6c:  test     eax, eax
  0x00465f6e:  je       0x466210
  0x00465f74:  mov      ebp, 0x58dd70
  0x00465f79:  cmp      byte ptr [esp + 0x18], 0x2a
  0x00465f7e:  je       0x4661f5
  0x00465f84:  lea      edi, [esp + 0x18]
  0x00465f88:  or       ecx, 0xffffffff
  0x00465f8b:  xor      eax, eax
  0x00465f8d:  repne scasb al, byte ptr es:[edi]
  0x00465f8f:  not      ecx
  0x00465f91:  dec      ecx
  0x00465f92:  cmp      ecx, 0xa
  0x00465f95:  jb       0x4661f5
  0x00465f9b:  lea      edi, [esp + 0x18]
  0x00465f9f:  or       ecx, 0xffffffff
  0x00465fa2:  repne scasb al, byte ptr es:[edi]
  0x00465fa4:  not      ecx
  0x00465fa6:  dec      ecx
  0x00465fa7:  push     0x4c76a8
  0x00465fac:  mov      byte ptr [esp + ecx + 0x1b], al
  0x00465fb0:  lea      ecx, [esp + 0x1c]
  0x00465fb4:  push     ecx
  0x00465fb5:  call     0x4a678b <<< CALL
  0x00465fba:  mov      edi, eax
  0x00465fbc:  or       ecx, 0xffffffff
  0x00465fbf:  xor      eax, eax
  0x00465fc1:  push     0x4c76a8
  0x00465fc6:  repne scasb al, byte ptr es:[edi]
  0x00465fc8:  not      ecx
  0x00465fca:  sub      edi, ecx
  0x00465fcc:  push     0
  0x00465fce:  mov      edx, ecx
  0x00465fd0:  mov      esi, edi
  0x00465fd2:  mov      edi, 0x51a068
  0x00465fd7:  shr      ecx, 2
  0x00465fda:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465fdc:  mov      ecx, edx
  0x00465fde:  lea      edx, [ebp - 0x20]
  0x00465fe1:  and      ecx, 3
  0x00465fe4:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00465fe6:  mov      edi, 0x51a068
  0x00465feb:  or       ecx, 0xffffffff
  0x00465fee:  repne scasb al, byte ptr es:[edi]
  0x00465ff0:  not      ecx
  0x00465ff2:  sub      edi, ecx
  0x00465ff4:  mov      eax, ecx
  0x00465ff6:  mov      esi, edi
  0x00465ff8:  mov      edi, edx
  0x00465ffa:  shr      ecx, 2
  0x00465ffd:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00465fff:  mov      ecx, eax
  0x00466001:  and      ecx, 3
  0x00466004:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00466006:  call     0x4a678b <<< CALL
  0x0046600b:  mov      edi, eax
  0x0046600d:  or       ecx, 0xffffffff
  0x00466010:  xor      eax, eax
  0x00466012:  repne scasb al, byte ptr es:[edi]
  0x00466014:  not      ecx
  0x00466016:  sub      edi, ecx
  0x00466018:  mov      edx, ecx
  0x0046601a:  mov      esi, edi
  0x0046601c:  mov      edi, 0x51a068
  0x00466021:  shr      ecx, 2
  0x00466024:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00466026:  mov      ecx, edx
  0x00466028:  and      ecx, 3
  0x0046602b:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046602d:  movsx    eax, byte ptr [0x51a068]
  0x00466034:  sub      eax, 0x30
  0x00466037:  and      eax, 0x80000007
  0x0046603c:  jns      0x466043
  0x0046603e:  dec      eax
  0x0046603f:  or       eax, 0xfffffff8
  0x00466042:  inc      eax
  0x00466043:  push     0x4c76a8
  0x00466048:  push     0
  0x0046604a:  mov      byte ptr [ebp], al
  0x0046604d:  call     0x4a678b <<< CALL
  0x00466052:  mov      edi, eax
  0x00466054:  or       ecx, 0xffffffff
  0x00466057:  xor      eax, eax
  0x00466059:  repne scasb al, byte ptr es:[edi]
  0x0046605b:  not      ecx
  0x0046605d:  sub      edi, ecx
  0x0046605f:  mov      edx, ecx
  0x00466061:  mov      esi, edi
  0x00466063:  mov      edi, 0x51a068
  0x00466068:  shr      ecx, 2
  0x0046606b:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046606d:  mov      ecx, edx
  0x0046606f:  and      ecx, 3
  0x00466072:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00466074:  movsx    eax, byte ptr [0x51a068]
  0x0046607b:  sub      eax, 0x30
  0x0046607e:  and      eax, 0x80000003
  0x00466083:  jns      0x46608a
  0x00466085:  dec      eax
  0x00466086:  or       eax, 0xfffffffc
  0x00466089:  inc      eax
  0x0046608a:  push     0x4c76a8
  0x0046608f:  push     0
  0x00466091:  mov      byte ptr [ebp + 1], al
  0x00466094:  call     0x4a678b <<< CALL
  0x00466099:  mov      edi, eax
  0x0046609b:  or       ecx, 0xffffffff
  0x0046609e:  xor      eax, eax
  0x004660a0:  push     0x4c76a8
  0x004660a5:  repne scasb al, byte ptr es:[edi]
  0x004660a7:  not      ecx
  0x004660a9:  sub      edi, ecx
  0x004660ab:  push     0
  0x004660ad:  mov      edx, ecx
  0x004660af:  mov      esi, edi
  0x004660b1:  mov      edi, 0x51a068
  0x004660b6:  shr      ecx, 2
  0x004660b9:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004660bb:  mov      ecx, edx
  0x004660bd:  and      ecx, 3
  0x004660c0:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004660c2:  movsx    eax, byte ptr [0x51a068]
  0x004660c9:  sub      eax, 0x30
  0x004660cc:  mov      ecx, 0xa
  0x004660d1:  cdq      
  0x004660d2:  idiv     ecx
  0x004660d4:  mov      byte ptr [ebp + 2], dl
  0x004660d7:  call     0x4a678b <<< CALL
  0x004660dc:  mov      edi, eax
  0x004660de:  or       ecx, 0xffffffff
  0x004660e1:  xor      eax, eax
  0x004660e3:  push     0x4c76a8
  0x004660e8:  repne scasb al, byte ptr es:[edi]
  0x004660ea:  not      ecx
  0x004660ec:  sub      edi, ecx
  0x004660ee:  push     0
  0x004660f0:  mov      edx, ecx
  0x004660f2:  mov      esi, edi
  0x004660f4:  mov      edi, 0x51a068
  0x004660f9:  shr      ecx, 2
  0x004660fc:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004660fe:  mov      ecx, edx
  0x00466100:  and      ecx, 3
  0x00466103:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00466105:  movsx    eax, byte ptr [0x51a068]
  0x0046610c:  sub      eax, 0x30
  0x0046610f:  mov      ecx, 0xa
  0x00466114:  cdq      
  0x00466115:  idiv     ecx
  0x00466117:  mov      byte ptr [ebp + 3], dl
  0x0046611a:  call     0x4a678b <<< CALL
  0x0046611f:  mov      edi, eax
  0x00466121:  or       ecx, 0xffffffff
  0x00466124:  xor      eax, eax
  0x00466126:  xor      ebx, ebx
  0x00466128:  repne scasb al, byte ptr es:[edi]
  0x0046612a:  not      ecx
  0x0046612c:  sub      edi, ecx
  0x0046612e:  push     0x4c76a8
  0x00466133:  mov      edx, ecx
  0x00466135:  mov      esi, edi
  0x00466137:  mov      edi, 0x51a068
  0x0046613c:  push     ebx
  0x0046613d:  shr      ecx, 2
  0x00466140:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00466142:  mov      ecx, edx
  0x00466144:  and      ecx, 3
  0x00466147:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00466149:  movsx    eax, byte ptr [0x51a068]
  0x00466150:  sub      eax, 0x30
  0x00466153:  mov      ecx, 0xa
  0x00466158:  cdq      
  0x00466159:  idiv     ecx
  0x0046615b:  mov      byte ptr [ebp + 4], dl
  0x0046615e:  call     0x4a678b <<< CALL
  0x00466163:  mov      edi, eax
  0x00466165:  or       ecx, 0xffffffff
  0x00466168:  xor      eax, eax
  0x0046616a:  add      esp, 0x38
  0x0046616d:  repne scasb al, byte ptr es:[edi]
  0x0046616f:  not      ecx
  0x00466171:  sub      edi, ecx
  0x00466173:  mov      edx, ecx
  0x00466175:  mov      esi, edi
  0x00466177:  mov      edi, 0x51a068
  0x0046617c:  shr      ecx, 2
  0x0046617f:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00466181:  mov      ecx, edx
  0x00466183:  and      ecx, 3
  0x00466186:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00466188:  xor      ecx, ecx
  0x0046618a:  mov      al, byte ptr [ecx + 0x51a068]
  0x00466190:  cmp      al, 0x30
  0x00466192:  jl       0x4661a8
  0x00466194:  cmp      al, 0x39
  0x00466196:  jg       0x4661a8
  0x00466198:  movsx    eax, al
  0x0046619b:  sub      eax, 0x30
  0x0046619e:  mov      esi, 0xa
  0x004661a3:  cdq      
  0x004661a4:  idiv     esi
  0x004661a6:  jmp      0x4661c9
  0x004661a8:  cmp      al, 0x41
  0x004661aa:  jl       0x4661b8
  0x004661ac:  cmp      al, 0x5a
  0x004661ae:  jg       0x4661b8
  0x004661b0:  movsx    eax, al
  0x004661b3:  sub      eax, 0x41
  0x004661b6:  jmp      0x4661be
  0x004661b8:  movsx    eax, al
  0x004661bb:  sub      eax, 0x61
  0x004661be:  cdq      
  0x004661bf:  mov      esi, 0xa
  0x004661c4:  idiv     esi
  0x004661c6:  add      dl, 0xa
  0x004661c9:  xor      eax, eax
  0x004661cb:  mov      byte ptr [ecx + ebp + 5], dl
  0x004661cf:  mov      al, dl
  0x004661d1:  add      ebx, eax
  0x004661d3:  inc      ecx
  0x004661d4:  cmp      ecx, 0xa
  0x004661d7:  jl       0x46618a
  0x004661d9:  mov      edx, dword ptr [esp + 0x10]
  0x004661dd:  mov      esi, dword ptr [esp + 0x14]
  0x004661e1:  mov      word ptr [ebp + 0x16], bx
  0x004661e5:  add      ebp, 0x38
  0x004661e8:  inc      edx
  0x004661e9:  cmp      ebp, 0x58f350
  0x004661ef:  mov      dword ptr [esp + 0x10], edx
  0x004661f3:  jge      0x466210
  0x004661f5:  push     esi
  0x004661f6:  lea      ecx, [esp + 0x1c]
  0x004661fa:  push     0xfa
  0x004661ff:  push     ecx
  0x00466200:  call     0x4a65ee <<< CALL
  0x00466205:  add      esp, 0xc
  0x00466208:  test     eax, eax
  0x0046620a:  jne      0x465f79
  0x00466210:  push     esi
  0x00466211:  call     0x4a609f <<< CALL
  0x00466216:  mov      ebx, dword ptr [esp + 0x14]
  0x0046621a:  add      esp, 4
  0x0046621d:  or       ecx, 0xffffffff
  0x00466220:  mov      edi, 0x4c84e8
  0x00466225:  xor      eax, eax
  0x00466227:  push     0x4e9a84
  0x0046622c:  repne scasb al, byte ptr es:[edi]
  0x0046622e:  not      ecx
  0x00466230:  sub      edi, ecx
  0x00466232:  push     0x4e9a84
  0x00466237:  mov      edx, ecx
  0x00466239:  mov      esi, edi
  0x0046623b:  mov      edi, 0x51a068
  0x00466240:  push     0x51a068
  0x00466245:  shr      ecx, 2
  0x00466248:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046624a:  mov      ecx, edx
  0x0046624c:  and      ecx, 3
  0x0046624f:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00466251:  mov      edi, 0x567328
  0x00466256:  or       ecx, 0xffffffff
  0x00466259:  repne scasb al, byte ptr es:[edi]
  0x0046625b:  not      ecx
  0x0046625d:  sub      edi, ecx
  0x0046625f:  mov      esi, edi
  0x00466261:  mov      edx, ecx
  0x00466263:  mov      edi, 0x51a068
  0x00466268:  or       ecx, 0xffffffff
  0x0046626b:  repne scasb al, byte ptr es:[edi]
  0x0046626d:  mov      ecx, edx
  0x0046626f:  dec      edi
  0x00466270:  shr      ecx, 2
  0x00466273:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00466275:  mov      ecx, edx
  0x00466277:  and      ecx, 3
  0x0046627a:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046627c:  mov      edi, 0x4c8574
  0x00466281:  or       ecx, 0xffffffff
  0x00466284:  repne scasb al, byte ptr es:[edi]
  0x00466286:  not      ecx
  0x00466288:  sub      edi, ecx
  0x0046628a:  mov      esi, edi
  0x0046628c:  mov      edx, ecx
  0x0046628e:  mov      edi, 0x51a068
  0x00466293:  or       ecx, 0xffffffff
  0x00466296:  repne scasb al, byte ptr es:[edi]
  0x00466298:  mov      ecx, edx
  0x0046629a:  dec      edi
  0x0046629b:  shr      ecx, 2
  0x0046629e:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004662a0:  mov      ecx, edx
  0x004662a2:  and      ecx, 3
  0x004662a5:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004662a7:  call     0x43d2a0 <<< CALL
  0x004662ac:  add      esp, 0xc
  0x004662af:  test     eax, eax
  0x004662b1:  jle      0x466362
  0x004662b7:  lea      ecx, [ebx*8]
  0x004662be:  mov      dword ptr [esp + 0x10], eax
  0x004662c2:  sub      ecx, ebx
  0x004662c4:  mov      ebx, 0x80b130
  0x004662c9:  lea      ebp, [ecx*8 + 0x58dd70]
  0x004662d0:  push     0x4c
  0x004662d2:  push     0x4c
  0x004662d4:  push     ebx
  0x004662d5:  call     0x437fa0 <<< CALL
  0x004662da:  mov      edi, 0x4e06d8
  0x004662df:  or       ecx, 0xffffffff
  0x004662e2:  xor      eax, eax
  0x004662e4:  add      esp, 0xc
  0x004662e7:  repne scasb al, byte ptr es:[edi]
  0x004662e9:  not      ecx
  0x004662eb:  sub      edi, ecx
  0x004662ed:  lea      edx, [ebp - 0x20]
  0x004662f0:  mov      eax, ecx
  0x004662f2:  mov      esi, edi
  0x004662f4:  mov      edi, edx
  0x004662f6:  mov      dl, byte ptr [0x4e06ef]
  0x004662fc:  shr      ecx, 2
  0x004662ff:  rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00466301:  mov      ecx, eax
  0x00466303:  mov      al, byte ptr [0x4e06eb]
  0x00466308:  and      ecx, 3
  0x0046630b:  add      ebp, 0x38
  0x0046630e:  rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00466310:  mov      cl, al
  0x00466312:  and      al, 0xf
  0x00466314:  sar      cl, 4
  0x00466317:  mov      byte ptr [ebp - 0x38], cl
  0x0046631a:  mov      cl, byte ptr [0x4e06ed]
  0x00466320:  mov      byte ptr [ebp - 0x37], dl
  0x00466323:  mov      byte ptr [ebp - 0x36], al
  0x00466326:  mov      al, byte ptr [0x4e06ec]
  0x0046632b:  xor      edx, edx
  0x0046632d:  mov      byte ptr [ebp - 0x35], al
  0x00466330:  mov      byte ptr [ebp - 0x34], cl
  0x00466333:  xor      ecx, ecx
  0x00466335:  mov      al, byte ptr [ecx + 0x57e1a8]
  0x0046633b:  mov      byte ptr [ecx + ebp + 5], al
  0x0046633f:  and      eax, 0xff
  0x00466344:  add      edx, eax
  0x00466346:  inc      ecx
  0x00466347:  cmp      ecx, 0xa
  0x0046634a:  jl       0x466335
  0x0046634c:  mov      eax, dword ptr [esp + 0x10]
  0x00466350:  add      ebx, 0x64
  0x00466353:  dec      eax
  0x00466354:  mov      word ptr [ebp + 0x16], dx
  0x00466358:  mov      dword ptr [esp + 0x10], eax
  0x0046635c:  jne      0x4662d0
  0x00466362:  pop      edi
  0x00466363:  pop      esi
  0x00466364:  pop      ebp
  0x00466365:  pop      ebx
  0x00466366:  add      esp, 0x108
  0x0046636c:  ret      
  0x0046636d:  nop      
  0x0046636e:  nop      
  0x0046636f:  nop      
  0x00466370:  push     ebx
  0x00466371:  mov      ebx, dword ptr [esp + 8]
  0x00466375:  push     esi
  0x00466376:  mov      esi, ebx
  0x00466378:  shl      esi, 8
  0x0046637b:  push     edi
  0x0046637c:  cmp      word ptr [esi + 0x579568], -1
  0x00466384:  je       0x4668ca
  0x0046638a:  mov      ecx, dword ptr [esp + 0x14]
  0x0046638e:  test     ecx, ecx
  0x00466390:  jne      0x4663a9
  0x00466392:  cmp      byte ptr [esi + 0x5794d9], 1
  0x00466399:  jg       0x4663a9
  0x0046639b:  mov      al, byte ptr [esi + 0x5794da]
  0x004663a1:  test     al, al
  0x004663a3:  je       0x4668ca
  0x004663a9:  mov      ax, word ptr [esi + 0x57956a]
  0x004663b0:  mov      byte ptr [0x51a068], 0
  0x004663b7:  cmp      ax, 3
  0x004663bb:  jle      0x4663d5
  0x004663bd:  movsx    edx, word ptr [esi + 0x57955a]
  0x004663c4:  shl      edx, 8
  0x004663c7:  cmp      word ptr [edx + 0x57956a], 3
  0x004663cf:  jg       0x4668ca
  0x004663d5:  movsx    edi, word ptr [esi + 0x57956c]
  0x004663dc:  movsx    edx, ax
  0x004663df:  lea      edx, [edx*4 + 4]
  0x004663e6:  cmp      edi, edx
  0x004663e8:  jg       0x4663f2
  0x004663ea:  test     ecx, ecx
  0x004663ec:  je       0x4668ca
  0x004663f2:  inc      eax
  0x004663f3:  push     ebp
  0x004663f4:  mov      word ptr [esi + 0x57956a], ax
  0x004663fb:  mov      cl, byte ptr [esi + 0x57956a]
  0x00466401:  movsx    eax, byte ptr [esi + 0x5794d9]
  0x00466408:  push     ebx
  0x00466409:  mov      byte ptr [eax + esi + 0x579502], cl
  0x00466410:  mov      ebp, dword ptr [esi + 0x5794c8]
  0x00466416:  or       ebp, 0x800000
  0x0046641c:  mov      dword ptr [esi + 0x5794c8], ebp
  0x00466422:  movsx    edx, word ptr [esi + 0x57955a]
  0x00466429:  shl      edx, 8
  0x0046642c:  mov      ecx, dword ptr [edx + 0x5794c8]
  0x00466432:  lea      eax, [edx + 0x5794c8]
  0x00466438:  or       ecx, 0x800000
  0x0046643e:  mov      dword ptr [eax], ecx
  0x00466440:  mov      eax, dword ptr [0x834170]
  0x00466445:  movsx    ecx, byte ptr [esi + 0x5794d9]
  0x0046644c:  movsx    edx, word ptr [esi + 0x579568]
  0x00466453:  push     ecx
  0x00466454:  push     edx
  0x00466455:  mov      dword ptr [0x59b048], eax
  0x0046645a:  call     0x4668f0 <<< CALL
  0x0046645f:  add      esp, 0xc
  0x00466462:  test     eax, eax
  0x00466464:  je       0x4664a8
  0x00466466:  mov      eax, dword ptr [0x838a94]
  0x0046646b:  movsx    ecx, word ptr [esi + 0x57956a]
  0x00466472:  shl      eax, 4
  0x00466475:  add      eax, ecx
  0x00466477:  push     eax
  0x00466478:  push     0x32
  0x0046647a:  push     ebx
  0x0046647b:  call     0x467a00 <<< CALL
  0x00466480:  mov      edx, dword ptr [esi + 0x5794bc]
  0x00466486:  mov      eax, dword ptr [esi + 0x5794b8]
  0x0046648c:  add      esp, 0xc
  0x0046648f:  push     0
  0x00466491:  push     edx
  0x00466492:  push     eax
  0x00466493:  push     ebx
  0x00466494:  call     0x46c940 <<< CALL
  0x00466499:  add      esp, 4
  0x0046649c:  add      eax, 0x58
  0x0046649f:  push     eax
  0x004664a0:  call     0x40c500 <<< CALL
  0x004664a5:  add      esp, 0x10
  0x004664a8:  movsx    ecx, byte ptr [esi + 0x5794d9]
  0x004664af:  movsx    edx, word ptr [esi + 0x579568]
  0x004664b6:  mov      ebp, ebx
  0x004664b8:  xor      ebp, 1
  0x004664bb:  push     ebp
  0x004664bc:  push     ecx
  0x004664bd:  push     edx
  0x004664be:  call     0x4668f0 <<< CALL
  0x004664c3:  add      esp, 0xc
  0x004664c6:  test     eax, eax
  0x004664c8:  je       0x4666bf
  0x004664ce:  mov      eax, dword ptr [0x838a94]
  0x004664d3:  movsx    ecx, word ptr [esi + 0x57956a]
  0x004664da:  shl      eax, 4
  0x004664dd:  add      eax, ecx
  0x004664df:  push     eax
  0x004664e0:  push     0x32
  0x004664e2:  push     ebp
  0x004664e3:  call     0x467a00 <<< CALL
  0x004664e8:  movsx    edx, word ptr [esi + 0x57955a]
  0x004664ef:  shl      edx, 8
  0x004664f2:  add      esp, 0xc
  0x004664f5:  mov      cl, byte ptr [edx + 0x57953c]
  0x004664fb:  lea      eax, [edx + 0x57953c]
  0x00466501:  add      cl, 3
  0x00466504:  mov      byte ptr [eax], cl
  0x00466506:  mov      di, word ptr [esi + 0x57956a]
  0x0046650d:  movsx    ecx, word ptr [esi + 0x57955a]
  0x00466514:  mov      eax, ecx
  0x00466516:  shl      eax, 8
  0x00466519:  mov      dx, word ptr [eax + 0x57956a]
  0x00466520:  cmp      dx, di
  0x00466523:  jl       0x46666d
  0x00466529:  mov      eax, dword ptr [esi + 0x5794bc]
  0x0046652f:  mov      edx, dword ptr [esi + 0x5794b8]
  0x00466535:  push     0x5dc
  0x0046653a:  push     eax
  0x0046653b:  push     edx
  0x0046653c:  push     ecx
  0x0046653d:  call     0x46c940 <<< CALL
  0x00466542:  add      esp, 4
  0x00466545:  add      eax, 0xa6
  0x0046654a:  push     eax
  0x0046654b:  call     0x40c500 <<< CALL
  0x00466550:  add      esp, 0x10
  0x00466553:  cmp      word ptr [esi + 0x57956a], 1
  0x0046655b:  jne      0x46660a
  0x00466561:  movsx    eax, byte ptr [0x5a34e0]
  0x00466568:  cmp      eax, 3
  0x0046656b:  ja       0x4665ea
  0x0046656d:  jmp      dword ptr [eax*4 + 0x4668d0]
  0x00466574:  mov      al, byte ptr [esi + 0x579568]
  0x0046657a:  push     0
  0x0046657c:  and      al, 1
  0x0046657e:  push     0
  0x00466580:  neg      al
  0x00466582:  sbb      eax, eax
  0x00466584:  push     0
  0x00466586:  and      eax, 2
  0x00466589:  push     0x64
  0x0046658b:  add      eax, 0x73
  0x0046658e:  jmp      0x4665e1
  0x00466590:  mov      cl, byte ptr [esi + 0x579568]
  0x00466596:  push     0
  0x00466598:  and      cl, 1
  0x0046659b:  push     0
  0x0046659d:  neg      cl
  0x0046659f:  sbb      ecx, ecx
  0x004665a1:  push     0
  0x004665a3:  and      ecx, 2
  0x004665a6:  push     0x64
  0x004665a8:  add      ecx, 0x6e
  0x004665ab:  push     ecx
  0x004665ac:  jmp      0x4665e2
  0x004665ae:  mov      dl, byte ptr [esi + 0x579568]
  0x004665b4:  push     0
  0x004665b6:  and      edx, 1
  0x004665b9:  push     0
  0x004665bb:  or       edx, 0x3c
  0x004665be:  push     0
  0x004665c0:  shl      edx, 1
  0x004665c2:  push     0x64
  0x004665c4:  push     edx
  0x004665c5:  jmp      0x4665e2
  0x004665c7:  mov      al, byte ptr [esi + 0x579568]
  0x004665cd:  push     0
  0x004665cf:  and      al, 1
  0x004665d1:  push     0
  0x004665d3:  neg      al
  0x004665d5:  sbb      eax, eax
  0x004665d7:  push     0
  0x004665d9:  and      eax, 2
  0x004665dc:  push     0x64
  0x004665de:  add      eax, 0x32
  0x004665e1:  push     eax
  0x004665e2:  call     0x4481b0 <<< CALL
  0x004665e7:  add      esp, 0x14
  0x004665ea:  inc      byte ptr [esi + 0x57953c]
  0x004665f0:  movsx    ecx, word ptr [esi + 0x57955a]
  0x004665f7:  shl      ecx, 8
  0x004665fa:  lea      eax, [ecx + 0x57953c]
  0x00466600:  mov      cl, byte ptr [ecx + 0x57953c]
  0x00466606:  inc      cl
  0x00466608:  mov      byte ptr [eax], cl
  0x0046660a:  inc      word ptr [esi + 0x57955c]
  0x00466611:  movsx    ecx, word ptr [esi + 0x57956e]
  0x00466618:  lea      eax, [ecx*8]
  0x0046661f:  sub      eax, ecx
  0x00466621:  lea      edx, [eax + eax*4]
  0x00466624:  shl      edx, 4
  0x00466627:  test     byte ptr [edx + 0x4d60a8], 2
  0x0046662e:  je       0x466639
  0x00466630:  push     ebx
  0x00466631:  call     0x4a0890 <<< CALL
  0x00466636:  add      esp, 4
  0x00466639:  movsx    eax, word ptr [esi + 0x57955a]
  0x00466640:  shl      eax, 8
  0x00466643:  movsx    ecx, word ptr [eax + 0x57956e]
  0x0046664a:  lea      eax, [ecx*8]
  0x00466651:  sub      eax, ecx
  0x00466653:  lea      ecx, [eax + eax*4]
  0x00466656:  shl      ecx, 4
  0x00466659:  test     byte ptr [ecx + 0x4d60a8], 2
  0x00466660:  je       0x4666bf
  0x00466662:  push     ebp
  0x00466663:  call     0x4a0890 <<< CALL
  0x00466668:  add      esp, 4
  0x0046666b:  jmp      0x4666bf
  0x0046666d:  movsx    edi, di
  0x00466670:  movsx    edx, dx
  0x00466673:  dec      edi
  0x00466674:  push     0x5dc
  0x00466679:  cmp      edx, edi
  0x0046667b:  mov      edx, dword ptr [eax + 0x5794bc]
  0x00466681:  mov      eax, dword ptr [eax + 0x5794b8]
  0x00466687:  push     edx
  0x00466688:  push     eax
  0x00466689:  push     ecx
  0x0046668a:  jne      0x4666a4
  0x0046668c:  call     0x46c940 <<< CALL
  0x00466691:  add      esp, 4
  0x00466694:  add      eax, 0xa4
  0x00466699:  push     eax
  0x0046669a:  call     0x40c500 <<< CALL
  0x0046669f:  add      esp, 0x10
  0x004666a2:  jmp      0x4666bf
  0x004666a4:  call     0x46c940 <<< CALL
  0x004666a9:  add      esp, 4
  0x004666ac:  add      eax, 0x5a
  0x004666af:  push     eax
  0x004666b0:  call     0x40c500 <<< CALL
  0x004666b5:  add      esp, 0x10
  0x004666b8:  dec      word ptr [esi + 0x57955c]
  0x004666bf:  movsx    ecx, word ptr [esi + 0x57955a]
  0x004666c6:  mov      ax, word ptr [esi + 0x57956a]
  0x004666cd:  xor      edi, edi
  0x004666cf:  shl      ecx, 8
  0x004666d2:  mov      cx, word ptr [ecx + 0x57956a]
  0x004666d9:  cmp      cx, ax
  0x004666dc:  jge      0x46670c
  0x004666de:  dec      eax
  0x004666df:  mov      word ptr [esi + 0x57956a], ax
  0x004666e6:  mov      cx, word ptr [esi + 0x57956c]
  0x004666ed:  movsx    edx, cx
  0x004666f0:  mov      eax, 0x55555556
  0x004666f5:  imul     edx
  0x004666f7:  mov      eax, edx
  0x004666f9:  shr      eax, 0x1f
  0x004666fc:  add      edx, eax
  0x004666fe:  sub      ecx, edx
  0x00466700:  mov      word ptr [esi + 0x57956c], cx
  0x00466707:  jmp      0x4667e9
  0x0046670c:  cmp      ax, 4
  0x00466710:  mov      edi, 1
  0x00466715:  jne      0x4667e9
  0x0046671b:  cmp      cx, ax
  0x0046671e:  jne      0x4667e9
  0x00466724:  movsx    eax, byte ptr [0x5a34e0]
  0x0046672b:  cmp      eax, 3
  0x0046672e:  ja       0x46676d
  0x00466730:  jmp      dword ptr [eax*4 + 0x4668e0]
  0x00466737:  push     0
  0x00466739:  push     0
  0x0046673b:  push     0
  0x0046673d:  push     0x64
  0x0046673f:  push     0x73
  0x00466741:  jmp      0x466765
  0x00466743:  push     0
  0x00466745:  push     0
  0x00466747:  push     0
  0x00466749:  push     0x64
  0x0046674b:  push     0x6e
  0x0046674d:  jmp      0x466765
  0x0046674f:  push     0
  0x00466751:  push     0
  0x00466753:  push     0
  0x00466755:  push     0x64
  0x00466757:  push     0x78
  0x00466759:  jmp      0x466765
  0x0046675b:  push     0
  0x0046675d:  push     0
  0x0046675f:  push     0
  0x00466761:  push     0x64
  0x00466763:  push     0x33
  0x00466765:  call     0x4481b0 <<< CALL
  0x0046676a:  add      esp, 0x14
  0x0046676d:  movsx    ecx, word ptr [esi + 0x579568]
  0x00466774:  mov      ebp, dword ptr [0x561258]
  0x0046677a:  push     ecx
  0x0046677b:  inc      ebp
  0x0046677c:  push     0x120
  0x00466781:  mov      dword ptr [0x561258], ebp
  0x00466787:  call     0x40c6f0 <<< CALL
  0x0046678c:  movsx    eax, word ptr [esi + 0x57956e]
  0x00466793:  mov      cl, byte ptr [esi + 0x579568]
  0x00466799:  lea      edx, [eax + eax*4]
  0x0046679c:  lea      eax, [eax + edx*2]
  0x0046679f:  shl      eax, 2
  0x004667a2:  mov      byte ptr [eax + 0x584a09], cl
  0x004667a8:  movsx    ecx, byte ptr [esi + 0x5794d9]
  0x004667af:  or       byte ptr [eax + ecx + 0x5849e3], 2
  0x004667b7:  movsx    edx, word ptr [esi + 0x57955a]
  0x004667be:  shl      edx, 8
  0x004667c1:  movsx    eax, word ptr [edx + 0x57956e]
  0x004667c8:  lea      edx, [eax + eax*4]
  0x004667cb:  lea      eax, [eax + edx*2]
  0x004667ce:  lea      eax, [ecx + eax*4 + 0x5849e3]
  0x004667d5:  or       byte ptr [eax], 2
  0x004667d8:  movsx    ecx, word ptr [esi + 0x579568]
  0x004667df:  push     ecx
  0x004667e0:  push     ebx
  0x004667e1:  call     0x4722c0 <<< CALL
  0x004667e6:  add      esp, 0x10
  0x004667e9:  movsx    eax, word ptr [esi + 0x57955a]
  0x004667f0:  movsx    edx, byte ptr [esi + 0x5794d9]
  0x004667f7:  shl      eax, 8
  0x004667fa:  mov      cl, byte ptr [eax + 0x57956a]
  0x00466800:  mov      byte ptr [edx + eax + 0x579502], cl
  0x00466807:  mov      dx, 0xfffc
  0x0046680b:  movsx    eax, word ptr [esi + 0x57955a]
  0x00466812:  sub      dx, word ptr [esi + 0x57956a]
  0x00466819:  shl      eax, 8
  0x0046681c:  shl      edx, 2
  0x0046681f:  mov      word ptr [eax + 0x579556], dx
  0x00466826:  movsx    ecx, word ptr [esi + 0x57955a]
  0x0046682d:  shl      ecx, 8
  0x00466830:  mov      dx, word ptr [ecx + 0x579556]
  0x00466837:  mov      word ptr [esi + 0x579556], dx
  0x0046683e:  mov      ebx, dword ptr [esi + 0x5794bc]
  0x00466844:  movsx    eax, word ptr [esi + 0x57955a]
  0x0046684b:  mov      ebp, dword ptr [esi + 0x5794b8]
  0x00466851:  shl      eax, 8
  0x00466854:  mov      ecx, dword ptr [eax + 0x5794bc]
  0x0046685a:  mov      edx, dword ptr [eax + 0x5794b8]
  0x00466860:  sub      ecx, ebx
  0x00466862:  sub      edx, ebp
  0x00466864:  push     ecx
  0x00466865:  push     edx
  0x00466866:  call     0x4672d0 <<< CALL
  0x0046686b:  sar      eax, 0x1c
  0x0046686e:  and      eax, 0xf
  0x00466871:  add      esp, 8
  0x00466874:  inc      eax
  0x00466875:  sar      eax, 1
  0x00466877:  and      al, 7
  0x00466879:  pop      ebp
  0x0046687a:  mov      byte ptr [esi + 0x5794d2], al
  0x00466880:  xor      al, 4
  0x00466882:  movsx    ecx, word ptr [esi + 0x57955a]
  0x00466889:  shl      ecx, 8
  0x0046688c:  mov      byte ptr [ecx + 0x5794d2], al
  0x00466892:  mov      al, 0xb
  0x00466894:  movsx    edx, word ptr [esi + 0x57955a]
  0x0046689b:  shl      edx, 8
  0x0046689e:  mov      byte ptr [edx + 0x5794d5], al
  0x004668a4:  mov      byte ptr [esi + 0x5794d5], al
  0x004668aa:  movsx    ecx, word ptr [esi + 0x57955a]
  0x004668b1:  shl      ecx, 8
  0x004668b4:  xor      eax, eax
  0x004668b6:  mov      word ptr [ecx + 0x5794cc], ax
  0x004668bd:  mov      word ptr [esi + 0x5794cc], ax
  0x004668c4:  mov      eax, edi
  0x004668c6:  pop      edi
  0x004668c7:  pop      esi
  0x004668c8:  pop      ebx
  0x004668c9:  ret      
  0x004668ca:  pop      edi
  0x004668cb:  pop      esi
  0x004668cc:  xor      eax, eax
  0x004668ce:  pop      ebx
  0x004668cf:  ret      
