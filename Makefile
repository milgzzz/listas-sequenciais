CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = lista_sequencial
SRC_DIR = src
TEST_DIR = tests
BIN_DIR = bin

all: dirs $(BIN_DIR)/$(TARGET)

dirs:
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/$(TARGET): $(SRC_DIR)/lista_sequencial.c $(TEST_DIR)/test_lista_sequencial.c
	$(CC) $(CFLAGS) $^ -o $@

run: all
	./$(BIN_DIR)/$(TARGET)

clean:
	rm -rf $(BIN_DIR)

.PHONY: all dirs run clean