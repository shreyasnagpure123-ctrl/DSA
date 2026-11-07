#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

// int fact(int i){
//     int temp = 1;
//     for(int k =i; k>0; k--){
//         temp = temp * k;
//     }
//     return temp;
// }

// int combination(int i, int j){
//     int comb;
//     comb = fact(i)/(fact(j) * fact(i-j));
//     return comb;
// }

// vector<vector<int>> pascalTriangle(int n){
//     vector<vector<int>> pascal(n);
//     for(int i=0; i<n; i++){
//         pascal[i].resize(i+1);
//         for(int j = 0; j<=i; j++){
//             if(j==0 || j==i){
//                 pascal[i][j] = 1;
//             }
//             else{
//                 pascal[i][j]= pascal[i-1][j] + pascal[i-1][j-1];
//             }
//         }
//     }
//     return pascal;
// }

// void swap(int &a, int &b){
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }

// void rotate(vector<vector<int>> &arr){
//     //transpose
//     int n = arr[0].size();
//     for(int i = 1; i<n; i++){
//         for(int j=0; j<i; j++){
//             swap( arr[i][j], arr[j][i]);
//         }
//     }
//     //rev
//     for(int i = 0; i<n; i++){
//         reverse(arr[i].begin(), arr[i].end());
//     }
// }

// void spiral(vector<vector<int>> &arr){
    // //
    // //SELF APP [CORRECT ;) ]
    // int n = arr.size();  //rows
    // int m = arr[0].size();  //cols
    // int a = 0;
    // int b = 0;
    // int count = 0;
    // int r = n-1;
    // int c = m-1;
    // while(count<n+m-1){
    //     if(count%4==0 && count<n+m-1){
    //         // l to r
    //         for(int i=a; i<=c-a; i++){
    //             cout<<arr[a][i]<<" ";
    //         }
    //         a++;
    //         count++;
    //     }
    //     if(count%4==1 && count<n+m-1){
    //         // u to d
    //         for(int i=b+1; i<=r-b; i++){
    //             cout<<arr[i][c-b]<<" ";
    //         }
    //         b++;
    //         count++;
    //     }
    //     if(count%4==2 && count<n+m-1){
    //         // r to l
    //         for(int i=a; i<=c-a+1; i++){
    //             cout<<arr[r-a+1][c-i]<<" ";
    //         }
    //         count++;
    //     }
    //     if(count%4==3 && count<n+m-1){
    //         // d to u
    //         for(int i=b; i<r-b+1; i++){
    //             cout<<arr[r-i][b-1]<<" ";
    //         }            
    //         count++;
    //     }
    // }
    // //
    // //
    // //MAM SOLN
    // //
    // int left = 0;
    // int right = arr[0].size()-1;
    // int top = 0;
    // int bottom = arr.size()-1;
    // int dirn = 0;
    // while(left<=right && top<=bottom){
    //     // l to r
    //     if ( dirn ==0){
    //         for(int c = left; c<=right; c++){
    //             cout<<arr[top][c]<<" ";
    //         }
    //         top++;
    //     }
    //     //top tp bott
    //     else if(dirn==1){
    //         for(int row = top; row<=bottom; row++){
    //             cout<<arr[row][right]<<" ";
    //         }
    //         right--;
    //     }
    //     //r to l
    //     else if(dirn == 2){
    //         for(int col = right; col>=left; col--){
    //             cout<<arr[bottom][col]<<" ";
    //         }
    //         bottom--;
    //     }
    //     //bott to top
    //     else{
    //         for(int row = bottom; row>=top; row--){
    //             cout<<arr[row][left]<<" ";
    //         }
    //         left++;
    //     }
    //     dirn = (dirn +1)%4;
    // }
    // //
//}

