#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf

void dump(void* p, size_t n) {
	uint8_t* u8 = static_cast<uint8_t*>(p);
	size_t i = 0;
	while (true) {
		printf("%02X ", *u8++);
		if (++i >= n) break;
		if (i % 8 == 0)
			printf("\n");
	}
	printf("\n");
}

void write_4660() {
	uint16_t port = 4660; // 0x1234
	printf("port number = %d\n", port);
	dump(&port, sizeof(port));
}

uint16_t my_n_to_hs(uint16_t a) {
    return (a << 8) | (a >> 8);
}

uint32_t my_n_to_hl(uint32_t a) {
    uint32_t a1 = (a & 0xFF000000) >> 24;
    printf("%x\n", a1);
    uint32_t a2 = (a & 0x00FF0000) >> 8;
    printf("%x\n", a2);
    uint32_t a3 = (a & 0x0000FF00) << 8;
    printf("%x\n", a3);
    uint32_t a4 = (a & 0x000000FF) << 24;
    printf("%x\n", a4);
    return a1 | a2 | a3 | a4;
}

void write_0x1234() {
	uint8_t network_buffer[] = { 0x12, 0x34 };
	uint16_t* p = reinterpret_cast<uint16_t*>(network_buffer);
	uint16_t n = my_n_to_hs(*p);
	printf("16 bit number=0x%x\n", n);
}

void  write_0x12345678() {
	uint8_t network_buffer[] = { 0x12, 0x34, 0x56, 0x78 };
	uint32_t* p = reinterpret_cast<uint32_t*>(network_buffer);
	uint32_t n = *p; // TODO
	printf("32 bit number=0x%x\n", n);
}

int main() {
	write_4660();
	write_0x1234();
	write_0x12345678();
}
