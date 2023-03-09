#include <iostream>
using namespace std;
int main(){
    int n=5;

    // // hellow pyramid
    // for(int row=0;row<n;row++){
    //     // for space
    //     for(int col=0;col<n-row-1;col++){
    //         cout << " ";
    //     }
    //     // for star
    //     for(int col=0;col<2*row+1;col++){
    //         // for first and last character
    //         if(col==0||col==2*row){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // // for lower side of hellow pyremid
    // for(int row=0;row<n;row++){
    //     // space
    //     for(int col=0;col<row;col++){
    //         cout << " ";
    //     }
    //     // stars
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         if(col==0||col==2*n-2*row-2){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

//     // Flipped solid diamond
//         for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout << "*";
//         }
//         for(int col=0;col<2*row+1;col++){
//             cout << " ";
//         }
//         for(int col=0;col<n-row;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout << "*";
//     }
//     for(int col=0;col<2*n-2*row-1;col++){
//         cout << " ";
//     }
//     for(int col=0;col<row+1;col++){
//         cout << "*";
//     }
//     cout << endl;
//     }
 

        // fancy patter
//  for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout << row+1;
//         if(col !=row){
//             cout << "*";
//         }
//     }
//     cout << endl;
//  }
//  for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout << n-row;
//         if(col!=n-row-1){
//             cout << "*";
//         }
//     }
//     cout << endl;
//  }


      //alphabetic palindrome pyramid
      for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout << col+1;
        }
        cout << endl;
      }









}