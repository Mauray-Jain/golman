CC := gcc
CFLAGS := -Wall -Wpedantic -Wextra -Wno-unused-parameter
LDFLAGS := -lGL -lGLEW -lglfw

SOURCE_DIR := src
BUILD_DIR := build

HEADERS := $(wildcard $(SOURCE_DIR)/*.h)
SOURCES := $(wildcard $(SOURCE_DIR)/*.c)
# Substitute src/*.c -> build/obj/*.o
# notdir removes the src part
OBJECTS := $(addprefix $(BUILD_DIR)/, $(notdir $(SOURCES:.c=.o)))

# $^ is all prerequisites
# $@ is target name
default: $(OBJECTS)
	@ $(CC) $(CFLAGS) $(LDFLAGS) $^ -o golman

# $< is leftmost prerequisite
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c $(HEADERS)
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) $(LDFLAGS) -c -o $@ $<

clean:
	@ rm -rf $(BUILD_DIR)
	@ rm golman

# phony targets are those targets which are the name of an action to carry out
.PHONY: default clean
