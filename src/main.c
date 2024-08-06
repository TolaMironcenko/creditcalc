// psk = (s/so-1)/n
// percent = (allpay/sum-1)/years
// percent*years = allpay/sum-1
// percent*years+1*sum = allpay

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/colors.h"

void CalcFullPay(float sum, float percent, float month);

int help();

int main(int argc, char **argv)
{
	if (argc < 5) return help();

	float data[3] = {atof(argv[2]), atof(argv[3]), atof(argv[4])};

	switch (atoi(argv[1]))
	{
	case 1:
		CalcFullPay(data[0], data[1], data[2]);
		break;
	}

	return 0;
}

void CalcFullPay(float sum, float percent, float month)
{
	float FullPay = ((percent / 100) * ((int)month / 12) + 1) * sum;
	printf(
		"%s** %sFull Pay%s = %s%.2f\n%s", 
		BBLUE, 
		BRED, 
		RESET, 
		GREEN, 
		FullPay, 
		RESET
	);
	printf(
		"%s** %sOnly Percents%s = %s%.2f\n%s", 
		BBLUE, 
		BRED, 
		RESET, 
		GREEN, 
		FullPay - sum, 
		RESET
	);
}

int help()
{
	printf("%s ** %susage:\n%s", BBLUE, YELLOW, RESET);
	printf("- crc [do] [sum] [percent per year] [time in months]\n- 1 - FullPay\n");
	return 0;
}
