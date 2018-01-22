#ifndef _SER_MNGR_H_
#define _SER_MNGR_H_

#include "coreStructs.h"

char * serializeSimpleCommand(simpleCommand * cmd, int * size);
char * serializePlane(Plane * pl, int * size);
char * serializeReservation(Reservation * res, int * size);
int copyStr(char * str, const char * data,  int max);
int copyBytes(char * str, const void * data, int bytes);
void freeSerialized(char * s);

#endif
 
