.PHONY: cross

cross:
	@$(MAKE) -f crosscompiling.mk PLATFORM=$(PLATFORM)
