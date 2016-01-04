
CFLAGS = -Wall -ansi -pedantic
PROGS = ex-1-1-tev ex-1-2-nrv
OUTPUT = ex-1-2-nrv.out

%.out : %
	./$< > $@

.PHONY : all clean

all : $(PROGS) $(OUTPUT)

clean :
	@rm -fv $(PROGS)

