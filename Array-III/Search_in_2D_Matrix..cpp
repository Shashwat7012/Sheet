#include <bits/stdc++.h> 
bool bs(vector<int>arr,int x){
    int n = arr.size();
    int i =0;
    int j = n-1;
    int mid = i + (j-i)/2;

    while(i<=j){
        if(arr[mid] == x){
            return true;
        }
        else if(arr[mid] < x){
            i = mid+1;
        }
        else{
            j = mid-1;
        }
        mid = i + (j-i)/2;
    }
    return false;
}
bool findInMatrix(int x, vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j < col;j++){
            if(arr[i][j] <= x && arr[i][j] >= x ){
                return bs(arr[i],x);
            
            }
        }
    }
    return false;
}

//Brute Force
// #include <bits/stdc++.h> 
// bool findInMatrix(int x, vector<vector<int>> &arr)
// {
//     int row = arr.size();
//     int col = arr[0].size();

//     for(int i=0;i<row;i++){
//         for(int j=0;j < col;j++){
//             if(arr[i][j] == x){
//                 return true;
//             }
//         }
//     }
//     return false;
// }