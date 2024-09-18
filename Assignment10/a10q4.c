/***Write a function to check whether a given byte has even parity. If not set MSB bit to make it
even parity.***/

#include <stdio.h>

unsigned char check_parity(unsigned char byte) {
    int count = 0;
    unsigned char mask = 0x01;

    for(int i = 0; i < 8; i++) {
        if((byte & mask) != 0)
            count++;
        mask <<= 1;
    }

    if(count % 2 != 0)
        byte |= 0x80;

    return byte;
}

int main() {
    unsigned char byte = 0x10;
    printf("Original byte: %02X\n", byte);
    byte = check_parity(byte);
    printf("Byte with even parity: %02X\n", byte);
    return 0;
}
