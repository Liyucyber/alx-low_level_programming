#include <stdio.h>
#include <stdlib.h>

/**
 * ssize_t read_textfile - This is the main function, which takes two parameters: filename and letters
 * FILE *fopen - function is a standard C library function used to open files
 *
 */

ssize_t read_textfile(const char *filename, size_t letters) {
if (filename == NULL) {
return 0;
}

FILE *file = fopen(filename, "r");
if (file == NULL) {
return 0;
}

char *buffer = (char *)malloc(letters + 1);
if (buffer == NULL) {
fclose(file);
return 0;
}

ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
fclose(file);

if (bytesRead <= 0) {
free(buffer);
return 0;
}

buffer[bytesRead] = '\0';

ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
free(buffer);

if (bytesWritten != bytesRead) {
return 0;
}

return bytesWritten;
}
