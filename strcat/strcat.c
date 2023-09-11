char *my_strcat(char *destination, const char *source){
	while(*source != '\0'){
		while(*destination != '\0')
			destination++;
	*destination = *source;
	source++;
	destination++;
	}
	return destination;
}
