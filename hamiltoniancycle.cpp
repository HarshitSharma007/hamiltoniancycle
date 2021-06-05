#include<bits/stdc++.h>
using namespace std;
#define db double
#include <string>

#define ll long long
#define V 5

void hamCycle(bool graph[V][V],int src,set<int>&s,string psf,int so)
{
if(s.size()==V-1){
	
		if(graph[src][so]==1)
			cout<<"the hamiltonian cycle is "<<psf<<so;
		
	
	return;
}

s.insert(src);

for(int i=0;i<V;i++){
	if((s.find(i)==s.end())&&graph[src][i]==1){
		string a=to_string(i);
		hamCycle(graph,i,s,psf+a,so);
	}

}

	s.erase(src);

}



int main() 
{ 
    set<int> s;
    string psf="";
    int src=0;
    int so=0;
    psf+=src;
    bool graph1[V][V] = {{0, 1, 0, 1, 0}, 
                        {1, 0, 1, 1, 1}, 
                        {0, 1, 0, 0, 1}, 
                        {1, 1, 0, 0, 1}, 
                        {0, 1, 1, 1, 0}}; 
  
   hamCycle(graph1,src,s,"0",so); 
      
  
    bool graph2[V][V] = {{0, 1, 0, 1, 0}, 
                         {1, 0, 1, 1, 1}, 
                         {0, 1, 0, 0, 1}, 
                         {1, 1, 0, 0, 0}, 
                         {0, 1, 1, 0, 0}}; 
  

  //  hamCycle(graph2,src,s,psf,so); 
  
    return 0; 
} 
