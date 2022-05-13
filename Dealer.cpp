#include <iostream>
#include <string>
#include <vector>
#include "Dealer.h"

/* BONUS PROBLEM (15PTS): Finish the merge algorithm for the Merge Sort with the comparator
*/

void Dealer::merge(CarComparator comp, vector<Car> &S1, vector<Car> &S2, vector<Car> &stock) {
    /*
     * Remove comments and complete the implementation
     */
    int i = 0, j = 0, n = 0;
    while(n < stock.size()) {
        if(i == S1.size()-1){
            while(j<S2.size()){
                stock[n] = S2[j];
                j++;
                n++;
            }
        }
        if(j == S2.size()-1){
            while(i<S1.size()){
                stock[n] = S1[i];
                i++;
                n++;
            }
        }
        if(comp(S1[i], S2[j]) > 0) {
            stock[n] = S1[i];
            i++;
            n++;
        } else {
            stock[n] = S2[j];
            j++;
            n++;
        }
    }
}