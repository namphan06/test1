#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
//multimap,unodermap,...
using namespace std;
struct tt{
    string tt;
    string x;
    string y;
};
double distance (tt v1,tt v2){
    double x1=stod(v1.x);
    double y1=stod(v1.y);
    double x2=stod(v2.x);
    double y2=stod(v2.y);
    return sqrt((x1-x2)*(x1-x2)+ (y1-y2)*(y1-y2));
}
double sumdistance (vector<tt> vv , vector<int> v){
    double sum =0.0;
        for(int i=1;i<v.size();i++){
        int dc1 = v[i];
        int dc2 = v[i-1];
        sum+=distance(vv[dc1],vv[dc2]);
    }
    return sum;
}
int main(int argc , char *argv[]){
    ifstream inFile;
    if(argc != 5){
        cout<<"Ko dung";
        exit(0);
    }
    string path;
    int n;
    bool timthayP = false,timthayN = false;
    for(int i=1;i<argc;i++){
        if(string(argv[i])==string("-p")){
            path = argv[i+1];
            timthayP = true;
        }else if(string(argv[i]) == string("-n")){
            n = stoi(argv[i+1]);
            timthayN = true;
        }
    }
    if(!timthayP || !timthayN){
        cout<<"Thieu"<<endl;
    }
    cout<<"N : "<<n<<endl;
    cout<<"Path : "<<path<<endl;
    double sum =0.0;
   /* vector <int> dd = {0,2,8,3,6,1,0};
    for(i=0;i<dd.size()-1;i++){
        int id_i= dd[i];
        int id_j= dd[i+1];
        tt& nodei =ds[id_i];
        tt& nodej =ds[id_j];
        
        double kc = sqprt((nodei.x-nodej.x)*(nodei.x-nodej.x)+(nodei.y-nodej.y)*(nodei.y-nodej.y));
        sum +=kc;
    }*/
    /*inFile.open(path);
    vector<tt> v1;
    tt dd;
    string line;
    getline(inFile,line);
    while(getline(inFile,line)){
        istringstream iss(line);
        getline(iss,dd.tt,',');
        getline(iss,dd.x,',');
        getline(iss,dd.y,',');
        v1.push_back(dd);
    }
    cout<<setw(5)<<left<<"TT"<<setw(15)<<left<<"X"<<setw(15)<<left<<"Y"<<endl;
    for(tt v : v1){
        cout<<setw(5)<<left<<v.tt<<setw(15)<<left<<v.x<<setw(15)<<left<<v.y<<endl;
    }
    int dc1,dc2;
    vector<int> v2 = {0,1,3,7,6};
    cout<<"Tong khoang cach 0-1-3-7-6-0 la : ";
    cout<<sumdistance(v1,v2);*/
    
}