#include <iostream>

using namespace std;

void kadai2_1(){

    double x =0;
    double y = 0;
    double o =0;
    double p = 0;
    double slope = 0;
    int l = 0;

    TH2F* hist = new TH2F("exp","title",200,0,5,200,0,2);

    slope = 1;

    for (;;){
        x = rand()/(Float_t)RAND_MAX;
        y = exp(-x/slope);

        if(y < exp(-x /slope)){
            l = l + 1;
            hist -> Fill(x,y);
        }

        if (l == 10000){
            break;
        }
    }
    hist -> SetMarkerStyle(20);
    hist -> Draw();

}

