
INCLUDE=$(INCLUDE);..\submodules\Detours\src

all: bt.exe payload.dll

bt.exe payload.dll:
	cd "$(MAKEDIR)\source"
    @$(MAKE) /NOLOGO /$(MAKEFLAGS)