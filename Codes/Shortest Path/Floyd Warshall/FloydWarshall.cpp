#include<bits/stdc++.h>
using namespace std;
const int N = 510;
const int INF = 1e9+10;

int dist[N][N];

int main(void)
{   

     //Making All Distance INF: 
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N;j++) 
        {   
            if(i==j) 
             dist[i][j] = 0;
            else 
            dist[i][j] = INF;
        }
    }

    //Taking input:

    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        int x,y,wt;   
        cin>>x >> y >> wt;
        dist[x][y] = wt;
    }

    //FLOYD WARSHALL CODE:

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {   
               if(dist[i][k]!=INF && dist[k][j]!=INF) 
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]) ;
            }
        }
    }



    //Printing Distance:

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dist[i][j]==INF)
            {
                cout<<"I " ;
            }
            else
            {
                cout<<dist[i][j]<<" ";
            }
        }
       cout<<endl; 
    }

    



    return 0;
}

/**

     6 9
     1 2 1
     1 3 5
     2 3 2
     3 5 2
     2 5 1
     2 4 2
     4 5 3
     4 6 1
     5 6 2



*/