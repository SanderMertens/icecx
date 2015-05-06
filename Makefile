.PHONY: all
.PHONY: clean
.PHONY: gcov

all:
	@make -C Ice
	@make -C examples

clean:
	@make clean -C Ice
	@make clean -C examples
