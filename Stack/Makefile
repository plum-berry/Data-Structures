CC      = g++
IN      = -I./include
LFLAGS  = -L./lib -ldsalib

# collect all .cpp files in src/
SRCS    = $(wildcard src/*.cpp)
OBJS    = $(SRCS:src/%.cpp=%.o)

# ── default target ──────────────────────────────
all: lib/libdsalib.a main.exe

# ── build static library ─────────────────────────
lib/libdsalib.a: $(OBJS)
	ar rcs $@ $^

# ── compile each src/*.cpp to a .o ───────────────
%.o: src/%.cpp
	$(CC) $(IN) -c $< -o $@

# ── link final executable ─────────────────────────
main.exe: main.cpp lib/libdsalib.a
	$(CC) $(IN) main.cpp $(LFLAGS) -o $@

# ── test build ───────────────────────────────────
test.exe: test.cpp lib/libdsalib.a
	$(CC) $(IN) test.cpp $(LFLAGS) -o $@

# ── cleanup ──────────────────────────────────────
.PHONY: all clean test

clean:
	del *.o lib\libdsalib.a main.exe test.exe



