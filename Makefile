IDIR=src
ODIR=build
CC=gcc
CFLAGS=-I$(IDIR)
LIBS=

_DEPS = display.c container.c
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = display.o container.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: $(IDIR)/%.c $(DEPS)
	@mkdir -p $(@D)
	$(CC) -c -o $@ $< $(CFLAGS)

similis: $(OBJ)
	$(CC) -o $(ODIR)/$@ $^ $(CFLAGS) $(LIBS) $(IDIR)/main.c

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o

test:
	echo 'TODO tests...'