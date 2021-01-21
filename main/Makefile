TARGET = libhm-cube-c.so
BUILD_OUTPUT_DIR = ../output
SRC := $(wildcard ./*.c)
OBJS := $(SRC:./%.c=./$(BUILD_OUTPUT_DIR)/%.o)
DEPS := $(SRC:./%.c=./$(BUILD_OUTPUT_DIR)/%.d)

CFLAGS = -g -Wall -Werror -fPIC -shared
INCLUDE_PATH =
LD_FLAGS =
VERSION = ${HM_CUBE_VERSION}


all: ${BUILD_OUTPUT_DIR}/${TARGET}

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),package)
ifneq ($(MAKECMDGOALS),prepdebinstenv)
-include $(DEPS)
endif
endif
endif

${BUILD_OUTPUT_DIR}/%.d: %.c
	@mkdir -p $(BUILD_OUTPUT_DIR)
	$(CC) -MM -MT "$(BUILD_OUTPUT_DIR)/$(subst .c,.o,${notdir $<}) $(BUILD_OUTPUT_DIR)/$(subst .c,.d,${notdir $<})" -MF "$(subst .c,.d,${BUILD_OUTPUT_DIR}/${notdir $<})" $<

$(BUILD_OUTPUT_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -c $< -o $@

${BUILD_OUTPUT_DIR}/${TARGET}: ${OBJS}
	${CC} ${CFLAGS}  -o $@  $^
	@mv ${BUILD_OUTPUT_DIR}/${TARGET} ${BUILD_OUTPUT_DIR}/${TARGET}.${VERSION}
	@ln -s ${BUILD_OUTPUT_DIR}/${TARGET}.${VERSION} ${BUILD_OUTPUT_DIR}/${TARGET}

clean:
	@rm -rf ${BUILD_OUTPUT_DIR}
	@rm -rf ../rpmbuild/BUILD ../rpmbuild/BUILDROOT ../rpmbuild/SOURCES ../rpmbuild/RPMS ../rpmbuild/SRPMS
	@rm -rf ../Horadric-Cube-${HM_CUBE_VERSION}

package:
	@mkdir -p hm-cube-c-${HM_CUBE_VERSION}
	@cp *.h *.c Makefile hm-cube-c-${HM_CUBE_VERSION}
	@tar -czvf hm-cube-c-${HM_CUBE_VERSION}.tar.gz hm-cube-c-${HM_CUBE_VERSION}
	@mkdir -p ../rpmbuild/SOURCES
	@mv hm-cube-c-${HM_CUBE_VERSION}.tar.gz ../rpmbuild/SOURCES
	@rm -rf hm-cube-c-${HM_CUBE_VERSION}
	@rm -f ../Horadric-Cube-${HM_CUBE_VERSION}.deb

prepdebinstenv:
	@mkdir -p ../Horadric-Cube-${HM_CUBE_VERSION}/DEBIAN
	@mkdir -p ../Horadric-Cube-${HM_CUBE_VERSION}/etc
	@mkdir -p ../Horadric-Cube-${HM_CUBE_VERSION}/usr/lib/cube
	@mkdir -p ../Horadric-Cube-${HM_CUBE_VERSION}/usr/include/cube
	@. ../scripts/gen_control.sh
	@. ../scripts/gen_postinst.sh && chmod 755 ../Horadric-Cube-${HM_CUBE_VERSION}/DEBIAN/postinst
	@cp ../scripts/preinst ../Horadric-Cube-${HM_CUBE_VERSION}/DEBIAN
	@cp ../scripts/prerm ../Horadric-Cube-${HM_CUBE_VERSION}/DEBIAN
	@cp ../scripts/postrm ../Horadric-Cube-${HM_CUBE_VERSION}/DEBIAN
	@cp ../main/*.h ../Horadric-Cube-${HM_CUBE_VERSION}/usr/include/cube
	@cp ../ld.cube.conf ../Horadric-Cube-${HM_CUBE_VERSION}/etc
	@cp ../output/libhm-cube-c.so.* ../Horadric-Cube-${HM_CUBE_VERSION}/usr/lib/cube

.PHONY: all clean package prepdebinstenv
