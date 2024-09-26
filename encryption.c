// PocketAES

#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(int argc, char **argv) {
    
    // TODO: Take two inputs of 16 bit
    // uint16_t: 0 0 0 0 | 0 0 0 0 | 0 0 0 0 | 0 0 0 0 

    uint16_t input, key, cipher; 
    printf("Enter 16-bit plaintext in HEX: ");
    scanf("%hx", &input);

    printf("Enter 16-bit encryption key in HEX: ");
    scanf("%hx", &key);

    printf("plaintext: %X\n", input);
    printf("encryption key: %X\n", key);
    return 0;
}