.SUFFIXES:	.txt .pages
.PHONY:		all clean

all:		demo.pages ch1.pages ch2.pages ch3.pages ch4.pages ch5.pages ch6.pages ch7.pages ch8.pages ch10.pages ch14.pages ch15.pages gdb.pages

.txt.pages:
		./gen-pages < $< > $@
		chmod +x $@

clean:
		rm -f ch?.pages ch??.pages demo.pages
