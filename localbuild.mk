#! Before running this file, adjust the settings, please.

# These shouldn't be modified
SOURCE_DIR = src
INCLUDES   = -I"$(SOURCE_DIR)/include"
SOURCES    = $(SOURCE_DIR)/*.c $(SOURCE_DIR)/glfw/*.c

# Variables
CC = gcc
# Customize this
CFLAGS =
# If you are in windows, make sure to put .exe at the end
TARGET = main

all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES) $(INCLUDES)
