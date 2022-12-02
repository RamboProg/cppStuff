#include <iostream>
using namespace std;

typedef struct{
    float xStart;
    float yStart;
    float xEnd;
    float yEnd;
} Line;

Line* CreateLine(float xStart, float xEnd, float yStart, float yEnd){
    Line* newLine = (Line*) malloc(sizeof(Line));
    (*newLine).xStart = xStart;
    (*newLine).yStart = yStart;
    (*newLine).xEnd = xEnd;
    (*newLine).yEnd = yEnd;
    return newLine;
}

int areParallel(Line l1, Line l2){
    float slope1 = (l1.yEnd - l1.yStart) / (l1.xEnd - l1.xStart);
    float slope2 = (l2.yEnd - l2.yStart) / (l2.xEnd - l2.xStart);
    if(slope1 == slope2) return 1;
    return 0;
}
