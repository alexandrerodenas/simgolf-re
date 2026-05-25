#!/bin/bash
# Generate function-by-function recursive disassembly using rizin @@ iterator
# The backticks need to reach rizin unmodified, so we use a temp rizin script

cat > /tmp/disasm_script.txt << 'RZSCRIPT'
aaaa
@@=`afl~[0]` pdr
RZSCRIPT

rizin -q -i /tmp/disasm_script.txt /home/roden/simgolf-re/data/exe_unpacked/golf.exe > /home/roden/simgolf-re/rizin_out/exe/golf_unpacked/full_disasm_funcs.txt 2>&1
