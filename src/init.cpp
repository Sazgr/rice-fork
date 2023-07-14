#include "init.h"
#include "nnue.h"
#include "search.h"


// Initialize Search Parameters
int RFPBase = 0;
int RFPMargin = 32;
int RFPImprovingBonus = 70;
int LMRBase = 75;
int LMRDivision = 225;

int NMPBase = 3;
int NMPDivision = 3;
int NMPMargin = 180;

float LMP0Base = 2.5;
float LMP0Quadratic = 2.25;
float LMP1Base = 4.0;
float LMP1Quadratic = 1.125;

void init_all() {
    init_search();
    NNUE::Init("./test4.nn");
}