
INCLUDE=$(INCLUDE);..\submodules\Detours\src

all: bt.exe payload.dll

bt.exe:
	cl bt.cpp ..\submodules\Detours\lib.X86\detours.lib

payload.dll:
	cl /LD payload.cpp ..\submodules\Detours\lib.X86\detours.lib