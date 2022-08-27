#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>

#define MAX(x,y,z) maxThree(x,y,z)
#define MIN(x,y,z) minThree(x,y,z)
#define SETBIT(mask,bit) (mask |= (1ull <<(bit)))
#define CLEARBIT(mask,bit) (mask &= ~(1ull << (bit)))
#define INVERSEBIT(mask,bit) (mask ^= (1ull << (bit)))
#define CHECKBIT(mask,bit) !!(mask & (1ull << (bit)))
#define SWAP(a,b) for(int i=0;i<64;i++) {if(CHECKBIT(b,i) != CHECKBIT(a,i)){ INVERSEBIT(a,i); INVERSEBIT(b,i);}}

int main()
{
    int ap = 55;
    int bp = 44;
    int cp = 99;

    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if (cp >> i) printf("CP = %d\n", cp);
    }
    printf("Max number is: %d\n", MAX(ap, bp, cp));
    printf("Min number is: %d\n", MIN(ap, bp, cp));
    printf("Set bit: %d\n", SETBIT(cp, 2));
    printf("Clear bit: %d\n", CLEARBIT(cp, 2));
    printf("Inverse bit: %d\n", INVERSEBIT(cp, 2));
    printf("Check bit %d\n", CHECKBIT(cp, 2));
    printf("Inverse bit: %d\n", INVERSEBIT(cp, 2));
    printf("Inverse bit: %d\n", INVERSEBIT(cp, 2));
    printf("Before swap A = %d\n", bp);
    printf("Before swap B = %d\n", cp);
    SWAP(bp, cp);
    printf("After swap A = %d\n", bp);
    printf("After swap B = %d\n", cp);

    return 0;
}