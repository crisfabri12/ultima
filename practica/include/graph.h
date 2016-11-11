#include <vector>
#include <map>
using namespace std;
class graph{
    map< int,vector<int> > d;
public:
    graph(vector<int> &starts,vector<int> &ends);
};

