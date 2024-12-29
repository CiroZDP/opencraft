# Config variables
CC = gcc
CFLAGS = -Wall -Wextra

SOURCES = src/*.c
INCLUDES = -I"src/include/"
TARGET = oc-unix

# Platform detection
ifeq ($(PLATFORM), windows-86)
    CC = i686-w64-mingw32-gcc
    CFLAGS += -DNC_STDLIB
    TARGET = oc-x86.exe
else ifeq ($(PLATFORM), windows-64)
    CC = x86_64-w64-mingw32-gcc
    CFLAGS += -DNC_STDLIB
    TARGET = oc-x64.exe
else ifeq ($(PLATFORM), macos)
    CC = o64-clang
    CFLAGS += -DNC_STDLIB
else ifeq ($(PLATFORM), linux-86)
    CFLAGS += -m32 -DNC_STDLIB
else
    $(error Unknown platform: $(PLATFORM))
endif

# Build
all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES) $(INCLUDES)
