
INCLUDE=$(INCLUDE);..\submodules\Detours\src

all: bt.exe payload.dll

bt.exe: ..\submodules\Detours\lib.X86\detours.lib
	cl bt.cpp ..\submodules\Detours\lib.X86\detours.lib

payload.dll: ..\submodules\Detours\lib.X86\detours.lib
	cl /LD payload.cpp ..\submodules\Detours\lib.X86\detours.lib

..\submodules\Detours\lib.X86\detours.lib:
	cd "$(MAKEDIR)\..\submodules\Detours"
    @$(MAKE) /NOLOGO /$(MAKEFLAGS)