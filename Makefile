all:
	@make -C main
	@make -C test

clean:
	@make -C main clean
	@make -C test clean

rpm:
	@make -C main package
	@rpmbuild --define "_topdir `pwd`/rpmbuild" --define "version `echo ${HM_CUBE_VERSION}`" -ba rpmbuild/SPECS/cube_c.spec

deb:
	@make -C main prepdebinstenv
	@dpkg -b Horadric-Cube-${HM_CUBE_VERSION}

.PHONY: clean all rpm deb