// void spiralCreate(vector<vector<int>> &mat){
//     //
//     int n;
//     n = mat.size();
//     int m;
//     m = n;
//     //
//     int num;
//     num = 1;
//     //
//     int a = 0;
//     int b = 0;
//     int count = 0;
//     int r = n-1;
//     int c = m-1;
//     while(count<n+m-1){
//         if(count%4==0 && count<n+m-1){
//             // l to r
//             for(int i=a; i<=c-a; i++){
//                 mat[a][i] = num;
//                 num++;
//             }
//             a++;
//             count++;
//         }
//         if(count%4==1 && count<n+m-1){
//             // u to d
//             for(int i=b+1; i<=r-b; i++){
//                 mat[i][c-b] = num;
//                 num++;
//             }
//             b++;
//             count++;
//         }
//         if(count%4==2 && count<n+m-1){
//             // r to l
//             for(int i=a; i<=c-a+1; i++){      //
//                 mat[r-a+1][c-i] = num;
//                 num++;
//             }
//             count++;
//         }
//         if(count%4==3 && count<n+m-1){
//             // d to u
//             for(int i=b; i<r-b+1; i++){     //
//                 mat[r-i][b-1] = num;
//                 num++;
//             }            
//             count++;
//         }
//     }
// }

// void multidimsum(vector<vector<int>> &mat){
    //
    //M1 BRUTE FORCE
    //
    // int x1, x2, y1, y2;
    // cout<<"Enter coord 1 (x1,y1) :  "<<endl;
    // cin>>x1>>y1;
    // cout<<"Enter coord 2 (x2,y2) :  "<<endl;
    // cin>>x2>>y2;
    // int sum = 0;
    // for(int i = x1; i<=x2; i++){
    //     for(int j = y1; j<=y2; j++){
    //         sum += mat[i][j];
    //     }
    // }
    // cout<<"Sum =  "<<sum<<endl;
    //
    //
    //M2 PRE-CALCULATING SUM OF EACH ELE IN ROW
    //
    // int r, c;
    // r = mat.size();
    // c = mat[0].size();
    // cout<<endl<<r<<endl<<c<<endl;
    // vector<vector<int>> smat(r, vector<int>(c));
    // for(int i =0; i<r; i++){
    //     smat[i][0] = 0;
    //     for(int j = 1; j< c; j++){
    //         smat[i][j]= mat[i][j] + smat[i][j-1];
    //     }
    // }
    // // input coords
    // int x1, x2, y1, y2;
    // cout<<"Enter coord 1 (x1,y1) :  "<<endl;
    // cin>>x1>>y1;
    // cout<<"Enter coord 2 (x2,y2) :  "<<endl;
    // cin>>x2>>y2;
    // int sum = 0;
    // for(int k = x1; k<=x2; k++){
    //     sum += (smat[k][y2] - smat[k][y1 - 1]); 
    // }
    // cout<<"SUM =  "<<sum<<endl;
    //
    //
    //M3 PREFIX SUM ( 1 to n )
    //
    // input coords
    // int x1, x2, y1, y2;
    // cout<<"Enter coord 1 (x1,y1) :  "<<endl;
    // cin>>x1>>y1;
    // cout<<"Enter coord 2 (x2,y2) :  "<<endl;
    // cin>>x2>>y2;
    // float sum = 0;
    // for(int i = x1; i<=x2; i++){
    //     sum += (float((mat[i][y2] + mat[i][y1])/2.0)*(y2 - y1 + 1)); 
    // }
    // cout<<"SUM =  "<<sum<<endl;
// }




