#include <windows.h>
#include <iostream>   

double PCFreq = 0.0;
__int64 CounterStart = 0;

void StartCounter(){
    LARGE_INTEGER li;

    PCFreq = float(li.QuadPart);

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double EndCounter(){
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return float((li.QuadPart-CounterStart)/PCFreq)*1e4;
}

