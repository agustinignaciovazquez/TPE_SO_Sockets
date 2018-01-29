#ifndef _PRINT_MNG_H_
#define _PRINT_MNG_H_

#include "coreStructs.h"

#define SEAT_AVAILABLE_DISPLAY '_'
#define SEAT_OCCUPIED_DISPLAY 'X'

void printFlights(Flights * fls);
void printFlight(Flight * fl);
void printFlightMin(Flight * fl, int i);
void printPlanes(Planes * pls);
void printPlane(Plane * pl, int i);
void printReservations(char * * reservations, int rows, int columns);

#endif 
