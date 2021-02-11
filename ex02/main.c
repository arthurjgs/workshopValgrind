#include <stdbool.h>
#include <stdio.h>

int validate_date(int *date) 
{
	// ITS YOUR TURN TO CODe
}

int main()
{
	int *date;
	for (int i; date[i] != 0; i++)
	{
		date[i] = rand % 31;
	}
	if (validate_date(date) == true)
	{
		printf("Birthday:\n");
		printf("Day = %d\n", date);
		printf("Month = %d\n", date + 31);
		printf("Year = %d\n", 2000 + date);
	}
}
