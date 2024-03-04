#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265
#include <stdio.h>
#include <math.h>

double distanceKm(double lon1, double lon2, double lat1, double lat2)
{
    return 6378.388 * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(lon2 - lon1));
}

double routeKm(double latitude[], double longitude[])
{
    double distance = 0;

    for (int i = 0; i < 8; i++)
    {
        distance += distanceKm(longitude[i] * (PI / 180.0), longitude[i+1] * (PI / 180.0), latitude[i] * (PI / 180.0), latitude[i+1] * (PI / 180.0));
    }
    return distance;
}

int main()
{
    double latitude[] = { 60.1695, 60.1708, 60.1717, 60.1752, 60.1764, 60.1778, 60.1699, 60.1692, 60.1690 };
    double longitude[] = { 24.9354, 24.9359, 24.9370, 24.9416, 24.9424, 24.9444, 24.9377, 24.9367, 24.9371 };

    printf("Total distance is: %lf ", routeKm(latitude, longitude));

    return 0;
}