#include <stdarg.h>


static char* terminal_buffer = (char*)0xB8000; // Pointer to the VGA text buffer

static int terminal_row = 80; // Current row position in the terminal
static int terminal_column = 25; // Current column position in the terminal



void printf(const char* format, ...) {

    unsigned int i = 0;
    unsigned int j = 0;
    char buffer[1024]; // Buffer to hold the formatted string

    while (format[i] != '\0') {
        terminal_buffer[j] = format[i];
        terminal_buffer[j + 1] = 0x07;
        i++;
        j = j + 2;
        
    }
}


