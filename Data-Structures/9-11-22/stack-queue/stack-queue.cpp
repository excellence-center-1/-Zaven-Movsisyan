#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue {
    public:
	    stack<int> s1, s2;
        void pushQueue(int x){
		    while (!s1.empty()) {
			    s2.push(s1.top());
			    s1.pop();
		    }
		    s1.push(x);
		    while (!s2.empty()) {
			    s1.push(s2.top());
			    s2.pop();
		    }
	    }

	    int popQueue(){
	    	if (s1.empty()) {
			    cout << "Q is Empty";
                return;
		    }

    		int x = s1.top();
		    s1.pop();
		    return x;
	    }
};

int main()
{
	Queue queue;
	queue.pushQueue(1);
    queue.pushQueue(4);
	queue.pushQueue(9);

	cout << queue.popQueue() << '\n';
	cout << queue.popQueue() << '\n';
	cout << queue.popQueue() << '\n';

	return 0;
}

