#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bellmanFord(vector<edge>& Edges)
{
    int parent[V];
    int cost_parent[V];
    vector<int> value(V,INT_MAX);
    parent[0]= -1;
    value[0]= 0;
    bool updated;
    for(int i=0;i<V-1;++i)
    {
        updated=false;
        for(int j=0;j<E;++j)
        {
            int U=Edges[j].src;
            int V=Edges[j].dst;
            int wt=Edges[j].wt;
            if(value[U]!=INT_MAX and value[U] + wt<value[V])
            {
                value[V] = value[U]+ wt;
                parent[V]=U;
                cost_parent[V]=value[V];
                updated=true;
            }
        }
        if(updated==false)
         break;
    }
    for(int j=0;j<E; and updated==true;++j)
    {
        int U= Edges[j].src;
        int V= Edges[j].dst;
        int wt= Edges[j].wt;
        if(value[U]!= INT_MAX and value[U]=+wt<value[V])
        {
            cout<<"graph has -ve edge":
                return;
        }
    }
}
