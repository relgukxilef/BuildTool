
INCLUDE=$(INCLUDE);..\submodules\Detours\src

all: bt.exe payload.dll

bt.exe: ..\submodules\Detours\lib.$(ARCHITECTURE)\detours.lib
	cd "$(MAKEDIR)"	
	cl bt.cpp ..\submodules\Detours\lib.$(ARCHITECTURE)\detours.lib

payload.dll: ..\submodules\Detours\lib.$(ARCHITECTURE)\detours.lib payload.res
	cd "$(MAKEDIR)"	
	cl /LD /Fepayload.dll payload.cpp ..\submodules\Detours\lib.$(ARCHITECTURE)\detours.lib payload.res /link /subsystem:console /export:DetourFinishHelperProcess,@1,NONAME

..\submodules\Detours\lib.$(ARCHITECTURE)\detours.lib:
	cd "$(MAKEDIR)\..\submodules\Detours"
    @$(MAKE) /NOLOGO /$(MAKEFLAGS)