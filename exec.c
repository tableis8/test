// date:17.4.10


int exec(unsigned int start)
{
	asm volatile(
		"mov pc,r0\n\t"
	);

	return 0;
}
