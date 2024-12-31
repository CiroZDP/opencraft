# Project settings
PROJ_ROOT  = ../..
SOURCE_DIR = $(PROJ_ROOT)/src
SOURCES    = $(SOURCE_DIR)/*.c
INCLUDES   =
TARGET_DIR = $(PROJ_ROOT)/build/

# Compiler settings
CC     = gcc
CFLAGS = $(INCLUDES)

all: $(SOURCE_DIR)/main.c
	mkdir $(TARGET_DIR) && $(CC) $(CFLAGS) $(SOURCES) -o $(TARGET_DIR)/oc_msdos.exe
