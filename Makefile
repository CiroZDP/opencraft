.PHONY: cross local

# Help for novice users
help:
	@echo Usage:
	@echo   make cross PLATFORM=...           - Compiles for a specific platform
	@echo     Supported platforms: windows-86, windows-64, macos (test), linux-86
	@echo   make local                        - Compiles using the local GCC installation
	@echo   make help                         - Shows this help message

cross:
	@$(MAKE) -f crosscompiling.mk PLATFORM=$(PLATFORM)

local:
	@$(MAKE) -f localbuild.mk
