EXEC=MiniProjet

SRC_PATH=src
BUILD_PATH=build
BIN_PATH= $(BUILD_PATH)/bin

SOURCES = $(shell find $(SRC_PATH) -name '*.c' | sort -k 1nr | cut -f2-)
OBJECTS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)

all: dirs $(EXEC)

dirs:
	@mkdir -p $(BUILD_PATH)
	@mkdir -p $(BIN_PATH)

MiniProjet: $(OBJECTS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(BUILD_PATH)%.o: $(SRC_PATH)/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(BUILD_PATH)


