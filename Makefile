ifeq ($(prefix),)
	prefix=/usr/local
endif
ifeq ($(shell which $(CC)),)
	CC=gcc
endif
all:
	$(CC) $(CFLAGS) -o ecalc ecalc.c
	strip -S ecalc
install:
	if [ ! -d "$(DESTDIR)$(prefix)/bin" ]; then mkdir -p $(DESTDIR)$(prefix)/bin; fi
	install -m755 ecalc $(DESTDIR)$(prefix)/bin
clean:
	rm ecalc
