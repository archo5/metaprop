
SOURCES = metaprop.cpp
DEVDEPS = mpd_api.hpp mpdgen.sgs
DEPS = metaprop.hpp metaprop.mpd.hpp $(DEVDEPS)
FLAGS = -g -Wall -Wextra -Wconversion -Wshadow -Wpointer-arith -Wcast-qual -Wcast-align -m32 -std=c++03

try: test.exe
	test > output.txt
	type output.txt

test.exe: $(SOURCES) $(DEPS)
	g++ $(FLAGS) -o $@ $(SOURCES)

metaprop.mpd.hpp: metaprop.mpd.sgs $(DEVDEPS)
	sgsvm -p mpdgen $< > $@
