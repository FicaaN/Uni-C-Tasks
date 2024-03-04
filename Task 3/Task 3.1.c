#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isNorthernHemisphere(double latitude) {

	if (latitude >= 0.0) {
	  
		return 1;          
	}
	else {

		return 0;          
	}
}

int isSouthernHemisphere(double latitude) {

	if (latitude < 0.0) {

		return 1;            
	}
	else {

		return 0;        
	}
}

int main()
{
	double latitude;
	int North, South;

	printf("Type the latitude of your location: ");
	scanf_s("%lf", &latitude);
	printf("\n");

	North = isNorthernHemisphere(latitude);
	South = isSouthernHemisphere(latitude);

	if (North) {

		printf("This location is in the Northern Hemisphere.\n");

	} else if (South) {

		printf("This location is in the Southern Hemisphere.\n");

	} else {
		
		printf("This location is at Equator.\n");

	}
	
	return 0;
}