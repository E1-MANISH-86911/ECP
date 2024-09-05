#include <stdio.h>
#include <limits.h>

int main() {
    printf("_______________________________________________________________________________________________________________________________________________________________________\n");
    printf("Data Type\t\tSize\tFormat Specifier\tRange\n");
    printf("_______________________________________________________________________________________________________________________________________________________________________\n");
    // Print details for char
    printf("char\t\t\t%zu\t%%c\t\t\t%d to +%d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    // Print details for unsigned char
     printf("unsigned char\t\t%zu\t%%c\t\t\t%d to %d\n", sizeof(unsigned char), 0, UCHAR_MAX);
    // Print details for short int
    printf("short int\t\t%zu\t%%hd\t\t\t%d to +%d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    // Print details for unsigned short int
    printf("unsigned short int\t%zu\t%%hu\t\t\t%d to %d\n", sizeof(unsigned short int), 0, USHRT_MAX);
    // Print details for int
    printf("int\t\t\t%zu\t%%d\t\t\t%d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    // Print details for unsigned int
    printf("unsigned int\t\t%zu\t%%u\t\t\t%u to %u\n", sizeof(unsigned int), 0U, UINT_MAX);
    // Print details for long int
    printf("long int\t\t%zu\t%%ld\t\t\t%ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    // Print details for unsigned long int
    printf("unsigned long int\t%zu\t%%lu\t\t\t%lu to %lu\n", sizeof(unsigned long int), 0UL, ULONG_MAX);
    printf("_______________________________________________________________________________________________________________________________________________________________________\n");
    return 0;
}


