TARGET = hm-cube-c-unit-test
BUILD_OUTPUT_DIR = ../output
SRC := $(wildcard ./*.c)
OBJS := $(SRC:./%.c=./$(BUILD_OUTPUT_DIR)/%.o)
DEPS := $(SRC:./%.c=./$(BUILD_OUTPUT_DIR)/%.d)
ALL_OBJS := ${BUILD_OUTPUT_DIR}/*.o

CFLAGS = -g -Wall -Werror -fprofile-arcs -ftest-coverage
LD_FLAGS = -fprofile-arcs -ftest-coverage
INCLUDE_PATH = -I ../main

-include $(DEPS)

${BUILD_OUTPUT_DIR}/%.d: %.c
	@mkdir -p $(BUILD_OUTPUT_DIR)
	$(CC) -MM -MT "$(BUILD_OUTPUT_DIR)/$(subst .c,.o,${notdir $<}) $(BUILD_OUTPUT_DIR)/$(subst .c,.d,${notdir $<})" -MF "$(subst .c,.d,${BUILD_OUTPUT_DIR}/${notdir $<})" $<

$(BUILD_OUTPUT_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c $< -o $@

${BUILD_OUTPUT_DIR}/${TARGET}: ${OBJS}
	$(CC) ${LD_FLAGS} -o $@ ${ALL_OBJS}

${TARGET}: ${OBJS}
	${CC} ${CFLAGS}  -o $@  $^

build-gov: ${BUILD_OUTPUT_DIR}/${TARGET}


.PHONY: build-gov
