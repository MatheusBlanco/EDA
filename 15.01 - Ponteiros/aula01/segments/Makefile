all: clean text data bss

text:
	gcc -o text0 text_segment0.c
	gcc -o text1 text_segment1.c

data:
	gcc -o data0 data_segment0.c
	gcc -o data1 data_segment1.c

bss:
	gcc -o bss0 bss_segment0.c
	gcc -o bss1 bss_segment1.c

size: all
	size text0 text1 data0 data1 bss0 bss1

clean:
	rm -f text0 text1 data0 data1 bss0 bss1
