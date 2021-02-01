all:
	@make -C main

clean:
	@make -C main clean
	@rm -rf *.info
	@rm -rf valgrind.log

rpm:
	@make -C main package
	@rpmbuild --define "_topdir `pwd`/rpmbuild" --define "version `echo ${HM_CUBE_VERSION}`" -ba rpmbuild/SPECS/cube_c.spec

deb:
	@make -C main prepdebinstenv
	@dpkg -b Horadric-Cube-${HM_CUBE_VERSION} Horadric-Cube-${HM_CUBE_VERSION}_amd64.deb

verify:
	@make -C main build-gov
	@make -C test build-gov
	@lcov -c -i -d ./ -o init.info
	@valgrind --leak-check=full --show-reachable=yes -v ./output/hm-cube-c-unit-test 2>&1 | tee valgrind.log
	@grep "0 errors from 0 contexts" valgrind.log
	@cp `find main -name '*.c'` output/
	@cp `find test -name '*.c'` output/
	@lcov -c -d ./ -o cover.info
	@lcov -a init.info -a cover.info -o total.info

.PHONY: clean all rpm deb verify
