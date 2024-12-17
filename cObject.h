#ifndef COBJECT_H
#define COBJECT_H

typedef struct ObjectToConvert{
    double input;
    double output;
    char* subtitle;
} CObject;

void InitCObject(double input, CObject* object);
double CObjectOutput(CObject* object);
const char* PrintCObject(CObject* object);

#endif