BUILD_DIR := ../build
SRC := $(wildcard ../Converters/*.c) $(wildcard ../Models/*.c) $(wildcard ../*.c)
OUTPUT := $(BUILD_DIR)/program.exe
CFLAGS := -Wall -I
LIBS := ../Libs
CC := gcc
MKDIR_CMD := powershell -Command "if (-Not (Test-Path '$(BUILD_DIR)')) { New-Item -ItemType Directory -Path '$(BUILD_DIR)' }"

all: $(OUTPUT)

$(OUTPUT): $(SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(LIBS) $(SRC) -o $(OUTPUT)

$(BUILD_DIR):
	$(MKDIR_CMD)

shell_test:
	@echo $(SHELL_TYPE)

clean:
	rm -rf $(BUILD_DIR)

rebuild: clean all

.PHONY: all clean rebuild