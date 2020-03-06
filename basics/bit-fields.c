#include<stdio.h>
struct date1{
	unsigned int d:5;
	unsigned int m:8;
	unsigned int y;
};

struct date2{
	unsigned int d:5;
	unsigned int :0;
	unsigned int m:8;
	unsigned int :0;
	unsigned int y;
};

/* -> A special unnamed bit field of size 0 is used to force alignment on next boundary
 * -> We cannot have pointers to bit field members as they may not start at a byte boundary
 * -> It is implementation defined to assign an out-of-range value to a bit field member
 * -> Array of bit fields is not allowed
 */

int main()
{
	struct date1 dmy1={23, 11, 2020};
	struct date2 dmy2={23, 11, 2020};
	/*struct date dmy={203, 11, 2020};
	 *warning: large integer implicitly truncated to unsigned type [-Woverflow]
	 */
	printf("Size of date1 is %lu\n",sizeof(struct date1));
	printf("Size of date2 is %lu\n",sizeof(struct date2));
	
	printf("Date is %u/%u/%u\n",dmy1.d,dmy1.m,dmy1.y);
	printf("Date is %u/%u/%u\n",dmy2.d,dmy2.m,dmy2.y);
	return 0;
}
