#include "graph.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

graph::graph(vector<int> &start,vector<int> &endd)
{
    vector<int>::iterator i;
    vector<int>::iterator j;
    map<int,vector<int> >::iterator k;
    k=d.begin();
    i=start.begin();
    j=endd.begin();
    int i1=0;
    int j1=0;
    while(i!=start.end()||j!=endd.end()){
        if (start[i1]==k->first){
            (k->second).push_back(endd[j1]);
            j++,i++;
        }
        else{
            k->first =start[i1];
            (k->second).push_back(endd[j1]);
            k++,i++,j++;
        }
    }
}
