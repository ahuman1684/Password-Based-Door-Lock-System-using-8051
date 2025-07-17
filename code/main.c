code/main.c

  #include <reg51.h>

void main() {
    P1 |= (1 << 0);  // Set bit 0 - Turn on lock
    while(1);
}

added main C file with bit manipulation

