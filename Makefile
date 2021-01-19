all:
	@make -C main
	@make -C test

clean:
	@make -C main clean
	@make -C test clean

rpm:
	@make -C main package
	@rpmbuild --define "_topdir `pwd`/rpmbuild" --define "version `echo ${HM_CUBE_VERSION}`" -ba rpmbuild/SPECS/cube_c.spec


.PHONY: clean all rpm
