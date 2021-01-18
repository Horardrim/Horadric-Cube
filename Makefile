all:
	@make -C main
	@make -C test

clean:
	@make -C main clean
	@make -C test clean
