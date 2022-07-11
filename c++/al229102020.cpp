#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
const int MAX=2147483647;
struct listel
{
  listel*next;
  int priority,data;
};
class priorityqueue
{
  private:
    listel*head;
    listel*tail;
  public:
    priorityqueue( );
      ~priorityqueue( );
      bool empty (void);
      int findmaxdata (void);
      int findmaxpriority(void);
      void insert (int priority,int v);
      void deletemax (void);
};
priorityqueue::priorityqueue( )
{
  head=tail= NULL;
}
priorityqueue::~priorityqueue( )
{
  while (head) deletemax( );
}
bool priorityqueue::empty (void)
{
  return !head;
}
int priorityqueue::findmaxdata (void)
{
  if (head) return head->data;
  else return MAX;
}
int priorityqueue::findmaxpriority(void)
{
  if(!head) return MAX;
  else return head ->priority;
}
void priorityqueue::insert (int priority ,int v)
{
  listel*p,*r;
  p=new listel;
  p->next =NULL;
  p->priority =priority;
  p->data= v;
  if (!head) head =tail =p;
  else if (head-> priority> priority )
  {
    p-> next =head;
    head= p;
  }
  else
    {
  r= head ;
    while ((r->next)&&(r->next->priority<=priority))
    r= r->next;
    p->next= r->next;
    r->next=p;
    if (!p->next)  tail=p;
  }
}
void priorityqueue::deletemax ( void )
{
  if( head )
  {
    head = head->next;
    if( !head ) tail = NULL;
}
}
int main(){
  priorityqueue Q;
  int i,p,v;
  srand(time(NULL));
  cout<<"wprowadzane elementy w postaci element: priorytet\n";
  for (i=1;i<=10;i++){
    v=i;
    p=rand( )%100;
    cout<< v <<"|"<<p<<endl;
    Q.insert(p,v);
  } 
  cout<<"\n"<<"kolejka priorytetowa w postaci element: priorytet\n";
  while (!Q.empty( ) )
  {
    cout<<Q.findmaxdata( )<<"|"<<Q.findmaxpriority( )<<endl;
    Q.deletemax( );
  }
} 
