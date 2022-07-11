#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

const int MAXINT = 2147483647;


struct slistEl
{
  slistEl * next;
  int data;
};
slistEl**A;
bool*visited;

class queue
{
  private:
    slistEl * head;
    slistEl * tail;

  public:
    queue( );   
    ~queue( );    
    bool empty ( void );
    int  front ( void );
    void push ( int v );
    void pop ( void );
};


queue::queue( )
{
	head = tail = NULL;
}

queue::~queue( )
{
	while( head ) pop( );
}

bool queue::empty ( void )
{
  return !head;
}


int queue::front ( void )
{
  if( head ) return head->data;
  else     return MAXINT;
}

void queue::push ( int v )
{
  slistEl * p = new slistEl;
  p->next = NULL;
  p->data = v;
  if( tail ) tail->next = p;
  else     head = p;
  tail = p;
}

void queue::pop ( void )
{
  if( head )
  {
    slistEl * p = head;
    head = head->next;
    if( !head ) tail = NULL;
    delete p;
  }
}

void DFS ( int v )
{ 
slistEl * p;
visited[v]=true;
cout<<setw(3)<<v;
 for(p = A[v];p;p = p->next)
  if(!visited [p->data] ) DFS (p->data);
 }

void BFS ( int v )
{int i;
queue Q;
slistEl *p;

Q.push(v);
visited[v]=true;

 

 while(!Q.empty())
 {
  v=Q.front();
  Q.pop();
  cout<<setw(3)<<v;
  for(p = A[v];p;p = p->next)
  {
   if(!visited [p->data])
   {
   Q.push(p->data);
   visited[p->data]=true;
     }
  }
 }
}

int main( )
{
int i,vs,ve,n,m;
 slistEl *p;
 
 setlocale(LC_CTYPE, "Polish");
 
 cout << "Podaj liczbe wiercholkow i sasiadow:" << endl; 
 cin>>n>>m; 
 
 A=new slistEl*[n];
 visited=new bool [n];
 
 for( i = 0; i < n; i++ ){
  A[i]=NULL;
     visited [ i ] = false;
 }
    for(i =0;i<m;i++)
 {
     cout<<"Wpowadz sasiodow wpisujac wierzcholek startowy i koncowy:" <<endl; //Nie pracuje  polski jezyk
     cin>>vs>>ve;
     p=new slistEl;
     p->data = ve;
     p->next = A [vs];
     A[vs]=p;
    }
    for(i =0;i<n;i++)
    {
     cout<<"A [" << i << " ] =";
     while (p)
     {
      cout<<setw(3)<<p->data;
      p=p->next;
     }
     cout<<endl;
    }
    
    cout<<"Przejscie grafu w glab - DFS(0):" <<endl;
    DFS(0);
    cout<<endl;
    
    for(i =0; i<n;i++)
    visited[i] = false;
    
    cout<<"Przejscie grafu wszersz - BFS(0):" <<endl;
    BFS(0);
    cout<<endl;
    
    return 0;


}
 
