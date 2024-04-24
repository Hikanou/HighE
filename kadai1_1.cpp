#include <iostream>

using namespace std;

void kadai1_1(){
    float i =0;
    int k =0;
    float l = 0;
    float o =0;
    float p = 0;
    float q = 0;
    float x =0;
    float y =0;
    float z =0;

    TH3F* hist = new TH3F("Circle1","title",200,-2,2,200,-2,2,200,-2,2);
    TH3F* hist2 = new TH3F("Circle2","title",200,-2,2,200,-2,2,200,-2,2);

    cout <<"Please enter the number of attempts" << endl;
    cin >> k;

    for (int j =0;j < k;j++){
        o = rand()/(Float_t)RAND_MAX;
  		  p = rand()/(Float_t)RAND_MAX;
        q = rand()/(Float_t)RAND_MAX;
        x = 2*o - 1;
        y = 2*p - 1;
        z = 2*q - 1;

      if(x*x + y*y + z*z <=1){
        i = i + 1;
        hist ->Fill(x,y,z);
    }else{
        hist2 ->Fill(x,y,z);
      }
    }
    l = i/k;
    cout << "enent count" << endl;
    cout << k << endl;
    cout << "hit count" << endl;
    cout << i << endl;
    cout << "circle volume" << endl;
    cout << 8*l << endl;
    cout << "pi" << endl;
    cout << 6*l << endl;

    hist -> SetMarkerColor(3);
    hist2 -> SetMarkerColor(4);
    hist->Draw();
    hist2 -> Draw("Same");
}