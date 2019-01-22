all: clean
	gcc pass_by_reference.c -o reference
	gcc pass_by_value.c -o value
	gcc reference_vs_value.c -o reference_vs_value

clean:
	rm -rf reference value reference_vs_value
