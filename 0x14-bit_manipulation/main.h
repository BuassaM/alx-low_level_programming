#ifndef MAIN_H
#define MAIN_H

/*
 *Prototypes for bit manipulation.
 *
*/
int _putchar(char c);
unsigned int binary_to_uint(const char *t);
void print_binary(unsigned long int p);
int get_bit(unsigned long int p, unsigned int index);
int set_bit(unsigned long int *p, unsigned int index);
int clear_bit(unsigned long int *p, unsigned int index);
unsigned int flip_bits(unsigned long int p, unsigned long int l);
int get_endianness(void);

#endif /* MAIN_H */

