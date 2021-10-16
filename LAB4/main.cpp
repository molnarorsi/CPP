#include <iomanip>
#include "Point.h"
#include "PointSet.h"
using namespace std;
int main() {

    PointSet set1(5);
    set1.printDistances();
    cout << endl;
    cout << "Maximum distance: " << set1.maxDistance();
    cout << endl;
    cout << "Minimum distance: " << set1.minDistance();
    cout << endl;
    cout << "Number of distances: " << set1.numDistances();
    cout << endl;
    cout << "The points are: " ;
    set1.printPoints();
    cout << "Points sorted reffered to X axis: " ;
    set1.sortPointsX();
    set1.printPoints();
    cout << "Points sorted reffered to Y axis: ";
    set1.sortPointsY();
    set1.printPoints();
    cout << "Sorted distances: ";
    set1.sortDistances();
    set1.printDistances();
    cout << "Number of distinct distances: ";
    cout << set1.numDistinctDistances();

    cout << "\n\n\n";

    int n = 4;
    cout<<"Pontok\tMinTav\t MaxTav\t #tavolsagok\t#kulonbozotavolsagok"<<endl;
    cout<< fixed;
    for( int i= 0; i<12; ++i ){
        PointSet pSet( n );
        cout<<setw(6)<<n<<" ";
        cout<<setw(8)<<setprecision(2)<<pSet.minDistance()<<" ";
        cout<<setw(8)<<setprecision(2)<<pSet.maxDistance()<<" ";
        cout<<setw(10) << pSet.numDistances()<<" ";
        cout<<setw(16) << pSet.numDistinctDistances()<<endl;
        n = n << 1;
    }

}
