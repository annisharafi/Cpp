#include<bits/stdc++.h>

using namespace std;

int main(){

int mat1[100][100],mat2[100][100],c[100][100];
int m,n,o,p;


//input ukuran matrix
cin>>m>>n; //matrix A
cin>>o>>p; //matrix B

//input isi matrix A
for(int i=0; i<m; i++){
    for (int j=0; j<n; j++){
        cin>>mat1[i][j];
    }
}

//input isi matrix B
for(int i=0; i<o; i++){
    for (int j=0; j<p; j++){
        cin>>mat2[i][j];
    }
}

cout<<endl;
//perkalian matrix
if(n!=o){
cout<<"error";
} else{
    for (int i=0; i<m; i++){
        for (int j=0; j<p; j++){
            c[i][j]=0;
            for (int k=0; k<n; k++){
            c[i][j]+=mat1[i][k]*mat2[k][j];
            }
            cout<<c[i][j]<<endl;
        }

    }
}


}

