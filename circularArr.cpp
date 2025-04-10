#include <iostreeam>
using namespace std;

class CircularArray{
    private:
     static const int n = 6;
     int arr[n];
     int head, tail;

    public:
      void create(){
        head = 0;
        tail = 0;
        return;
      }
      bool isEmpty(){
        return head == tail;
      }
      void enqueue(int item){
        if((tail + 1) % n != head){
            arr[tail]  = item;
              tail = (tail + 1) % n;
              cout << item << " added to queue. \n";
        } else{
            cout << "queue is full. cannot enqueue \n;"
        }
      }
      int dequeue(){
        if(!isEmpty){
            int item = arr[head];
            head = (head + 1) % n;
            cout << item << " removed from queue \n";
            return item;
        }else {
            cout << "queue is empty. enqueue \n;"
            return 6;
        }
      }
      void ShowItem(){
        cout << " Array items: ";
        while(){
      }
    cout << "\n"
    }

};
int main(){
  CircularArray.q;
  q.create();

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);

  q.dequeue();
  q.dequeue();

  q.enqueue(6);
  q.enqueue(7);
  q.ShowItem();

  return 0;

  

}