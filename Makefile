c-clean:
	find c -type f \( -name "a.out" -o -name "*.s" -o -name "*.*~" \) -exec rm {} \;
