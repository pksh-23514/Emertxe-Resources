#ifndef exp 
#define exp

#define SLAVE_READ		0xA1
#define SLAVE_WRITE		0xA0

void write_exp(unsigned char address1,  unsigned char data);
unsigned char read_exp(unsigned char address1);

#endif
