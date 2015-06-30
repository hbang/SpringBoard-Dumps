# by kirb <http://kirb.me>
# Apache License 2.0

FIRMWARES = 2.0 2.1 3.0 3.1 3.2 4.0 4.1 4.2 4.3 5.0 5.1 6.0 6.1 7.0 7.0.3 7.1 8.0 8.1 8.2 8.3 8.4
BINARYPATH = ~/Documents/Projects/dylibs/SpringBoard
BINARYNAME = SpringBoard
CLASSDUMP = class-dump-z
CDFLAGS = -RbSzH
CURRENTBINARY = $(BINARYNAME)$(subst .,,$(FIRMWARE))

all:
	git checkout master

	echo $(CURRENTBINARY)
	@for i in $(FIRMWARES); do \
		$(MAKE) --no-print-directory --no-keep-going dump FIRMWARE=$$i; \
	done

dump:
	$(info Dumping SpringBoard for $(FIRMWARE))
	git rm *.h || true
	$(CLASSDUMP) $(CDFLAGS) $(BINARYPATH)/$(CURRENTBINARY)
	$(info Cleaning up output)
	rm $(CURRENTBINARY).h
	mv $(CURRENTBINARY)-Structs.h $(BINARYNAME)-Structs.h
	for i in *.h; do \
		# echo $$i; \
		sed s/$(CURRENTBINARY)/$(BINARYNAME)/g $$i > tmp && \
		grep -v '@class' tmp > $$i && \
		mv tmp $$i; \
	done
	$(info Committing and tagging)
	git add *.h
	git commit -m $(FIRMWARE)
	git tag $(FIRMWARE)