int main(){

    // //MULTIPLICATION OF MATRIX
    // //input
    // int n, m;
    // cout<<"Enter :  ";
    // cin>>n;
    // cin>>m;
    // int arr1[n][m];
    // cout<<"Enter Array "<<endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cin>>arr1[i][j];
    //     }
    // }
    // int arr2[m][n];
    // cout<<"Enter Array "<<endl;
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr2[i][j];
    //     }
    // }
    // //solution of problem
    // int sol[n][n];
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         int sum = 0;
    //         for(int J = 0; J<m; J++){
    //             sum += (arr1[i][J])*(arr2[J][j]);
    //             cout<<arr1[i][J]<<" * "<<arr2[J][j]<<endl;
    //         }            
    //         sol[i][j] = sum;
    //         cout<<sum<<endl;
    //     }
    // }
    // //output
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<sol[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }
    // /*
    // 1 2 3       1 2         1+6+15     2+8+18           22     28
    // 4 5 6       3 4         4+15+30    8+20+36          49     64
    //             5 6         
    //
    //
    // */

    // //TRANSPOSE OF 2D ARRAY
    // int m, n;
    // cout<<"enter :  ";
    // cin>>m>>n;
    // cout<<"enter array :  ";
    // int arr[m][n];
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<"transpose :  "<<endl;
    // int tr[n][m];
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         tr[i][j] = arr[j][i];
    //     }
    // }   
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         cout<<tr[i][j];
    //     }
    //     cout<<endl;
    // }

    // //2D VECTORS 
    // CONCEPT
    // SYN = vector<vector<int>> V(n,vector<int>(m));
    // vector<vector<int>>V;

    // vector<int> v1 = {1, 2, 3};
    // vector<int> v2 = {4, 5};
    // vector<int> v3 = {6, 7};

    // vector<vector<int>> V = {v1, v2, v3};

    // int n = 2;
    // int m = 3;
    // vector<vector<int>> V(n,vector<int>(m));
    
    // int n;
    // cout<<"Enter n :  ";
    // cin>>n;

    // vector<vector<int>> v(n, vector<int>(n));

    //PASCAL TRIANGLE 
    // for (int i = 0; i<n; i++ ){
    //     for(int j = 0; j<=i; j++){
    //         cout<<combination(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }
  
    // for(int i =0; i<n; i++){      
    //     for(int j = 0; j<i; j++){
    //         v[i][j] = combination(i,j);
    //     }
    // }

    // vector<vector<int>> ans;
    // ans = pascalTriangle(n);
   
    // //TRY 2
    // for(int i=0; i<n; i++){
    //     for(int j =0; j<=i; j++){
    //         v[i][j] = combination(i,j);
    //     }
    // }
    
    // //OUTPUT
    // for( int i = 0; i<n; i++){
    //     for(int j = 0; j<=i; j++){
    //         cout<<v[i][j]<< " ";
    //     }cout<<endl;
    // }

    // // 2D ARRAY OF 0,1 ; EACH ROW SORTED; FIND ROW WITH MAX 1;
    // int n;
    // cout<<"Enter :  ";
    // cin>>n;
    // int arr[n][n];
    // cout<<"Enter Array :  ";
    // for( int i =0; i<n; i++){
    //     for(int j =0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // //
    // int row = 0;
    // int col = n;
    // for( int i=0; i<n; i++){
    //     for( int j=0; j<n; j++){
    //         if( arr[i][j] == 1 && j<=col ){
    //             row = i;
    //             col = j;
    //         }
    //     }
    // }
    // for( int i =0; i<n; i++){
    //     for(int j =0; j<n; j++){
    //         cout<<arr[i][j];
    //     }cout<<endl;
    // }
    // cout<<"Highest Row :  "<<row+1<<endl;
    // cout<<"Highest Col :  "<<col+1<<endl;

    int n, m;
    cout<<"Enter Array ( row , col ) :  "<<endl;
    cin>>n; //rows
    cin>>m; //col
    cout<<"Enter :  ";
    vector<vector<int>> mat(n, vector<int>(m));
    //input
    for( int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    
    //sq matrix
    // int n;
    // cout<<"Enter :  ";
    // cin>>n;
    // int m;
    // m = n;
    // vector<vector<int>> mat(n, vector<int>(n));

    //ROTATE SQ MATRIX BY 90 IN CW DIRN W/O USING XTRA SPACE
    // rotate( arr );

    // //return ele of matrix in spiral order
    // spiral(arr);

    //CREATE N X N MATRIX FILLED WITH 1 TO N2 IN SPIRAL ORDER
    // spiralCreate(mat);
    
    //GIVEN NXM MATRIX 2 COORDS (L1,R1) & (L2,R2) . RETURN SUM OF RECT FORMED
    // multidimsum(mat);

    //output
    for( int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<<mat[i][j]<<"       ";
        }cout<<endl;
    }


    cout<<"         ok";
    return 0;
}

