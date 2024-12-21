OUTPUT_FILE=OpenCraft
SOURCE_DIR=src
INCLUDE_DIR=$(SOURCE_DIR)/netco

linux4windows64:
	i686-w64-mingw32-gcc -o $(OUTPUT_FILE).exe $(SOURCE_DIR)/*.c -I"$(INCLUDE_DIR)/"

linux4windows86:
	x86_64-w64-mingw32-gcc -o $(OUTPUT_FILE).exe $(SOURCE_DIR)/*.c -I"$(INCLUDE_DIR)/"
