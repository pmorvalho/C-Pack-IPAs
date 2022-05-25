# Copyright (C) 2021, Pedro Reis dos Santos
.SUFFIXES: .in .out .diff
MAKEFLAGS += --no-print-directory # No entering and leaving messages
OK="\e[1;32mtest $< PASSED\e[0m"
CC=gcc
CFLAGS=-g -Wall -Wextra -Werror -ansi -pedantic
ALL=ex02
ex02=0 1 2


all:: clean # run regression tests
	@for i in $(ALL); do $(MAKE) $(MFLAGS) $$i; done

%: ../../solutions/%.c
	$(LINK.c) -o $@ $<
	@for i in $($@:%=$@_%.diff); do $(MAKE) $(MFLAGS) EXE=./$@ $$i; done

.in.diff:
	@$(EXE) < $< | diff - $*.out > $@
	@if [ `wc -l < $@` -eq 0 ]; then echo $(OK); fi;

clean::
	rm -f *.diff ex??
