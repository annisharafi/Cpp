#include<bits/stdc++.h>

using namespace std;

int cost[30][30],i,j,k,n,stk[30],top,atas,v,visit[30],visited[30];
int main()
{
    int  stack [30];
    int total=0;
    int m,tujuan,asal,nilai;

    //kota yang tersedia
    string kota[20] = {"Arad", "Sibiu", "Zerind", "Timisoara", "Fagaras", "Ervi", "Oradea", "Lugoj",
                       "Bucharez", "pitesti", "Craeova", "Mehadia", "Glugiu", "Urzicent", "Dobreta", "Vaslul",
                       "Hirsova", "Lasi", "Etorie", "Neant"
                      };

    //masukkan jumlah vertices dan edge
    cout <<"Masukkan vertices:";
    cin >> n;
    cout <<"Masukkan edges:";
    cin >> m;

    //inputan edge,hubungan dan jarak antar kota
    cout <<"\nEDGES \n";
    for(k=0; k<m; k++)
    {
        cin >>i>>j>>nilai;
        cost[i][j]=nilai;
    }

    //inputan kota asal
    cout <<"Vertex ingin dimulai dari :";
    cin >>v;

    //inputan kota tujuan
    cout <<"Masukkan tujuan vertex :";
    cin >> tujuan;

    //hasil pencarian DFS
    cout <<"DFS ORDER OF VISITED VERTICES: \n";
    cout << v <<" : " << kota[v - 1] << endl;
    visited[v]=1;
    asal=v;
    while(v!=tujuan)
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stk[top]=j;

                top++;
            }
        v=stk[--top];
        cout<< v << " : " << kota[v - 1] << endl;
        visit[v]=0;
        visited[v]=1;
    }
    cout<<endl;

    // path solution dari dfs
    cout<<"PATH SOLUTION: "<<endl;

    while (v!=asal)
    {
        for(int i=n; i>=1; i--)
        {
            if(cost[i][v]!=0 &&i<=v &&visited[i]==1)
            {

                stack[atas]=i;
                atas++;
                total+=cost[i][v];
                v=i;

            }
        }
    }
   while (atas!=0){
    int a=stack[--atas];
    cout<<kota[a-1]<<endl;
   }
   cout<<kota[tujuan-1];

   //output berupa cost
   cout<<"\n TOTAL COST: "<<total<<endl;



}
