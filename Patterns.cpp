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


    //   //alphabetic palindrome pyramid
    //   for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         int ans = col+1;
    //         char ch = ans + 'A' -1;
    //         cout << ch<<" ";
    //     }
    //     for(int col=row;col>0;col--){
    //         int ans = col;
    //         char ch = ans + 'A' -1;
    //         cout << ch <<" ";
    //     }
    //     cout << endl;
    //   }


    //    //homework
    //    // solid square patter
    //    for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    //    }

//hollow square patter
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         if(row==0||row==n-1){
    //             cout << "* ";
    //         }
    //         else{
    //         if(col==0||col==n-1){
    //             cout << "* ";
    //         }
    //         else{
    //             cout <<"  ";
    //         }
    //         }
    //     }
    //     cout << endl;
    // }

    //hollow inverted half pyramid

    // for(int row=0;row<n;row++){
    //   for(int col=0;col<n-row;col++){
    //     if(row==0||row==n-1){
    //         cout << "* ";
    //     }
    //     else if(col==0||col==n-row-1){
    //         cout << "* ";
    //     }
    //     else{
    //         cout << "  ";
    //     }
    //   }
    //   cout << endl;
    // }


     // hollow full pyramid
    //  for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout << " ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         if(row==n-1||col==0||col==row){
    //         cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    //  }


        //Numeric hollow half pyramid
        // for(int row=0;row<n;row++){
        //     for(int col=0;col<row+1;col++){
        //         if(row==0||col==0||col==row||row==n-1){
        //         cout << col+1 << " ";
        //         }
        //         else{
        //             cout << "  ";
        //         }
        //     }
        //     cout << endl ;
        // }

       //Numeric hollow inverted hald pyramid
    //    for(int row=0;row<n;row++){
    //       for(int col=0;col<n-row;col++){
    //         if(row==0||row==n-1||col==0||col==n-row-1){
    //             cout << col+1 <<" ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //       }
    //       cout << endl;
    //    }

    //Numeric palindrome equilateral pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout << "  ";
    //     }
    //     for(int col=0;col<row;col++){
    //         cout << col+1 <<" ";
    //     }
    //     for(int col=row-1;col>0;col--){
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // fancy patter 1
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row+3;col++){
    //         cout << "*";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout << row+1;
    //         if(col!=row){
    //             cout << "*";
    //         }
    //     }
    //     for(int col=0;col<n-row+3;col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //Solid half diamond
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int row=0;row<n-1;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Fancy pattern3
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         if(col==0){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << col << " ";
    //         }
    //     }
    //     for(int col=row;col>0;col--){
    //         if(col==1){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << col-1 << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // for(int row=1;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         if(col==0){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << col <<" ";
    //         }
    //     }
    //     for(int col=n-row-1;col>0;col--){
    //         if(col==1){
    //             cout << "* ";
    //         }
    //         else{
    //         cout << col-1 <<" ";
    //         }
    //     }
    //     cout << endl;
    // }


    //Butterfly pattern
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout << "*";
    //     }
    //     for(int col=0;col<n-row-1;col++){
    //         cout <<"  ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout <<"*";
    //     }
    //     cout << endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout << "*";
    //     }
    //     for(int col=0;col<row;col++){
    //         cout << "  ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout <<"*";
    //     }
    //     cout <<endl;
    // }


    //Flod's Triangle pattern
    //     int num = 0;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         num = num+1;
    //         cout << num <<" ";
    //     }
    //     cout << endl;
    // }

    //Pascal's Triangle patter
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<2;col++){
    //         if(col)
    //     }
    // }














}