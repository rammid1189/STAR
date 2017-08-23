#include "ChimericDetection.h"

ChimericDetection::ChimericDetection(Parameters &Pin, Transcript ***trAll, uint *nWinTr, char** Read1in, Genome &mapGenIn, fstream &ostreamChimJunctionIn)
                                    : P(Pin), trAll(trAll), nWinTr(nWinTr), Read1(Read1in), outGen(mapGenIn), ostreamChimJunction(ostreamChimJunctionIn) {
    
    vecAligns.reserve(P.pCh.multimapNmax*2); //pre-allocate
    
};