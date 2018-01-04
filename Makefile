IDIR = ../include
CXX = g++
CXXFLAGS = -I$(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS = hellomake.h
DEPS = $(patsubst %,$(DIR)/%,$(_DEPS))

-OBJ = hellomake.o hellofunc.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS_
        $(CXX) -c -o $@ $< $(CXXFLAGS)

hellomake: $(OBJ)
        g++ -o $@ $^ $(CXXFLAGS) $(LIBS)

.PHONY: clean

clean:
        rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
