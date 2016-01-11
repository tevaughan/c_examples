
# This file is read by the GNU 'make' program.  Just type 'make' at the command
# line in the present directory in order to build (and to run at least some of)
# the programs whose source code resides in the present directory.

# PROGS is the variable that stores the name of each program to be built. In
# most (if not all) cases, the corresponding source code will be in a file with
# the same name as the executable program but with '.c' appended.
PROGS = ex-1-1 ex-1-2 ex-1-3

# OUTPUT contains a list of output files to be generated. Each of these files
# collects the output of one of the programs.
OUTPUT = $(PROGS:=.out)

# CFLAGS is used automatically by make whenever it converts any source file
# 'somefile.c' into a binary executable file 'somefile' by calling the C
# compiler. The make program passes to the compiler each of the arguments in
# this variable.
CFLAGS = -Wall -std=c89 -pedantic

# This is a pattern rule. A pattern rule is only a potential rule. It becomes
# actual only when some other, non-pattern rule has a dependency that
# actualizes the pattern rule. On the left side of a rule's colon is the
# target, and on the right side is one or more dependencies. Search for
# 'pattern rule' and 'automatic variables' in the GNU make manual for a
# description of how a pattern rule works. (Also look in the manual to see how
# rules work in general).  The present rule generates from any binary
# executable 'somefile' a new file 'somefile.out' that contains the output
# generated by running 'somefile'. What follows the line with the colon is the
# rule's recipe. Each line of a recipe must begin with a TAB character.
%.out : %
	./$< > $@

# This has the form of a rule but really just tells make that the 'all' rule
# does not produce a file named 'all'. Same for 'clean'.
.PHONY : all clean

# This is the first rule that causes any action to take place. (The pattern
# rule above does not become an actual rule until an actual rule brings the
# patter rule into existence by making a particular instance of it.) So this is
# the rule that is run by default when one just types 'make'. It says that the
# programs should be built and that their output should be generated.
all : $(PROGS) $(OUTPUT)

# Treat ex-1-2 specially because it produces a bunch of warnings that need to
# be redirected to a log file.
ex-1-2 : ex-1-2.c
	gcc $(CFLAGS) -o $@ $< 2> ex-1-2.buildlog

# This rule is what runs when one types 'make clean' from the command line. It
# removes each executable program and any corresponding output file.
clean :
	@rm -fv $(PROGS)
	@rm -fv $(OUTPUT)
	@rm -fv *.buildlog

