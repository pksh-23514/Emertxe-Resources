PREFIX ?= /usr
MANDIR=${PREFIX}/share/man

NAME := tinybldlin
dist_files := tinybldlin tinybldlin.desktop tinybldlin.png Makefile tinybldlin.1.gz

all:
	
		

install:
	install -D -m 755 src/bin/tinybldlin $(DESTDIR)$(PREFIX)/bin/tinybldlin
	install -D -m 644 src/application/tinybldlin.desktop $(DESTDIR)$(PREFIX)/share/applications/tinybldlin.desktop
	install -D -m 755 src/manpage/tinybldlin.1.gz $(DESTDIR)$(MANDIR)/man1/tinybldlin.1.gz
	install -D -m 644 src/hicolor/16x16/apps/tinybldlin.png $(DESTDIR)$(PREFIX)/share/icons/hicolor/16x16/apps/tinybldlin.png
	install -D -m 644 src/hicolor/22x22/apps/tinybldlin.png $(DESTDIR)$(PREFIX)/share/icons/hicolor/22x22/apps/tinybldlin.png	
	install -D -m 644 src/hicolor/24x24/apps/tinybldlin.png $(DESTDIR)$(PREFIX)/share/icons/hicolor/24x24/apps/tinybldlin.png
	install -D -m 644 src/hicolor/32x32/apps/tinybldlin.png $(DESTDIR)$(PREFIX)/share/icons/hicolor/32x32/apps/tinybldlin.png
	install -D -m 644 src/hicolor/48x48/apps/tinybldlin.png $(DESTDIR)$(PREFIX)/share/icons/hicolor/48x48/apps/tinybldlin.png
		 
	mkdir $(DESTDIR)$(PREFIX)/share/tinybldlin
	mkdir $(DESTDIR)$(PREFIX)/share/tinybldlin/glade
	mkdir $(DESTDIR)$(PREFIX)/share/tinybldlin/modules
	mkdir $(DESTDIR)$(PREFIX)/share/tinybldlin/modules/images	
		
	cp src/glade/*.glade $(DESTDIR)$(PREFIX)/share/tinybldlin/glade
	cp src/modules/*.py $(DESTDIR)$(PREFIX)/share/tinybldlin/modules
	cp src/modules/images/*.ico $(DESTDIR)$(PREFIX)/share/tinybldlin/modules/images
	cp src/modules/images/*.png $(DESTDIR)$(PREFIX)/share/tinybldlin/modules/images
	cp src/*py /$(DESTDIR)$(PREFIX)/share/tinybldlin
	
	

clean:
	
	
dist:
	tar -c --transform="s@^@$(NAME)/@" $(dist_files) | gzip -cn9 > $(NAME).tar.gz

.PHONY: all clean dist
