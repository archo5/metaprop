
SOURCES = metaprop.cpp
DEVDEPS = mpd_api.hpp mpdgen.sgs
DEPS = metaprop.hpp metaprop.mpd.hpp $(DEVDEPS)
FLAGS = -g -Wall -Wextra -Wconversion -Wshadow -Wpointer-arith -Wcast-qual -Wcast-align -m32

try: test.exe
	test > output.txt
	type output.txt
try11: test11.exe
	test11 > output11.txt
	type output11.txt

test.exe: $(SOURCES) $(DEPS)
	g++ $(FLAGS) -std=c++03 -o $@ $(SOURCES)
test11.exe: $(SOURCES) $(DEPS)
	g++ $(FLAGS) -std=c++11 -o $@ $(SOURCES)

metaprop.mpd.hpp: metaprop.mpd.sgs $(DEVDEPS)
	sgsvm -p mpdgen $< > $@
