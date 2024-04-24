#include <iostream>

using namespace std;

void kadai1(){
    float i =0;
    int k =0;
    float x =0;
    float y =0;
    float w =0;
    float z =0;
cout <<"Please enter the number of attempts" << endl;
    cin >> k;
    TH2F* hist = new TH2F("Circle1","title",200,-2,2,200,-2,2);
    TH2F* hist2 = new TH2F("Circle2","title",200,-2,2,200,-2,2);


    for (int j =0;j < k;j++){
        x = rand()/(Float_t)RAND_MAX;
  		  y = rand()/(Float_t)RAND_MAX;
  		  w = 2*x-1;
  		  z = 2*y-1;
      if(w*w + z*z <=1){
        i = i + 1;
        hist ->Fill(w,z);
    }else{
        hist2 ->Fill(w,z);
      }
    }
  float p = 4*i/k;
  cout << "event count" << endl;
  cout << k << endl;
  cout << "hit count" << endl;
  cout << i << endl;
  cout << "circle area" << endl;
  cout << 4*i << endl;
  cout << "pi" << endl;
  cout << p << endl;
    hist -> SetMarkerColor(3);
    hist2 -> SetMarkerColor(4);
    hist->Draw();
    hist2 -> Draw("Same");
}
