# Project settings
PROJ_ROOT  = ../..
SOURCE_DIR = $(PROJ_ROOT)/src
SOURCES    = $(SOURCE_DIR)/*.c
INCLUDES   =
TARGET_DIR = $(PROJ_ROOT)/build/

# Compiler settings
CFLAGS = $(INCLUDES) -O2

x64: $(SOURCE_DIR)/main.c
	mkdir $(TARGET_DIR) && x86_64-w64-mingw32-gcc $(CFLAGS) -m64 $(SOURCES) -o $(TARGET_DIR)/oc_win64.exe

x32: $(SOURCE_DIR)/main.c
	mkdir $(TARGET_DIR) && i686-w64-mingw32-gcc   $(CFLAGS) -m32 $(SOURCES) -o $(TARGET_DIR)/oc_win32.exe
