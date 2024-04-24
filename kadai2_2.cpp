#include <iostream>

using namespace std;

void kadai2_2(){

    double x =0;
    double y = 0;
    double o =0;
    double p = 0;
    double slope = 0;
    int l = 0;

    TH2F* hist = new TH2F("exp","title",200,0,5,200,0,2);

    slope = 1;

    for (;;){
        y = rand()/(Float_t)RAND_MAX;
        
        o = - slope * log(1-y);
        x = 1/o ;

        hist -> Fill(x,y);
        l = l + 1;

        if (l == 10000){
            break;
        }
}
    hist ->Draw();
}