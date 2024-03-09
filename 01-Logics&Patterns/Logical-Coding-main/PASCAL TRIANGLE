/* Pascal's triangle 
Pascal's Triangle is a triangular array of binomial coefficients.
*/

#include <iostream> 
using namespace std; 
int main() 
{ 
    int num, rows, columns;
    int coeff=1; 
    cout << "Enter number of rows :" ; 
    cin >> num; 
    for(rows=0; rows < num; rows++){ 
        for(columns = 0; columns<=rows; columns++){ 
            if(rows ==0 || columns ==0){ 
                coeff = 1; 
            } 
            else{ 
                coeff = coeff * (rows-columns+1)/columns; 
            } 
            cout << coeff; 
        } 
        cout << endl; 
    } 

    return 0; 
} 

  
