#!/usr/bin/env make
# looking at varibles in make
myvar = $(newvar)
newvar = $(oldvar)
oldvar = Variable;

show_variables: file.txt
	@echo $(oldvar)
	@echo $(myvar)
	@echo ${MAKE}
	@echo $<
	@echo $@

file.txt:
	touch file.txt
	@echo $(shell whoami)
